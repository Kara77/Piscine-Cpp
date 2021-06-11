/*
** EPITECH PROJECT, 2020
** rush3
** File description:
** MonitorModule
*/

#include <iostream>
#include <string>
#include <fstream>
#include <unistd.h>
#include <chrono>
#include <limits.h>
#include <ctime>
#include <unistd.h>
#include <linux/version.h>
#include "MonitorModule.hpp"

MonitorModule::MonitorModule()
{
    setAll();
}

MonitorModule::~MonitorModule()
{}

void MonitorModule::setAll()
{
    setTime();
    setHostname();
    setLogin();
    setKernel();
    setNameOS();
    setStatsCPU();
}

void MonitorModule::setTime()
{
    std::string res;
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);

    if (now->tm_hour < 10)
        res += "0";
    res += std::to_string(now->tm_hour) + ":";
    if (now->tm_min < 10)
        res += "0";
    res += std::to_string(now->tm_min) + ":";
    if (now->tm_sec < 10)
        res += "0";
    res += std::to_string(now->tm_sec) + " - ";
    if (now->tm_mday < 10)
        res += "0";
    res += std::to_string(now->tm_mday) + ' ';
    if (now->tm_mon < 10)
        res += "0";
    res += std::to_string(now->tm_mon + 1) + ' ';
    res += std::to_string(now->tm_year + 1900);
    _time = res;
}

std::string MonitorModule::getTime() const
{
    return (_time);
}

void MonitorModule::setHostname()
{
    char name[HOST_NAME_MAX];
    gethostname(name, HOST_NAME_MAX);
    _hostname = name;
}

std::string MonitorModule::getHostname() const
{
    return (_hostname);
}

void MonitorModule::setLogin()
{
    char name[LOGIN_NAME_MAX];
    getlogin_r(name, LOGIN_NAME_MAX);
    _login = name;
}

std::string MonitorModule::getLogin() const
{
    return (_login);
}

void MonitorModule::setKernel()
{
    _kernel = std::to_string(LINUX_VERSION_CODE);
}

std::string MonitorModule::getKernel() const
{
    return (_kernel);
}

void MonitorModule::setNameOS()
{
        #ifdef _WIN32
            _nameos = ("Windows 32-bit");
        #elif __unix__ || __unix
            _nameos = ("Unix");
        #elif _WIN64
            _nameos = ("Windows 64-bit");
        #elif __APPLE__ || __MACH__
            _nameos = ("Mac");
        #elif __linux__
            _nameos = ("Linux");
        #elif __FreeBSD__
            _nameos = ("FreeBSD");
        #else
            _nameos = ("Other");
        #endif
}

std::string MonitorModule::getNameOS() const
{
    return (_nameos);
}

void MonitorModule::setStatsCPU()
{
    std::ifstream file("/proc/stat");
    std::string info;

    while(std::getline(file, info)) {
        _cpu += info;
    }
}

std::string MonitorModule::getCPU() const
{
    return (_cpu);
}
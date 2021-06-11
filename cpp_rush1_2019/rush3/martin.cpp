/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include <iostream>
#include <chrono>
#include <limits.h>
#include <ctime>
#include <unistd.h>

std::string getTimeval() 
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
        return (res);
}

std::string getHostnameval() 
{
        char name[HOST_NAME_MAX];
        gethostname(name, HOST_NAME_MAX);
        return (name);
}

std::string getLoginval() 
{
        char name[LOGIN_NAME_MAX];
        getlogin_r(name, LOGIN_NAME_MAX);
        return (name);
}
/*
** EPITECH PROJECT, 2019
** Encapsulation
** File description:
** Picture hpp
*/

#include "step.hpp"

Step::Step()
{}

Step::~Step()
{}

void Step::setAll(std::string time, std::string hostname, std::string login, std::string kernel, std::string nameos)
{
    Step::setTime(time);
    Step::setHostname(hostname);
    Step::setLogin(login);
    Step::setKernel(kernel);
    Step::setNameOS(nameos);
}

void Step::setTime(std::string time)
{
    _time = time;
}

std::string Step::getTime() const
{
    return (_time);
}

void Step::setHostname(std::string hostname)
{
    _hostname = hostname;
}

std::string Step::getHostname() const
{
    return (_hostname);
}

void Step::setLogin(std::string login)
{
    _login = login;
}

std::string Step::getLogin() const
{
    return (_login);
}

void Step::setKernel(std::string kernel)
{
    _kernel = kernel;
}

std::string Step::getKernel() const
{
    return (_kernel);
}

void Step::setNameOS(std::string nameos)
{
    _nameos = nameos;
}

std::string Step::getNameOS() const
{
    return (_nameos);
}
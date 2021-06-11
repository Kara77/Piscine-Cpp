/*
** EPITECH PROJECT, 2019
** Encapsulation
** File description:
** Picture hpp
*/

#ifndef SYSTEM_HPP_
#define SYSTEM_HPP_

#include <iostream>

class Step 
{
public:
    Step();
    //Step(const Step&);
    ~Step();

    void setAll(std::string time, std::string hostname, std::string login, std::string kernel, std::string nameos);
    void setTime(std::string time);
    std::string getTime() const;
    void setHostname(std::string host);
    std::string getHostname() const;
    void setLogin(std::string log);
    std::string getLogin() const;
    void setKernel(std::string kernel);
    std::string getKernel() const;
    void setNameOS(std::string nameos);
    std::string getNameOS() const;

    void ReadStatsCPU(std::string str);

private:
    std::string _time;
    std::string _hostname;
    std::string _login;
    std::string _nameos;
    std::string _kernel;
};

std::string getTimeval();
std::string getHostnameval();
std::string getLoginval();
std::string getNameOs();
std::string getKernelVersion();
void GraphicWindow(Step system);
#endif /* !CPU_HPP_ */

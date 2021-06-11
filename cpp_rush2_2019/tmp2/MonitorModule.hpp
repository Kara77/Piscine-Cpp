/*
** EPITECH PROJECT, 2020
** rush3
** File description:
** MonitorModule hpp
*/

#ifndef MONITORMODULE_HPP_
#define MONITORMODULE_HPP_

#include <iostream>
#include "IMonitorModule.hpp"

class MonitorModule : public IMonitorModule
{
        public:
        MonitorModule();
        ~MonitorModule();

        void setAll();
        void setTime();
        void setHostname();
        void setLogin();
        void setKernel();
        void setNameOS();
        void setStatsCPU();

        std::string getTime() const;
        std::string getHostname() const; 
        std::string getLogin() const;
        std::string getKernel() const;
        std::string getNameOS() const;
        std::string getCPU() const;

	private:
        std::string _time;
        std::string _hostname;
        std::string _login;
        std::string _nameos;
        std::string _kernel;
        std::string _cpu;
};

#endif /* !MonitorModule */

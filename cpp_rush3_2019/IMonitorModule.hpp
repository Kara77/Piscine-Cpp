/*
** EPITECH PROJECT, 2020
** rush3
** File description:
** IMonitorModule
*/

#ifndef IMONITORMODULE_HPP_
#define IMONITORMODULE_HPP_

#include <iostream>

class IMonitorModule {
	public:
		~IMonitorModule(){};

        virtual void setTime() = 0;
        virtual void setHostname() = 0;
        virtual void setLogin() = 0;
        virtual void setKernel() = 0;
        virtual void setNameOS() = 0;
        virtual void setStatsCPU() = 0;

        virtual std::string getNameOS() const = 0;
        virtual std::string getTime() const = 0;
        virtual std::string getHostname() const = 0; 
        virtual std::string getLogin() const = 0;
        virtual std::string getKernel() const = 0;
        virtual std::string getCPU() const = 0;

	private:
};

#endif /* !IMonitorModule */
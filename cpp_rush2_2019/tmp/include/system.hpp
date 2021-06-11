//
// EPITECH PROJECT, 2019
// Rush3
// File description:
// system.hpp
//

#include <string>
#include <sys/types.h>
#include <sstream>
#include <iostream>
#include <sys/utsname.h>
#include <sys/sysinfo.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fstream>

#ifndef SYSTEM_H
#define SYSTEM_H

class computer { 
    public:
        computer();
        ~computer();
        std::string getCpu();
        std::string getNbrCpu();
        std::string getCpuLoad();
        std::string getCache();
        std::string getOs();
        std::string getKernel();
        std::string getHostname();
        std::string getUsername();
        std::string getRamMax();
        std::string getRamFree();
        std::string getTime();
        std::string getUptime();
        std::string getRamUsed();
        std::string getRamPercent();
        std::string getNetwork_received();
        std::string getNetwork_transmited();
        };

#endif

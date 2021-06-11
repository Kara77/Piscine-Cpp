/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include <iostream>
#include <linux/version.h>

std::string getNameOs()
{
        #ifdef _WIN32
                return ("Windows 32-bit");
        #elif __unix__ || __unix
                return ("Unix");
        #elif _WIN64
                return ("Windows 64-bit");
        #elif __APPLE__ || __MACH__
                return ("Mac");
        #elif __linux__
                return ("Linux");
        #elif __FreeBSD__
                return ("FreeBSD");
        #else
                return ("Other");
        #endif
}

std::string getKernelVersion()
{
        return (std::to_string(LINUX_VERSION_CODE));
}
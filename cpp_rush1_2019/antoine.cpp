#include <thread>
#include <iostream> 
#include <iostream>
#include <string>
#include <fstream>
#include <unistd.h>
#include "antoine.hpp"

CpuState::CpuState()
{}

CpuState::~CpuState()
{}

void CpuState::ReadStatsCPU(std::string str)
{
    std::ifstream file("/proc/stat");
    std::string info;

    while(std::getline(file, info)) {
        std::cout<<info<<std::endl;
    }
}
/*
** EPITECH PROJECT, 2019
** Encapsulation
** File description:
** Picture hpp
*/

#ifndef CPU_HPP_
#define CPU_HPP_

#include <iostream>
#include <map>

class CpuState 
{
public:
    CpuState();
    CpuState(const CpuState&);
    ~CpuState();

    void ReadStatsCPU(std::string str);

private:
    std::map<std::string, int> _heartInfo;
};

#endif /* !CPU_HPP_ */

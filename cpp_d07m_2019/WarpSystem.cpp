/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** WarpSystem
*/

#include <iomanip>
#include <iostream>
#include <string>
#include "WarpSystem.hpp"

WarpSystem::QuantumReactor::QuantumReactor(bool stability): _stability(stability)
{

}

WarpSystem::QuantumReactor::~QuantumReactor()
{

}

bool WarpSystem::QuantumReactor::isStable()
{
	return (_stability);
}

void WarpSystem::QuantumReactor::setStability(bool stability)
{
	_stability = stability;
}

WarpSystem::Core::Core(QuantumReactor *coreReactor): _coreReactor(coreReactor)
{

}

WarpSystem::Core::~Core()
{

}

WarpSystem::QuantumReactor *WarpSystem::Core::checkReactor()
{
	return (_coreReactor);
}
/*
** EPITECH PROJECT, 2019
** ex00
** File description:
** WarpSystem hpp
*/

#ifndef WARPSYSTEM_HPP_
#define WARPSYSTEM_HPP_

#include <iostream>

namespace WarpSystem
{
	class QuantumReactor
	{
		public :
					QuantumReactor(bool stability = true);
					~QuantumReactor();
					bool isStable();
					void setStability(bool _stability);

		private :
					bool _stability;
	};

	class Core
	{
		public :
					Core(QuantumReactor *coreReactor);
					~Core();
					QuantumReactor *checkReactor();
		private :
					QuantumReactor *_coreReactor;
	};
}

#endif

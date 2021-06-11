/*
** EPITECH PROJECT, 2019
** Ave
** File description:
** Cesar hpp
*/

#ifndef CESAR_HPP_
#define CESAR_HPP_

#include <iostream>
#include "IEncryptionMethod.hpp"

class Cesar : public IEncryptionMethod {

	public:
		Cesar();
		~Cesar();
        void encryptChar(char plainchar);
        void decryptChar(char cipherchar);
        void reset();

        int _count;
        
	protected:
	private:
};

#endif /* !CESAR_HPP_ */

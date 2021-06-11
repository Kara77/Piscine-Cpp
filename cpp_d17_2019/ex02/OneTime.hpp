/*
** EPITECH PROJECT, 2019
** Ave
** File description:
** OneTime hpp
*/

#ifndef ONETIME_HPP_
#define ONETIME_HPP_

#include <iostream>
#include "IEncryptionMethod.hpp"

class OneTime : public IEncryptionMethod {

	public:
		OneTime(const std::string &key);
		~OneTime();
        
        void encryptChar(char plainchar);
        void decryptChar(char cipherchar);
        void reset();

	protected:
        std::string _key;
        int _i;
	private:
};

#endif /* !ONETIME_HPP_ */

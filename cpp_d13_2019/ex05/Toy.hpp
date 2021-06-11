/*
** EPITECH PROJECT, 2019
** Encapsulation
** File description:
** Toy hpp
*/

#ifndef TOY_HPP_
	#define TOY_HPP_

#include <iostream>
#include <ostream>
#include "Picture.hpp"

class Toy {

	public:
        enum ToyType {
            BASIC_TOY,
            ALIEN,
            BUZZ,
            WOODY
        };

		Toy(const ToyType &type, const std::string &name, const std::string &n_picture,
            int error);
        Toy();
        Toy(Toy const &copy_toy);
		~Toy();

        class Error {
    
        public:
            Error();
            ~Error();

            enum ErrorType {
                UNKNOW,
                PICTURE,
                SPEAK
            }; 
            ErrorType type;


            std::string what();
            std::string where();

        protected:

        private:
        };

        int getType() const;
        std::string getName() const;
        std::string getAscii() const;

        void setName(std::string name);
        bool setAscii(const std::string &file);

        virtual void speak(std::string statement);
        virtual bool speak_es(std::string statement);
        Error getLastError();

        Toy operator=(Toy const &a);
        Toy &operator<<(const std::string &a);

	protected:
        ToyType _type;
        std::string _name;
        Picture _n_picture;
        Error::ErrorType _error;

    private:
};

std::ostream &operator<<(std::ostream &flux, Toy const &toy);

#endif /* !TOY_HPP_ */

/*
** EPITECH PROJECT, 2019
** Encapsulation
** File description:
** Toy hpp
*/

#ifndef TOY_HPP_
	#define TOY_HPP_

#include <iostream>
#include "Picture.hpp"

class Toy {

	public:
        enum ToyType {
            BASIC_TOY,
            ALIEN,
            BUZZ,
            WOODY
        };

		Toy(const ToyType &type, const std::string &name, const std::string &n_picture);
        Toy();
        Toy(Toy const &copy_toy);
		~Toy();

        int getType() const;
        std::string getName() const;
        std::string getAscii() const;

        void setName(std::string name);
        bool setAscii(const std::string &file);

        virtual void speak(std::string statement);

        Toy operator=(Toy const &a);

	protected:
        ToyType _type;
        std::string _name;
        Picture _n_picture;
    private:
};

#endif /* !TOY_HPP_ */

/*
** EPITECH PROJECT, 2019
** Droids
** File description:
** Droids hpp
*/

#ifndef DROID_HPP_
#define DROID_HPP_

#include <iostream>

class Droid {

	public:

                Droid(std::string Id = "", size_t Energy = 50, const size_t Attack = 25, 
                        const size_t Toughness = 15, 
                                std::string *Status = new std::string("Standing by"));
		~Droid();
                Droid (const Droid &Droid);

                void setId(std::string Id);
                void setEnergy(size_t Energy);
                void setStatus(std::string *Status);

                std::string getId() const;
                size_t getEnergy() const;
                size_t getAttack() const;
                size_t getToughness() const;
                std::string *getStatus() const;

                bool operator==(Droid const &a) const;
                bool operator!=(Droid const &a) const;
                void operator<<(size_t &Durasel);


        private:
                std::string _Id;
                size_t _Energy;
                size_t _Attack;
                size_t _Toughness;
                std::string *_Status;
};

std::ostream &operator<<(std::ostream &flux, Droid const &a);

#endif /* !DROID_HPP_ */
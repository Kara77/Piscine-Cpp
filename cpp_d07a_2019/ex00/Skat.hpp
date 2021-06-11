/*
** EPITECH PROJECT, 2019
** ex00
** File description:
** ex00 hpp
*/

#ifndef SKAT_HPP_
#define SKAT_HPP_

class Skat {

	public:
		Skat(const std::string &name = "bob", int stimPaks = 15);
		~Skat();
		int &stimPaks();
		const std::string &name();
		void shareStimPaks(int number, int &stock);
		void addStimPaks(unsigned int number);
		void useStimPaks();
		void status();

	private:
		const std::string _name;
		int _stimPaks;
};

#endif /* !SKAT_HPP_ */
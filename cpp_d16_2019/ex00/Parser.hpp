/*
** EPITECH PROJECT, 2019
** stack
** File description:
** Parser hpp
*/

#ifndef PARSER_HPP_
	#define PARSER_HPP_

#include <iostream>
#include <stack>

class Parser {

	public:
		Parser();
		~Parser();
        void feed(const std:: string &);
        int result () const;
        void reset();

	protected:
        std::stack<int> operands;
        std::stack<char> operators;
        int _result;

	private:
};

#endif /* !PARSER_HPP_ */
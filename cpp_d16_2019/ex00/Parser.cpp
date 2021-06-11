
#include "Parser.hpp"
#include <vector>
#include <stack>
#include <string>
#include <iostream>
#include <string.h>

Parser::Parser(): _result(0)
{
}

Parser::~Parser()
{
}

void Parser::feed(const std::string &expression)
{
    int a = 0;
    std::string temp;
    int temp1 = 0;
    int temp2 = 0;
    int i = 0;
    int temp_result = 0;
    std::string expr = strdup(expression.c_str());

    if (*(expression.begin()) != '(' && *(expression.end()) != ')') {
        expr = "(" + expr + ")";
    }
    for (int k = 0; k < expr.length(); k++) {
        while (isdigit(expr[k])) {
            temp += expr[k];
            k++;
        }
            a = std::atoi(temp.c_str());
            if (a != 0)
                operands.push(a);
            temp = "";
        if (expr[k] == '+' || expr[k] == '-' || expr[k] == '/'||
        expr[k] == '*' || expr[k] == '%') {
            operators.push(expr[k]);
        } else if (expr[k] == ')' || k == expr.length()) {
            temp1 = operands.top();
            operands.pop();
                temp2 = operands.top();
                operands.pop();
            
            if (operators.top() == '+') {
                temp_result = temp1 + temp2;
                operators.pop();
            } else if (operators.top() == '-') {
                temp_result = temp2 - temp1;
                operators.pop();  
            } else if (operators.top() == '*') {
                temp_result = temp1 * temp2;
                operators.pop();         
            } else if (operators.top() == '/') {
                temp_result = temp2 / temp1;
                operators.pop();            
            } else if (operators.top() == '%') {
                temp_result = temp2 % temp1;
                operators.pop();
            }
            operands.push(temp_result);
        }
    }
    _result += temp_result;
}

int Parser::result() const
{
    return(_result);
}

void Parser::reset()
{
    _result = 0;
}
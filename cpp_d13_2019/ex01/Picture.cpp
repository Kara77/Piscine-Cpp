/*
** EPITECH PROJECT, 2019
** Encapsulation
** File description:
** Picture cpp
*/

#include <iostream>
#include <fstream>
#include <string>
#include "Picture.hpp"

Picture::Picture(const std::string &file)
{
        getPictureFromFile(file);
}

Picture::Picture()
{
    data = "";
}

Picture::~Picture()
{
}

bool Picture::getPictureFromFile(const std::string &file)
{
    std::ifstream my_file(file);
    std::string content;
    
        if(my_file) {
           while (getline(my_file, content)) {
               data += content + "\n";
           }
           return (true);
        } else {
            data = "";
            return (false);
        }
}

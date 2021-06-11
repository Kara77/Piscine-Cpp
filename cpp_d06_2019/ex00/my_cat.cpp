/*
** EPITECH PROJECT, 2019
** IOStream
** File description:
** ex00
*/

#include <string>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>

void handle_error(char argv[], int argc)
{
	if (ENOENT) {
		std::cerr << "my_cat: " << argv << 
		": No such file or directory" << std::endl;
	}
}

void display_my_file(std::ifstream *file) 
{
	auto i = 0;
	std::string content;
	
	while (getline(*file, content)) {
		std::cout << content << std::endl;
	}
	(file)->close();
}

int main (int argc, char *argv[]) 
{
	auto i = 1;
	
	if (argc == 1)
		std::cerr << "my_cat: Usage: ./my_cat file [...]" << std::endl;
	while (i < argc) {
		std::ifstream file(argv[i]);
		if (file) {
			display_my_file(&file);
		} else
			handle_error(argv[i], argc);
		i++;
	}
	return (0);
}
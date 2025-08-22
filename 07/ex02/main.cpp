/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmouhib <bmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 15:54:59 by bmouhib           #+#    #+#             */
/*   Updated: 2025/08/22 16:06:26 by bmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void printBanner(const std::string& msg, int width = 50) {
	int pad = (width - msg.size()) / 2;
	std::cout << YELLOW
		 << std::string(pad, '-') << " " << msg << " "
		 << std::string(width - pad - msg.size(), '-') 
		 << RESET << std::endl;
}

int main( void ) {
try {
	Array<int> empty;
	Array<int> int_array(5);
	Array<char> char_array(10);

	std::cout << "empty array size: " << empty.size() << std::endl;
	std::cout << "int_array size: " << int_array.size() << std::endl;
	std::cout << "char_array size: " << char_array.size() << std::endl;
	for (unsigned int i = 0; i < int_array.size(); i++)
		int_array[i] = i;
	for (unsigned int i = 0; i < char_array.size(); i++)
		char_array[i] = 'A' + i;
	printBanner("Printing arrays");
	std::cout << SKYBLUE << "int_array: " << RESET;
	for (unsigned int i = 0; i < int_array.size(); i++)
		std::cout << int_array[i];
	std::cout << std::endl;
	std::cout << SKYBLUE << "char_array: " << RESET;
	for (unsigned int i = 0; i < char_array.size(); i++)
		std::cout << char_array[i];
	std::cout << std::endl;


	Array<char> copy_char(char_array);
	std::cout << SKYBLUE << "copy_char: " << RESET;
	for (unsigned int i = 0; i < copy_char.size(); i++)
		std::cout << copy_char[i];
	std::cout << std::endl;
	
	for (unsigned int i = 0; i < copy_char.size(); i++)
		copy_char[i] = tolower(copy_char[i]);

	std::cout << SKYBLUE << "copy_char (lowercase): " << RESET;
	for (unsigned int i = 0; i < copy_char.size(); i++)
		std::cout << copy_char[i];
	std::cout << std::endl;
	std::cout << SKYBLUE << "char_array: " << RESET;
	for (unsigned int i = 0; i < char_array.size(); i++)
		std::cout << char_array[i];
	std::cout << std::endl;
	printBanner("Copying int_array into empty");
	empty = int_array;
	std::cout << SKYBLUE << "empty array size: " << RESET << empty.size() << std::endl;
	std::cout << SKYBLUE << "empty_array: " << RESET;
	for (size_t i = 0; i < empty.size(); i++)
		std::cout << empty[i];
	std::cout << std::endl;
	printBanner("Out of bounds error");
	char_array[100] = 'F';
}
catch (std::exception & e)
{
	std::cout << BOLD RED << "[ARRAY][ERROR]: " << e.what() << RESET << std::endl;
}
}
#pragma once
#include <iostream>


int nu1;
int op;
int num2;
int num3;
int num4;
bool order_of_op;

void number() {
	std::cout << "Please select a number\n";
	std::cin >> nu1;
	std::cout << "Thank you, Now select a 2nd num\n";
	std::cin >> num2;
	std::cout << "Do you want to have a 3rd and 4th number?\n";
	std::cin >> order_of_op;

	if (order_of_op == true)
		order_of_op = true;
	else
		order_of_op = true;

	std::cout << nu1 + num2;
}



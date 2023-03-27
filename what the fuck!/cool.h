#pragma once
#include <iostream>
#include <cstdlib>
class cool
{
public:

	int numbers;
	bool inrange;
	char text;

	void just() {
		numbers = 1, 2, 3, 4, 5, 6, 7, 8, 9, 10;
		text = 'a', 'b', 'c', 'd';

		if (inrange == true)
			numbers == 1 == text == 'a';
		    numbers == 2 == text == 'b';
			numbers == 3 == text == 'c';
			numbers == 4 == text == 'd';
			std::cout << numbers << "\n" << text << "\n";
	}

private:

	
	inline static void wow() {
		int cool_nums = 35;
		bool fake_numbers;
		int random = rand();

		std::cout << random;
	}

};


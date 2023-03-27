#pragma once
#include <iostream>

bool spamming;
bool stopkey;

void spammer() {

	spamming = true;

	while (spamming == true)
		do
		{
			std::cout << "spamming in progress\n";

			if (stopkey == true)
				break;
			return;
		} while (true);
}
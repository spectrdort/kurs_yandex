﻿#include <iostream>
#include <vector>
#include <algorithm>

int main()

{
	int a, b;
	std::cin >> a >> b;
	if (a % 2 == 0)
	{
		while (a <= b)
		{
			std::cout << a << " ";
			a = a + 2;
		}
	}
	else
	{
		a = a + 1;
		while (a <= b)
		{
			std::cout << a << " ";
			a = a + 2;
		}
	}
	return 0;
}
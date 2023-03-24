#include <bits/stdc++.h>

int main()
{
	int n;
	std::cin >> n;
	int h = std::floor(n / 4);
	int w = std::floor((n -(h * 2)) / 2);
	std::cout << w*h << std::endl;
}

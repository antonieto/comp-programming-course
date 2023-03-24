#include <bits/stdc++.h>
std::string zero = "xxxxxx...xx...xx...xx...xx...xxxxxx";
std::string one = "....x....x....x....x....x....x....x";
std::string two = "xxxxx....x....xxxxxxx....x....xxxxx";
std::string three = "xxxxx....x....xxxxxx....x....xxxxxx";
std::string four = "x...xx...xx...xxxxxx....x....x....x";
std::string five = "xxxxxx....x....xxxxx....x....xxxxxx";
std::string six = "xxxxxx....x....xxxxxx...xx...xxxxxx";
std::string seven = "xxxxx....x....x....x....x....x....x";
std::string eight = "xxxxxx...xx...xxxxxxx...xx...xxxxxx";
std::string nine = "xxxxxx...xx...xxxxxx....x....xxxxxx";
std::string plus = "....x....x....xxxxxx....x....x....x";

std::string getNumber(std::string number, int index)
{
	std::string result = "";
	for (int i = 0; i < 5; i++)
	{
		result += number.substr(index + (i * 5), 5);
	}
	return result;
}

int main()
{
	std::vector<std::string> inputs(7);
	std::vector<std::string> nums();
	for (int i = 0; i < 7; i++)
	{
		std::cin >> inputs[i];
	}
	for(int i = 0; i < inputs[0].size(); i++) {
		
	}
	
}

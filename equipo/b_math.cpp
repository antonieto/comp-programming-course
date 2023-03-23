#include <bits/stdc++.h>

int main() {
  int test_cases;
  std::cin >> test_cases;
  for (int i = 0; i < test_cases; i++) {
    long long int input;
    std::cin >> input;
    long double root_one = (-1 + std::sqrt(1 + 8 * input)) / 2;
    long double root_two = (-1 - std::sqrt(1 + 8 * input)) / 2;
    if (root_one > 0 && root_one == std::floor(root_one)) {
      std::cout << root_one << std::endl;
    } else if (root_two > 0 && root_two == std::floor(root_two)) {
      std::cout << root_two << std::endl;
    } else {
      std::cout << "NAI" << std::endl;
    }
  }
}

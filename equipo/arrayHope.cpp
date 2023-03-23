#include <bits/stdc++.h>

int main() {
  int test_cases;
  std::cin >> test_cases;
  for (int i = 0; i < test_cases; i++) {
    double n, k;
    std::cin >> n >> k;
	int sum = std::ceil(k / n);
    if (k >= n) {
      std::cout << std::ceil(k / n) << std::endl;
    } else {
      std::cout << sum + 1 << std::endl;
  }
  }
}


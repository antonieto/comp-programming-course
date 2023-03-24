#include <bits/stdc++.h>

int main() {
  int n, s;
  std::cin >> n >> s;
  std::vector<int> a(n);
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  // sort a
  std::sort(a.begin(), a.end());
  
  int medium = std::floor(n / 2);
  int acc = 0;

  if (s > a[medium]) {
	for (int i = medium; i < n; i++) {
	  if (s > a[i]) {
		acc += s - a[i];
	  }
	}
  } else {
	for (int i = medium; i >= 0; i--) {
	  if (s < a[i]) {
		acc += a[i] - s;
	  }
	}
  }
  std::cout << acc << std::endl;
}

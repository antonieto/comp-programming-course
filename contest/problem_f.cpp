#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  int x = 0;
  int y = 0;
  int z = 0;
  for (int i = 0; i < n; i++) {
	  int xi, yi, zi;
	  std::cin >> xi >> yi >> zi;
	  x += xi;
	  y += yi;
	  z += zi;
  }
  float magnitude = std::sqrt(x*x + y*y + z*z);
  std::cout << (magnitude == (float)(0) ? "YES" : "NO") << std::endl;
  return 0;
}

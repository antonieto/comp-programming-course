#include <bits/stdc++.h>
#include <cmath>
#include <math.h>

bool binary_search(std::vector<int> &arr, int x) {
  int l = 0, r = (int)arr.size() - 1;
  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (arr[mid] == x) {
      return true;
    } else if (arr[mid] < x) {
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }
  return false;
}

int main() {
  int n, q;
  std::cin >> n;
  std::vector<int> arr = std::vector<int>(n);
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  std::cin >> q;
  std::vector<int> queries = std::vector<int>(q);
  for (int i = 0; i < q; i++) {
    std::cin >> queries[i];
  }

  for (int i = 0; i < q; i++) {
    std::cout << binary_search(arr, queries[i]) << std::endl;
  }

  return 0;
}

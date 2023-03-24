#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  int baloons[n];
  std::unordered_map<int,int> m;
  int acc = 0;

  for (int i = 0; i < n; i++) {
    std::cin >> baloons[i];
  }
  for (int i = 0; i < n; i++) {
    if (m.find(baloons[i]) == m.end()) {
      if (m.find(baloons[i] - 1) == m.end()) {
        m.insert(baloons[i] - 1, 1);
	  }else{
        m[baloons[i] -1] ++;
      }
    } else {
		if (m.find(baloons[i] - 1) == m.end()) {
			m.insert(baloons[i] -1, 1);
            m[baloons[i]] --;
		} 
    }

  }
    for(auto it = m.begin(); it != m.end(); it++){
        acc += it->second;
    }

  std::cout << acc << std::endl;
  return 0;
}

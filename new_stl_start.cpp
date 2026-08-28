 #include <bits/stdc++.h>
 using namespace std;

// h

 int main() { 

 int n, q, x;
 cin >> n >> q; 
 
 vector<int> nums(n); 

  for (int i = 0; i < n; ++i) {

  cin >> nums[i];

  }

  sort(nums.begin(), nums.end()); 
  nums.erase(unique(nums.begin(), nums.end()), nums.end()); 
 
  while (q--) {

  cin >> x; 
  int greater = nums.end() - upper_bound(nums.begin(), nums.end(), x); 
  int less = lower_bound(nums.begin(), nums.end(), x) - nums.begin(); 
  cout << less << ' ' << greater << '\n'; 

  }

  return 0; 

 } 
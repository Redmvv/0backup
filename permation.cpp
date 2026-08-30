#include <bits/stdc++.h>
 using namespace std;

 int main() { 

  ios::sync_with_stdio(false);
    cin.tie(nullptr);

 int n, q; 
 string str;

 cin >> n >> q >> str; 

 while (q--)  {

 int x;
 string op; 

 cin  >> op >> x; 

 for (int i = 0; i < x; ++i) {

 if (op == "next_permutation") 

  next_permutation(str.begin(), str.end());
  
 else  prev_permutation(str.begin(), str.end());

 }

 cout << str << '\n';

 }
 
 return 0; 

 } 
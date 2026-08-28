#include <bits/stdc++.h>
using namespace std;

 int main() { 

 int n, x, q, m; 
 cin >> n; 

  vector<int> shops;
   
  while (n--) {

  cin >> x;
  shops.push_back(x);  

 }


 sort(shops.begin(), shops.end());

 cin >> q;  

 while (q--) {

 cin >> m; 

 auto it = upper_bound(shops.begin(), shops.end(), m);
 cout << it - shops.begin() << '\n'; 

 } 


    return 0; 
 } 
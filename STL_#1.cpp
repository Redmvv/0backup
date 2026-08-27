 #include <bits/stdc++.h>
 using namespace std;

 int main() {
   
  int q, x, c, mod; 
 long long  sum = 0;
  deque<int> cylinder; 
  cin >> q;


    while (q--) {

    cin >> mod; 

    if (mod == 1) {

    cin >> x >> c; 

    for (int i = 0; i < c; ++i)

    cylinder.push_back(x); 

 }

    else if (mod == 2) {

    sum = 0; 
    cin >> c; 

   for (int i = 0; i < c; ++i) {
 
  sum += cylinder.front(); 
  cylinder.pop_front(); 

  }

  cout << sum << '\n'; 

  }
  }
  

 return 0;

}
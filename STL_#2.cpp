 #include <bits/stdc++.h>
 using namespace std;

 int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

 int q;
 string qr;  
 priority_queue<int, vector<int>, greater<int>> pq; 
 cin >> q; 

 while (q--) {

 cin >> qr; 

 if (qr == "push") {

  int x; 
  cin >> x; 
  pq.push(x); 

 }

 else if (qr == "pop") 
 pq.pop(); 

 else if (qr == "top") 
 cout << pq.top() << '\n';  

 }

  return 0;

 } 

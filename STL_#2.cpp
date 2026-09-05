 #include <bits/stdc++.h>
 using namespace std;

 int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int q;
  bool rev = false; 
  string qr; 
  cin >> q;

  deque<int> ad; 

  while (q--) {

  cin >> qr; 

  if (qr == "push_back") {

  int n;   
  cin >> n;
  rev ? ad.push_front(n) : ad.push_back(n); 

  }

  else if (qr == "toFront") {

  int n;   
  cin >> n;
  rev ? ad.push_back(n) : ad.push_front(n); 

  }

  else if (qr == "back") {

  if (ad.empty()) cout << "No job for Ada?\n";  

 else {

  cout << ( rev ? ad.front() : ad.back() )<< '\n';
  rev ? ad.pop_front() : ad.pop_back();

 }
 }

  else if (qr == "front") {

 if (ad.empty()) cout << "No job for Ada?\n"; 

 else {
 
  cout << (rev ? ad.back() : ad.front()) << '\n';
  rev ? ad.pop_back() : ad.pop_front();

 }
 }

 else if (qr == "reverse")

  rev = !rev; 

  } 

  return 0;

 } 

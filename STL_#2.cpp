   #include <bits/stdc++.h>
   using namespace std;

   int main() {
 
   ios::sync_with_stdio(false);
   cin.tie(nullptr); 

  int q;
  bool sorted = false;
  cin >> q; 

  deque<int> a; 
  priority_queue<int, vector<int>, greater<int>> pa; 

  while (q--) {
  
  int n, front; 
  cin >> n;

  if (n == 1) {

  int x; 
  cin >> x;
  a.push_back(x); 

  } 

 else if (n == 2) {


  if (sorted && !pa.empty())  {
  
  cout << pa.top() << '\n'; 
  pa.pop();

 } 

 else {

   cout << a.front() << '\n';
   a.pop_front();

 }

 }
 
  else if (n == 3)  {

  sorted = true;

  if (pa.empty()) {

  pa = priority_queue<int, vector<int>, greater<int>>(a.begin(), a.end());
  a.clear();

  }

  else  while (!a.empty()) {
  
  pa.push(a.front());
  a.pop_front(); 

  }

  }
  }
 
  return 0;

 } 

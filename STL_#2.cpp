  #include <bits/stdc++.h>
  using namespace std;
 
  int main() { 

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, id; 
  cin >> n;

  deque<int> shelf; 
  priority_queue<int> table; 

  while (n--) {

  cin >> id; 
  shelf.push_back(id);

  }

  int q; 
  char qt;  
  cin >> q;

  while (q--) {

  cin >> qt; 

  if (qt == 'L') {

  if (shelf.empty()) continue;

  table.push(shelf.front()); 
  shelf.pop_front(); 

  }

  else if (qt == 'R') {

  if (shelf.empty()) continue;

  table.push(shelf.back()); 
  shelf.pop_back(); 

  }

  else {

  if (table.empty()) {

  cout << -1 << '\n'; 
  continue;

  }
  
  cout << table.top() << '\n'; 
  table.pop();
  
  }
  }


 return 0; 

 } 

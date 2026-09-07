 #include <bits/stdc++.h>
 #include<ext/pb_ds/assoc_container.hpp>
 #include<ext/pb_ds/tree_policy.hpp>
 using namespace std;
 using namespace __gnu_pbds;
 
 typedef tree<int , null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> OrderedSet;
 
  void erase(OrderedSet &t, int v) {

   int rank = t.order_of_key(v);
  auto it = t.find_by_order(rank);

   t.erase(it);

 }

 int main() { 

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int q;
  cin >> q; 
  
  OrderedSet os; 
  
  while (q--) {

   int x; 
   char op;

  cin >> op; 

  if (op == 'I'){

  cin >> x; 
  os.insert(x); 

  }

  else if (op == 'D') {

  cin >> x;

  if (os.order_of_key(x) != os.order_of_key(x + 1))

  erase(os, x); 
  
  }

  else if (op == 'K') {

   cin >> x; 

  if (x > os.size()) {
   
   cout << "invalid\n"; 
   continue;

  }

  auto it = os.find_by_order(--x); 
  cout << *it << '\n'; 

  }
 
  else {

  cin >> x; 
  cout << os.order_of_key(x) << '\n'; 

  }

  }
 
 return 0; 

 } 

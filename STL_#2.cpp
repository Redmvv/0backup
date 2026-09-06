 #include <bits/stdc++.h>
 using namespace std;

 int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  string name; 
  cin >> n;

  map<string, int> m; 

  while (n--) {

  cin >> name; 

  auto it = m.find(name); 

 if (it != m.end()) {

  string new_name = name;
  int number = m[name]; 
  string num = to_string(number);  
  new_name += num; 

  while (m.find(new_name) != m.end()) {
 
  number++;
  string num = to_string(number);
  new_name = name + num; 

  }

   m[name] = number + 1;
   m[new_name] = 1; 
   cout << new_name << '\n'; 
   
   }

  else {

  m[name] = 1; 
  cout << "OK\n"; 
 
  }
  } 

  return 0;

 } 
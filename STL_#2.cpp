 #include <bits/stdc++.h>
 using namespace std;

 int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

 int n; 
 cin >> n; 
 string old , neew; 

 map<string, string> users; 

  while (n--) {

  cin >> old >> neew;

  auto it = users.find(old); 

  if (it != users.end()) {
  
  auto val = it->second; 
  users.erase(old);
  users[neew] = val; 

  }
      
 else 
    users[neew] = old; 

  }

 cout << users.size() <<'\n'; 

 for (auto [i, j] : users) 

 cout << j << ' ' << i << '\n'; 


    return 0;
}

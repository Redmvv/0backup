 #include <bits/stdc++.h>
 using namespace std;

 int main() {
   
  int n;
  char s;  
  cin >> n; 

  deque<int> ans(1, 0); 
  
  int pos = 0; 

 for (int i = 1; i <= n; ++i) {

 cin >> s; 

  if (s == 'L')  {

  ans.insert(ans.begin() + pos, i);

 }

  else if (s == 'R') {

 ans.insert( ans.begin() + pos + 1 , i);
 pos++;

 }
 }
  
 for (auto &it : ans)

 cout << it << ' '; 

 return 0;

}
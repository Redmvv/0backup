 #include <bits/stdc++.h>
 using namespace std;

  int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
 int n, q, x;  
 cin >> n >> q;
 
  vector<int> idx(51, -1); 

 for (int i = 1; i <= n; ++i) {

 cin >> x; 

  if (idx[x] == -1)  {

  idx[x] = i; 

  }
  }
  

 while (q--) {

  cin >> x;
   
  cout << idx[x] << ' ';

  int pos = idx[x]; 
  
  for (int i = 1; i <= 50; ++i) {
   
  if (i != x && idx[i] != -1 && idx[i] < pos)
    
  idx[i]++;   
      
  }
    
  idx[x] = 1; 
 
 }



 return 0; 
 
  } 
  
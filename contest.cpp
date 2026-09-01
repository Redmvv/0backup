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
  
  cout << "---> " << idx[1] << '\n'; 

 while (q--) {

  cin >> x;
   
  cout << idx[x] << ' ';

  if (x == 1)  {

    idx[x] = 1;
    continue;

  }

  int pos = idx[x]-1; 
  
  for (int i = pos; i >= 1; --i) {
   
    
   if (idx[i] != -1) 

    idx[i]++;   
      
    }
    
    idx[x] = 1; 
 
 }



 return 0; 
 
  } 
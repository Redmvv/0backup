 #include <bits/stdc++.h>
 using namespace std;

  int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int n, x, max = 0;
  bool valid = true; 
  cin >> n; 
  
  stack<int> st; 
 
 while (n--) {

 cin >> x; 

 if (x > max) { 

 for (int i = max + 1; i < x; ++i){

    st.push(i);

  }

    max = x; 
 }


 else {

  if (st.top() == x)

  st.pop(); 

  else {

    valid = false; 
    break;

  }
  }

 } 
  
  cout << (valid ? "YES" : "NO"); 
 

 return 0; 
 
  } 
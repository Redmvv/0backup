 #include <bits/stdc++.h>
 using namespace std;

 int main() {
   
 bool isEqual = false; 
 string s, t; 
 deque<char> str; 
 deque<char> ttr; 

 cin >> s >> t;

 for (int i = 0; i < s.size(); ++i) {

 str.push_back(s[i]); 
 ttr.push_back(t[i]); 

 }


 for ( auto it = s.rbegin(); it < s.rend(); it++) {

 str.push_front(*it); 
 str.pop_back(); 

 if (str == ttr)  {
 
 isEqual = true; 
 break;

 }
 } 

 cout <<  (isEqual ? "Yes" : "No");  


 return 0;

}
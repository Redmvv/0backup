 #include <bits/stdc++.h>
 using namespace std;

 struct frined  {

  string name;   
  int arabic; 
  int math; 
  int science;
  int engish; 
  int total = 0; 

 };
 
  bool com(const frined &a, const frined &b) {

  return ( a.total ==  b.total ?  a.name < b.name : a.total > b.total); 

 } 

 int main() { 

  int n; 
  cin >> n; 

  vector<frined> frineds(n);
  
  for (int i = 0; i < n; ++i) {

  cin >> frineds[i].name; 
  cin >> frineds[i].arabic;
  cin >> frineds[i].math;
  cin >> frineds[i].science;
  cin >> frineds[i].engish;

  frineds[i].total += frineds[i].arabic; 
  frineds[i].total += frineds[i].math; 
  frineds[i].total += frineds[i].science; 
  frineds[i].total += frineds[i].engish; 

 }

 sort(frineds.begin(), frineds.end(), com); 

  for (auto &it : frineds)  {

 cout << it.name << ' ' << it.total << ' '; 
 cout << it.arabic << ' ' << it.math << ' ';
 cout << it.science << ' ' << it.engish << '\n';

 }

  return 0; 

 } 

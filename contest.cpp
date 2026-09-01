 #include <bits/stdc++.h>
 using namespace std;

  int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
 int n, m; 
 
 cin >> n >> m; 

 vector<queue<int>> cy(m+1);  
 vector<array<int, 3>> freq(n+1, {0, -1 , -1});  
 queue<pair<int, int>> q; 

 for (int i = 1; i <= m; ++i) {

  int k, x; 
  cin >> k; 

  for (int j = 0; j < k; ++j) {

  cin >> x; 
  cy[i].push(x); 

  }

  freq[cy[i].front()][0]++;

 if (freq[cy[i].front()][0] == 2) 

  freq[cy[i].front()][2] = i; 
   
  else freq[cy[i].front()][1] = i;

  if (freq[cy[i].front()][0] == 2)  

  q.push({freq[cy[i].front()][1], freq[cy[i].front()][2]}); 

  } 

  while (!q.empty()) {

  auto [i, j] = q.front(); 
  q.pop(); 

  cy[i].pop();  
  cy[j].pop();  

  if (!cy[i].empty()) {

  freq[cy[i].front()][0]++;

 if (freq[cy[i].front()][0] == 2) 

  freq[cy[i].front()][2] = i; 
   
  else freq[cy[i].front()][1] = i;

  if (freq[cy[i].front()][0] == 2)  

  q.push({freq[cy[i].front()][1], freq[cy[i].front()][2]}); 

  }

 if (!cy[j].empty()) {

  freq[cy[j].front()][0]++;

 if (freq[cy[j].front()][0] == 2) 

  freq[cy[j].front()][2] = j; 
   
  else freq[cy[j].front()][1] = j;

  if (freq[cy[j].front()][0] == 2)  

  q.push({freq[cy[j].front()][1], freq[cy[j].front()][2]}); 

  }

 }

 bool valid = true; 

 for (int i = 1; i <= m; ++i) 

 if (!cy[i].empty()) {
 
 valid = false; 
 break;

 }

  cout << (valid ? "Yes\n" : "No\n"); 

 return 0; 
 
  } 
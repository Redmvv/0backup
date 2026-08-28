 #include <bits/stdc++.h>
 using namespace std;

 int main() { 

 int n;
 int jSum = 0, dSum = 0;
 bool turnJ = true;

 cin >> n; 
 
 deque<int> cards(n); 

  for (int i = 0; i < n; i++) {

  cin >> cards[i];

  }

  while (!cards.empty()) {

  if (cards.front() >= cards.back()) {

 (turnJ ? jSum += cards.front() : dSum += cards.front());
  cards.pop_front(); 

  }

  else {
  
  (turnJ ? jSum += cards.back() : dSum += cards.back());
  cards.pop_back(); 

  } 

  turnJ = !turnJ;

  } 

  cout << jSum << ' ' << dSum; 

  return 0; 

 } 

 #include <bits/stdc++.h>
 using namespace std;

 int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

 int n;
 string word;
 string seen;
 set<string> obj; 
 
 cin >> n; 
 
  while (n--) {

  bool valid = true;
  map<char, bool> letters; 

    cin >> word; 
   
    for (auto l : word) {

    if (letters[l]) {

    valid = false;    
    break;

 }
    letters[l] = 1; 

    }

 if (valid) obj.insert(word); 

   if (obj.size() > 1) {

  auto x = obj.begin();  

  if ( x->size() == word.size()) {

 bool is_per = is_permutation(x->begin(), x->end(), word.begin());

  if (is_per) obj.erase(word); 

   }
   } 
    
 }

 cout << obj.size() << '\n'; 

    return 0;
}

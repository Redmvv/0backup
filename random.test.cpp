  #include <iostream>
  #include <random>
  using namespace std; 

  int main() {

  random_device random_device; 
  mt19937 random_engine{random_device()}; 
  uniform_int_distribution distribution{1, 2};  

  string nameOne; 
  string nameTwo; 
  string player1Name; 
  string player2Name; 
cout << "\033[96m"; // Bright cyan

cout << R"(
╔══════════════════════════════════════════════════════════════╗
║                                                              ║
)";

cout << "\033[95m"; // Bright magenta

cout << R"(
║   _____ _        _____            _____                      ║
║  |_   _(_)      |_   _|          |_   _|                     ║
║    | |  _  ___    | | __ _  ___    | | ___   ___             ║
║    | | | |/ __|   | |/ _` |/ __|   | |/ _ \ / _ \            ║
║    | | | | (__    | | (_| | (__    | | (_) |  __/            ║
║    \_/ |_|\___|   \_/\__,_|\___|   \_/\___/ \___|            ║
║                                                              ║
)";

cout << "\033[96m"; // Bright cyan

cout << R"(
║                                                              ║
║                                                              ║
║                                                              ║
║                                                              ║
║                                                              ║
║                                                              ║
)";

cout << "\033[95m"; // Bright magenta

cout << R"(
║                                                              ║
║                                                              ║
║                                                              ║
║                                                              ║
║                                                              ║
)";

cout << "\033[96m"; // Bright cyan
cout << "\033[95m";
cout << "\033[1m";
cout << "   GAME MENU";
cout << "\033[0m";
cout << "\033[96m"; // Bright cyan

cout << R"(
║                                                              ║
║   [1] Classic Mode                                           ║
║   [2] Sliding Mode                                           ║
║   [Q] Exit                                                   ║
║                                                              ║
║                                                              ║
)";

cout << "\033[95m"; // Bright magenta

cout << R"(
║                                                              ║
╚══════════════════════════════════════════════════════════════╝
)";

cout << "\033[0m"; // Reset
//   cin >> nameOne >> nameTwo; 

//   int x = distribution(random_engine);
  
//   if (x == 1) {

//   player1Name = nameOne; 
//   player2Name = nameTwo; 

//   }
  
//   else  {

//   player1Name = nameTwo;
//   player2Name = nameOne;

//   }
    
//  cout << player1Name << ' ' << player2Name; 
 

  return 0; 

}

// Rewrite the following program. Use a switch statement instead of the if/else if statement.

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
        int selection;
        cout << "Which formula do you want to see?\n\n";
        cout << "1. Area of a circle\n";
        cout << "2. Area of a rectangle\n";
        cout << "3. Area of a cylinder\n" ;
        cout << "4. None of them!\n";
        cin >> selection;
  switch (selection) {
    case 1 : 
  if (selection == 1)
  cout << "Pi times radius squared\n";
    case 2 :
  if (selection == 2)
  cout << "Length times width\n";
    case 3 :
   if  (selection == 3)
  cout << "Pi times radius squared times height\n";
    case 4 :
   if (selection == 4)
  cout << "Well okay then, good bye!\n";
default:
  cout << "Not good with numbers, eh?\n";
  }
}

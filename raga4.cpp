/* 
  program to check if a number is even or odd
*/

//library
  # include <iostream>
  using namespace std;

//main function
 int main() {

  // diclarations
     int num; 

  // ask the user for a number
     cout << "enter a number";
     cin >> num;

  // conditions
     if (num%2==0)
     cout << "the number is even" << endl;
     else 
     cout << "the number is odd" << endl;
     
    return 0;
}

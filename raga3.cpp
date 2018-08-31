/* 
   program to whether a number is divisible by 5 and 11 or not
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
     if (num%5==0)
     cout << "the num is divisible by 5" << endl;
     else 
     cout << "the number is not divisible by 5" << endl;
     if (num%11==0)
     cout << "the number is divisible by 11" << endl;
     else 
     cout << "the number is not divisible by 11" <<endl;  

    return 0;
}

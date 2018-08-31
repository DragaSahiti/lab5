/* 
    write a program to check whether a number is negative, positive or zero 

*/

 //library
     # include <iostream>
     using namespace std;

 // main function
   int main() {

 //Declarations
   int num;

 // ask the user for a number
   cout << "enter a number";
   cin >> num;

 //conditions
    if (num>0)
    cout << "the number is positive" << endl;
    else if (num<0)
    cout << "the number is negative" << endl;
    else if (num==0)
    cout << "the number is 0" << endl;

    return 0;
}



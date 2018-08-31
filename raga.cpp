  /*   
       program to find maximum between two numbers
  */


   // Library
   # include <iostream>
   using namespace std;
   
   // Main function
   int main() {
   

    // Declarations
    int num1,num2;
   

   // ask the user for two numbers
    cout << "Enter first number";
    cin >> num1;
    cout << "enter second number";
    cin >> num2;
   

    //conditions
    if (num1>num2)
    cout << num1 << "is maximum" << endl;
    else 
    cout << num2 << "is maximum" << endl;


     return 0;
}

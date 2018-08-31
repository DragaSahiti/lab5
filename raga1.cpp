 /*   
       program to find maximum between three numbers
  */


   // Library
   # include <iostream>
   using namespace std;
   
   // Main function
   int main() {
   

    // Declarations
    int num1,num2,num3;
   

   // ask the user for two numbers
    cout << "Enter first number";
    cin >> num1;
    cout << "enter second number";
    cin >> num2;
    cout << "enter third number";
    cin >> num3;
   

    //conditions
    if ((num1>num2)&& (num1>num3))
    cout << num1 << "is maximum" << endl;
    else if ((num2>num1)&&(num2>num3))
    cout << num2 << "is maximum" << endl;
    else 
    cout << num3 << "is maximum" << endl;

     return 0;
}

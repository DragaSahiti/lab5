/* 
    program to print all even numbers between 1 and 100
*/

//library
  # include <iostream>
  using namespace std;

//main function
  int main() {

   //declarations
   int i = 1;

   //loops
   while( i <= 100 ) {

   //condition
   if(i % 2 == 0){

   cout << i << endl;

   }      

   i++;
  
   }


   return 0;
}

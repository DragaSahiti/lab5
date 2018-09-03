/* 
    program to print all odd numbers between 1 and 100
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
   if(i % 2 == 1){

   cout << i << endl;

   }      

   i++;
  
   }


   return 0;
}

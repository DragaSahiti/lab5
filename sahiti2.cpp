/* 
   program to print all natural numbers from n to 1
*/

//library
  # include <iostream>
  using namespace std;

//main function
  int main() {

    //declarations
    int i = 1 , n;

    // ask the user for an n value
    cout << "enter a value for n";
    cin >> n;

    //loops
    while (i<=n){
    cout << n << endl;
    n--;
   
    }
    
    return 0;
}

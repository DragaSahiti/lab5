/* 
   program to print all natural numbers from 1 to n
*/

//library
  # include <iostream>
  using namespace std;

//main function
  int main() {

    //declarations
    int i = 1, n;

    // ask the user for an n value
    cout << "enter a value for n";
    cin >> n;

    //loops
    while (i<=n){
    cout << i << endl;
    i++;
   
    }
    
    return 0;
}

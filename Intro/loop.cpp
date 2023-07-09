#include <iostream>
using namespace std;
int main() {
 
// int i = 0;
// while (i < 5) {
//   cout << i << "\n";
//   i++;
// }




// int i=0;

//   do{
//     cout << i <<endl;
//     i++;

//   }
//   while(i<5);
//     return 0;


// for (int i = 0; i < 10; i++) {
//   if (i == 4) {
//     break;
//   }
//   cout << i << "\n";
// }


// int arr[]={1,2,3};


// for(int i=0 ;i<=arr.length();i++ ){
// cout<< arr[i];
 
// }

// string food = "Pizza";
// string &meal = food;

// //cout << food << "\n";  // Outputs Pizza
// cout << meal << "\n";  // Outputs Pizza


// string food = "Pizza";
// string map="nfk";


// cout << &food <<endl ;// Outputs 0x6dfed4
// cout << &map  <<endl ;



string food = "Pizza"; // A food variable of type string
string* ptr= &food;


cout << food <<endl;
cout <<&food <<endl;
cout <<ptr <<endl;
cout <<*ptr <<endl;

// Change the value of the pointer
*ptr = "Hamburger";

// Output the new value of the pointer (Hamburger)
cout << *ptr << "\n";

// Output the new value of the food variable (Hamburger)
cout << food << "\n";





}
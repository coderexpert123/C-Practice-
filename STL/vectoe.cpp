#include <iostream>
#include <array>
using namespace std;

//main method

int main(){

   

    array<int , 4> ar={1,2,4,3};

    int size=ar.size();
    cout<<size;


    for(int i=0;i<size;i++){

     cout << ar[i] <<endl;
    


  

    }
   


   //element at 2nd index
   cout << "Element at 2nd index is : "<<ar.at(2);

    return 0;


} 

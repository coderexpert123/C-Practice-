#include <iostream>
#include <array>
#include <vector>
using namespace std;

//main method

int main(){


vector<int> v;
cout << "Vapactiy of vector is  : " << v.capacity() <<endl;
v.push_back(2);
cout << "Vapactiy of vector is  : " << v.capacity() <<endl;
v.push_back(3);
cout << "Vapactiy of vector is  : " << v.capacity() <<endl;
v.push_back(4);
cout << "Vapactiy of vector is  : " << v.capacity() <<endl;
cout << "Size of vector is  : " << v.size() <<endl;
cout << "Index at 2 of vector is  : " << v.at(2) <<endl;

cout << "Front of vector is  : " << v.front() <<endl;
cout << "Back/last of vector is  : " <<v.back() <<endl;
    return 0;

//Push back 
//Pop Back 
//Clear 

}
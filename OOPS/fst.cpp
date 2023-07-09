#include <fstream>
#include <iostream>
using namespace std;


//main method 

int main(){

    ofstream MyFile("filename.txt");

    MyFile << "Hello how r uh !!!!";

    MyFile.close ();

}
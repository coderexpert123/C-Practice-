#include <iostream>
using namespace std;


void show();
void myfun(string a);
void df(string a);


int main() {
  //calling my function 
  show();
  show();
  show();

  myfun("Mohan");
  myfun("Rohan");
  df("INDIA");


  return 0;
}

//my custom function  || void 

void show(){

    cout <<"Hello boys printing ...." <<endl;

}

// function with paramter

void myfun(string a){

    cout << a <<endl;


}

//Deefualt paramter vlaue 


void df(string a ="USA"){


cout << a << endl;


}
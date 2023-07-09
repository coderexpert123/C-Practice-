#include <iostream>
using namespace std;

int myfun(int a,int b);



int main() {
  

int res=myfun(10,20);
cout << res;

  return 0;
}


//my function 

int myfun(int a , int b){


    int c=a+b;

    return c;


}
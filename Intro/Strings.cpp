#include <iostream>
using namespace std;
int main() {

 string fn="N";
 string sn="k";
//concatation
//cout<<fn+" "+sn;
//append function 
 cout<<fn.append(sn);
//Number and String 
string p1="10";
string p2="20";

cout << p1+p2 << endl;


//length of String 
//length and size are same you can use any one 
string fl="mohanlal";
cout << fl.length() <<endl;
cout << fl.size() <<endl;

//acessing the String 

string as="soanalal";

int pq=as[0];

cout << pq <<endl;

//Specail charcter 
string txt = "The character \\ is called backslash.";

cout << txt;


// USe input string 
string fullName;
cout << "Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName;

//Omitting the Namepscae 
string greeting="mffh";
std::cout << greeting;

  return 0;
}
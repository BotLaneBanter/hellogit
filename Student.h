#include <iostream>
#include <string>
#include <stdlib.h>
 
using namespace std;

class Student{

private:

string name;
int idNumber;

public:

Student(){

name = "";
idNumber = 0;

}

Student(string n, int idNum){

name = n;
idNumber = idNum;

}

void setName(string n){

name = n;

}

void setidNumber(int idNum){

idNumber = idNum;

}

string getName(){

return name;

}

int getidNumber(){

return idNumber;

}

};


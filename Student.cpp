#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include "Student.h"

using namespace std;

int main(){

string name = "";
int idNumber = 0;

string message = "Please enter the name(s) and id numbers of 4 students";
string info1 = "Name: ";
string info2 = "ID Number: ";

vector <Student> studVector;

cout << message << endl;

for(int = 0; i <= 3;){

cout << info1;

cin >> name;

cout << endl;

cout << info2;

cin >> idNumber;

Student human(name, idNumber);

studVector.push_back(human);

i++;

}

for(int i = 0; i <= 3;){

//Displays the names and id numbers contained in the objects stored in the vector

cout << endl;

cout << "- - - - - - - - - - - - - - - - - - - -" << endl:

cout << studVector[i].getName() << endl;

cout << studVector[i].getidNumber() << endl;

cout << "- - - - - - - - - - - - - - - - - - - -" << endl;

i++;

}

cout << "Bye-Bye!!" << endl;

system("pause");

return 0;

}


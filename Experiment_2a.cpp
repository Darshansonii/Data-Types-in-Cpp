//Name-Darshan Soni
//PRN-24070123034
//Exp2

//C++ Program to study various data types

#include <iostream>
using namespace std;

int main() {
    
    int age = 20;
    cout<<"Integer (age): "<<age<<endl;
    float height =5.9f;
    cout<<"Float (height): "<<height<<endl;

    double weight=68.75;
    cout<<"Double (weight): " <<weight<<endl;

    char grade ='A';
    cout <<"Character (grade): "<<grade<<endl;

    bool isPassed = true;
    cout <<"Boolean (isPassed): " << isPassed << endl;

    cout<<"\nSizes of Data Types (in bytes):" << endl;
    cout<<"int: " << sizeof(int) << endl;
    cout<<"float: " << sizeof(float) << endl;
    cout<<"double: " << sizeof(double) << endl;
    cout<<"char: " << sizeof(char) << endl;
    cout<<"bool: " << sizeof(bool) << endl;

    return 0;
}

/*
Output
Integer (age): 20
Float (height): 5.9
Double (weight): 68.75
Character (grade): A
Boolean (isPassed): 1

Sizes of Data Types (in bytes):
int: 4
float: 4
double: 8
char: 1
bool: 1
*/
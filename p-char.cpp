#include <iostream>
using namespace std;

int main (){
    char sentence[] = "My name is anant";    
    char *p = sentence;

    cout << p << endl; // whole array is printed
    cout << *p << endl; // First latter of an array is printed
    cout << &p << endl; // address is printed 
    
    return 0;
}

/*
My name is anant
M
0xcd0afff898
*/ 
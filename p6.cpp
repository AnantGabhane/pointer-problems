#include <iostream>
using namespace std;

int main (){
    char ch[5] = "abcd";
    char *p = ch;
    cout << *p << endl; // a
    cout << *ch << endl; // a
    cout << p << endl; // abcd

    return 0;
}
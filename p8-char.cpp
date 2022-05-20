#include <iostream>
using namespace std;

int main (){
    char ch[5] = "abcd";
    char *ptr = ch;
    cout << ptr << endl; // abcd
    return 0;
}
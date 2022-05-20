#include <iostream>
using namespace std;

int main (){
    int a =5;
    int *p = &a;
    cout << sizeof(p) << endl;
    
    return 0;
}
// o/p: 8 size of a pointer is 8 bytes
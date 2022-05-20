#include <iostream>
using namespace std;

int functions(int *p){
    *p = *p +1;
}

int main (){
    int a =5;
    int *p = &a;

    cout << "Before " << p << endl;
    cout << "Before " << *p << endl;
    functions(p);
    cout << "After " << p << endl;
    cout << "After " << *p << endl;

    return 0;
}


/*
output:

Before 0xead37ffa04
Before 5
After 0xead37ffa04 
After 6

*/
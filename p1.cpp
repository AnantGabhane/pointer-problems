// #include <iostream>
// using namespace std;

// int main (){


//     return 0;
// }


#include <iostream>
using namespace std;

int main (){
    int a =5;
    int *p = &a;

    // prints 5
    cout << a << endl;
    // prints address at which a is stored 0x346f5ff70c
    cout << &a << endl;    
    //cout << *a << endl;
        // prints address at which a is stored 0x346f5ff70c
    cout <<p << endl;  

        // prints address at which a is stored 0x346f5ff700  
    cout << &p << endl;

    // prints 5    
    cout << *p << endl;    
    return 0;
}
#include <iostream>
using namespace std;

int main (){
    int arr[] = {1,2,3};
    cout <<  *arr << endl; // 1
    cout <<  arr << endl; // address printed
    cout <<  &arr << endl;
    cout <<  &arr[0] << endl;
    
    return 0;
}

/*
o/p: 

1
0x15dddffc74
0x15dddffc74
0x15dddffc74
*/
#include <iostream>
using namespace std;

int main (){
    int arr[] = {1,2,3,4,5};

    cout <<  *arr << endl; // arr[0] or 0[arr]
    cout <<  *(arr + 1) << endl;  // arr[1] or 1[arr]
    cout <<  *(arr + 2) << endl; // arr[2] or 2[arr]
    cout <<  *(arr + 3) << endl; 
    cout <<  *(arr + 4) << endl; 



    return 0;
}
/*
op:
1
2
3
4
5

*/
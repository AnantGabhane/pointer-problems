#include <iostream>
using namespace std;

int func(int arr[]){
    *(arr + 2) = *(arr + 2) +1;
}

int main (){
    int arr[] = {3,4,5};
    func(arr);
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    return 0;
}

/*
3
4
6
*/
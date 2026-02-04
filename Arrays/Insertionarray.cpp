#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 10;
    int index = 3;
    int num = 7;

    for (int i = size; i > index; i--) {
            arr[i] = arr[i - 1];
        }
    
    arr[index] = num;

    for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
}
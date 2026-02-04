#include<iostream>
using namespace std;

int main() {

    int tar = 85;
    int arr[] = {30, 60, 70, 85, 88, 90, 99};
    
    int n = 7;
    int left = 0; //first element
    int right = n-1; //last element

    while (left < right) {
        int mid = (left + right)/2;

        if(arr[mid] == tar) {
            cout << arr[mid];
            break;
        } else if (tar > arr[mid]) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
}
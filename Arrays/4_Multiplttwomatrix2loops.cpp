#include <iostream>

using namespace std;

int main() {
    int arr1[1][2] = {{1,2}};
    int arr2[2][2] = {{5,9} , {3,6}};
    int res[1][2] = {0};

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 2; j++) {
            res [i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 2; j++) {
    cout << res[i][j]<<" ";
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;

int twoSum(int arr[], int n, int target) {

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] + arr[j] == target) {
                cout << "Indices: " << i << ", " << j << endl;
                return 1;
            }

        }
    }
}

int main() {
    int arr[] = {21, 7, 11, 2};
    
    int target = 9;
    int n = sizeof(arr) / sizeof(arr[0]);

    twoSum(arr, n, target);

}
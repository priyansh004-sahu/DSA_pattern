#include<bits/stdc++.h>
using namespace std;



vector<int> sum_two(int arr[], int n, int target) {
    int i = 0;
    int j = n-1;
    while(i<j) {
        int sum = arr[i] + arr[j];
        if(sum == target) {
           return {i + 1, j + 1};
        }
        if(sum < target) {
            i++;
        } else {
            j--;
        }
    }
    return {};
}

int main() {
    int numbers[] = {2,7,11,15}, target = 9;

    int n = sizeof(numbers) / sizeof(numbers[0]);
    vector<int> result = sum_two(numbers, n, target);
    cout << result[0] << "," << result[1] << endl;
    return 0;
}

// 26. Remove Duplicates from Sorted Array

#include <bits/stdc++.h>
using namespace std;

int Remove_duplicate(vector<int>& nums) {
    int n = nums.size();
   if(n == 0) return 0;
   int i = 0;
   for(int j=1; j<n; j++) {
    if(nums[i] != nums[j]) {
        i++;
        nums[i] = nums[j];
    }
   }
   return i + 1;
}

int main() {
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k = Remove_duplicate(nums);
    cout << "The array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}   



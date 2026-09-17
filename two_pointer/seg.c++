#include<bits/stdc++.h>
using namespace std;

// vector<int> segregate0and1(vector<int> arr) {
    
//    for(int i = 0; i<arr.size(); i++) {
//          for(int j = i+1; j<arr.size(); j++) {
//                 if(arr[i] > arr[j]) {
//                  swap(arr[i], arr[j]);
//                 }
//           }
//      }
//      return arr;
// }

vector<int> segregate0and1(vector<int> arr) {
    int n = arr.size();
    int i = 0, j = n - 1;

    while(i < j) {
        if(arr[i] == 1 && arr[j] == 0) {
            swap(arr[i], arr[j]);
        }
        if(arr[i] == 0) {
            i++;
        }
        if(arr[j] == 1) {
            j--;
        }
    }
    return arr;
}

int main() {
    vector<int> arr = {0, 0, 0, 1, 1, 0, 1, 0, 1, 0};
   cout << "Array after segregation: ";
   for (int x : segregate0and1(arr)) {
       cout << x << " ";
   }


   cout << endl;
}




// Time: O(n)
// Space: O(1)
// In-place: ✅ No extra array
// Pattern: Two Pointers ✅
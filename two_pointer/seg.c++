#include<bits/stdc++.h>
using namespace std;

vector<int> segregate0and1(vector<int> arr) {
    
   for(int i = 0; i<arr.size(); i++) {
         for(int j = i+1; j<arr.size(); j++) {
                if(arr[i] > arr[j]) {
                 swap(arr[i], arr[j]);
                }
          }
     }
     return arr;
}

int main() {
    vector<int> arr = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
   cout << "Array after segregation: ";
   for (int x : segregate0and1(arr)) {
       cout << x << " ";
   }
   cout << endl;
}
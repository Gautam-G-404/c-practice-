//smallest array element
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int i, j, m;

    vector<int> a = {2, 5, 8, 3, 0};
    int n = a.size();

    for (i = 0; i <= n-1 ; i++) {
        for (j = i + 1; j <= n-1 ; j++) {
            if (a[i] > a[j]) {
                swap(a[j], a[i]);
            }
        }
    }

    for (i = 0; i <= n - 1; i++) {
        cout << a[i];
    }

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int sortArr(vector<int>& arr) {
//     sort(arr.begin(),arr.end());
//     return arr[0];
// }
 
// int main() {
//     vector<int> arr1 = {2,5,1,3,0};
//     vector<int> arr2 = {8,10,5,7,9};
   
//     cout<<"The smallest element in the array is: "<<sortArr(arr1)<<endl;
// }
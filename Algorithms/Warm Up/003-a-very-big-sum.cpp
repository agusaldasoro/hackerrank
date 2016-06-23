/*You are given an array of integers of size . You need to print the sum of the elements in the array, keeping in mind that some of those integers may be quite large.

Input

The first line of the input consists of an integer . The next line contains  space-separated integers contained in the array.

Constraints 
 

Sample Input 
5
1000000001 1000000002 1000000003 1000000004 1000000005

Output 
Print a single value equal to the sum of the elements in the array. In the above sample, you would print .

Note: The range of the 32-bit integer is .
When we add several integer values, the resulting sum might exceed the above range. You might need to use long long int in C/C++ or long data type in Java to store such sums.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int aVeryBigSum(vector<int> arr) {
    long long int sum = 0;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++) {
       cin >> arr[arr_i];
    }
    long long int sum = aVeryBigSum(arr);
    cout << sum;
    return 0;
}
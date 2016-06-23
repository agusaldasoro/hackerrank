/*Given an array of integers, calculate which fraction of its elements are positive, which fraction of its elements are negative, and which fraction of its elements are zeroes, respectively. Print the decimal value of each fraction on a new line.

Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to  are acceptable.

Input Format

The first line contains an integer, , denoting the size of the array. 
The second line contains  space-separated integers describing an array of numbers .

Output Format

You must print the following  lines:

A decimal representing of the fraction of positive numbers in the array.
A decimal representing of the fraction of negative numbers in the array.
A decimal representing of the fraction of zeroes in the array.
Sample Input

6
-4 3 -9 0 4 1         
Sample Output

0.500000
0.333333
0.166667
Explanation

There are  positive numbers,  negative numbers, and  zero in the array. 
The respective fractions of positive numbers, negative numbers and zeroes are ,  and , respectively.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<float> plusMinus(vector<int> arr){
    float positiveCount = 0;
    float negativeCount = 0;
    float zeroCount = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i]>0){
            positiveCount++;
        }else if(arr[i]<0) {
            negativeCount++;
        }else {
            zeroCount++;
        }
    }
    vector<float> res(3);
    res [0] = positiveCount/arr.size();
    res [1] = negativeCount/arr.size();
    res [2] = zeroCount/arr.size();
    return res;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    vector<float> res = plusMinus(arr);
    for(int i=0; i<3; i++){
        cout << res[i] << endl;
    }
    return 0;
}

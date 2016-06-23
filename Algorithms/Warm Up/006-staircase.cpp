/*Consider a staircase of size :

   #
  ##
 ###
####
Observe that its base and height are both equal to , and the image is drawn using # symbols and spaces. The last line is not preceded by any spaces.

Write a program that prints a staircase of size .

Input Format

A single integer, , denoting the size of the staircase.

Output Format

Print a staircase of size  using # symbols and spaces.

Note: The last line must have  spaces in it.

Sample Input

6 
Sample Output

     #
    ##
   ###
  ####
 #####
######
Explanation

The staircase is right-aligned, composed of # symbols and spaces, and has a height and width of .*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void staircase(int n){
    for(int i=0; i<n; i++) {
        int j = 0;
        while(j < n-1-i){
            cout << " " ;
            j++;
        }
        for(int k=n-1-i; k<n; k++){
            cout << "#";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    staircase(n);
    return 0;
}

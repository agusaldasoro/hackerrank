/*
There are  strings. Each string's length is no more than  characters. There are also  queries. For each query, you are given a string, and you need to find out how many times this string occurred previously.

Input Format
The first line contains , the number of strings.
The next  lines each contain a string.
The nd line contains , the number of queries.
The following  lines each contain a query string.

Sample Input
4
aba
baba
aba
xzxb
3
aba
xzxb
ab

Sample Output
2
1
0

Explanation
Here, "aba" occurs twice, in the first and third string. The string "xzxb" occurs once in the fourth string, and "ab" does not occur at all.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n, q;

    cin >> n;
    vector<string> words(n);
    for (size_t i = 0; i < n; i++) {
      cin >>words[i];
    }
    cin >> q;
    vector<string> queries(q);
    for (size_t i = 0; i < q; i++) {
      cin >>queries[i];
    }

    string query, word;
    int counter;

    for(int i = 0; i < q; i++){
        counter = 0;
        query = queries[i];
        for(int j = 0; j < n; j++){
            word = words[j];
            if(word == query){
                counter++;
            }
        }
        cout << counter << endl;
    }


    return 0;
}

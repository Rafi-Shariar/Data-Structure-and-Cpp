#include <iostream>
#include <string>
#include <map>
#include<bits/stdc++.h>
using namespace std;

void previous_index(const vector<string>& lst) {
    map<string, int> mp;
    for (int i = 0; i < lst.size(); i++) {
        if (mp.find(lst[i]) == mp.end()) {
            // String not found in map
            cout << "-1 ";
        } else {
            // String found in map
            cout << mp[lst[i]] << " ";
        }
        mp[lst[i]] = i;  // Update index of current string in map
    }
    cout << endl;
}

int main() {
   
    vector<string>lst = {"apple","banana","abcd","apple","abcd","top","abcd","abcd","apple","banana"};
    previous_index(lst);
    return 0;
}
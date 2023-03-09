#include <bits/stdc++.h>
using namespace std;

void deleteZero(list<int> &l) {
    for (auto i = l.begin(); i != l.end(); ) {
        if (*i == 0) {
            i = l.erase(i);
        } else {
            ++i;
        }
    }
}

int main() {
    list<int> l;

    l.push_back(0);
    l.push_back(2);
    l.push_back(0);
    l.push_back(0);
    l.push_back(5);

    cout << "Before deletion: ";
    for (auto i = l.begin(); i != l.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    deleteZero(l);

    cout << "After deletion: ";
    for (auto i = l.begin(); i != l.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    return 0;
}
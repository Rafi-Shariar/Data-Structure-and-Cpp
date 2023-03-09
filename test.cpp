#include <iostream>
#include <string>

using namespace std;

int main() {
    string input_string;
    getline(cin, input_string);

    string target_string = "Ratul";
    
    size_t found = input_string.find(target_string);
    
    if (found != string::npos) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
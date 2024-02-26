#include <iostream>
#include <algorithm>

using namespace std;

bool rearrangeStrings(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

int main() {
    string s, t; 
    cin >> s >> t;
    
    if (rearrangeStrings(s, t)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}
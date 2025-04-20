#include <bits/stdc++.h>

using namespace std;

inline bool isValid(int number);

int main() {
    int N;
    cin >> N;
    
    int i = 665;
    while (N)
        if (isValid(++i))
            N--;
        
    cout << i;
    
    return 0;
}

inline bool isValid(int number) {
    string nstr = to_string(number);
    return nstr.find("666") != string::npos;
}
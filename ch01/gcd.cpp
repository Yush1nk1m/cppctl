#include <bits/stdc++.h>

using namespace std;

inline int gcd(int a, int b);

int main() {
    int a, b;

    cout << "두 정수 입력: ";
    cin >> a >> b;

    cout << "최대공약수: " << gcd(a, b);

    return 0;
}

inline int gcd(int a, int b) {
    int temp;
    if (a < b) {
        temp = a; a = b; b = temp;
    }

    temp = a % b;
    while (temp) {
        a = b;
        b = temp;
        temp = a % b;
    }

    return b;
}
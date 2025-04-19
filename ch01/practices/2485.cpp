#include <bits/stdc++.h>

using namespace std;

int N, s, e, prv, cur, d;

int main() {
    cin >> N;

    cin >> prv >> cur;
    s = prv;
    d = cur - prv;

    for (int _ = 0; _ < N - 2; _++) {
        prv = cur;
        cin >> cur;
        d = gcd(d, cur - prv);
    }
    e = cur;

    cout << (e - s) / d - N + 1;

    return 0;
}
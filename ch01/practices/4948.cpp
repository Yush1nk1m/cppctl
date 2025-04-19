#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> p;

inline void findPrimeNumbers();

int main() {
    findPrimeNumbers();

    while (cin >> n) {
        if (!n) break;
        cout << upper_bound(p.begin(), p.end(), n * 2) - lower_bound(p.begin(), p.end(), n + 1) << '\n';
    }
}

inline void findPrimeNumbers() {
    vector<bool> table(123456 * 2 + 1, true);

    for (int n = 2; n < table.size(); n++)
        if (table[n]) {
            p.push_back(n);
            for (int m = n * 2; m < table.size(); m += n)
                table[m] = false;
        }
}
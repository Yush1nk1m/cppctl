#include <bits/stdc++.h>
using namespace std;

inline void naive(int to);
inline bool isPrime(int number);
inline void eratos(int to);

int main() {
    cout << "소수 판별 알고리즘 비교" << endl;
    cout << "수 입력(1부터 입력한 수까지 판별): ";

    int to;
    cin >> to; 

    auto start = chrono::steady_clock::now();
    naive(to);
    auto end = chrono::steady_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << "Naive algorithm: " << duration.count() << " ms" << endl;
    
    start = chrono::steady_clock::now();
    eratos(to);
    end = chrono::steady_clock::now();
    duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << "Sieve of Eratosthenes algorithm: " << duration.count() << " ms" << endl;

    return 0;
}

inline void naive(int to) {
    for (int n = 1; n <= to; n++)
        isPrime(n);
}

inline bool isPrime(int number) {
    for (int d = 2; d <= number / 2; d++)
        if (number % d == 0)
            return false;
    return true;
}

inline void eratos(int to) {
    vector<bool> table(to + 1, true);

    table[0] = table[1] = false;
    for (int n = 2; n <= to; n++)
        if (table[n])
            for (int m = n * 2; m <= to; m += n)
                table[m] = false;
    
    for (int n = 2; n <= to; n++)
        if (table[n])
            continue;   // do something
}
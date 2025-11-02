// Problem 001 - A+B Problem
// Reads two integers from standard input and prints their sum.
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    if (!(cin >> a >> b)) {
        return 0; // No valid input; exit gracefully
    }
    long long s = a + b;
    cout << s;
    return 0;
}


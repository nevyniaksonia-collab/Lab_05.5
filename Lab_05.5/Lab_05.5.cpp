#include <iostream>
#include <cmath>

using namespace std;

int d1 = 0;
int lc = 0;
int a, c;

int g(int m) {
    int value = (a - m + c) % 10;

    if (value < 0) {
        value += 10;
        return value;
    }
    else {
        return value;
    }
}

long long f_recursive(int m, int currentDepth) {
    lc++;

    if (currentDepth > d1) {
        d1 = currentDepth;
    }

    if (m >= 0 && m <= 9) {
        return m;
    }
    else {
        int gm = g(m);
        long long result = gm * f_recursive(m - 1 - gm, currentDepth + 1) + m;
        return result;
    }
}

long long f(int m) {
    if (m >= 0 && m <= 9) {
        lc = 1;
        d1 = 0;
        return m;
    }
    else {
        return f_recursive(m, 1);
    }
}

int main() {
    int m;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter c: ";
    cin >> c;

    cout << "Enter m: ";
    cin >> m;

    long long result = f(m);

    cout << "Result f(" << m << ") = " << result << endl;
    cout << "Recursion Depth: " << d1 << endl;
    cout << "Number of Calls (Recursion Level): " << lc << endl;

    return 0;
}
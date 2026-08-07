#include <bits/stdc++.h>

using namespace std;

long long power(long long b, long long e) {
    long long r = 1;
    long long m = 1e9 + 7;
    b %= m;
    while (e > 0) {
        if (e % 2 == 1) {
            r = (r * b) % m;
        }
        b = (b * b) % m;
        e /= 2;
    }
    return r;
}

int sched(int n_i, int n_p) {
    long long m = 1e9 + 7;

    if (n_p == 1 && n_i > 1) {
        return 0;
    }
    
    if (n_i == 1) {
        return n_p;
    }

    long long f = n_p;
    long long b = n_p - 1;
    long long e = n_i - 1;

    long long s = power(b, e);

    long long t = (f * s) % m;

    return static_cast<int>(t);
}

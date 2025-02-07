// Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

class BigInteger {
private:
    vi no;
    int size;

public:
    // Constructor
    BigInteger(int sz) {
        size = sz;
        no = vi(sz, 0);
    }

    // Getter for size
    int getSize() const {
        return size;
    }

    // Getter for no
    const vi &getNo() const {
        return no;
    }

    // Setter for size
    void setSize(int sz) {
        size = sz;
    }

    // Setter for no
    void setNo(int index, int value) {
        no[index] = value;
    }

    // Overloading operator<< for easy printing
    friend ostream &operator<<(ostream &os, const BigInteger &bigInt) {
        bool leadingZero = true;
        for (int i = 0; i < bigInt.size; i++) {
            if (bigInt.no[i] != 0) leadingZero = false;
            if (!leadingZero) os << bigInt.no[i];
        }
        if (leadingZero) os << "0"; // Handle case where all digits are zero
        return os;
    }
};

// Addition of two BigInteger numbers
BigInteger add(const BigInteger &a, const BigInteger &b) {
    int n1 = a.getSize(), n2 = b.getSize();
    int maxSize = max(n1, n2) + 1;
    BigInteger result(maxSize);

    int carry = 0;
    for (int i = 0; i < maxSize; i++) {
        int digitA = (n1 - 1 - i >= 0) ? a.getNo()[n1 - 1 - i] : 0;
        int digitB = (n2 - 1 - i >= 0) ? b.getNo()[n2 - 1 - i] : 0;
        int sum = digitA + digitB + carry;
        result.setNo(maxSize - 1 - i, sum % 10);
        carry = sum / 10;
    }

    // Adjust size to remove leading zeros
    int newSize = maxSize;
    while (newSize > 1 && result.getNo()[0] == 0) {
        result.setNo(0, 0);
        newSize--;
    }
    result.setSize(newSize);

    return result;
}

// Subtraction of two BigInteger numbers (a >= b is assumed)
BigInteger subtract(const BigInteger &a, const BigInteger &b) {
    int n1 = a.getSize(), n2 = b.getSize();
    BigInteger result(n1);

    int borrow = 0;
    for (int i = 0; i < n1; i++) {
        int digitA = a.getNo()[n1 - 1 - i];
        int digitB = (n2 - 1 - i >= 0) ? b.getNo()[n2 - 1 - i] : 0;
        int sub = digitA - digitB - borrow;
        if (sub < 0) {
            sub += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result.setNo(n1 - 1 - i, sub);
    }

    // Adjust size to remove leading zeros
    int newSize = n1;
    while (newSize > 1 && result.getNo()[0] == 0) {
        result.setNo(0, 0);
        newSize--;
    }
    result.setSize(newSize);

    return result;
}

// Multiplication of two BigInteger numbers
BigInteger mult(const BigInteger &a, const BigInteger &b) {
    int n1 = a.getSize();
    int n2 = b.getSize();

    if (n1 < n2) return mult(b, a);

    BigInteger ans(n1 + n2); // Maximum possible size of the result

    for (int i = n2 - 1; i >= 0; i--) {
        int carry = 0;
        for (int j = n1 - 1; j >= 0; j--) {
            int mul = b.getNo()[i] * a.getNo()[j] + carry + ans.getNo()[i + j + 1];
            carry = mul / 10;
            ans.setNo(i + j + 1, mul % 10);
        }
        if (carry > 0) {
            ans.setNo(i, ans.getNo()[i] + carry);
        }
    }

    // Adjust size of the result
    int newSize = n1 + n2;
    while (newSize > 1 && ans.getNo()[0] == 0) {
        ans.setNo(0, 0);
        newSize--;
    }
    ans.setSize(newSize);

    return ans;
}

// Solve function
void solve() {
    string s1, s2;
    cin >> s1 >> s2;

    int n1 = s1.length(), n2 = s2.length();
    BigInteger num1(n1), num2(n2);

    for (int i = 0; i < n1; i++) num1.setNo(i, s1[i] - '0');
    for (int i = 0; i < n2; i++) num2.setNo(i, s2[i] - '0');

    cout<<
}

// Main function
int main() {
    fast;
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

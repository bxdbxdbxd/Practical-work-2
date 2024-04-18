#include <iostream>

using namespace std;

int greatest_com_div(int a, int b);
int funMod(int a, int x, int p);

int main() {
    int a, x, p;
    int res_mod = 0;
    cout << "Enter: a, x, p" << endl;
    cin >> a >> x >> p;
    if (greatest_com_div(a, p) == 1 && a >= 1) {
        cout << funMod(a, x, p);
    }
    else {
        cout << "Uncorrect";
    }
    return 0;
}

int greatest_com_div(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int funMod(int a, int x, int p) {
    int pfi = p-1;
    int st = x % pfi;
    int result = 1;
    a = a % p;
    for (int i = 1; i <= st; i++) {
        result *= a;
        cout << "--- *= a " << result << endl;
        result %= p;
        cout << "--- %= p " << result << endl;
    }
    return result;
}
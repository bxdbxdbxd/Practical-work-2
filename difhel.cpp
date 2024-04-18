#include <iostream>

using namespace std;

int funMod(int a, int x, int p);
int greatest_com_div(int a, int b);

int main() {
    int g, p;
    cout << "Enter g, p ";
    cin >> g >> p;
    int private_a = 6, private_b = 9;
    if (greatest_com_div(g, private_a) == 1 && greatest_com_div(g, private_b) == 1 && g >= 1) {
        int pub_a = funMod(g, private_a, p), pub_b = funMod(g, private_b, p);
        cout << "Public person1 " << pub_a << "\nPublic person2 " << pub_b << endl;
        cout << "Key person1 " << funMod(pub_b, private_a, p) << "\nKey person2 " << funMod(pub_a, private_b, p);
    }
    else {
        cout << "Uncorrect";
    }
    return 0;
}

int funMod(int a, int x, int p) {
    int pfi = p-1;
    int st = x % pfi;
    int result = 1;
    a = a % p;
    for (int i = 1; i <= st; i++) {
        result *= a;
        result %= p;
    }
    return result;
}

int greatest_com_div(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

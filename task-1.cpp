#include <iostream>
#include <cmath>

using namespace std;

bool check_for_prime_num(int num);
int greatest_com_div(int a, int b);


int main(){
    int p, a, x;
    cout << "Enter a, x, p\n";
    cin >> a >> x >> p;
    if (check_for_prime_num(p) && check_for_prime_num(a) && greatest_com_div(a, p) == 1) {
        pow(a, x) == 1 % p;
    }
    else {
        cout << "Uncorrect";
    }
    return 0;
}

bool check_for_prime_num(int num) {
    for (int i = 2; i < sqrt(num) + 1; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int greatest_com_div(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
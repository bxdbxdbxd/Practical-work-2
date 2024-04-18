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
//?????
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


/*

pfi = p-1
st = st%fpi - 
условия т Ферма

a = a % p

3^15 mod 5

int res;
for (inti = 0; i < st+1; i++) {
    res *= a;
    rez %= p;
}



Эйлер f(x) = x - 1

f(x1 ^ a * x2 ^a2 ...) = x1^a-1 * x2^a2-1 (x1 - 1)(x2 - 1)

a^f(x) = 1 mod x

ф Ферма

a and p взаимо простые

a^p-1 == 1 mod p



*/
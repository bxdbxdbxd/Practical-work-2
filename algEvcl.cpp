#include <iostream>


using namespace std;

//c*d mod m = 1 

void del_alg(int first_num, int second_num);

int main() {
    int a, b;
    cin >> a >> b;
    del_alg(a, b);
    return 0;
}

void del_alg(int first_num, int second_num) {
    int whole_part = first_num / second_num;
    int div_rem = first_num % second_num;
    cout << first_num << "\t" << second_num << "\t" << whole_part << "\t" << div_rem << endl;
    if (div_rem != 0) {
        del_alg(whole_part, div_rem);
    }
}
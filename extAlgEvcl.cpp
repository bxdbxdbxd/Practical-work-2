#include <iostream>
using namespace std;

//Расширенный алгоритм Евклида

void del_alg(int first_num, int second_num, int x0, int y0, int x, int y, int count);

int main() {
    int a, b, count = 1;
    int x0 = 1, y0 = 0, x = 0, y = 1;
    cin >> a >> b;
    cout << a << "\t" << b << endl;
    del_alg(a, b, x0, y0, x, y, count);
    return 0;
}

void del_alg(int first_num, int second_num, int x0, int y0, int x, int y, int count) {
    int whole_part = first_num / second_num;
    int div_rem = first_num % second_num;
    if (count % 2 != 0) {
        x0 = x0 - whole_part * x;
        y0 = y0 - whole_part * y;
        cout << whole_part << "\t" << div_rem << "\t" << x0 << "\t" << y0 << endl;
    }
    else {
        x = x - whole_part * x0;
        y = y - whole_part * y0;
        cout << whole_part << "\t" << div_rem << "\t" << x << "\t" << y << endl;
    }
    count++;
    if (div_rem != 0) {
        del_alg(second_num, div_rem, x0, y0, x, y, count);
    }
}

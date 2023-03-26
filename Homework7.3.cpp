#include <iostream>

using namespace std;

bool isSquare(int n)
{
    if (0 == n) return false;
    int i = 1, m;
    do m = i * i; while (++i, m < n);
    return m == n ? true : false;
}

void isSquare(int n, bool* result) {
    *result = isSquare(n);
}

void isSquare(int n, bool& result) {
    result = isSquare(n);
}


int main()
{
    setlocale(0, "rus");
    int a, b, c;

    cout << "Введите три натуральных числа: " << endl;
    cin >> a >> b >> c;

    int k = 0;

    if (isSquare(a))
        k++;

    bool resb;
    isSquare(b, &resb);
    if (resb)
        k++;

    bool resc;
    isSquare(c, resc);
    if (resc)
        k++;

    if (k == 1)
        cout << k << " число из 3 является квадратом другого числа";
    else
        cout << k << " числа из 3 являются квадратом других чисел";
}
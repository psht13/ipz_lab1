#include <iostream>

using namespace std;
int func(int n) {
    if (n <= 1) {
        return n;
    }
    return func(n - 1) + func(n - 2);
}
int main() {
    int n; //номер числа в ряду Фібоначі, яке ми шукаємо
    cout << "Введіть номер числа ряду Фібоначі, яке ми шукаємо." << endl;
    cin >> n; // ввід числа
    
    if (n > 0) {
        int res = func(n);
        cout << "Число ряду Фібоначі, яке відповідає індексу " << n << " - " << func(n);
    }
    else {
        cout << "Введіть невід'ємне число";
    }
    return 0; 
}
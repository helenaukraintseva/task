#include <iostream>

using namespace std;

int main() {
    int year;

    // Ввод года от пользователя
    cout << "Введите год: ";
    cin >> year;

    // Проверка на високосный год
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " - високосный год" << endl;
    } else {
        cout << year << " - не високосный год" << endl;
    }

    return 0;
}

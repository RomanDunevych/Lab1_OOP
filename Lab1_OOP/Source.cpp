#include "FloatRange.h"
#include <iostream>
using namespace std;

// Функція для створення об’єкта FloatRange
FloatRange makeFloatRange(double left, double right) {
    FloatRange range;
    if (!range.Init(left, right)) {
        cout << "Помилка iнiцiалiзацiї дiапазону!" << endl;
    }
    return range;
}

int main() {
    setlocale(LC_ALL, "UKR");
    FloatRange range;
    range.Read();
    range.Display();

    // Перевірка входження числа
    double value;
    cout << "Введiть число для перевiрки входження в дiапазон: ";
    cin >> value;
    if (range.rangeCheck(value)) {
        cout << "Число входить в дiапазон." << endl;
    }
    else {
        cout << "Число не входить в дiапазон." << endl;
    }

    return 0;
}

#include "FloatRange.h"
#include <iostream>
using namespace std;

// Метод для ініціалізації з перевіркою
bool FloatRange::Init(double left, double right) {
    if (left < right) {
        first = left;
        second = right;
        return true;
    }
    else {
        cout << "Помилка: лiва межа повинна бути меншою за праву!" << endl;
        return false;
    }
}

// Метод для перевірки входження значення в діапазон
bool FloatRange::rangeCheck(double value) const {
    return value > first && value < second;
}

// Введення даних з клавіатури
void FloatRange::Read() {
    double left, right;
    do {
        cout << "Введiть лiву межу (first): ";
        cin >> left;
        cout << "Введiть праву межу (second): ";
        cin >> right;
    } while (!Init(left, right));
}

// Виведення діапазону
void FloatRange::Display() const {
    cout << "Дiапазон: [" << first << ", " << second << "]" << endl;
}

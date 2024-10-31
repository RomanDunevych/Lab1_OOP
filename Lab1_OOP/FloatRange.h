#pragma once

class FloatRange {
private:
    double first;
    double second;

public:
    // Методи доступу
    double getFirst() const { return first; }
    double getSecond() const { return second; }
    void setFirst(double value) { first = value; }
    void setSecond(double value) { second = value; }

    // Ініціалізація з перевіркою
    bool Init(double left, double right);

    // Метод для перевірки входження числа в діапазон
    bool rangeCheck(double value) const;

    // Введення та виведення значень
    void Read();
    void Display() const;
};

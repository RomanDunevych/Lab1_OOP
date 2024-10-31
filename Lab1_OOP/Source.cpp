#include "FloatRange.h"
#include <iostream>
using namespace std;

// ������� ��� ��������� �ᒺ��� FloatRange
FloatRange makeFloatRange(double left, double right) {
    FloatRange range;
    if (!range.Init(left, right)) {
        cout << "������� i�i�i��i���i� �i�������!" << endl;
    }
    return range;
}

int main() {
    setlocale(LC_ALL, "UKR");
    FloatRange range;
    range.Read();
    range.Display();

    // �������� ��������� �����
    double value;
    cout << "����i�� ����� ��� �����i��� ��������� � �i������: ";
    cin >> value;
    if (range.rangeCheck(value)) {
        cout << "����� ������� � �i������." << endl;
    }
    else {
        cout << "����� �� ������� � �i������." << endl;
    }

    return 0;
}

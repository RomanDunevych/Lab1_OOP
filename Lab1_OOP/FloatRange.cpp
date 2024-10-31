#include "FloatRange.h"
#include <iostream>
using namespace std;

// ����� ��� ����������� � ���������
bool FloatRange::Init(double left, double right) {
    if (left < right) {
        first = left;
        second = right;
        return true;
    }
    else {
        cout << "�������: �i�� ���� ������� ���� ������ �� �����!" << endl;
        return false;
    }
}

// ����� ��� �������� ��������� �������� � �������
bool FloatRange::rangeCheck(double value) const {
    return value > first && value < second;
}

// �������� ����� � ���������
void FloatRange::Read() {
    double left, right;
    do {
        cout << "����i�� �i�� ���� (first): ";
        cin >> left;
        cout << "����i�� ����� ���� (second): ";
        cin >> right;
    } while (!Init(left, right));
}

// ��������� ��������
void FloatRange::Display() const {
    cout << "�i������: [" << first << ", " << second << "]" << endl;
}

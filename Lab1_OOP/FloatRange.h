#pragma once

class FloatRange {
private:
    double first;
    double second;

public:
    // ������ �������
    double getFirst() const { return first; }
    double getSecond() const { return second; }
    void setFirst(double value) { first = value; }
    void setSecond(double value) { second = value; }

    // ����������� � ���������
    bool Init(double left, double right);

    // ����� ��� �������� ��������� ����� � �������
    bool rangeCheck(double value) const;

    // �������� �� ��������� �������
    void Read();
    void Display() const;
};

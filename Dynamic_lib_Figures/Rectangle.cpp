#include "Quadrangle.h"
#include "Figures.h"
#include <iostream>
#include "Parallelogram.h"
#include "Rectangle.h"

Rectangle::Rectangle(int a, int b) {
    this->a = a;
    this->b = b;
    c = a;
    d = b;
    A = B = C = D = 90;

    Name_of_figure = "�������������";
    if (A + B + C + D != 360) throw std::domain_error("������ �������� ������. �������: ����� ����� �� ����� 360");
    if (a != c || b != d) throw std::domain_error("������ �������� ������. �������: ������� ������� �� �����");
    if (A != 90 || B != 90 || C != 90 || D != 90) throw std::domain_error("������ �������� ������. �������: �� ���� �� ����� 90");
}
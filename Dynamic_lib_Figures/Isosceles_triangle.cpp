#include "Triangle.h"
#include "Figures.h"
#include "Isosceles_triangle.h"
#include <iostream>

Isosceles_triangle::Isosceles_triangle(int a, int b, int A, int B) {
    this->a = a;
    this->b = b;
    this->A = A;
    this->B = B;
    c = a;
    C = A;
    Name_of_figure = "�������������� �����������";
    if (A + B + C != 180) throw std::domain_error("������ �������� ������. �������: ����� ����� �� ����� 180");
    if (A != C) throw std::domain_error("������ �������� ������. �������: ���� � � � �� �����");
    if (a != c) throw std::domain_error("������ �������� ������. �������: ������� � � � �� �����");
}

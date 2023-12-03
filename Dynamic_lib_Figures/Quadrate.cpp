#include "Quadrangle.h"
#include "Rhomb.h"
#include "Figures.h"
#include <iostream>
#include "Parallelogram.h"
#include "Quadrate.h"

Quadrate::Quadrate(int a) {
    this->a = a;
    b = c = d = a;
    B = C = D = A = 90;
    Name_of_figure = "�������";
    if (A + B + C + D != 360) throw std::domain_error("������ �������� ������. �������: ����� ����� �� ����� 360");
    if (a != c || c != b || b != d) throw std::domain_error("������ �������� ������. �������: ��� ������� �� �����");
    if (A != 90 || B != 90 || C != 90 || D != 90) throw std::domain_error("������ �������� ������. �������: �� ��� ���� �� ����� 90");
}
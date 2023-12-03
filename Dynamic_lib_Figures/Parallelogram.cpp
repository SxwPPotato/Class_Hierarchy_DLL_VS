#include "Quadrangle.h"
#include "Figures.h"
#include <iostream>
#include "Parallelogram.h"


Parallelogram::Parallelogram() {};
Parallelogram::Parallelogram(int a, int b, int A, int B) {
    this->a = a;
    this->b = b;
    this->A = A;
    this->B = B;
    c = a;
    d = b;
    C = A;
    D = B;
    Name_of_figure = "��������������";

    if (A + B + C + D != 360) throw std::domain_error("������ �������� ������. �������: ����� ����� �� ����� 360");
    if (a != c || b != d) throw std::domain_error("������ �������� ������. �������: ������� ������� �� �����");
    if (A != C || B != D) throw std::domain_error("������ �������� ������. �������: ���� ������� �� �����");
}

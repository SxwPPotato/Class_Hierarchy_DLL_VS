#include "Quadrangle.h"
#include "Figures.h"
#include <iostream>

Quadrangle::Quadrangle() {
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    A = 0;
    B = 0;
    C = 0;
    D = 0;
    Name_of_figure = "��������������";
};
Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    Name_of_figure = "��������������";
    if (A + B + C + D != 360) throw std::domain_error("������ �������� ������. �������: ����� ����� �� ����� 360");
}
void Quadrangle::Show_figure() {

    std::cout << "\n" << "�������: " << a << " " << b << " " << c << " " << d << "\n";
    std::cout << "����: " << A << " " << B << " " << C << " " << D << "\n";
    std::cout << "������" << "\n" << "\n";

}

#include "Triangle.h"
#include "Figures.h"
#include <iostream>


Triangle::Triangle() {
    a = 0;
    b = 0;
    c = 0;
    A = 0;
    B = 0;
    C = 0;
    Name_of_figure = "�����������";

};
Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    Name_of_figure = "�����������";
    if (A + B + C != 180) throw std::domain_error("������ �������� ������. �������: ����� ����� �� ����� 180");

}




void Triangle::Show_figure() {

    std::cout << "\n" << "�������: " << a << " " << b << " " << c << "\n";
    std::cout << "����: " << A << " " << B << " " << C << "\n";
    std::cout << "������" << "\n" << "\n";

}


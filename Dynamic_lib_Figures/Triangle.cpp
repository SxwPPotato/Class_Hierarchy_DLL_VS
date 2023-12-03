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
    Name_of_figure = "Треугольник";

};
Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    Name_of_figure = "Треугольник";
    if (A + B + C != 180) throw std::domain_error("Ошибка создания фигуры. Причина: сумма углов не равна 180");

}




void Triangle::Show_figure() {

    std::cout << "\n" << "Стороны: " << a << " " << b << " " << c << "\n";
    std::cout << "Углы: " << A << " " << B << " " << C << "\n";
    std::cout << "Создан" << "\n" << "\n";

}


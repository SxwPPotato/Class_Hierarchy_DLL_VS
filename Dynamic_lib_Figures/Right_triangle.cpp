#include "Triangle.h"
#include "Figures.h"
#include "Right_triangle.h"
#include <iostream>

Right_triangle::Right_triangle(int a, int b, int c, int A, int B) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    C = 90;
    Name_of_figure = "Правильный треугольник";
    if (A + B + C != 180) throw std::domain_error("Ошибка создания фигуры. Причина: сумма углов не равна 180");
    if (C != 90) throw std::domain_error("Ошибка создания фигуры. Причина: Угол С не равен 90");
}
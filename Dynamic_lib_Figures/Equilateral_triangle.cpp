#include "Triangle.h"
#include "Figures.h"
#include "Equilateral_triangle.h"
#include <iostream>

Equilateral_triangle::Equilateral_triangle(int a) {
    this->a = a;
    b = c = a;
    A = B = C = 60;
    Name_of_figure = "Равносторонний треугольник";
    if (A + B + C != 180) throw std::domain_error("Ошибка создания фигуры. Причина: сумма углов не равна 180");
    if (a != c || c != b) throw std::domain_error("Ошибка создания фигуры. Причина: Cтороны не равны");
    if (A != 60 || B != 60 || C != 60) throw std::domain_error("Ошибка создания фигуры. Причина: Углы не равны 60");
}
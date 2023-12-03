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
    Name_of_figure = "Равнобедренный треугольник";
    if (A + B + C != 180) throw std::domain_error("Ошибка создания фигуры. Причина: сумма углов не равна 180");
    if (A != C) throw std::domain_error("Ошибка создания фигуры. Причина: Углы А и С не равны");
    if (a != c) throw std::domain_error("Ошибка создания фигуры. Причина: Стороны а и с не равны");
}

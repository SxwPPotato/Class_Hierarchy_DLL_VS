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
    Name_of_figure = "Квадрат";
    if (A + B + C + D != 360) throw std::domain_error("Ошибка создания фигуры. Причина: сумма углов не равна 360");
    if (a != c || c != b || b != d) throw std::domain_error("Ошибка создания фигуры. Причина: Все стороны не равны");
    if (A != 90 || B != 90 || C != 90 || D != 90) throw std::domain_error("Ошибка создания фигуры. Причина: Не все углы не равны 90");
}
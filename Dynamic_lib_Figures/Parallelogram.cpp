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
    Name_of_figure = "Параллелограмм";

    if (A + B + C + D != 360) throw std::domain_error("Ошибка создания фигуры. Причина: сумма углов не равна 360");
    if (a != c || b != d) throw std::domain_error("Ошибка создания фигуры. Причина: Стороны попарно не равны");
    if (A != C || B != D) throw std::domain_error("Ошибка создания фигуры. Причина: Углы попарно не равны");
}

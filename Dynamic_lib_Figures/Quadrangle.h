#pragma once
#include "Figures.h"

#include "Macros.h"


class Quadrangle : public Figures {
protected:
    int a;
    int b;
    int c;
    int d;
    int A;
    int B;
    int C;
    int D;

public:
    FIGURES_API Quadrangle();
    FIGURES_API Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
    FIGURES_API void Show_figure() override;
};
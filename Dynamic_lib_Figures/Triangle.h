#pragma once
#include "Figures.h"
#include "Macros.h"
class Triangle : public Figures {
protected:
    int a;
    int b;
    int c;
    int A;
    int B;
    int C;

public:
    FIGURES_API Triangle();
    FIGURES_API Triangle(int a, int b, int c, int A, int B, int C);
    FIGURES_API void Show_figure() override;

};

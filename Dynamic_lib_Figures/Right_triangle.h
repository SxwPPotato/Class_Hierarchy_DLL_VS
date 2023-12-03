#pragma once
#include "Figures.h"
#include "Triangle.h"

#include "Macros.h"

class Right_triangle : public Triangle {
public:
	FIGURES_API Right_triangle(int a, int b, int c, int A, int B);
};

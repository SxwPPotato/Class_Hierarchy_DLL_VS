#pragma once

#ifdef DYNAMIC_PROJECT.DLL_EXPORTS
#define FIGURES_API __declspec(dllexport)
#else
#define FIGURES_API __declspec(dllimport)
#endif


class Equilateral_triangle : public Triangle {
public:
	FIGURES_API Equilateral_triangle(int a);
};

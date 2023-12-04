#pragma once
#ifdef DYNAMICLIBFIGURES_EXPORTS
#define FIGURES_API __declspec(dllexport)
#else
#define FIGURES_API __declspec(dllimport)
#endif

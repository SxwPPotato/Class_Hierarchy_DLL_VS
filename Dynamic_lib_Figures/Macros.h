#pragma once
#ifdef DYNAMIC_PROJECT.DLL_EXPORTS
#define FIGURES_API __declspec(dllexport)
#else
#define FIGURES_API __declspec(dllimport)
#endif

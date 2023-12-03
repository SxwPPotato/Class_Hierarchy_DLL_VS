#pragma once
#include <string>
#include "Macros.h"

class Figures {
protected:
    std::string Name_of_figure;
public:
    FIGURES_API void Show_name();
    FIGURES_API virtual void Show_figure();

};



FIGURES_API void print_info(Figures * figure); 
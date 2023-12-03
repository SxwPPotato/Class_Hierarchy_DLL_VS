#include <iostream>
#include <string>
#include "Figures.h"




void Figures::Show_name() {
    std::cout << "\n" << "\n" << Name_of_figure << ": ";
}
void Figures::Show_figure() {

}


void print_info(Figures* figure) {
    figure->Show_figure();
}


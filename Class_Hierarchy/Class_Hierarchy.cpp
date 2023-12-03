#include <iostream>
#include "Figures.h"
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rhomb.h"
#include "Rectangle.h"
#include "Quadrate.h"



int main()
{
    setlocale(LC_ALL, "russian");
    try {
        Triangle triangle(15, 25, 30, 70, 30, 80);
        triangle.Show_name();
        print_info(&triangle);
    }
    catch (std::domain_error& e) {
        std::cout << e.what() << "\n" << std::endl;
    }
    try {
        Quadrangle quadrangle(10, 20, 30, 40, 80, 100, 70, 90);
        quadrangle.Show_name();
        print_info(&quadrangle);
    }
    catch (std::domain_error& e) {
        std::cout << e.what() << "\n" << std::endl;
    }
    try {
        Right_triangle right_triangle(10, 20, 30, 40, 50);
        right_triangle.Show_name();
        print_info(&right_triangle);
    }
    catch (std::domain_error& e) {
        std::cout << e.what() << "\n" << std::endl;
    }
    try {
        Isosceles_triangle isosceles_triangle(20, 30, 50, 80);
        isosceles_triangle.Show_name();;
        print_info(&isosceles_triangle);
    }
    catch (std::domain_error& e) {
        std::cout << e.what() << "\n" << std::endl;
    }
    try {
        Equilateral_triangle equilateral_triangle(10);
        equilateral_triangle.Show_name();
        print_info(&equilateral_triangle);
    }
    catch (std::domain_error& e) {
        std::cout << e.what() << "\n" << std::endl;
    }
    try {
        Parallelogram parallelogram(10, 20, 100, 80);
        parallelogram.Show_name();
        print_info(&parallelogram);
    }
    catch (std::domain_error& e) {
        std::cout << e.what() << "\n" << std::endl;
    }
    try {
        Rectangle rectangle(20, 30);
        rectangle.Show_name();
        print_info(&rectangle);
    }
    catch (std::domain_error& e) {
        std::cout << e.what() << "\n" << std::endl;
    }
    try {
        Rhomb rhomb(30, 100, 80);
        rhomb.Show_name();
        print_info(&rhomb);
    }
    catch (std::domain_error& e) {
        std::cout << e.what() << "\n" << std::endl;
    }
    try {
        Quadrate quadrate(20);
        quadrate.Show_name();
        print_info(&quadrate);
    }
    catch (std::domain_error& e) {
        std::cout << e.what() << "\n" << std::endl;
    }

    std::cout << "\n";
    return 0;
}
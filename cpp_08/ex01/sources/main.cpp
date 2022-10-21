//
// Created by Hilaria Rebbeca on 9/28/22.
//
#include "./../includes/Span.h"
#include "iostream"
#include "vector"
#include "list"
#include "set"
#include "map"
#include "string"

int main( void ) {
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}
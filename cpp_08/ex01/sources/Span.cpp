//
// Created by Hilaria Rebbeca on 9/30/22.
//

#include "../includes/Span.h"


Span::Span(unsigned int N) : N(N){}

Span::~Span() {}

void Span::addNumber(int value) {
    if (buf.size() >= N)
        throw SpanIsFull();
    buf.push_back(value);
}

int Span::shortestSpan() {
    std::vector<int> tmp(buf);
    std::sort(tmp.begin(), tmp.end());
    int len = abs(tmp[0] - tmp[1]);
    for (unsigned int i = 0; i < buf.size() - 1; i++){
        if (tmp[i + 1] - tmp[i] < len)
            len = tmp[i + 1] - tmp[i];
    }
    return len;
}

int Span::longestSpan() {
    if (buf.size() <= 1)
        throw TooFewElementsInTheStack();
    int min = buf[std::distance(buf.begin(), std::min_element(buf.begin(), buf.end()))];
    int max = buf[std::distance(buf.begin(), std::max_element(buf.begin(), buf.end()))];
    return (max - min);
}
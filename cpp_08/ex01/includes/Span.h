//
// Created by Hilaria Rebbeca on 9/30/22.
//

#ifndef CPP08_SPAN_H
#define CPP08_SPAN_H
#include "algorithm"
#include "vector"

class Span {
private:
    std::vector<int> buf;
    unsigned int N;
public:
    Span(unsigned int N);
    ~Span();
    int shortestSpan();
    int longestSpan();
    void addNumber(int value);
class SpanIsFull : public std::exception{
public:
    const char *what() const throw() {
        return "Span is Full\n";
    };
};

    class TooFewElementsInTheStack : public std::exception{
    public:
        const char *what() const throw() {
            return "Too few elements in the stack\n";
        };
    };
};


#endif //CPP08_SPAN_H

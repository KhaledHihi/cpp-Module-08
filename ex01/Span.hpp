#ifndef SPAN
#define SPAN

#include <vector>
#include <stdexcept>
#include <iostream>
#include <limits>
#include <algorithm>

class Span {
    private:
        unsigned int N;
        std::vector<int> vec;

    public:
        Span();
        Span(unsigned int N);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

        void addNumber(int x);
        int shortestSpan() const;
        int longestSpan() const;
};

#endif
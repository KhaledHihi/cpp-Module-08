#include "Span.hpp"
#include <algorithm> 
#include <limits> 

Span::Span() : N(0) {}
Span::Span(unsigned int N) : N(N) {}
Span::Span(const Span& other) : N(other.N), vec(other.vec) {}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        N = other.N;
        vec = other.vec;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int x)
{
    if(vec.size() >= N)
        throw std::runtime_error("Span is full");
    vec.push_back(x);
}

int Span::shortestSpan() const
{
    if (vec.size() < 2)
        throw std::runtime_error("Not enough numbers");
    std::vector<int> tmp(vec);
    std::sort(tmp.begin(), tmp.end());
    long max = std::numeric_limits<long>::max();
}
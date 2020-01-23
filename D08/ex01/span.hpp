/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   span.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jecombe <jecombe@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/23 18:14:25 by jecombe      #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 21:01:10 by jecombe     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <vector>
#include <limits>
class Span
{
public:
    Span(unsigned int);
    Span();
    ~Span();
    Span(const Span &);
    Span &operator=(Span const &);
    void addNumber(int);
    int shortestSpan();
    int longestSpan();
private:
    unsigned int _n;
    std::vector<int> _lst;
};

#endif
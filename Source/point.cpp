//
// Created by Arthur Mathis on 28/09/2023.
//

#include "../header/point.h"
#include <cmath>

point::point():d_x{0}, d_y{0}
{}

point::point(double x, double y):d_x{x}, d_y{y}
{}

double point::x() const
{
    return d_x;
}

double point::y() const
{
    return d_y;
}

double point::distance(const point &p) const
{
    return std::sqrt(std::pow(p.x() - x(), 2) + std::pow(p.y() - y(), 2));
}


void point::print(std::ostream &ost) const
{
    ost<<'('<<x()<<','<<y()<<')';
}

void point::read(std::istream &ist)
{
    double x, y;
    ist>>x>>y;
    move(x,y);
}

void point::move(double dx, double dy)
{
    d_x = dx;
    d_y = dy;
}

std::istream& operator>>(std::istream &ist, point& p)
{
    p.read(ist);
    return ist;
}

std::ostream& operator<<(std::ostream &ost, const point& p)
{
    p.print(ost);
    return ost;
}
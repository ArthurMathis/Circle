//
// Created by Arthur Mathis on 28/09/2023.
//

#include "../header/circle.h"

circle::circle():d_center{0,0}, d_radius{0}
{}

circle::circle(const point &center, double radius):d_center{center}, d_radius{radius}
{}

point circle::center() const
{
    return d_center;
}

double circle::radius() const
{
    return d_radius;
}

void circle::print(std::ostream &ost) const
{
    ost<<'[';
    center().print(ost);
    ost<<','<<radius()<<']';
}

void circle::read(std::istream &ist)
{
    double x, y, r;
    ist>>x>>y>>r;
    move({x, y});
    d_radius = r;
}

bool circle::contains(const point &p) const
{
    return radius() >= center().distance(p);
}

void circle::move(const point &p)
{
    d_center.move(p.x(), p.y());
}
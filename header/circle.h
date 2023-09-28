//
// Created by Arthur Mathis on 28/09/2023.
//

#ifndef TD2_CIRCLE_H
#define TD2_CIRCLE_H

#include "point.h"
#include <iostream>

/**
 * @brief Classe représentant un cercle dans un plan en deux dimensions
 */
class circle {
public :
    circle();
    circle(const point &center, double radius);

    /**
     * @brief Méthode retournant le centre du cercle
     * @return
     */
    point center() const;
    /**
     * @brief Méthode retournant le longueur du rayon
     * @return
     */
    double radius() const;

    /**
     * @brief Méthode écrivant les coordonnées du centre du cercle ainsi que la longueur de son rayon dans un flux sortant
     * @param ost Le flux sortant
     */
    void print(std::ostream &ost) const;
    /**
     * @brief Méthode lisant les coordonnées du centre du cercle ainsi que la longueur de son rayon dans un flux entrant
     * @param ist Le flux entrant
     */
    void read(std::istream &ist);

    /**
     * @brief Méthode retournant vrai si le point est compris dans le cercle
     * @param p Le point à tester
     * @return
     */
    bool contains(const point &p) const;
    /**
     * @brief Méthode déplaçant le centre du cercle en un point p
     * @param p Le nouveau centre du cercle
     */
    void move(const point &p);


private :
    point d_center;
    double d_radius;
};


#endif //TD2_CIRCLE_H

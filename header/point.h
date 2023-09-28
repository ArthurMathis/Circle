//
// Created by Arthur Mathis on 28/09/2023.
//

#ifndef TD2_POINT_H
#define TD2_POINT_H

#include <iostream>
/**
 * @brief Class représentant un point dans un plan en deux dimensions
 */
class point {
public :
    point();
    point(double x, double y);

    /**
     * @brief Méthode retournant l'abscice du point
     * @return
     */
    double x() const;
    /**
     * @brief Méthode retournant l'ordonnée du point
     * @return
     */
    double y() const;
    /**
     * @brief Méthode calculant la distance entre le point et un autre point p
     * @param p Le second point
     * @return
     */
    double distance(const point &p) const;

    /**
     * @brief Méthode écrivant dans un flux sortant les coordonnées de p
     * @param ost Le flux sortant
     */
    void print(std::ostream &ost) const;
    /**
     * @brief Méthode lisant dans un flux entrant les nouvelles coordonnées de p
     * @param ist le flux entrant
     */
    void read(std::istream &ist);

    /**
     * @brief Méthode modifiant les coordonnées du point p
     * @param dx La nouvelle abscisse
     * @param dy La nouvelle ordonnée
     */
    void move(double dx, double dy);

private :
    double d_x, d_y;
};

std::istream& operator>>(std::istream &ist, point& p);
std::ostream& operator<<(std::ostream &ost, const point& p);


#endif //TD2_POINT_H

#include <iostream>
#include "header/circle.h"

void testPoint(){
    point p{1,2};
    p.print(std::cout);
    std::cin>>p;
    std::cout<<p;
}

void testCercle(){
    point centre{2,2};
    circle c{centre, 3};
    c.print(std::cout);
    std::cout<<std::endl;

    c.read(std::cin);
    c.print(std::cout);
    std::cout<<std::endl;

    if(c.contains(centre)){
        std::cout<<"p est dans c"<<std::endl;
    } else {
        std::cout<<"p n'est pas dans c"<<std::endl;
    }
}

int main() {
    testCercle();
    return 0;
}

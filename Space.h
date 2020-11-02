
#ifndef ANTS_VS_SOMEBEES_SPACE_H
#define ANTS_VS_SOMEBEES_SPACE_H

#include <vector>
//#include "Unit/Ant/Ant.h"
//#include "Unit/Bee/Bee.h"
class Ant;
class Bee;

class Space {
protected:
    int coordinates[2];       //x coordinates cannot be changed after initialization
    std::vector<Ant*> ants;
    std::vector<Bee*> bees;
    bool blocked;

    Space *last; // x
    Space *next; // x
public:
    Space *getLast() const; //x
    void setLast(Space *last);  // x
    Space *getNext();   // x
    void setNext(Space *next); //x

    //Space(const int coords[2] = nullptr); // x
    Space();
    void move();

    /* Getters & Setters */
    const int *getCoordinates() const;

    const std::vector<Ant *> &getAnts() const;
    void setAnts(const std::vector<Ant *> &ants);

    const std::vector<Bee *> &getBees() const;
    void setBees(const std::vector<Bee *> &bees);

    bool isBlocked() const;
    void setBlocked(bool blocked);

    void insertAnt(Ant *ant);

    void insertBee(Bee *bee);
};


#endif //ANTS_VS_SOMEBEES_SPACE_H

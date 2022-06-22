#ifndef EX4_GOBLIN_H
#define EX4_GOBLIN_H
#include "Battle.h"
class Goblin : public Battle
{
    public:
    Goblin();
    void battleAbstract() override;
    friend std::ostream& operator<<(std::ostream& os, const Goblin& r);

};



#endif //EX4_GOBLIN_H
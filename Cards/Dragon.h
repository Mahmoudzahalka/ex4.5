#ifndef EX4_DRAGON_H
#define EX4_DRAGON_H
#include "Battle.h"
class Dragon : public Battle
{
    public:
    Dragon();
    void battleAbstract() override;
    friend std::ostream& operator<<(std::ostream& os, const Dragon& r);
};



#endif //EX4_DRAGON_H
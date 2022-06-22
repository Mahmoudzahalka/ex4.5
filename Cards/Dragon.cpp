#include "Battle.h"
#include "Dragon.h"
#include "../utilities.h"

Dragon::Dragon() :
Battle(std::string("Dragon"), 25, 1000, 100)
{}

void Dragon::battleAbstract()
{
    return;
}

std::ostream& operator<<(std::ostream& os, const Dragon& r)
{
  os << "Card Details:" << std::endl;
    os << "Name: " << r.getName() << std::endl;
    bool isDragon = false;
    if(r.m_cardName == "Dragon")    //check == should be ok
    {
        isDragon = true;
    }
    printMonsterDetails(os, r.getForce(), r.getHpLossOnDefeat(), r.getLoot(), isDragon );
    printEndOfCardDetails(os);
    return os;
}
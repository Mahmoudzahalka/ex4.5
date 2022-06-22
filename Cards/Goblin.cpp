#include "Goblin.h"
#include "../utilities.h"

Goblin::Goblin() :
Battle(std::string("Goblin"), 6, 2, 10)        //check sendingn "" as char*
{}

void Goblin::battleAbstract()
{
    return;
}

std::ostream& operator<<(std::ostream& os, const Goblin& r)
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

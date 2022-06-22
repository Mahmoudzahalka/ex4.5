#include "Vampire.h"
#include "../utilities.h"
//#include "Battle.h"

Vampire::Vampire() :
Battle(std::string("Vampire"), 10, 2, 10)
{}

void Vampire::applyEncounter(Player& player) const //check const 
{
        if(player.getAttackStrength() >= this->getForce())
    {
        player.levelUp();  //p msh capital
        player.addCoins(this->getLoot()); //21.6 chnaged to m_loot was m_coins
        //std::string cardName = m_cardName; //protected check again 
        printWinBattle(player.m_name ,m_cardName); //check access to player.m_name and card , should be ok
    }
    else
    {
        player.damage(this->getHpLossOnDefeat());
        player.minusForce();
        printLossBattle(player.m_name ,m_cardName);
    }
}

void Vampire::battleAbstract()
{
    return;
}

std::ostream& operator<<(std::ostream& os, const Vampire& r)
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


//access problems to battle private fields
//access problem to player's fields 
//class friendship is not inherited !!!
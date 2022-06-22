#include "../Players/Player.h"
#include "Card.h"
#include "../utilities.h"
#include <iostream>

//const int MAX_LENGTH = 15;

Card::Card(const std::string name) : m_cardName(name)
{}

std::ostream& operator<<(std::ostream& os, const Card& r)
{
    printCardDetails(os , r.m_cardName);
    printEndOfCardDetails(os);
    return os;
}

std::string Card::getName() const
{
    return m_cardName;
}


// void Card::printCardInfo(std::ostream& os) const
// {
//     printCardDetails(os , m_cardName);
//     printEndOfCardDetails(os);
// }

// std::ostream& operator<<(std::ostream& os, const Card& r)
// {
//     r.printCardInfo(os);
//     return os;
// }
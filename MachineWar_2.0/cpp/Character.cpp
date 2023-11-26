#include <iostream>

#include "Character.hpp"

Character::Character(Characters name)
{
    switch (name) {
        case Characters::T_800:
            m_name = "T-800";
            break;
        case Characters::John_Connor:
            m_name = "John Connor";
            break;
        case Characters::T_1000:
            m_name = "T-1000";
            break;
            
        default:
            break;
    }
}

void Character::ShowMainCharacterName()
{
    std::cout << std::endl;
    std::cout << "Your name is: " << m_name << std::endl;
}

void Character::ShowEnemyCharacterName()
{
    std::cout << std::endl;
    std::cout << "Name of your enemy is: " << m_name << std::endl;
}

int Character::MainCurrentHealth(int enemyDamage)
{
    return m_mainHealth -= enemyDamage;
}

int Character::EnemyCurrentHealth(int mainDamage)
{
    return m_enemyHealth -= mainDamage;
}

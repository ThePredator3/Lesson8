#include <iostream>

#include "Weapon.hpp"

Weapon::Weapon(Weapons name)
{
    switch (name) {
        case Weapons::Gun:
            m_name = "Gun";
            m_damage = rand() % 10;
            break;
        case Weapons::Shotgun:
            m_name = "Shotgun";
            m_damage = rand() % 40;
            break;
        case Weapons::Mashinegun:
            m_name = "Mashinegun";
            m_damage = rand() % 60;
            break;
            
        default:
            break;
    }
}

std::string Weapon::NameWeapon()
{
    return m_name;
}

int Weapon::DamageWeapon()
{
    return m_damage;
}


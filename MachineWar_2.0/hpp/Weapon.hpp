#pragma once

#include <string>

class Weapon
{
public:
    
    enum class Weapons
    {
        Gun = 0,
        Shotgun,
        Mashinegun
    };
    
    Weapon(Weapons name);

    std::string NameWeapon();
    int DamageWeapon();

private:

    Weapon() = default;

    std::string m_name{ "Gun" };
    int m_damage = rand() % 10;
};

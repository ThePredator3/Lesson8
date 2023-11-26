#pragma once

#include <string>

class Character
{
public:
    
    enum class Characters
    {
        T_800 = 0,
        John_Connor,
        T_1000
    };
    
    Character(Characters name);
    
    void ShowMainCharacterName();
    void ShowEnemyCharacterName();
    
    int MainCurrentHealth(int enemyDamage);
    int EnemyCurrentHealth(int mainDamage);
    
private:
    
    Character() = default;

    int m_mainHealth{ 100 };
    int m_enemyHealth{ 100 };
    std::string m_number{ "other num" };
    std::string m_name{ "terminator" };
};

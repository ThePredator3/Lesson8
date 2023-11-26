#include <iostream>
#include <ctime>

#include "Battlefield.hpp"
#include "Character.hpp"
#include "Weapon.hpp"
#include "OtherFunctions.hpp"

void War()
{
    srand(static_cast<unsigned int>(time(NULL)));
    
    Greetings();

    int round{ 1 };
    int choiceCharacter{ 0 };
    bool gameOver{ false };

    std::cout << "\nSelect a character: ";
    std::cin >> choiceCharacter;
    
    DataEntryCheck(choiceCharacter);

    Character mainCharacter = static_cast<Character::Characters>(choiceCharacter);
    Character enemyCharacter = static_cast<Character::Characters>(rand() % 2);

    Character firstCharacter(mainCharacter);
    Character seconCharacter(enemyCharacter);
    
    firstCharacter.ShowMainCharacterName();
    seconCharacter.ShowEnemyCharacterName();
    
    while (!gameOver)
    {
        std::cout << std::endl << "Round " << round << std::endl;
        
        Guns();
        
        int numWeapon{ 0 };
        
        std::cout << "\nSelect a weapon: ";
        std::cin >> numWeapon;
        
        DataEntryCheck(numWeapon);
        
        Weapon mainWeapon = static_cast<Weapon::Weapons>(numWeapon);
        Weapon enemyWeapon = static_cast<Weapon::Weapons>(rand() % 2);
        
        Weapon mainCurrentWeapon(mainWeapon);
        Weapon enemyCurrentWeapon(enemyWeapon);
        
        int mainDamage = mainWeapon.DamageWeapon();
        int enemyDamage = enemyWeapon.DamageWeapon();
        
//        system("cls");
        
        int mainHealthRecovery = firstCharacter.MainCurrentHealth(enemyDamage);
        int enemyHealthRecovery = seconCharacter.EnemyCurrentHealth(mainDamage);
        
        InformationMainCharacter(mainWeapon, mainHealthRecovery);
        InformationEnemyCharacter(enemyWeapon, enemyHealthRecovery);
        
        gameOver = RoundResult(mainHealthRecovery, enemyHealthRecovery);

        ++round;

        std::cout << std::endl;
    }
};

#include <iostream>

#include "OtherFunctions.hpp"
#include "Weapon.hpp"

void Greetings()
{
    std::cout << "Only you can save this world!" << std::endl;
    std::cout << "\nOr destroy it..." << std::endl;
    std::cout << "\nvailable characters:" << std::endl;
    std::cout << "0 - T-800 (Mr.Arny)\n1 - John Connor\n2 - T-1000 (Bad Boy)" << std::endl;
    std::cout << "\nWhat will you choose?" << std::endl;
}

void Guns()
{
    std::cout << "\nvailable weapons:" << std::endl;
    std::cout << "0 - Gun\n1 - Shotgun\n2 - Mashinegun" << std::endl;
    std::cout << "\nWhat will you choose?" << std::endl;
}

void DataEntryCheck(int& data)
{
    while (!std::cin.good())
    {
        std::cout << "Incorect data entry!" << std::endl;
        std::cout << "Re-enter data: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize> ::max(), '\n');
        std::cin >> data;
    }
}

bool RoundResult(int mainHealthRecovery, int enemyHealthRecovery)
{
    bool gameOver{ false };

    std::cout << std::endl;

    if (mainHealthRecovery <= 0)
    {
        std::cout << "You lode!" << std::endl;
        gameOver = { true };
    }
    else if (enemyHealthRecovery <= 0)
    {
        std::cout << "You won!" << std::endl;
        gameOver = { true };
    }
    else if (mainHealthRecovery <= 0 && enemyHealthRecovery <= 0)
    {
        std::cout << "Game drow!" << std::endl;
        gameOver = { true };
    }

    return gameOver;
}

void InformationMainCharacter(Weapon mainWeapon, int currentMainHealthRecovery)
{
    std::cout << std::endl;

    std::cout << "You chose the: " << mainWeapon.NameWeapon() << std::endl;
    std::cout << "You dealt: " << mainWeapon.DamageWeapon() << " damage" << std::endl;
    std::cout << "Your current health status: " << currentMainHealthRecovery << std::endl;
}

void InformationEnemyCharacter(Weapon enemyWeapon, int currentEnemyHealthRecovery)
{
    std::cout << std::endl;

    std::cout << "Enemy chose the: " << enemyWeapon.NameWeapon() <<std::endl;
    std::cout << "Enemy dealt " << enemyWeapon.DamageWeapon() << " damage" << std::endl;
    std::cout << "Enemy current health status: " << currentEnemyHealthRecovery << std::endl;
}


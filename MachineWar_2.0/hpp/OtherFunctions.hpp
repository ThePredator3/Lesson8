#pragma once

#include "Weapon.hpp"

void Greetings();
void Guns();
void DataEntryCheck(int& data);
bool RoundResult(int mainHealthRecovery, int enemyHealthRecovery);

void InformationMainCharacter(Weapon mainWeapon, int currentMainHealthRecovery);
void InformationEnemyCharacter(Weapon enemyWeapon, int currentEnemyHealthRecovery);

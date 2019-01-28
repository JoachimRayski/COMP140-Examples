#include "stdafx.h"
#include "Player.h"

Player::Player()
{
	playerHealth.Health = 100;
	playerStats.Strength = 10;
	playerStats.Dexterity = 10;
	playerStats.Constitution = 10;
	playerStats.Intelligence = 10;
	playerStats.Wisdom = 10;
	playerStats.Charisma = 10;
	playerName.Name = "Player";
}

Player::~Player()
{
}


void PlayerHealth::SetHealth(int health)
{
	Health = health;
}
int PlayerHealth::GetHealth()
{
	return PlayerHealth::Health;
}
void PlayerHealth::TakeDamage(int damage)
{
	Health -= damage;
}
void PlayerHealth::HealDamage(int health)
{
	Health += health;
}

void PlayerName::SetName(const std::string & name)
{
	Name = name;
}
const std::string & PlayerName::GetName()
{
	return Name;
}


void PlayerStats::RandomiseStats()
{
	srand(time(NULL));

	Strength = rand() % 20;
	Dexterity = rand() % 20;
	Constitution = rand() % 20;
	Intelligence = rand() % 20;
	Wisdom = rand() % 20;
	Charisma = rand() % 20;
}
void PlayerStats::DisplayStats()
{
	std::cout << "Strength " << Strength << std::endl;
	std::cout << "Dexterity " << Dexterity << std::endl;
	std::cout << "Constitution " << Constitution << std::endl;
	std::cout << "Intelligence " << Intelligence << std::endl;
	std::cout << "Wisdom " << Wisdom << std::endl;
	std::cout << "Charisma " << Charisma << std::endl;

}

void PlayerWeapon::CreateWeapon(const std::string name, float reloadTime, int ammo, int strength)
{
	CurrentWeaponName = name;
	CurrentReloadTime = reloadTime;
	CurrentAmmo = ammo;
	CurrentWeaponStrength = strength;
}
void PlayerWeapon::DisplayWeapon()
{
	std::cout << "Name " << CurrentWeaponName << std::endl;
	std::cout << "Reload Time " << CurrentReloadTime << std::endl;
	std::cout << "Ammo " << CurrentAmmo << std::endl;
	std::cout << "Strength " << CurrentWeaponStrength << std::endl;
}

void PlayerCharacter::CreateGnoblin()
{
	player.playerHealth.Health = 30;
	player.playerStats.Strength = 1;
	player.playerStats.Dexterity = 2;
	player.playerStats.Constitution = 3;
	player.playerStats.Intelligence = 4;
	player.playerStats.Wisdom = 5;
	player.playerStats.Charisma = 6;
	player.playerName.Name = "Gnoblin";
}

void PlayerCharacter::CreateGnelf()
{
	player.playerHealth.Health = 25;
	player.playerStats.Strength = 3;
	player.playerStats.Dexterity = 6;
	player.playerStats.Constitution = 4;
	player.playerStats.Intelligence = 7;
	player.playerStats.Wisdom = 9;
	player.playerStats.Charisma = 10;
	player.playerName.Name = "Gnoblin";
}

void PlayerCharacter::CreateGnome()
{
	player.playerHealth.Health = 1000;
	player.playerStats.Strength = 100;
	player.playerStats.Dexterity = 100;
	player.playerStats.Constitution = 100;
	player.playerStats.Intelligence = 100;
	player.playerStats.Wisdom = 100;
	player.playerStats.Charisma = 100;
	player.playerName.Name = "Gnome";
}

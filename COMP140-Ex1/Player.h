#pragma once



class Player
{
public:
	Player();
	~Player();

	PlayerHealth playerHealth;
	PlayerName playerName;
	PlayerStats playerStats;
	PlayerWeapon playerWeapon;

};

class PlayerCharacter
{
public:
	void CreateGnoblin();
	void CreateGnelf();
	void CreateGnome();

	Player player;
};

class PlayerHealth
{
public:
	//Set Health
	void SetHealth(int health);
	//Get Health
	int GetHealth();

	//Take Damage
	void TakeDamage(int damage);
	//Heal Damage
	void HealDamage(int health);

	int Health;
};

class PlayerName
{
public:
	//Set Name
	void SetName(const std::string& name);
	//Get Name
	const std::string& GetName();

	std::string Name;
};

class PlayerStats
{
public:
	//Randomise States between 1 - 20
	void RandomiseStats();
	//Display Stats, print using cout
	void DisplayStats();

	int Strength;
	int Dexterity;
	int Constitution;
	int Intelligence;
	int Wisdom;
	int Charisma;
};

class PlayerWeapon
{
public:
	//Create Weapon with the values passed in
	void CreateWeapon(const std::string name, float reloadTime, int ammo, int strength);
	//Display Weapons, print using cout
	void DisplayWeapon();

	std::string CurrentWeaponName;
	float CurrentReloadTime;
	int CurrentAmmo;
	int CurrentWeaponStrength;
};
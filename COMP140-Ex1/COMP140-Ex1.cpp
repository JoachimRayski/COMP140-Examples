// COMP140-Ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Player.h"

int main()
{
	//Create Player on the Stack 
	Player player1;

	//Create Player on the Heap, remeber to delete this!!!
	Player* player2 = new Player();

	//Randomise Player 1 Stats and initialise
	player1.RandomiseStats();
	player1.SetName("Jeff the Barbarian");
	player1.CreateWeapon("Sword of Doom", 1.0f, 0.0f, 10);

	//Randomise Player 2 Stats and initialise
	player2->RandomiseStats();
	player2->SetName("Sneaky Pete");
	player2->CreateWeapon("Bow and Arrow", 2.0f, 100, 4);

	//Print Player 1
	std::cout << "\nPlayer 1" << std::endl;
	player1.DisplayStats();
	player1.DisplayWeapon();

	//Print Player 2
	std::cout << "\nPlayer 2" << std::endl;
	player2->DisplayStats();
	player2->DisplayWeapon();

	//Press q to quit
	std::cout << "\nPress q to quit" << std::endl;
	std::string input;

	//Do a while loop to pause execution until q is pressed
	do
	{
		//Read from standard input and store in a string
		std::cin >> input;
	} while (input != "q");

	//Player 2 was created with the new keyword, make sure  you delete
	if (player2)
	{
		delete player2;
		player2 = nullptr;
	}
    return 0;
}


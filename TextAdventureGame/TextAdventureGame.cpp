#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

// This is a text adventure game from Programming I
// Program was made with nothing but if/else statements

int main() {

    // LAB 5 - ADVENTURE GAME
    cout << setw(45) << "*THE ADVENTURE GAME*" << endl;
    cout << " \n";
    cout << "*Welcome to THE ADVENTURE GAME!!*\n";
    cout << "In this game, you will traverse through a series of tunnels and caves, in order to\n";
    cout << "retrieve your sidekick. You must eliminate all enemies, become stronger, and defeat\n";
    cout << "the final boss, to save your sidekick!\n";

    cout << "_____________________________________________________________\n";
    cout << " \n";
    cout << " \n";
    cout << " \n";


    // Player 1's Stats
    string playerName, playerHeight;
    double playerAge, playerHealth, normalAttack, heavyAttack, specialAttack, ultimateAttack;
    playerHealth = 175;
    normalAttack = 50, heavyAttack = 75, specialAttack = 100, ultimateAttack = 175;

    cout << "PLAYER 1 STATS\n";
    cout << "Now you will enter in your stats for your main player.\n";
    cout << " \n";
    cout << "What is your player's name: ";
    getline(cin, playerName);
    cout << "What is your player's age: ";
    cin >> playerAge;
    cout << "What is your player's height: ";
    cin >> playerHeight;
    cout << " \n";
    cout << "Press enter to see your player's stats\n";
    cout << " \n";
    cin.get();
    cin.get();
    cout << "*PLAYER 1's STATS*\n";
    cout << "Name: " << playerName << endl;
    cout << "Age: " << playerAge << endl;
    cout << "Height: " << playerHeight << endl;
    cout << " \n";
    cout << "Here are a list of your attacks. Use them to eliminate your\n";
    cout << "enemies!\n";
    cout << "Normal Attack: " << normalAttack << " Damage." << setw(6) << " - 1" << endl;
    cout << "Heavy Attack: " << heavyAttack << " Damage." << setw(7) << " - 2" << endl;
    cout << " \n";
    cout << " \n";

    // Sidekick/pet's Stats
    string petName, petType;
    double petAge, petHealth;
    petHealth = 100;

    cout << "*SIDEKICK/PET STATS*" << endl;
    cout << "Now you will enter the stats for your pet/sidekick.\n";
    cout << " \n";
    cout << "What is your pet's name: ";
    getline(cin, petName);
    cout << "What type of pet do you have: ";
    getline(cin, petType);
    cout << "What is your pet's age: ";
    cin >> petAge;
    cout << " \n";
    cout << "Press enter again to see your sidekick's stats.\n";
    cin.get();
    cin.get();
    cout << "*SIDEKICK STAT's*\n";
    cout << "Pet Name: " << petName << endl;
    cout << "Pet Type: " << petType << endl;
    cout << "Pet Age: " << petAge << endl;
    cout << "_____________________________________________________________\n";
    cout << " \n";
    cout << " \n";
    cout << " \n";
    cout << "PRESS ENTER TO CONTINUE\n";
    cin.get();
    cout << " \n";
    cout << " \n";
    cout << " \n";
    cout << "_____________________________________________________________\n";
    cout << " \n";

    //The Journey is Starting
    cout << "BEGIN THE JOURNEY TO RESCUE " << petName << "!!\n";
    cout << " \n";
    cout << " \n";
    cout << "Your journey is finally starting. Your pet has been kidnapped \n";
    cout << "by the Ogre king and you must save him!\n";
    cout << "As you move on throughout your journey, you will collect various\n";
    cout << "types of loot, weapons, and gear! So be sure to play smart and\n";
    cout << "take out your enemies. Don't be scared to take risks! and fight\n";
    cout << "tougher enemies\n";
    cout << " \n";
    cout << "* GOAL *:\n";
    cout << "- Save " << petName << endl;
    cout << "- Steal the Ogre King's loot\n";
    cout << "- Escape his undergroung lair\n";
    cout << " \n";
    cout << "PRESS ENTER TO CONTINUE\n";
    cin.get();
    cout << " \n";
    cout << "_____________________________________________________________\n";
    cout << " \n";
    cout << " \n";


    //First Fight
    double gruntHealth = 75, gruntAttack1 = 10;
    double attack1, attack2;
    cout << "*FIGHT 1*\n";
    cout << " \n";
    cout << playerName << ", you have just ran into a Grunt Ogre! Take him \n";
    cout << "out ASAP!\n";
    cout << " \n";
    cout << "This Grunt Ogre has 75 HP\n";
    cout << " \n";
    cout << "Here are a list of your attacks. Use them to \n";
    cout << "eliminate your enemies!\n";
    cout << " \n";
    cout << "Normal Attack: " << normalAttack << " Damage." << setw(6) << " - 1" << endl;
    cout << "Heavy Attack: " << heavyAttack << " Damage." << setw(7) << " - 2" << endl;
    cout << " \n";
    cout << "You have the first move, select an attack to \n";
    cout << "eliminate the grunt!: ";
    cin >> attack1;
    cout << " \n";

    //First fight against Grunt Ogre
    if (attack1 == 1 || attack1 == 2) {
        if (attack1 == 1) {
            cout << "ATTACK 1\n";
            cout << " \n";
            cout << "Grunt Ogre Health: " << gruntHealth << " HP.\n";
            cout << "Grunt Ogre Health: " << gruntHealth << " - 50.\n";
            cout << "Grunt Ogre Health: " << gruntHealth - normalAttack << " HP.\n";
            cout << "The enemy is still alive with " << gruntHealth - normalAttack << " health! He has hit you for 10 damage with his light attack.\n";
            cout << playerName << " Health: " << playerHealth << " - 10 = " << playerHealth - gruntAttack1 << " HP.\n";
            cout << "Choose another attack!: ";
            cin >> attack2;
            cout << " \n";

            if (attack2 == 1 || attack2 == 2) {
                if (attack2 == 1) {
                    gruntHealth = gruntHealth - 50;
                    playerHealth = playerHealth - 10;
                    cout << "ATTACK 2\n";
                    cout << " \n";
                    cout << "Grunt Ogre Health: " << gruntHealth << " HP.\n";
                    cout << "Grunt Ogre Health: " << gruntHealth << " - 50.\n";
                    cout << "Grunt Ogre Health: " << gruntHealth - normalAttack << " HP.\n";
                    cout << "WELL DONE! You have won your first fight and\n";
                    cout << "killed the grunt with damage to spare!\n";
                    cout << "Continue to traverse through the lair and find " << petName << ".\n";
                    cout << " \n";
                    cout << "* REWARD! *\n";
                    cout << " \n";
                    cout << "Press ENTER again to see what you got!\n";
                    cin.get();
                    cin.get();
                    cout << "With your first enemy defeated you have been rewarded with\n";
                    cout << "a medkit. As you progress, you will gain more loot and various\n";
                    cout << "itmes.\n";
                    cout << playerName << " Health: " << playerHealth + gruntAttack1 << " HP.\n";
                    cout << "You're already at full health, so well done! Keep moving through\n";
                    cout << "the caves.\n";
                }

                else if (attack2 == 2) {
                    gruntHealth = gruntHealth - 50;
                    playerHealth = playerHealth - 10;
                    cout << "ATTACK 2\n";
                    cout << " \n";
                    cout << "Grunt Ogre Health: " << gruntHealth << " HP.\n";
                    cout << "Grunt Ogre Health: " << gruntHealth << " - 75.\n";
                    cout << "Grunt Ogre Health: " << gruntHealth - heavyAttack << " HP.\n";
                    cout << "WELL DONE! You have won your first fight and\n";
                    cout << "killed the grunt with damage to spare!\n";
                    cout << "Continue to traverse through the lair and find " << petName << ".\n";
                    cout << " \n";
                    cout << "* REWARD! *\n";
                    cout << " \n";
                    cout << "Press enter again to see what you got!\n";
                    cin.get();
                    cin.get();
                    cout << " \n";
                    cout << "With your first enemy defeated you have been rewarded with\n";
                    cout << "a medkit. As you progress, you will gain more loot and various\n";
                    cout << "itmes.\n";
                    cout << playerName << " Health: " << playerHealth + gruntAttack1 << " HP.\n";
                    cout << "You're already at full health, so well done! Keep moving through\n";
                    cout << "the caves.\n";
                }
            }
        }

        else if (attack1 == 2) {
            cout << "Grunt Ogre Health: " << gruntHealth << " HP.\n";
            cout << "Grunt Ogre Health: " << gruntHealth << " - 75.\n";
            cout << "Grunt Ogre Health: " << gruntHealth - heavyAttack << " HP.\n";
            cout << "WELL DONE! You have won your first fight and\n";
            cout << "killed the grunt with just enough damage!\n";
            cout << "Continue to traverse through the lair and find " << petName << ".\n";
            cout << " \n";
            cout << "* REWARD! *\n";
            cout << " \n";
            cout << "Press enter again to see what you got!\n";
            cin.get();
            cin.get();
            cout << " \n";
            cout << "With your first enemy defeated you have been rewarded with\n";
            cout << "a medkit. As you progress, you will gain more loot and various\n";
            cout << "itmes.\n";
            cout << playerName << " Health: " << playerHealth + gruntAttack1 << " HP.\n";
            cout << "You're already at full health, so well done! Keep moving through\n";
            cout << "the caves.\n";
        }

        else {
            cout << "ERROR. Please select one of the listed attacks.\n";
        }
    }

    cout << " \n";
    cout << "_____________________________________________________________\n";
    cout << " \n";
    cout << " \n";
    cout << "PRESS ENTER TO CONTINUE\n";
    cin.get();
    cout << " \n";
    cout << " \n";
    cout << "_____________________________________________________________\n";
    cout << " \n";
    cout << " \n";


    //Traversing deeper into the cave 
    cout << "*TRAVERSING DEEPER INTO THE CAVE*\n";
    cout << " \n";
    cout << " \n";
    cout << "With your first enemy defeated, you must now traverse deeper\n";
    cout << "into the cave and find your sidekick.\n";
    cout << " \n";

    float pathway, pathway1 = 1, pathway2 = 2;
    cout << "You have now come to a split between two different pathways.\n";
    cout << " \n";
    cout << setw(15) << "PATHWAY 1" << setw(35) << "PATHWAY 2\n";
    cout << "- Flickering orange light" << setw(28) << "- Dim rays of light\n";
    cout << "- Feint growling" << setw(40) << "- Arguing and rustling\n";

    cout << " \n";
    cout << "Choose which way you would like to go by entering the number: ";
    cin >> pathway;
    cout << "_____________________________________________________________\n";
    cout << " \n";
    cout << "PRESS ENTER TO CONTINUE\n";
    cout << " \n";
    cout << "_____________________________________________________________\n";
    cin.get();
    cin.get();


    //Choosing the pathway
    if (pathway == 1) {
        float choice, attack1, attack2, attack3;
        float commanderHealth = 150, commanderAttack = 30, playerHealth = 175;
        cout << "YOU HAVE CHOSEN PATHWAY 1!\n";
        cout << " \n";
        cout << "As you approach the flickering orange light and turn the corner,\n";
        cout << "you see a Commander Ogre with a massive club sitting next to a\n";
        cout << "campfire!\n";
        cout << "He hasn't seen you yet. Would you like to fight him or sneak\n";
        cout << "around him?\n";
        cout << " \n";
        cout << "CHOICES:\n";
        cout << " \n";
        cout << "Fight the Commander Ogre:" << setw(10) << " - 1\n";
        cout << setw(20) << "OR\n";
        cout << "Sneak past the Commander Ogre:" << setw(5) << " - 2\n";
        cout << " \n";
        cout << "What do you want to do? (type in the choice number): ";
        cin >> choice;
        cout << " \n";
        cout << "PRESS ENTER TO CONTINUE\n";
        cin.get();
        cin.get();
        cout << " \n";
        cout << "_____________________________________________________________\n";
        cout << " \n";
        cout << " \n";

        //The Second fight against the Commander Ogre
        if (choice == 1) {
            cout << "CHOICE 1\n";
            cout << " \n";
            cout << "You have chosen to take on and fight the Commander Ogre! GET READY!\n";
            cout << "Here is the list of your attacks:\n";
            cout << "Normal Attack: " << normalAttack << " Damage." << setw(6) << " - 1" << endl;
            cout << "Heavy Attack: " << heavyAttack << " Damage." << setw(7) << " - 2" << endl;
            cout << " \n";
            cout << "This Commander Ogre has 150 HP!\n";
            cout << " \n";
            cout << "You have the first move, pick an attack: ";
            cin >> attack1;
            cout << " \n";
            cout << " \n";
            cout << "_____________________________________________________________\n";
            cout << " \n";
            cout << " \n";

            if (attack1 == 1) {
                cout << "ATTACK 1\n";
                cout << " \n";
                cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                cout << "Commander Ogre Health: " << commanderHealth << " - 50.\n";
                cout << "Commander Ogre Health: " << commanderHealth - normalAttack << " HP.\n";
                cout << "The enemy is still alive with " << commanderHealth - normalAttack << " health! He has hit you for 30 damage with his normal attack.\n";
                cout << playerName << " Health: " << playerHealth << " - 30 = " << playerHealth - commanderAttack << " HP.\n";
                cout << "Choose another attack!: ";
                cin >> attack2;
                cout << " \n";

                if (attack2 == 1) {
                    commanderHealth = commanderHealth - 50;
                    playerHealth = playerHealth - 30;
                    cout << "ATTACK 2\n";
                    cout << " \n";
                    cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                    cout << "Commander Ogre Health: " << commanderHealth << " - 50.\n";
                    cout << "Commander Ogre Health: " << commanderHealth - normalAttack << " HP.\n";
                    cout << "The enemy is still alive with " << commanderHealth - normalAttack << " health! He has hit you for another 30 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 30 = " << playerHealth - commanderAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> attack3;
                    cout << " \n";

                    if (attack3 == 1) {
                        commanderHealth = commanderHealth - 50;
                        playerHealth = playerHealth - 60;
                        cout << "ATTACK 3\n";
                        cout << " \n";
                        cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                        cout << "Commander Ogre Health: " << commanderHealth << " - 50.\n";
                        cout << "Commander Ogre Health: " << commanderHealth - normalAttack << " HP.\n";
                        cout << "WELL DONE! You have killed the Commander Ogre with just\n";
                        cout << "enough damage!.\n";
                        cout << "The Commander Ogre has dropped some loot and treasure! Press\n";
                        cout << "enter to pick it up.\n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cin.get();
                        cin.get();
                        cout << " \n";
                        cout << "*REWARD*\n";
                        cout << " \n";
                        cout << "NEW ARMOR SET - The Commander Ogre has just dropped a set of\n";
                        cout << "diamond armor!\n";
                        cout << "This new set has armor has restored your lost health and\n";
                        cout << "brought your health up to 250 HP!.\n";
                        cout << " \n";
                        cout << "NEW ATTACK - The Commander Ogre has just dropped his club!\n";
                        cout << "With the Ogre's club, you have just gained a new attack!\n";
                        cout << "Your new special attack does 100 Damage!\n";
                        cout << " \n";
                        cout << "Press enter to see your player's new stats!\n";
                        cin.get();
                        cout << "*PLAYER 1 STATS*\n";
                        cout << "Name: " << playerName << endl;
                        cout << "Age: " << playerAge << endl;
                        cout << "Height: " << playerHeight << endl;
                        cout << "Health: " << playerHealth + 75 << " HP.\n";
                        cout << " \n";
                        cout << "Normal Attack: " << normalAttack << " Damage." << setw(6) << " - 1" << endl;
                        cout << "Heavy Attack: " << heavyAttack << " Damage." << setw(7) << " - 2" << endl;
                        cout << "*Special Attack: " << specialAttack << " Damage " << " - 3*" << endl;
                        cout << " \n";
                        cout << " \n";
                        cout << " \n";
                        cout << "PRESS ENTER TO CONTINUE\n";
                        cin.get();
                        cout << " \n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cout << " \n";
                        cout << " \n";
                    }
                    else if (attack3 == 2) {
                        commanderHealth = commanderHealth - 50;
                        playerHealth = playerHealth - 60;
                        cout << "ATTACK 3\n";
                        cout << " \n";
                        cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                        cout << "Commander Ogre Health: " << commanderHealth << " - 75.\n";
                        cout << "Commander Ogre Health: " << commanderHealth - heavyAttack << " HP.\n";
                        cout << "WELL DONE! You have killed the Commander Ogre with more than\n";
                        cout << "enough damage!.\n";
                        cout << "The Commander Ogre has dropped some loot and treasure!\n";
                        cout << "Press enter to pick it up!\n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cin.get();
                        cin.get();
                        cout << " \n";
                        cout << "*REWARD*\n";
                        cout << " \n";
                        cout << "NEW ARMOR SET - The Commander Ogre has just dropped a set of\n";
                        cout << "diamond armor!\n";
                        cout << "This new set has armor has restored your lost health and\n";
                        cout << "brought your health up to 250 HP!.\n";
                        cout << " \n";
                        cout << "NEW ATTACK - The Commander Ogre has just dropped his club!\n";
                        cout << "With the Ogre's club, you have just gained a new attack!\n";
                        cout << "Your new special attack does 100 Damage!\n";
                        cout << " \n";
                        cout << "Press enter to see your player's new stats!\n";
                        cin.get();
                        cout << "*PLAYER 1 STATS*\n";
                        cout << "Name: " << playerName << endl;
                        cout << "Age: " << playerAge << endl;
                        cout << "Height: " << playerHeight << endl;
                        cout << "Health: " << playerHealth + 75 << " HP.\n";
                        cout << " \n";
                        cout << "Normal Attack: " << normalAttack << " Damage." << setw(6) << " - 1" << endl;
                        cout << "Heavy Attack: " << heavyAttack << " Damage." << setw(7) << " - 2" << endl;
                        cout << "*Special Attack: " << specialAttack << " Damage " << " - 3*" << endl;
                        cout << " \n";
                        cout << " \n";
                        cout << " \n";
                        cout << "PRESS ENTER TO CONTINUE\n";
                        cin.get();
                        cout << " \n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cout << " \n";
                        cout << " \n";
                    }
                }
                else if (attack2 == 2) {
                    commanderHealth = commanderHealth - 50;
                    playerHealth = playerHealth - 30;
                    cout << "ATTACK 2\n";
                    cout << " \n";
                    cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                    cout << "Commander Ogre Health: " << commanderHealth << " - 75.\n";
                    cout << "Commander Ogre Health: " << commanderHealth - heavyAttack << " HP.\n";
                    cout << "The enemy is still alive with " << commanderHealth - heavyAttack << " health! He has hit you for another 30 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 30 = " << playerHealth - commanderAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> attack3;
                    cout << " \n";

                    if (attack3 == 1) {
                        commanderHealth = commanderHealth - 75;
                        playerHealth = playerHealth - 60;
                        cout << "ATTACK 3\n";
                        cout << " \n";
                        cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                        cout << "Commander Ogre Health: " << commanderHealth << " - 50.\n";
                        cout << "Commander Ogre Health: " << commanderHealth - normalAttack << " HP.\n";
                        cout << "WELL DONE! You have killed the Commander Ogre with just\n";
                        cout << "enough damage!.\n";
                        cout << "The Commander Ogre has dropped some loot and treasure! Press\n";
                        cout << "enter to pick it up.\n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cin.get();
                        cin.get();
                        cout << " \n";
                        cout << "*REWARD*\n";
                        cout << " \n";
                        cout << "NEW ARMOR SET - The Commander Ogre has just dropped a set of\n";
                        cout << "diamond armor!\n";
                        cout << "This new set has armor has restored your lost health and\n";
                        cout << "brought your health up to 250 HP!.\n";
                        cout << " \n";
                        cout << "NEW ATTACK - The Commander Ogre has just dropped his club!\n";
                        cout << "With the Ogre's club, you have just gained a new attack!\n";
                        cout << "Your new special attack does 100 Damage!\n";
                        cout << " \n";
                        cout << "Press enter to see your player's new stats!\n";
                        cin.get();
                        cout << "*PLAYER 1 STATS*\n";
                        cout << "Name: " << playerName << endl;
                        cout << "Age: " << playerAge << endl;
                        cout << "Height: " << playerHeight << endl;
                        cout << "Health: " << playerHealth + 75 << " HP.\n";
                        cout << " \n";
                        cout << "Normal Attack: " << normalAttack << " Damage." << setw(6) << " - 1" << endl;
                        cout << "Heavy Attack: " << heavyAttack << " Damage." << setw(7) << " - 2" << endl;
                        cout << "*Special Attack: " << specialAttack << " Damage " << " - 3*" << endl;
                        cout << " \n";
                        cout << " \n";
                        cout << " \n";
                        cout << "PRESS ENTER TO CONTINUE\n";
                        cin.get();
                        cout << " \n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cout << " \n";
                        cout << " \n";
                    }
                    else if (attack3 == 2) {
                        commanderHealth = commanderHealth - 75;
                        playerHealth = playerHealth - 60;
                        cout << "ATTACK 3\n";
                        cout << " \n";
                        cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                        cout << "Commander Ogre Health: " << commanderHealth << " - 75.\n";
                        cout << "Commander Ogre Health: " << commanderHealth - heavyAttack << " HP.\n";
                        cout << "WELL DONE! You have killed the Commander Ogre with more than\n";
                        cout << "enough damage!.\n";
                        cout << "The Commander Ogre has dropped some loot and treasure! Press\n";
                        cout << "enter to pick it up.\n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cin.get();
                        cin.get();
                        cout << " \n";
                        cout << "*REWARD*\n";
                        cout << " \n";
                        cout << "NEW ARMOR SET - The Commander Ogre has just dropped a set of\n";
                        cout << "diamond armor!\n";
                        cout << "This new set has armor has restored your lost health and\n";
                        cout << "brought your health up to 250 HP!.\n";
                        cout << " \n";
                        cout << "NEW ATTACK - The Commander Ogre has just dropped his club!\n";
                        cout << "With the Ogre's club, you have just gained a new attack!\n";
                        cout << "Your new special attack does 100 Damage!\n";
                        cout << " \n";
                        cout << "Press enter to see your player's new stats!\n";
                        cin.get();
                        cout << "*PLAYER 1 STATS*\n";
                        cout << "Name: " << playerName << endl;
                        cout << "Age: " << playerAge << endl;
                        cout << "Height: " << playerHeight << endl;
                        cout << "Health: " << playerHealth + 75 << " HP.\n";
                        cout << " \n";
                        cout << "Normal Attack: " << normalAttack << " Damage." << setw(6) << " - 1" << endl;
                        cout << "Heavy Attack: " << heavyAttack << " Damage." << setw(7) << " - 2" << endl;
                        cout << "*Special Attack: " << specialAttack << " Damage " << " - 3*" << endl;
                        cout << " \n";
                        cout << " \n";
                        cout << " \n";
                        cout << "PRESS ENTER TO CONTINUE\n";
                        cin.get();
                        cout << " \n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cout << " \n";
                        cout << " \n";
                    }
                }
            }
            if (attack1 == 2) {
                cout << "ATTACK 1\n";
                cout << " \n";
                cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                cout << "Commander Ogre Health: " << commanderHealth << " - 75.\n";
                cout << "Commander Ogre Health: " << commanderHealth - heavyAttack << " HP.\n";
                cout << "The enemy is still alive with " << commanderHealth - heavyAttack << " health! He has hit you for 30 damage with his normal attack.\n";
                cout << playerName << " Health: " << playerHealth << " - 30 = " << playerHealth - commanderAttack << " HP.\n";
                cout << "Choose another attack!: ";
                cin >> attack2;
                cout << " \n";

                if (attack2 == 1) {
                    commanderHealth = commanderHealth - 75;
                    playerHealth = playerHealth - 30;
                    cout << "ATTACK 2\n";
                    cout << " \n";
                    cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                    cout << "Commander Ogre Health: " << commanderHealth << " - 50.\n";
                    cout << "Commander Ogre Health: " << commanderHealth - normalAttack << " HP.\n";
                    cout << "The enemy is still alive with " << commanderHealth - normalAttack << " health! He has hit you for another 30 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 30 = " << playerHealth - commanderAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> attack3;
                    cout << " \n";

                    if (attack3 == 1) {
                        commanderHealth = commanderHealth - 50;
                        playerHealth = playerHealth - 60;
                        cout << "ATTACK 3\n";
                        cout << " \n";
                        cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                        cout << "Commander Ogre Health: " << commanderHealth << " - 50.\n";
                        cout << "Commander Ogre Health: " << commanderHealth - normalAttack << " HP.\n";
                        cout << "WELL DONE! You have killed the Commander Ogre with just\n";
                        cout << "enough damage!.\n";
                        cout << "The Commander Ogre has dropped some loot and treasure! Press\n";
                        cout << "enter to pick it up.\n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cin.get();
                        cin.get();
                        cout << " \n";
                        cout << "*REWARD*\n";
                        cout << " \n";
                        cout << "NEW ARMOR SET - The Commander Ogre has just dropped a set of\n";
                        cout << "diamond armor!\n";
                        cout << "This new set has armor has restored your lost health and\n";
                        cout << "brought your health up to 250 HP!.\n";
                        cout << " \n";
                        cout << "NEW ATTACK - The Commander Ogre has just dropped his club!\n";
                        cout << "With the Ogre's club, you have just gained a new attack!\n";
                        cout << "Your new special attack does 100 Damage!\n";
                        cout << " \n";
                        cout << "Press enter to see your player's new stats!\n";
                        cin.get();
                        cout << "*PLAYER 1 STATS*\n";
                        cout << "Name: " << playerName << endl;
                        cout << "Age: " << playerAge << endl;
                        cout << "Height: " << playerHeight << endl;
                        cout << "Health: " << playerHealth + 75 << " HP.\n";
                        cout << " \n";
                        cout << "Normal Attack: " << normalAttack << " Damage." << setw(6) << " - 1" << endl;
                        cout << "Heavy Attack: " << heavyAttack << " Damage." << setw(7) << " - 2" << endl;
                        cout << "*Special Attack: " << specialAttack << " Damage " << " - 3*" << endl;
                        cout << " \n";
                        cout << " \n";
                        cout << " \n";
                        cout << "PRESS ENTER TO CONTINUE\n";
                        cin.get();
                        cout << " \n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cout << " \n";
                        cout << " \n";
                    }
                    else if (attack3 == 2) {
                        commanderHealth = commanderHealth - 50;
                        playerHealth = playerHealth - 60;
                        cout << "ATTACK 3\n";
                        cout << " \n";
                        cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                        cout << "Commander Ogre Health: " << commanderHealth << " - 75.\n";
                        cout << "Commander Ogre Health: " << commanderHealth - heavyAttack << " HP.\n";
                        cout << "WELL DONE! You have killed the Commander Ogre with more than\n";
                        cout << "enough damage!.\n";
                        cout << "The Commander Ogre has dropped some loot and treasure!\n";
                        cout << "Press enter to pick it up!\n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cin.get();
                        cin.get();
                        cout << " \n";
                        cout << "*REWARD*\n";
                        cout << " \n";
                        cout << "NEW ARMOR SET - The Commander Ogre has just dropped a set of\n";
                        cout << "diamond armor!\n";
                        cout << "This new set has armor has restored your lost health and\n";
                        cout << "brought your health up to 250 HP!.\n";
                        cout << " \n";
                        cout << "NEW ATTACK - The Commander Ogre has just dropped his club!\n";
                        cout << "With the Ogre's club, you have just gained a new attack!\n";
                        cout << "Your new special attack does 100 Damage!\n";
                        cout << " \n";
                        cout << "Press enter to see your player's new stats!\n";
                        cin.get();
                        cout << "*PLAYER 1 STATS*\n";
                        cout << "Name: " << playerName << endl;
                        cout << "Age: " << playerAge << endl;
                        cout << "Height: " << playerHeight << endl;
                        cout << "Health: " << playerHealth + 75 << " HP.\n";
                        cout << " \n";
                        cout << "Normal Attack: " << normalAttack << " Damage." << setw(6) << " - 1" << endl;
                        cout << "Heavy Attack: " << heavyAttack << " Damage." << setw(7) << " - 2" << endl;
                        cout << "*Special Attack: " << specialAttack << " Damage " << " - 3*" << endl;
                        cout << " \n";
                        cout << " \n";
                        cout << " \n";
                        cout << "PRESS ENTER TO CONTINUE\n";
                        cin.get();
                        cout << " \n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cout << " \n";
                        cout << " \n";
                    }
                }
                else if (attack2 == 2) {
                    commanderHealth = commanderHealth - 75;
                    playerHealth = playerHealth - 30;
                    cout << "ATTACK 2\n";
                    cout << " \n";
                    cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                    cout << "Commander Ogre Health: " << commanderHealth << " - 75.\n";
                    cout << "Commander Ogre Health: " << commanderHealth - heavyAttack << " HP.\n";
                    cout << "WELL DONE! You have killed the Commander Ogre with more than\n";
                    cout << "enough damage!.\n";
                    cout << "The Commander Ogre has dropped some loot and treasure!\n";
                    cout << "Press enter to pick it up!\n";
                    cout << " \n";
                    cout << "_____________________________________________________________\n";
                    cin.get();
                    cin.get();
                    cout << " \n";
                    cout << "*REWARD*\n";
                    cout << " \n";
                    cout << "NEW ARMOR SET - The Commander Ogre has just dropped a set of\n";
                    cout << "diamond armor!\n";
                    cout << "This new set has armor has restored your lost health and\n";
                    cout << "brought your health up to 250 HP!.\n";
                    cout << " \n";
                    cout << "NEW ATTACK - The Commander Ogre has just dropped his club!\n";
                    cout << "With the Ogre's club, you have just gained a new attack!\n";
                    cout << "Your new special attack does 100 Damage!\n";
                    cout << " \n";
                    cout << "Press enter to see your player's new stats!\n";
                    cin.get();
                    cout << "*PLAYER 1 STATS*\n";
                    cout << "Name: " << playerName << endl;
                    cout << "Age: " << playerAge << endl;
                    cout << "Height: " << playerHeight << endl;
                    cout << "Health: " << playerHealth + 75 << " HP.\n";
                    cout << " \n";
                    cout << "Normal Attack: " << normalAttack << " Damage." << setw(6) << " - 1" << endl;
                    cout << "Heavy Attack: " << heavyAttack << " Damage." << setw(7) << " - 2" << endl;
                    cout << "*Special Attack: " << specialAttack << " Damage " << " - 3*" << endl;
                    cout << " \n";
                    cout << " \n";
                    cout << " \n";
                    cout << "PRESS ENTER TO CONTINUE\n";
                    cin.get();
                    cout << " \n";
                    cout << " \n";
                    cout << "_____________________________________________________________\n";
                    cout << " \n";
                    cout << " \n";
                }
            }
        }
        else if (choice == 2) {
            cout << "CHOICE 2\n";
            cout << " \n";
            cout << "You have chosen to sneak around the Commander Ogre.\n";
            cout << "This is a safe move that does not run the risk death, very smart.\n";
            cout << "You have successfully evaded the commander ogre and have come \n";
            cout << "across a chest in the next tunnel!\n";
            cout << " \n";
            cout << "Press enter to open the chest and get your loot.\n";
            cin.get();
            cout << " \n";
            cout << "_____________________________________________________________\n";
            cout << " \n";
            cout << "* LOOT *\n";
            cout << " \n";
            cout << "A NEW SET OF ARMOR - This new set of armor has increased your health\n";
            cout << "to 250 HP!\n";
            cout << " \n";
            cout << "A NEW SPECIAL ATTACK - There was a massive Ogre Club in the chest!\n";
            cout << "With this new weapon, you now have a special attack that does 100\n";
            cout << "damage!\n";
            cout << " \n";
            cout << "Press enter to see your player's new stats!\n";
            cin.get();
            cout << "*PLAYER 1 STATS*\n";
            cout << "Name: " << playerName << endl;
            cout << "Age: " << playerAge << endl;
            cout << "Height: " << playerHeight << endl;
            cout << "Health: " << playerHealth + 75 << " HP.\n";
            cout << " \n";
            cout << "Normal Attack: " << normalAttack << " Damage." << setw(6) << " - 1" << endl;
            cout << "Heavy Attack: " << heavyAttack << " Damage." << setw(7) << " - 2" << endl;
            cout << "*Special Attack: " << specialAttack << " Damage " << " - 3*" << endl;
            cout << " \n";
            cout << " \n";
            cout << "PRESS ENTER TO CONTINUE\n";
            cin.get();
            cout << " \n";
            cout << " \n";
            cout << "_____________________________________________________________\n";
            cout << " \n";
            cout << " \n";
        }
    }

    //Code for Pathway 2 (Commander Ogre)
    else if (pathway == 2) {
        float option, attack1, attack2, attack3;
        float commanderHealth = 150, commanderAttack = 30, playerHealth = 175;;
        cout << "YOU HAVE CHOSEN PATHWAY 2!\n";
        cout << " \n";
        cout << "As you approach the dim rays of light, arguing, and rustling, you come\n";
        cout << "across the Ogre King and your sidekick " << petName << "!\n";
        cout << "The Ogre King spots you and flees deeper into his underground lair \n";
        cout << "with " << petName << ".\n";
        cout << " \n";
        cout << "Suddenly, a Commander Ogre bursts out from the tunnel! He stands their\n";
        cout << "guarding the tunnel that the Ogre King went through with a massive club!\n";
        cout << "He has not seen you yet, so you have two options.\n";
        cout << " \n";
        cout << "OPTIONS:\n";
        cout << "Fight the Commander Ogre and chase after the Ogre King." << setw(13) << " - 1\n";
        cout << setw(30) << "OR\n";
        cout << "Sneak past the Commander Ogre and enter down a different tunnel" << setw(2) << " - 2\n";
        cout << " \n";
        cout << "What do you want to do: ";
        cin >> option;
        cout << " \n";
        cout << "PRESS ENTER TO CONTINUE\n";
        cout << " \n";
        cout << "_____________________________________________________________\n";
        cout << " \n";
        cin.get();
        cin.get();

        if (option == 1) {
            cout << "OPTION 1\n";
            cout << " \n";
            cout << "You have chosen to take on and fight the Commander Ogre! GET READY!\n";
            cout << "Here is the list of your attacks:\n";
            cout << "Normal Attack: " << normalAttack << " Damage." << setw(6) << " - 1" << endl;
            cout << "Heavy Attack: " << heavyAttack << " Damage." << setw(7) << " - 2" << endl;
            cout << " \n";
            cout << "This Commander Ogre has 150 HP!\n";
            cout << " \n";
            cout << "You have the first move, pick an attack: ";
            cin >> attack1;
            cout << " \n";
            cout << " \n";
            cout << "_____________________________________________________________\n";
            cout << " \n";
            cout << " \n";

            if (attack1 == 1) {
                cout << "ATTACK 1\n";
                cout << " \n";
                cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                cout << "Commander Ogre Health: " << commanderHealth << " - 50.\n";
                cout << "Commander Ogre Health: " << commanderHealth - normalAttack << " HP.\n";
                cout << "The enemy is still alive with " << commanderHealth - normalAttack << " health! He has hit you for 30 damage with his normal attack.\n";
                cout << playerName << " Health: " << playerHealth << " - 30 = " << playerHealth - commanderAttack << " HP.\n";
                cout << "Choose another attack!: ";
                cin >> attack2;
                cout << " \n";

                if (attack2 == 1) {
                    commanderHealth = commanderHealth - 50;
                    playerHealth = playerHealth - 30;
                    cout << "ATTACK 2\n";
                    cout << " \n";
                    cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                    cout << "Commander Ogre Health: " << commanderHealth << " - 50.\n";
                    cout << "Commander Ogre Health: " << commanderHealth - normalAttack << " HP.\n";
                    cout << "The enemy is still alive with " << commanderHealth - normalAttack << " health! He has hit you for another 30 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 30 = " << playerHealth - commanderAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> attack3;
                    cout << " \n";

                    if (attack3 == 1) {
                        commanderHealth = commanderHealth - 50;
                        playerHealth = playerHealth - 60;
                        cout << "ATTACK 3\n";
                        cout << " \n";
                        cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                        cout << "Commander Ogre Health: " << commanderHealth << " - 50.\n";
                        cout << "Commander Ogre Health: " << commanderHealth - normalAttack << " HP.\n";
                        cout << "WELL DONE! You have killed the Commander Ogre with just\n";
                        cout << "enough damage!.\n";
                        cout << "The Commander Ogre has dropped some loot and treasure! Press\n";
                        cout << "enter to pick it up.\n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cin.get();
                        cin.get();
                        cout << " \n";
                        cout << "*REWARD*\n";
                        cout << " \n";
                        cout << "NEW ARMOR SET - The Commander Ogre has just dropped a set of\n";
                        cout << "diamond armor!\n";
                        cout << "This new set has armor has restored your lost health and\n";
                        cout << "brought your health up to 250 HP!.\n";
                        cout << " \n";
                        cout << "NEW ATTACK - The Commander Ogre has just dropped his club!\n";
                        cout << "With the Ogre's club, you have just gained a new attack!\n";
                        cout << "Your new special attack does 100 Damage!\n";
                        cout << " \n";
                        cout << "Press enter to see your player's new stats!\n";
                        cin.get();
                        cout << "*PLAYER 1 STATS*\n";
                        cout << "Name: " << playerName << endl;
                        cout << "Age: " << playerAge << endl;
                        cout << "Height: " << playerHeight << endl;
                        cout << "Health: " << playerHealth + 75 << " HP.\n";
                        cout << " \n";
                        cout << "Normal Attack: " << normalAttack << " Damage." << setw(6) << " - 1" << endl;
                        cout << "Heavy Attack: " << heavyAttack << " Damage." << setw(7) << " - 2" << endl;
                        cout << "*Special Attack: " << specialAttack << " Damage " << " - 3*" << endl;
                        cout << " \n";
                        cout << " \n";
                        cout << " \n";
                        cout << "PRESS ENTER TO CONTINUE\n";
                        cin.get();
                        cout << " \n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cout << " \n";
                        cout << " \n";
                    }
                    else if (attack3 == 2) {
                        commanderHealth = commanderHealth - 50;
                        playerHealth = playerHealth - 60;
                        cout << "ATTACK 3\n";
                        cout << " \n";
                        cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                        cout << "Commander Ogre Health: " << commanderHealth << " - 75.\n";
                        cout << "Commander Ogre Health: " << commanderHealth - heavyAttack << " HP.\n";
                        cout << "WELL DONE! You have killed the Commander Ogre with more than\n";
                        cout << "enough damage!.\n";
                        cout << "The Commander Ogre has dropped some loot and treasure!\n";
                        cout << "Press enter to pick it up!\n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cin.get();
                        cin.get();
                        cout << " \n";
                        cout << "*REWARD*\n";
                        cout << " \n";
                        cout << "NEW ARMOR SET - The Commander Ogre has just dropped a set of\n";
                        cout << "diamond armor!\n";
                        cout << "This new set has armor has restored your lost health and\n";
                        cout << "brought your health up to 250 HP!.\n";
                        cout << " \n";
                        cout << "NEW ATTACK - The Commander Ogre has just dropped his club!\n";
                        cout << "With the Ogre's club, you have just gained a new attack!\n";
                        cout << "Your new special attack does 100 Damage!\n";
                        cout << " \n";
                        cout << "Press enter to see your player's new stats!\n";
                        cin.get();
                        cout << "*PLAYER 1 STATS*\n";
                        cout << "Name: " << playerName << endl;
                        cout << "Age: " << playerAge << endl;
                        cout << "Height: " << playerHeight << endl;
                        cout << "Health: " << playerHealth + 75 << " HP.\n";
                        cout << " \n";
                        cout << "Normal Attack: " << normalAttack << " Damage." << setw(6) << " - 1" << endl;
                        cout << "Heavy Attack: " << heavyAttack << " Damage." << setw(7) << " - 2" << endl;
                        cout << "*Special Attack: " << specialAttack << " Damage " << " - 3*" << endl;
                        cout << " \n";
                        cout << " \n";
                        cout << " \n";
                        cout << "PRESS ENTER TO CONTINUE\n";
                        cin.get();
                        cout << " \n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cout << " \n";
                        cout << " \n";
                    }
                }
                else if (attack2 == 2) {
                    commanderHealth = commanderHealth - 50;
                    playerHealth = playerHealth - 30;
                    cout << "ATTACK 2\n";
                    cout << " \n";
                    cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                    cout << "Commander Ogre Health: " << commanderHealth << " - 75.\n";
                    cout << "Commander Ogre Health: " << commanderHealth - heavyAttack << " HP.\n";
                    cout << "The enemy is still alive with " << commanderHealth - heavyAttack << " health! He has hit you for another 30 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 30 = " << playerHealth - commanderAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> attack3;
                    cout << " \n";

                    if (attack3 == 1) {
                        commanderHealth = commanderHealth - 125;
                        playerHealth = playerHealth - 60;
                        cout << "ATTACK 3\n";
                        cout << " \n";
                        cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                        cout << "Commander Ogre Health: " << commanderHealth << " - 50.\n";
                        cout << "Commander Ogre Health: " << commanderHealth - normalAttack << " HP.\n";
                        cout << "WELL DONE! You have killed the Commander Ogre with just\n";
                        cout << "enough damage!.\n";
                        cout << "The Commander Ogre has dropped some loot and treasure! Press\n";
                        cout << "enter to pick it up.\n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cin.get();
                        cin.get();
                        cout << " \n";
                        cout << "*REWARD*\n";
                        cout << " \n";
                        cout << "NEW ARMOR SET - The Commander Ogre has just dropped a set of\n";
                        cout << "diamond armor!\n";
                        cout << "This new set has armor has restored your lost health and\n";
                        cout << "brought your health up to 250 HP!.\n";
                        cout << " \n";
                        cout << "NEW ATTACK - The Commander Ogre has just dropped his club!\n";
                        cout << "With the Ogre's club, you have just gained a new attack!\n";
                        cout << "Your new special attack does 100 Damage!\n";
                        cout << " \n";
                        cout << "Press enter to see your player's new stats!\n";
                        cin.get();
                        cout << "*PLAYER 1 STATS*\n";
                        cout << "Name: " << playerName << endl;
                        cout << "Age: " << playerAge << endl;
                        cout << "Height: " << playerHeight << endl;
                        cout << "Health: " << playerHealth + 75 << " HP.\n";
                        cout << " \n";
                        cout << "Normal Attack: " << normalAttack << " Damage." << setw(6) << " - 1" << endl;
                        cout << "Heavy Attack: " << heavyAttack << " Damage." << setw(7) << " - 2" << endl;
                        cout << "*Special Attack: " << specialAttack << " Damage " << " - 3*" << endl;
                        cout << " \n";
                        cout << " \n";
                        cout << " \n";
                        cout << "PRESS ENTER TO CONTINUE\n";
                        cin.get();
                        cout << " \n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cout << " \n";
                        cout << " \n";
                    }
                    else if (attack3 == 2) {
                        commanderHealth = commanderHealth - 125;
                        playerHealth = playerHealth - 60;
                        cout << "ATTACK 3\n";
                        cout << " \n";
                        cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                        cout << "Commander Ogre Health: " << commanderHealth << " - 75.\n";
                        cout << "Commander Ogre Health: " << commanderHealth - heavyAttack << " HP.\n";
                        cout << "WELL DONE! You have killed the Commander Ogre with more than\n";
                        cout << "enough damage!.\n";
                        cout << "The Commander Ogre has dropped some loot and treasure! Press\n";
                        cout << "enter to pick it up.\n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cin.get();
                        cin.get();
                        cout << " \n";
                        cout << "*REWARD*\n";
                        cout << " \n";
                        cout << "NEW ARMOR SET - The Commander Ogre has just dropped a set of\n";
                        cout << "diamond armor!\n";
                        cout << "This new set has armor has restored your lost health and\n";
                        cout << "brought your health up to 250 HP!.\n";
                        cout << " \n";
                        cout << "NEW ATTACK - The Commander Ogre has just dropped his club!\n";
                        cout << "With the Ogre's club, you have just gained a new attack!\n";
                        cout << "Your new special attack does 100 Damage!\n";
                        cout << " \n";
                        cout << "Press enter to see your player's new stats!\n";
                        cin.get();
                        cout << "*PLAYER 1 STATS*\n";
                        cout << "Name: " << playerName << endl;
                        cout << "Age: " << playerAge << endl;
                        cout << "Height: " << playerHeight << endl;
                        cout << "Health: " << playerHealth + 75 << " HP.\n";
                        cout << " \n";
                        cout << "Normal Attack: " << normalAttack << " Damage." << setw(6) << " - 1" << endl;
                        cout << "Heavy Attack: " << heavyAttack << " Damage." << setw(7) << " - 2" << endl;
                        cout << "*Special Attack: " << specialAttack << " Damage " << " - 3*" << endl;
                        cout << " \n";
                        cout << " \n";
                        cout << " \n";
                        cout << "PRESS ENTER TO CONTINUE\n";
                        cin.get();
                        cout << " \n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cout << " \n";
                        cout << " \n";
                    }
                }
            }
            if (attack1 == 2) {
                cout << "ATTACK 1\n";
                cout << " \n";
                cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                cout << "Commander Ogre Health: " << commanderHealth << " - 75.\n";
                cout << "Commander Ogre Health: " << commanderHealth - heavyAttack << " HP.\n";
                cout << "The enemy is still alive with " << commanderHealth - heavyAttack << " health! He has hit you for 30 damage with his normal attack.\n";
                cout << playerName << " Health: " << playerHealth << " - 30 = " << playerHealth - commanderAttack << " HP.\n";
                cout << "Choose another attack!: ";
                cin >> attack2;
                cout << " \n";

                if (attack2 == 1) {
                    commanderHealth = commanderHealth - 75;
                    playerHealth = playerHealth - 30;
                    cout << "ATTACK 2\n";
                    cout << " \n";
                    cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                    cout << "Commander Ogre Health: " << commanderHealth << " - 50.\n";
                    cout << "Commander Ogre Health: " << commanderHealth - normalAttack << " HP.\n";
                    cout << "The enemy is still alive with " << commanderHealth - normalAttack << " health! He has hit you for another 30 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 30 = " << playerHealth - commanderAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> attack3;
                    cout << " \n";

                    if (attack3 == 1) {
                        commanderHealth = commanderHealth - 125;
                        playerHealth = playerHealth - 60;
                        cout << "ATTACK 3\n";
                        cout << " \n";
                        cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                        cout << "Commander Ogre Health: " << commanderHealth << " - 50.\n";
                        cout << "Commander Ogre Health: " << commanderHealth - normalAttack << " HP.\n";
                        cout << "WELL DONE! You have killed the Commander Ogre with just\n";
                        cout << "enough damage!.\n";
                        cout << "The Commander Ogre has dropped some loot and treasure! Press\n";
                        cout << "enter to pick it up.\n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cin.get();
                        cin.get();
                        cout << " \n";
                        cout << "*REWARD*\n";
                        cout << " \n";
                        cout << "NEW ARMOR SET - The Commander Ogre has just dropped a set of\n";
                        cout << "diamond armor!\n";
                        cout << "This new set has armor has restored your lost health and\n";
                        cout << "brought your health up to 250 HP!.\n";
                        cout << " \n";
                        cout << "NEW ATTACK - The Commander Ogre has just dropped his club!\n";
                        cout << "With the Ogre's club, you have just gained a new attack!\n";
                        cout << "Your new special attack does 100 Damage!\n";
                        cout << " \n";
                        cout << "Press enter to see your player's new stats!\n";
                        cin.get();
                        cout << "*PLAYER 1 STATS*\n";
                        cout << "Name: " << playerName << endl;
                        cout << "Age: " << playerAge << endl;
                        cout << "Height: " << playerHeight << endl;
                        cout << "Health: " << playerHealth + 75 << " HP.\n";
                        cout << " \n";
                        cout << "Normal Attack: " << normalAttack << " Damage." << setw(6) << " - 1" << endl;
                        cout << "Heavy Attack: " << heavyAttack << " Damage." << setw(7) << " - 2" << endl;
                        cout << "*Special Attack: " << specialAttack << " Damage " << " - 3*" << endl;
                        cout << " \n";
                        cout << " \n";
                        cout << " \n";
                        cout << "PRESS ENTER TO CONTINUE\n";
                        cin.get();
                        cout << " \n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cout << " \n";
                        cout << " \n";
                    }
                    else if (attack3 == 2) {
                        commanderHealth = commanderHealth - 125;
                        playerHealth = playerHealth - 60;
                        cout << "ATTACK 3\n";
                        cout << " \n";
                        cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                        cout << "Commander Ogre Health: " << commanderHealth << " - 75.\n";
                        cout << "Commander Ogre Health: " << commanderHealth - heavyAttack << " HP.\n";
                        cout << "WELL DONE! You have killed the Commander Ogre with more than\n";
                        cout << "enough damage!.\n";
                        cout << "The Commander Ogre has dropped some loot and treasure!\n";
                        cout << "Press enter to pick it up!\n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cin.get();
                        cin.get();
                        cout << " \n";
                        cout << "*REWARD*\n";
                        cout << " \n";
                        cout << "NEW ARMOR SET - The Commander Ogre has just dropped a set of\n";
                        cout << "diamond armor!\n";
                        cout << "This new set has armor has restored your lost health and\n";
                        cout << "brought your health up to 250 HP!.\n";
                        cout << " \n";
                        cout << "NEW ATTACK - The Commander Ogre has just dropped his club!\n";
                        cout << "With the Ogre's club, you have just gained a new attack!\n";
                        cout << "Your new special attack does 100 Damage!\n";
                        cout << " \n";
                        cout << "Press enter to see your player's new stats!\n";
                        cin.get();
                        cout << "*PLAYER 1 STATS*\n";
                        cout << "Name: " << playerName << endl;
                        cout << "Age: " << playerAge << endl;
                        cout << "Height: " << playerHeight << endl;
                        cout << "Health: " << playerHealth + 75 << " HP.\n";
                        cout << " \n";
                        cout << "Normal Attack: " << normalAttack << " Damage." << setw(6) << " - 1" << endl;
                        cout << "Heavy Attack: " << heavyAttack << " Damage." << setw(7) << " - 2" << endl;
                        cout << "*Special Attack: " << specialAttack << " Damage " << " - 3*" << endl;
                        cout << " \n";
                        cout << " \n";
                        cout << " \n";
                        cout << "PRESS ENTER TO CONTINUE\n";
                        cin.get();
                        cout << " \n";
                        cout << " \n";
                        cout << "_____________________________________________________________\n";
                        cout << " \n";
                        cout << " \n";
                    }
                }
                else if (attack2 == 2) {
                    commanderHealth = commanderHealth - 75;
                    playerHealth = playerHealth - 30;
                    cout << "ATTACK 2\n";
                    cout << " \n";
                    cout << "Commander Ogre Health: " << commanderHealth << " HP.\n";
                    cout << "Commander Ogre Health: " << commanderHealth << " - 75.\n";
                    cout << "Commander Ogre Health: " << commanderHealth - heavyAttack << " HP.\n";
                    cout << "WELL DONE! You have killed the Commander Ogre.\n";
                    cout << "The Commander Ogre has dropped some loot and treasure!\n";
                    cout << "Press enter to pick it up!\n";
                    cout << " \n";
                    cout << "_____________________________________________________________\n";
                    cin.get();
                    cin.get();
                    cout << " \n";
                    cout << "*REWARD*\n";
                    cout << " \n";
                    cout << "NEW ARMOR SET - The Commander Ogre has just dropped a set of\n";
                    cout << "diamond armor!\n";
                    cout << "This new set has armor has restored your lost health and\n";
                    cout << "brought your health up to 250 HP!.\n";
                    cout << " \n";
                    cout << "NEW ATTACK - The Commander Ogre has just dropped his club!\n";
                    cout << "With the Ogre's club, you have just gained a new attack!\n";
                    cout << "Your new special attack does 100 Damage!\n";
                    cout << " \n";
                    cout << "Press enter to see your player's new stats!\n";
                    cin.get();
                    cout << "*PLAYER 1 STATS*\n";
                    cout << "Name: " << playerName << endl;
                    cout << "Age: " << playerAge << endl;
                    cout << "Height: " << playerHeight << endl;
                    cout << "Health: " << 250 << " HP.\n";
                    cout << " \n";
                    cout << "Normal Attack: " << normalAttack << " Damage." << setw(6) << " - 1" << endl;
                    cout << "Heavy Attack: " << heavyAttack << " Damage." << setw(7) << " - 2" << endl;
                    cout << "*Special Attack: " << specialAttack << " Damage " << " - 3*" << endl;
                    cout << " \n";
                    cout << " \n";
                    cout << " \n";
                    cout << "PRESS ENTER TO CONTINUE\n";
                    cin.get();
                    cout << " \n";
                    cout << " \n";
                    cout << "_____________________________________________________________\n";
                    cout << " \n";
                    cout << " \n";
                }
            }
        }
        else if (option == 2) {
            cout << "OPTION 2\n";
            cout << " \n";
            cout << "You have chosen to sneak around the Commander Ogre.\n";
            cout << "This is a safe move that does not run the risk death, very smart.\n";
            cout << "You have successfully evaded the commander ogre and have come \n";
            cout << "across a chest in the next tunnel!\n";
            cout << " \n";
            cout << "Press enter to open the chest and get your loot.\n";
            cout << " \n";
            cout << "_____________________________________________________________\n";
            cout << " \n";
            cin.get();
            cout << "*LOOT*\n";
            cout << " \n";
            cout << "A NEW SET OF ARMOR - This new set of armor has increased your health\n";
            cout << "to 250 HP!\n";
            cout << " \n";
            cout << "A NEW SPECIAL ATTACK - There was a massive Ogre Club in the chest!\n";
            cout << "With this new weapon, you now have a special attack that does 100\n";
            cout << "damage!\n";
            cout << " \n";
            cout << "Press enter to see your player's new stats!\n";
            cin.get();
            cout << "*PLAYER 1 STATS*\n";
            cout << "Name: " << playerName << endl;
            cout << "Age: " << playerAge << " years old." << endl;
            cout << "Height: " << playerHeight << endl;
            cout << "Health: " << playerHealth + 75 << " HP.\n";
            cout << " \n";
            cout << "Normal Attack: " << normalAttack << " Damage." << setw(6) << " - 1" << endl;
            cout << "Heavy Attack: " << heavyAttack << " Damage." << setw(7) << " - 2" << endl;
            cout << "*Special Attack: " << specialAttack << " Damage " << " - 3*" << endl;
            cout << "\n";
            cout << "_____________________________________________________________\n";
            cout << " \n";
            cout << " \n";
            cout << " \n";
            cout << "PRESS ENTER TO CONTINUE\n";
            cin.get();
            cout << " \n";
            cout << " \n";
            cout << "_____________________________________________________________\n";
            cout << " \n";
            cout << " \n";
        }
    }


    //Final Chapter of the Game
    playerHealth = playerHealth + 75;
    char tunnel;
    cout << "NEARING THE END!\n";
    cout << " \n";
    cout << " \n";
    cout << "PRESS ENTER TO CONTINUE\n";
    cout << " \n";
    cout << "_____________________________________________________________\n";
    cin.get();
    cout << " \n";
    cout << "You are reaching the end of your journey, keep pushing\n";
    cout << "forward!\n";
    cout << "With your new gear, you can now rival the power of the Ogre\n";
    cout << "King!\n";
    cout << " \n";
    cout << "After having passed the Commander Ogre, you have now come\n";
    cout << "to a split in the tunnel. There are now 3 different entrances\n";
    cout << "to choose from and go through.\n";
    cout << " \n";
    cout << "Press enter to see your options\n";
    cout << " \n";
    cout << setw(15) << "Tunnel A" << setw(35) << "Tunnel B\n";
    cout << "- Beams of golden light" << setw(31) << "- Feint golden light\n";
    cout << "- Grunting noises" << setw(39) << "- Arguing and rustling\n";
    cout << " \n";
    cout << setw(15) << "Tunnel C" << endl;
    cout << "- Flickering golden light" << endl;
    cout << "- Sounds of fighting" << endl;
    cout << " \n";
    cout << "Choose a tunnel to go down by typing in the tunnel's letter: ";
    cin >> tunnel;
    cout << " \n";
    cout << " \n";
    cin.get();
    cout << "_____________________________________________________________\n";
    cout << " \n";
    cout << " \n";

    switch (tunnel) {
    case 'A': cout << "YOU HAVE CHOSEN TUNNEL A!\n";
        cout << " \n";
        cout << "As you approach the high beams of golden light and turn\n";
        cout << "the corner. You see the Ogre King sitting at his throne\n";
        cout << "surrounded by gold and other treasures!\n";
        cout << "He sits there with " << petName << " in a cage next\n";
        cout << "to him, which is guarded by a Commander Ogre.\n";
        cout << "He laughs at you as you stand there and seem hopeless in\n";
        cout << "his pressence\n";
        cout << " \n";
        cout << "Fueled with rage, you charge in to fight the King\n";
        cout << "and save " << petName << "!\n";


        break;

    case 'B': cout << "YOU HAVE CHOSEN TUNNEL B!\n";
        cout << " \n";
        cout << "As you approach the high beams of golden light and turn\n";
        cout << "the corner. You see the Ogre King sitting at his throne\n";
        cout << "surrounded by gold and other treasures!\n";
        cout << "He sits there with " << petName << " in a cage next\n";
        cout << "to him, which is guarded by a Commander Ogre.\n";
        cout << "He laughs at you as you stand there and seem hopeless in\n";
        cout << "his pressence\n";
        cout << " \n";
        cout << "Fueled with rage, you charge in to fight the King\n";
        cout << "and save " << petName << "!\n";

        break;

    case 'C': cout << "YOU HAVE CHOSEN TUNNEL C!\n";
        cout << " \n";
        cout << "As you approach the high beams of golden light and turn\n";
        cout << "the corner. You see the Ogre King sitting at his throne\n";
        cout << "surrounded by gold and other treasures!\n";
        cout << "He sits there with " << petName << " in a cage next\n";
        cout << "to him, which is guarded by a Commander Ogre.\n";
        cout << "He laughs at you as you stand there and seem hopeless in\n";
        cout << "his pressence\n";
        cout << " \n";
        cout << "Fueled with rage, you charge in to fight the King\n";
        cout << "and save " << petName << "!\n";

        break;

    case 'a': cout << "YOU HAVE CHOSEN TUNNEL A!\n";
        cout << " \n";
        cout << "As you approach the high beams of golden light and turn\n";
        cout << "the corner. You see the Ogre King sitting at his throne\n";
        cout << "surrounded by gold and other treasures!\n";
        cout << "He sits there with " << petName << " in a cage next\n";
        cout << "to him, which is guarded by a Commander Ogre.\n";
        cout << "He laughs at you as you stand there and seem hopeless in\n";
        cout << "his pressence\n";
        cout << " \n";
        cout << "Fueled with rage, you charge in to fight the King\n";
        cout << "and save " << petName << "!\n";

        break;

    case 'b': cout << "YOU HAVE CHOSEN TUNNEL B!\n";
        cout << " \n";
        cout << "As you approach the high beams of golden light and turn\n";
        cout << "the corner. You see the Ogre King sitting at his throne\n";
        cout << "surrounded by gold and other treasures!\n";
        cout << "He sits there with " << petName << " in a cage next\n";
        cout << "to him, which is guarded by a Commander Ogre.\n";
        cout << "He laughs at you as you stand there and seem hopeless in\n";
        cout << "his pressence\n";
        cout << " \n";
        cout << "Fueled with rage, you charge in to fight the King\n";
        cout << "and save " << petName << "!\n";

        break;

    case 'c': cout << "YOU HAVE CHOSEN TUNNEL C!\n";
        cout << " \n";
        cout << "As you approach the high beams of golden light and turn\n";
        cout << "the corner. You see the Ogre King sitting at his throne\n";
        cout << "surrounded by gold and other treasures!\n";
        cout << "He sits there with " << petName << " in a cage next\n";
        cout << "to him, which is guarded by a Commander Ogre.\n";
        cout << "He laughs at you as you stand there and seem hopeless in\n";
        cout << "his pressence\n";
        cout << " \n";
        cout << "Fueled with rage, you charge in to fight the King\n";
        cout << "and save " << petName << "!\n";

        break;

    }

    cout << "_____________________________________________________________\n";
    cout << " \n";
    cout << " \n";
    cout << " \n";
    cout << "PRESS ENTER TO CONTINUE\n";
    cin.get();
    cout << " \n";
    cout << " \n";
    cout << "_____________________________________________________________\n";
    cout << " \n";
    cout << " \n";

    //Final Fight against King Ogre
    double kingHealth = 300, kingAttack = 40;
    double fAttack1, fAttack2, fAttack3, fAttack4, fAttack5, fAttack6;
    cout << "THE FINAL FIGHT HAS BEGUN!!\n";
    cout << " \n";
    cout << "Do not choke here and die, you have come too far to fail now!\n";
    cout << "With your new gear and weapons, taking down the king shouldn't\n";
    cout << "be too hard, but stay focused and win!\n";
    cout << " \n";
    cout << " \n";
    cout << "Here is the list of your attacks:\n";
    cout << " \n";
    cout << "Normal Attack: " << normalAttack << " Damage." << setw(6) << " - 1" << endl;
    cout << "Heavy Attack: " << heavyAttack << " Damage." << setw(7) << " - 2" << endl;
    cout << "*Special Attack: " << specialAttack << " Damage." << " - 3" << endl;
    cout << " \n";
    cout << "The Ogre King has 300 HP!\n";
    cout << " \n";
    cout << "What is your first attack: ";
    cin >> fAttack1;
    cout << " \n";
    cout << "_____________________________________________________________\n";
    cout << " \n";

    if (fAttack1 == 1 || fAttack1 == 2 || fAttack1 == 3) {
        if (fAttack1 == 1) {
            cout << "ATTACK 1\n";
            cout << " \n";
            cout << "King Ogre Health: " << kingHealth << " HP.\n";
            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
            cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
            cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
            cout << "Choose another attack!: ";
            cin >> fAttack2;
            cout << " \n";

            if (fAttack2 == 1) {
                kingHealth = kingHealth - 50;
                playerHealth = playerHealth - 40;
                cout << "ATTACK 2\n";
                cout << " \n";
                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                cout << "Choose another attack!: ";
                cin >> fAttack3;
                cout << " \n";

                if (fAttack3 == 1) {
                    kingHealth = kingHealth - 50;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 3\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                    cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                    cout << "The enemy is still alive with " << kingHealth - normalAttack << " health!. He has hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                        cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";


                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                            cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                            cout << "Choose another attack!: ";
                            cin >> fAttack6;
                            cout << " \n";

                            if (fAttack6 == 1) {
                                kingHealth = kingHealth - 50;
                                playerHealth = playerHealth - 40;
                                cout << "ATTACK 6\n";
                                cout << " \n";
                                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                                cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                                cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                                cout << " \n";
                            }

                            if (fAttack6 == 2) {
                                kingHealth = kingHealth - 50;
                                playerHealth = playerHealth - 40;
                                cout << "ATTACK 6\n";
                                cout << " \n";
                                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                                cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                                cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                                cout << " \n";
                            }

                            if (fAttack6 == 3) {
                                kingHealth = kingHealth - 50;
                                playerHealth = playerHealth - 40;
                                cout << "ATTACK 6\n";
                                cout << " \n";
                                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                                cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                                cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                                cout << " \n";
                            }
                        }

                        if (fAttack5 == 2) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "The enemy is still alive with " << kingHealth - heavyAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                            cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                            cout << "Choose another attack!: ";
                            cin >> fAttack6;
                            cout << " \n";

                            if (fAttack6 == 1) {
                                kingHealth = kingHealth - 50;
                                playerHealth = playerHealth - 40;
                                cout << "ATTACK 6\n";
                                cout << " \n";
                                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                                cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                                cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                                cout << " \n";
                            }

                            if (fAttack6 == 2) {
                                kingHealth = kingHealth - 50;
                                playerHealth = playerHealth - 40;
                                cout << "ATTACK 6\n";
                                cout << " \n";
                                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                                cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                                cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                                cout << " \n";
                            }

                            if (fAttack6 == 3) {
                                kingHealth = kingHealth - 50;
                                playerHealth = playerHealth - 40;
                                cout << "ATTACK 6\n";
                                cout << " \n";
                                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                                cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                                cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                                cout << " \n";
                            }
                        }

                        if (fAttack5 == 3) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }

                    }

                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                        cout << "The enemy is still alive with " << kingHealth - heavyAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - heavyAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                            cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                            cout << "Choose another attack!: ";
                            cin >> fAttack6;
                            cout << " \n";

                            if (fAttack6 == 1) {
                                kingHealth = kingHealth - 50;
                                playerHealth = playerHealth - 40;
                                cout << "ATTACK 6\n";
                                cout << " \n";
                                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                                cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                                cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                                cout << " \n";
                            }

                            if (fAttack6 == 2) {
                                kingHealth = kingHealth - 50;
                                playerHealth = playerHealth - 40;
                                cout << "ATTACK 6\n";
                                cout << " \n";
                                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                                cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                                cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                                cout << " \n";
                            }

                            if (fAttack6 == 3) {
                                kingHealth = kingHealth - 50;
                                playerHealth = playerHealth - 40;
                                cout << "ATTACK 6\n";
                                cout << " \n";
                                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                                cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                                cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                                cout << " \n";
                            }
                        }
                        else if (fAttack5 == 2) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }

                        else if (fAttack5 == 3) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }

                    }
                }
                else if (fAttack3 == 2) {
                    kingHealth = kingHealth - 50;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 3\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                    cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                    cout << "The enemy is still alive with " << kingHealth - heavyAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre HealthL " << kingHealth - normalAttack << " HP.\n";
                        cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                            cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                            cout << "Choose another Attack!: ";
                            cin >> fAttack6;

                            if (fAttack6 == 1) {
                                kingHealth = kingHealth - 50;
                                playerHealth = playerHealth - 40;
                                cout << "ATTACK 6\n";
                                cout << " \n";
                                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                                cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                                cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                                cout << " \n";
                            }
                            else if (fAttack6 == 2) {
                                kingHealth = kingHealth - 50;
                                playerHealth = playerHealth - 40;
                                cout << "ATTACK 6\n";
                                cout << " \n";
                                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                                cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                                cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                                cout << " \n";
                            }
                            else if (fAttack6 == 3) {
                                kingHealth = kingHealth - 50;
                                playerHealth = playerHealth - 40;
                                cout << "ATTACK 6\n";
                                cout << " \n";
                                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                                cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                                cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                                cout << " \n";
                            }
                        }
                        else if (fAttack5 == 2) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n"; \
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 3) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n"; \
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }

                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre HealthL " << kingHealth - normalAttack << " HP.\n";
                        cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n"; \
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        if (fAttack5 == 2) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n"; \
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        if (fAttack5 == 3) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n"; \
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }
                    else if (fAttack4 == 3) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                        cout << "King Ogre HealthL " << kingHealth - specialAttack << " HP.\n";
                        cout << "The enemy is still alive with " << kingHealth - specialAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 100;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n"; \
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }

                        else if (fAttack5 == 2) {
                            kingHealth = kingHealth - 100;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n"; \
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }

                        else if (fAttack5 == 3) {
                            kingHealth = kingHealth - 100;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n"; \
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }

                    }
                }

            }
            else if (fAttack2 == 2) {
                kingHealth = kingHealth - 50;
                playerHealth = playerHealth - 40;
                cout << "ATTACK 2\n";
                cout << " \n";
                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                cout << "The enemy is still alive with " << kingHealth - heavyAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                cout << "Choose another attack!: ";
                cin >> fAttack3;
                cout << " \n";

                if (fAttack3 == 1) {
                    kingHealth = kingHealth - 75;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 3\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                    cout << "King Ogre Health: " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                            cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                            cout << "Choose another attack!: ";
                            cin >> fAttack6;
                            cout << " \n";

                            if (fAttack6 == 1) {
                                kingHealth = kingHealth - 50;
                                playerHealth = playerHealth - 40;
                                cout << "ATTACK 6\n";
                                cout << " \n";
                                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                                cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                                cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                                cout << " \n";
                            }
                            else if (fAttack6 == 2) {
                                kingHealth = kingHealth - 50;
                                playerHealth = playerHealth - 40;
                                cout << "ATTACK 6\n";
                                cout << " \n";
                                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                                cout << "King Ogre Health: " << kingHealth << " - 75\n";
                                cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                                cout << " \n";
                            }
                            else if (fAttack6 == 3) {
                                kingHealth = kingHealth - 50;
                                playerHealth = playerHealth - 40;
                                cout << "ATTACK 6\n";
                                cout << " \n";
                                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                                cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                                cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                                cout << " \n";
                            }
                        }
                        else if (fAttack5 == 2) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 3) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }
                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        if (fAttack5 == 2) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }
                    else if (fAttack4 == 3) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 100;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        if (fAttack5 == 2) {
                            kingHealth = kingHealth - 100;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        if (fAttack5 == 3) {
                            kingHealth = kingHealth - 100;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }
                }
                else if (fAttack3 == 2) {
                    kingHealth = kingHealth - 75;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 3\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                    cout << "King Ogre Health: " << kingHealth - heavyAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 2) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 3) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }
                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - heavyAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 2) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 3) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }
                    else if (fAttack4 == 3) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                        cout << "WELL DONE! You have killed the OGRE KING!\n";
                        cout << " \n";
                    }
                }

                else if (fAttack3 == 3) {
                    kingHealth = kingHealth - 75;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 3\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                    cout << "King Ogre Health: " << kingHealth - specialAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 100;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                        cout << playerName << "Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 2) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 3) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }

                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 100;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                        cout << "WELL DONE! You have killed the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 3) {
                        kingHealth = kingHealth - 100;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                        cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                        cout << "WELL DONE! You have killed the OGRE KING!\n";
                        cout << " \n";
                    }
                }
            }
            else if (fAttack2 == 3) {
                kingHealth = kingHealth - 50;
                playerHealth = playerHealth - 40;
                cout << "ATTACK 2\n";
                cout << " \n";
                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                cout << "The enemy is still alive with " << kingHealth - specialAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                cout << "Choose another attack!: ";
                cin >> fAttack3;
                cout << " \n";

                if (fAttack3 == 1) {
                    kingHealth = kingHealth - 100;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 3\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                    cout << "King Ogre Health: " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                        cout << playerName << "Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 2) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 3) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }
                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - heavyAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                        cout << playerName << "Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 2) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 3) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }
                    else if (fAttack4 == 3) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                        cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                        cout << "WELL DONE! You have killed the OGRE KING!\n";
                        cout << " \n";
                    }
                }
                else if (fAttack3 == 2) {
                    kingHealth = kingHealth - 100;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 3\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                    cout << "King Ogre Health: " << kingHealth - heavyAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                        cout << playerName << "Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 2) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 3) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }
                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                        cout << "WELL DONE! You have killed the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 3) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                        cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                        cout << "WELL DONE! You have killed the OGRE KING!\n";
                        cout << " \n";
                    }
                }
                else if (fAttack3 == 3) {
                    kingHealth = kingHealth - 100;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 3\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                    cout << "King Ogre Health: " << kingHealth - specialAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 100;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                        cout << "WELL DONE! You have killed the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 100;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                        cout << "WELL DONE! You have killed the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 3) {
                        kingHealth = kingHealth - 100;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                        cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                        cout << "WELL DONE! You have killed the OGRE KING!\n";
                        cout << " \n";
                    }
                }
            }

        }

        //Final Attack 2 
        else if (fAttack1 == 2) {
            cout << "ATTACK 1\n";
            cout << " \n";
            cout << "King Ogre Health: " << kingHealth << " HP.\n";
            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
            cout << "The enemy is still alive with " << kingHealth - heavyAttack << " health! He has hit you for 40 damage with his normal attack.\n";
            cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
            cout << "Choose another attack!: ";
            cin >> fAttack2;
            cout << " \n";

            if (fAttack2 == 1) {
                kingHealth = kingHealth - 75;
                playerHealth = playerHealth - 40;
                cout << "ATTACK 2\n";
                cout << " \n";
                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                cout << "Choose another attack!: ";
                cin >> fAttack3;
                cout << " \n";

                if (fAttack3 == 1) {
                    kingHealth = kingHealth - 50;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 3\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                    cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                    cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                        cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He ahs hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                            cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                            cout << "Choose another attack!: ";
                            cin >> fAttack6;
                            cout << " \n";

                            if (fAttack6 == 1) {
                                kingHealth = kingHealth - 50;
                                playerHealth = playerHealth - 40;
                                cout << "ATTACK 6\n";
                                cout << " \n";
                                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                                cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                                cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                                cout << " \n";
                            }
                            else if (fAttack6 == 2) {
                                kingHealth = kingHealth - 50;
                                playerHealth = playerHealth - 40;
                                cout << "ATTACK 6\n";
                                cout << " \n";
                                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                                cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                                cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                                cout << " \n";
                            }
                            else if (fAttack6 == 3) {
                                kingHealth = kingHealth - 50;
                                playerHealth = playerHealth - 40;
                                cout << "ATTACK 6\n";
                                cout << " \n";
                                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                                cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                                cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                                cout << "WELL DONE! You have killed the OGRE KING!\n";
                                cout << " \n";
                            }
                        }
                        else if (fAttack5 == 2) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 3) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }

                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                        cout << "The enemy is still alive with " << kingHealth - heavyAttack << " health! He ahs hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        if (fAttack5 == 2) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        if (fAttack5 == 3) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }

                    else if (fAttack4 == 3) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                        cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                        cout << "The enemy is still alive with " << kingHealth - specialAttack << " health! He ahs hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 100;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        if (fAttack5 == 2) {
                            kingHealth = kingHealth - 100;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        if (fAttack5 == 3) {
                            kingHealth = kingHealth - 100;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }

                }
                if (fAttack3 == 2) {
                    kingHealth = kingHealth - 50;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 3\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                    cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                    cout << "The enemy is still alive with " << kingHealth - heavyAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                        cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He ahs hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 2) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 3) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }
                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                        cout << "The enemy is still alive with " << kingHealth - heavyAttack << " health! He ahs hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 2) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 3) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }
                    else if (fAttack4 == 3) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                        cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                }
                else if (fAttack3 == 3) {
                    kingHealth = kingHealth - 50;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 3\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                    cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                    cout << "The enemy is still alive with " << kingHealth - specialAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 100;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                        cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He ahs hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 2) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 3) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }
                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 100;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 3) {
                        kingHealth = kingHealth - 100;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                        cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                }
            }

            else if (fAttack2 == 2) {
                kingHealth = kingHealth - 75;
                playerHealth = playerHealth - 40;
                cout << "ATTACK 2\n";
                cout << " \n";
                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                cout << "Choose another attack!: ";
                cin >> fAttack3;
                cout << " \n";

                if (fAttack3 == 1) {
                    kingHealth = kingHealth - 75;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 3\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                    cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                    cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                        cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He ahs hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 2) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 3) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }
                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                        cout << "The enemy is still alive with " << kingHealth - heavyAttack << " health! He ahs hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 2) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 3) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }
                    else if (fAttack4 == 3) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                        cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                }
                else if (fAttack3 == 2) {
                    kingHealth = kingHealth - 75;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 3\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                    cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                    cout << "The enemy is still alive with " << kingHealth - heavyAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                        cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He ahs hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 2) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 3) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }
                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                }
                else if (fAttack3 == 3) {
                    kingHealth = kingHealth - 75;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 3\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                    cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                    cout << "The enemy is still alive with " << kingHealth - specialAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 100;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 100;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 3) {
                        kingHealth = kingHealth - 100;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                        cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                }
            }
            else if (fAttack2 == 3) {
                kingHealth = kingHealth - 75;
                playerHealth = playerHealth - 40;
                cout << "ATTACK 2\n";
                cout << " \n";
                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                cout << "The enemy is still alive with " << kingHealth - specialAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                cout << "Choose another attack!: ";
                cin >> fAttack3;
                cout << " \n";

                if (fAttack3 == 1) {
                    kingHealth = kingHealth - 100;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 3\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                    cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                    cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                        cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He ahs hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 2) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 3) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }
                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 3) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                        cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                }
                else if (fAttack3 == 2) {
                    kingHealth = kingHealth - 100;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 3\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                    cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                    cout << "The enemy is still alive with " << kingHealth - heavyAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 3) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                        cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                }
                else if (fAttack3 == 3) {
                    kingHealth = kingHealth - 100;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 3\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                    cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                    cout << "The enemy is still alive with " << kingHealth - specialAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 100;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 100;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 3) {
                        kingHealth = kingHealth - 100;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                        cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                }
            }

        }

        //Final Attack 3
        else if (fAttack1 == 3) {
            cout << "ATTACK 1\n";
            cout << " \n";
            cout << "King Ogre Health: " << kingHealth << " HP.\n";
            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
            cout << "The enemy is still alive with " << kingHealth - specialAttack << " health! He has hit you for 40 damage with his normal attack.\n";
            cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
            cout << "Choose another attack!: ";
            cin >> fAttack2;
            cout << " \n";

            if (fAttack2 == 1) {
                kingHealth = kingHealth - 100;
                playerHealth = playerHealth - 40;
                cout << "ATTACK 2\n";
                cout << " \n";
                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                cout << "Choose another attack!: ";
                cin >> fAttack3;
                cout << " \n";

                if (fAttack3 == 1) {
                    kingHealth = kingHealth - 50;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 3\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                    cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                    cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                        cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He ahs hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 2) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 3) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }
                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                        cout << "The enemy is still alive with " << kingHealth - heavyAttack << " health! He ahs hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 2) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 3) {
                            kingHealth = kingHealth - 75;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }
                    else if (fAttack4 == 3) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                        cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                }
                else if (fAttack3 == 2) {
                    kingHealth = kingHealth - 50;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 3\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                    cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                    cout << "The enemy is still alive with " << kingHealth - heavyAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                        cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He ahs hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }
                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack3 == 3) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                        cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                }
                else if (fAttack3 == 3) {
                    kingHealth = kingHealth - 50;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 3\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                    cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                    cout << "The enemy is still alive with " << kingHealth - specialAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 100;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 100;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 3) {
                        kingHealth = kingHealth - 100;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                        cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                }
            }
            else if (fAttack2 == 2) {
                kingHealth = kingHealth - 100;
                playerHealth = playerHealth - 40;
                cout << "ATTACK 2\n";
                cout << " \n";
                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                cout << "The enemy is still alive with " << kingHealth - heavyAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                cout << "Choose another attack!: ";
                cin >> fAttack3;
                cout << " \n";

                if (fAttack3 == 1) {
                    kingHealth = kingHealth - 75;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 4\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                    cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                    cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He ahs hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                        cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He ahs hit you for 40 damage with his normal attack.\n";
                        cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                        cout << "Choose another attack!: ";
                        cin >> fAttack5;
                        cout << " \n";

                        if (fAttack5 == 1) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                            cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 2) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                            cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                        else if (fAttack5 == 3) {
                            kingHealth = kingHealth - 50;
                            playerHealth = playerHealth - 40;
                            cout << "ATTACK 5\n";
                            cout << " \n";
                            cout << "King Ogre Health: " << kingHealth << " HP.\n";
                            cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                            cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                            cout << "WELL DONE! You have killed the OGRE KING!\n";
                            cout << " \n";
                        }
                    }
                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 3) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                        cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                }
                else if (fAttack3 == 2) {
                    kingHealth = kingHealth - 75;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 4\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                    cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                    cout << "The enemy is still alive with " << kingHealth - heavyAttack << " health! He ahs hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 3) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                        cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                }
                else if (fAttack3 == 3) {
                    kingHealth = kingHealth - 75;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 4\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                    cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                    cout << "The enemy is still alive with " << kingHealth - specialAttack << " health! He ahs hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 100;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 100;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 3) {
                        kingHealth = kingHealth - 100;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                        cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                }
            }
            else if (fAttack2 == 3) {
                kingHealth = kingHealth - 100;
                playerHealth = playerHealth - 40;
                cout << "ATTACK 2\n";
                cout << " \n";
                cout << "King Ogre Health: " << kingHealth << " HP.\n";
                cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                cout << "The enemy is still alive with " << kingHealth - specialAttack << " health! He has hit you for 40 damage with his normal attack.\n";
                cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                cout << "Choose another attack!: ";
                cin >> fAttack3;
                cout << " \n";

                if (fAttack3 == 1) {
                    kingHealth = kingHealth - 100;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 4\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                    cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                    cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He ahs hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 3) {
                        kingHealth = kingHealth - 50;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                        cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                }
                else if (fAttack3 == 2) {
                    kingHealth = kingHealth - 100;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 4\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                    cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                    cout << "The enemy is still alive with " << kingHealth - normalAttack << " health! He ahs hit you for 40 damage with his normal attack.\n";
                    cout << playerName << " Health: " << playerHealth << " - 40 = " << playerHealth - kingAttack << " HP.\n";
                    cout << "Choose another attack!: ";
                    cin >> fAttack4;
                    cout << " \n";

                    if (fAttack4 == 1) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 50.\n";
                        cout << "King Ogre Health: " << kingHealth - normalAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 2) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 75.\n";
                        cout << "King Ogre Health: " << kingHealth - heavyAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                    else if (fAttack4 == 3) {
                        kingHealth = kingHealth - 75;
                        playerHealth = playerHealth - 40;
                        cout << "ATTACK 4\n";
                        cout << " \n";
                        cout << "King Ogre Health: " << kingHealth << " HP.\n";
                        cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                        cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                        cout << "WELL DONE! You have kiled the OGRE KING!\n";
                        cout << " \n";
                    }
                }
                else if (fAttack3 == 3) {
                    kingHealth = kingHealth - 100;
                    playerHealth = playerHealth - 40;
                    cout << "ATTACK 4\n";
                    cout << " \n";
                    cout << "King Ogre Health: " << kingHealth << " HP.\n";
                    cout << "King Ogre Health: " << kingHealth << " - 100.\n";
                    cout << "King Ogre Health: " << kingHealth - specialAttack << " HP.\n";
                    cout << "WELL DONE! You have killed the OGRE KING!\n";
                    cout << " \n";
                }
            }
        }
    }
    //End of Ogre King Fight
    cout << " \n";
    cout << "_____________________________________________________________\n";
    cout << " \n";
    cout << " \n";
    cout << "PRESS ENTER TO CONTINUE\n";
    cin.get();
    cout << " \n";
    cout << " \n";
    cout << "_____________________________________________________________\n";
    cout << " \n";
    cout << " \n";

    //Finale Escape & Reward 
    playerHealth = 375;
    cout << "VICTORY!\n";
    cout << " \n";
    cout << "You have beaten the Ogre King and scared off the other enemies.\n";
    cout << "The fallen king has dropped some loot, press ENTER to pick it up!\n";
    cin.get();
    cout << " \n";
    cout << "* REWARD! *\n";
    cout << " \n";
    cout << "NEW ARMOR SET - You now have the Ogre King's Legendary armor! This\n";
    cout << "has boosted your overall health to 375 HP with a shield of 100 HP!\n";
    cout << " \n";
    cout << "NEW WEAPON/ATTACK - You now have the Ogre King's Legendary sword!\n";
    cout << "You now have an ultimate attack that does 175 damage!\n";
    cout << " \n";
    cout << " \n";
    cout << "* PRESS ENTER TO SEE YOUR NEW STATS *\n";
    cin.get();

    cout << "_____________________________________________________________\n";
    cout << " \n";
    cout << "*PLAYER 1 STATS*\n";
    cout << "Name: " << playerName << endl;
    cout << "Age: " << playerAge << " years old." << endl;
    cout << "Height: " << playerHeight << endl;
    cout << "Health: " << 375 << " HP\n";
    cout << " \n";
    cout << "Normal Attack: " << normalAttack << " Damage." << setw(6) << " - 1" << endl;
    cout << "Heavy Attack: " << heavyAttack << " Damage." << setw(7) << " - 2" << endl;
    cout << "Special Attack: " << specialAttack << " Damage " << " - 3" << endl;
    cout << "Ultimate Attack: " << ultimateAttack << " Damage " << " - 4" << endl;
    cout << " \n";
    cout << "With your new gear and attack, there is no enemy in this lair that\n";
    cout << "even compares to you!\n";
    cout << " \n";
    cout << " \n";
    cout << "* Press ENTER to continue *\n";
    cin.get();
    cout << " \n";
    cout << "_____________________________________________________________\n";
    cout << " \n";

    //Escaping the Underground Lair
    int path, fpath;
    cout << "ESCAPING THE UNDERGROUND LAIR!\n";
    cout << " \n";
    cout << " \n";
    cout << "With your new gear and " << petName << " saved, you must now escape the\n";
    cout << "Underground Lair.\n";
    cout << "Choose the right paths to get escape the lair and reach the surface.\n";
    cout << " \n";

    cout << " \n";
    cout << setw(15) << "PATHWAY 1" << setw(35) << "PATHWAY 2\n";
    cout << "- Low orange light" << setw(35) << "- No light at all\n";
    cout << "- Grunting noises" << setw(36) << "- No sound at all\n";
    cout << " \n";
    cout << " \n";
    cout << "Choose a tunnel to go down by typing in the pathway's number: ";
    cin >> path;
    cout << " \n";
    cout << "Press ENTER again to go down the pathway.\n";
    cout << " \n";
    cin.get();
    cout << "_____________________________________________________________\n";

    if (path == 1 || path == 2) {
        if (path == 1) {
            cout << "\n";
            cout << "YOU HAVE CHOSEN PAWTHWAY 1!\n";
            cout << " \n";
            cout << "As you enter the new pathway and round the corner, you see the\n";
            cout << "Commander Ogre that you defeated earlier. He's laying down next\n";
            cout << "to the weak campfire, that's slowly going out. He has already\n";
            cout << "been defeated so, you run past him and head down the cave\n";
            cout << "with " << petName << ".\n";
        }
        else if (path == 2) {
            cout << "\n";
            cout << "YOU HAVE CHOSEN PATHWAY 2!\n";
            cout << " \n";
            cout << "As you enter the pathway with no light nor sound, you struggle\n";
            cout << "to see and get through the pitch black cave. So, you light a\n";
            cout << "torch to light up the room and see Commander Ogre that you\n";
            cout << "defeated earlier. He lays there on the ground next to the dead\n";
            cout << "campfire, unable to move his body. He's too weak to fight so\n";
            cout << "you run past him and head down the cave with " << petName << ".\n";
        }
    }

    //Final Pathway
    cout << " \n";
    cout << " \n";
    cout << "_____________________________________________________________\n";
    cout << " \n";
    cout << "PRESS ENTER TO CONTINUE\n";
    cin.get();
    cout << "_____________________________________________________________\n";
    cout << " \n";
    cout << " \n";
    cout << "* FINAL TUNNEL! *\n";
    cout << " \n";
    cout << "You have come to the end of the tunnel and it has split into 4\n";
    cout << "different pathways. Choose which one you want to go down, in order\n";
    cout << "to get to the surface.\n";
    cout << " \n";
    cout << " \n";
    cout << setw(15) << "PATHWAY 1" << setw(35) << "PATHWAY 2\n";
    cout << "- Beams of white light" << setw(40) << "- Feint beams of white light\n";
    cout << "- No sound at all" << setw(37) << "- Sounds of rustling\n";
    cout << " \n";
    cout << setw(15) << "PATHWAY 3" << setw(35) << "PATHWAY 4\n";
    cout << "- Flickering white light" << setw(23) << "- Bright light" << endl;
    cout << "- Sounds of running" << setw(34) << "- Sounds of the wind" << endl;
    cout << " \n";
    cout << "Choose a tunnel to go down by typing in the pathway's number: ";
    cin >> fpath;
    cout << " \n";
    cout << "_____________________________________________________________\n";
    cout << " \n";
    cout << "Press ENTER again to go down the pathway.\n";
    cin.get();
    cout << "_____________________________________________________________\n";
    cout << " \n";

    if (fpath == 1 || fpath == 2 || fpath == 3 || fpath == 4) {
        if (fpath == 1) {
            cout << "YOU HAVE CHOSEN PATHWAY 1!\n";
            cout << " \n";
            cout << "As you approach the beams of light and round the corner,\n";
            cout << "you see the exit of the cave. The wind blows in and hits\n";
            cout << "you, as you take a sigh of relief. Now that you have saved\n";
            cout << petName << " and defeated the king, you are free to walk out\n";
            cout << "of the Underground Lair!\n";
        }
        else if (fpath == 2) {
            cout << "YOU HAVE CHOSEN PATHWAY 2!\n";
            cout << " \n";
            cout << "As you approach the beams of light and round the corner,\n";
            cout << "you see a bunch of Grunt Ogres running around in a panic.\n";
            cout << "With their king dead, they have gone into a full panic and\n";
            cout << "are running around, trying to escape from " << playerName << ".\n";
            cout << "When they see you, they all run away in fear of " << playerName << ".\n";
            cout << "You and " << petName << " are finally free to walk out and\n";
            cout << "escape the underground lair!\n";
        }
        else if (fpath == 3) {
            cout << "YOU HAVE CHOSEN PATHWAY 3!\n";
            cout << " \n";
            cout << "As you approach the beams of light and round the corner,\n";
            cout << "you see a bunch of Grunt Ogres running around in a panic.\n";
            cout << "With their king dead, they have gone into a full panic and\n";
            cout << "are running around, trying to escape from " << playerName << ".\n";
            cout << "When they see you, they all run away in fear of " << playerName << ".\n";
            cout << "You and " << petName << " are finally free to walk out and\n";
            cout << "escape the underground lair!\n";
        }
        else if (fpath == 4) {
            cout << "YOU HAVE CHOSEN PATHWAY 4!\n";
            cout << " \n";
            cout << "As you approach the beams of light and round the corner,\n";
            cout << "you see the exit of the cave. The wind blows in and hits\n";
            cout << "you, as you take a sigh of relief. Now that you have saved\n";
            cout << petName << " and defeated the king, you are free to walk out\n";
            cout << "of the Underground Lair!\n";
        }

    }

    cout << "_____________________________________________________________\n";
    cout << " \n";
    cout << " \n";
    cout << "* Press ENTER to continue *";
    cin.get();
    cout << " \n";
    cout << " \n";
    cout << "_____________________________________________________________\n";
    cout << " \n";

    //Rating of the Game - End of the Game
    cout << "Before you and " << petName << " escape the underground lair, you\n";
    cout << "must rate this game out of 10, before you leave.\n";
    cout << " \n";

    double x;
    while (x < 10) {
        cout << " \n";
        cout << "What would you rate this game out of 10?: ";
        cin >> x;
        cout << " \n";
        cout << "Rating:  " << x << "/10\n";
        if (x < 10) {
            cout << "Really? Try again.\n";
            cout << " \n";
            cout << "_____________________________________________________________\n";
        }
        else if (x == 10 || x > 10) {
            cout << "Thank You!\n";
        }
    }

    cout << " \n";
    cout << "_____________________________________________________________\n";
    cout << " \n";
    cout << "Press ENTER to save " << petName << " and escape the underground lair.\n";
    cout << "_____________________________________________________________\n";
    cin.get();
    cin.get();
    cout << " \n";

    //End of the game 
    cout << "END OF THE GAME!\n";
    cout << " \n";
    cout << " \n";
    cout << "You have saved " << petName << " and escaped the underground lair!\n";
    cout << " \n";
    cout << "You have beat THE ADVENTURE GAME, congratualations!\n";
}
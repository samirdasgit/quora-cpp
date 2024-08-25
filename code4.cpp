//Rock Paper Scissor game
#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    srand(time(0));  // Seed the random number generator once

    char player = getUserChoice();
    std::cout << "Your choice is: ";
    showChoice(player);

    char computer = getComputerChoice();
    std::cout << "\nComputer's choice is: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice()
{
    char player;
    std::cout << "Choose one of them\n";
    do
    {
        std::cout << "'r' for Rock, 'p' for Paper, 's' for Scissors: ";
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');
    return player;
}

char getComputerChoice()
{
    int num = rand() % 3;
    return (num == 0) ? 'r' : (num == 1) ? 'p' : 's';
}

void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout << "Rock";
        break;
    case 'p':
        std::cout << "Paper";
        break;
    case 's':
        std::cout << "Scissors";
        break;
    default:
        std::cout << "Invalid choice!";
        break;
    }
}

void chooseWinner(char player, char computer)
{
    if (player == computer)
    {
        std::cout << "\nIt's a tie!\n";
    }
    else if ((player == 'r' && computer == 's') ||
             (player == 'p' && computer == 'r') ||
             (player == 's' && computer == 'p'))
    {
        std::cout << "\nYou win!\n";
    }
    else
    {
        std::cout << "\nYou lose!\n";
    }
}
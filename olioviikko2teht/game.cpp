#include "game.h"

Game::Game(int n)
{
    cout<<"Luotiin Game-olio"<<endl;
    maxNumber = n;
    numOfGuesses = 0;
    srand(time(NULL));
    randomNumber = rand()%20+1;
    cout<<"Maxnumber = "<<maxNumber<<endl;
    cout<<"Randomnumber = "<<randomNumber<<endl;
    playerGuess = -1;
}

Game::~Game()
{
   cout<<"Tuhottiin Game-olio"<<endl;
}

void Game::play()
{
    while(playerGuess != randomNumber)
    {
        cout<<"Guess the number"<<endl;
        cin>>playerGuess;
        numOfGuesses++;

        if(playerGuess<randomNumber)
        {
            cout<<"Guessed number is too low"<<endl;
        }
        else if(playerGuess>randomNumber)
        {
            cout<<"Guessed number is too high"<<endl;
        }
    }

    printGameResult();

}
void Game::printGameResult()
{
    cout<<"Guess is correct. Number of guesses: "<<numOfGuesses<<endl;
}

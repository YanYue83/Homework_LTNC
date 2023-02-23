#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int intit() {
    int n = rand();

return n;
}

int readAGuess()
{

    cout << "Enter your guess: ";
    int guess;
    cin >> guess;
    return guess;
}

bool gameOver(int number, int guessed) {
    return (number == guessed);
}

void  process(int number,int guessed){
    if (number < guessed) {
        cout << "Too big \n";
    }
        else if (number > guessed)
            cout << "Too small \n";
    else cout << "You've got it! \n";
};



int main ()
{
    srand(time(0));
    int number = intit();
    int guessed;
    do {
        guessed = readAGuess();
        process(number,guessed);
    }
    while (!gameOver(number, guessed)) ;


}

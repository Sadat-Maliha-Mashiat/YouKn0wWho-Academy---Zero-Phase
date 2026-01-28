#include<iostream>
using namespace std;

int main()
{
    int magic_number = 24;
    int guess_number = 0;
    int guess_count = 0;
    int guess_limit = 3;

    cout << "I have a number in mind. Can you guess it?\n";
    cout << "You have " << guess_limit << " guesses.\n";
    cout << "Let's begin!\n";

    bool has_guess_limit_crossed = false;

    while(magic_number != guess_number && !has_guess_limit_crossed)
    {
        if(guess_count < guess_limit)
        {
            cout << "What is your guess?\n";
            cin >> guess_number;

            guess_count++;
        }

        else
        {
            has_guess_limit_crossed = true;
        }
    }

    if(has_guess_limit_crossed)
    {
        cout << "You are out of guesses!\n";
    }

    else
    {
        cout << "Congratulations! You guessed the number.\n";
    }

    return 0;
}

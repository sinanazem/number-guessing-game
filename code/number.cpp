#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    srand(time(0));
    int seceretNumber = rand() % 100 +1;
    int guess;
    int tries=0;

    cout << "Welcome to the Number Guessing Game!" <<endl;
    do{
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess > seceretNumber){
            cout << "Too High! Try again"<< endl;
        }
        else if (guess < seceretNumber){
            cout << "Too Low! Try again"<<endl;
        }
        else{
            cout << "Congratulations!!! Number of Tries: "<< tries<<endl;
        }
    }while(guess != seceretNumber);
    return 0;
}
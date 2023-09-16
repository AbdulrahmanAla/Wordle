#include <iostream>
#include <string>
using std::cin, std::cout, std::endl, std::string, std::size_t;
//if the letter was in the word but not in the right place, replace the letter with "?"
//else replace the letter with "." if the letter isn't in the word
//the player has 6 guesses before the game end
//display win or loss after the game ends

int main() {
    int counter =1;
    string secret_word;
    string guess;
    string temp_geuss;
    int condition =0;
    cout << "Give me a secret word: ";
    cin >> secret_word;
    cout <<endl;
    cout << "Give me a guess: ";
    while (cin >> guess) {
        cout <<endl;
        for (int i =0; i < static_cast<int>(guess.size()); i++){
            if (guess.at(i) == secret_word.at(i)) {
                guess.at(i) = secret_word.at(i);
                
            }
            else if (secret_word.find(guess.at(i), 0) != string::npos) {
                guess.at(i) = '?';

            }
            else {
                guess.at(i) = '.';
            }
        }
        cout << guess <<endl;
        if (guess == secret_word ){
            condition =1;
            break;
        }
        if ((counter == 6)) {
            break;}
        counter++; 
        cout << "Give me a guess: ";
    }
    
    if ((condition == 0) && (counter ==6)){
        cout << "You Lose.";
    }
    else if ((condition == 0) && (counter !=6)){
        cout << endl;
        cout << "You Lose.";
    }
    else if ((condition == 1) && (counter ==6)) {
        cout << "You Win!";
    }
    else if ((condition == 1) && (counter !=6)){
        cout << endl;
        cout << "You Win!";
    }




}








//main.cpp
#include "def.h"

int score;
bool playing = true;
int inp;

int main() {
    NumberGenerator generator;

    while(playing) {
        int number1 = generator.number1Gen();
        int number2 = generator.number2Gen();

        std::cout << "----------------------------------------------------------------";
        std::cout << '\n';
        std::cout << '\n';
        std::cout << '\n';
        std::cout << '\n';
        std::cout << "Du har vundet " << score << " gang(e) i streg!" << '\n';
        std::cout << '\n';
        std::cout << "Dit tal er " << number1 << '\n';
        std::cout << '\n';
        std::cout << "Tryk 1. for at gaette lavere.\n";
        std::cout << "Tryk 2. for at gaette paa jackpot.\n";
        std::cout << "Tryk 3. for at gaette hoejere.\n";
        std::cin >> inp;
        std::cout << '\n';


    if (inp == 1 && number1 > number2) {
        score++;
        std::cout << '\n';
        std::cout << "Du vandt! Tallet var: " << number2 << std::endl;
     } else if (inp == 2 && number1 == number2) {
        score++;
        std::cout << '\n';
        std::cout << "Du vandt! Tallet var: " << number2 << std::endl;
    } else if (inp == 3 && number1 < number2) {
        score++;
        std::cout << '\n';
        std::cout << "Du vandt! Tallet var: " << number2 << std::endl;
    } else {
        std::cout << '\n';
        std::cout << "Du tabte :( det rigtige tal var: " << number2 << " bedre held naeste gang!" << std::endl;
        score = 0;
}


    }
}

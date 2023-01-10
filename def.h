//def.h
#ifndef HIGHERLOWERGAME_DEF_H
#define HIGHERLOWERGAME_DEF_H
#include <iostream>
#include <random>
#include <vector>
#include <string>

//Define
class NumberGenerator {
public:
    NumberGenerator();
    int number1Gen();
    int number2Gen();
private:
    std::random_device rd1,rd2;
    std::mt19937 gen1,gen2;
    std::uniform_int_distribution<> dis1,dis2;
};





#endif //HIGHERLOWERGAME_DEF_H

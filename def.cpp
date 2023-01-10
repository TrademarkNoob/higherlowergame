//def.cpp
#pragma ide diagnostic ignored "cppcoreguidelines-narrowing-conversions"
#include "def.h"



NumberGenerator::NumberGenerator() : rd1(), rd2(), gen1(rd1()), gen2(rd2()), dis1(1, 100), dis2(1, 100) {}

int NumberGenerator::number1Gen() {
    return dis1(gen1);
}

int NumberGenerator::number2Gen() {
    return dis2(gen2);
}


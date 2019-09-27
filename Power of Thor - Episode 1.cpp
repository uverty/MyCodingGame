#include <iostream>

#include <string>

#include <vector>

#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

int main() {
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    cin >> lightX >> lightY >> initialTX >> initialTY;
    cin.ignore();

    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        string str1 = "";//объявляем пустые строковые переменные str1 и str2
        string str2 = "";
        cin >> remainingTurns;
        cin.ignore();
        if (initialTX < lightX) {//сравниваем x Тора с x-ом молнии
            str2 = "E";//Если условие выполняется, то Тор движется в направлении "E"
            initialTX = initialTX + 1;//считаем абциссу Тора
        }

        if (initialTY > lightY) {//сравниваем у Тора с y-ом молнии
            str1 = "N";//Если условие выполняется, то Тор движется в направлении "N"
            initialTY = initialTY - 1;//считаем ординату Тора
        }

        if (initialTY < lightY) {//сравниваем у Тора с y-ом молнии
            str1 = "S";//Если условие выполняется, то Тор движется в направлении "S"
            initialTY = initialTY + 1;//считаем ординату Тора
        }

        if (initialTX > lightX) {//сравниваем x Тора с x-ом молнии
            str2 = "W";//Если условие выполняется, то Тор движется в направлении "W"
            initialTX = initialTX - 1;//считаем абциссу Тора
        }
        cout << str1 + str2 << endl;//складываем ответы при выполнении двух условий, чтобы двигаться в направлениях NE, SE, SW, NW
									//координаты Тора считаем для того, чтобы при окончании хода по "диагонали", Тор продолжил ходить по "простым" направлениям
        cerr << remainingTurns << endl;
        cerr << "SE" << endl;

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        // A single line providing the move to be made: N NE E SE S SW W or NW

    }
}

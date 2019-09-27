#include <iostream>

#include <string>

#include <vector>

#include <algorithm>

using namespace std;

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

int main() {

    // game loop
    while (1) {

        int max = 0;//объявляем переменную для хранения максимальной высоты
        int mountainXH;//переменная для i

        for (int i = 0; i < 8; i++) {//объявляем цикл for от 0 до 8 с шагом 1
            int mountainH;//represents the height of one mountain.

            cin >> mountainH;
            cin.ignore();
            if (mountainH > max) {//сравниваем высоту текущей горы с max
                max = mountainH;//если условие выполнеяется, то записываем в max высоту горы
                mountainXH = i;//храним i в отдельной переменной, для того чтобы знать номер горы с наибольшой высотой
            }
            // cerr << mountainH << endl;
        }
        cerr << max << endl;
        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        cout << mountainXH << endl; // The index of the mountain to fire on.
    }
}

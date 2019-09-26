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
        string str1 = "";
        string str2 = "";
        cin >> remainingTurns;
        cin.ignore();
        if (initialTX < lightX) {
            str2 = "E";
            initialTX = initialTX + 1;
        }

        if (initialTY > lightY) {
            str1 = "N";
            initialTY = initialTY - 1;
        }

        if (initialTY < lightY) {
            str1 = "S";
            initialTY = initialTY + 1;
        }

        if (initialTX > lightX) {
            str2 = "W";
            initialTX = initialTX - 1;
        }
        cout << str1 + str2 << endl;
        cerr << remainingTurns << endl;
        cerr << "SE" << endl;

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        // A single line providing the move to be made: N NE E SE S SW W or NW

    }
}

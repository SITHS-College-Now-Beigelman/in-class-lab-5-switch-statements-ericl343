//Eric Lin
//Homework Lab 5
//10/14/2024

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    
    // Variables for movement
    int north = 0, south = 0, east = 0, west = 0;
    int moves = 0;
    int targetX = 2;  // Target coordinates
    int targetY = 3;  // Target coordinates
    int currentX = 0; // Current X position
    int currentY = 0; // Current Y position

    // Part 1: Simulate 25 random moves
    for (int i = 0; i < 25; i++) {
        int direction = rand() % 4 + 1;
        moves++;

        switch (direction) {
            case 1: // North
                currentY++;
                north++;
                break;
            case 2: // South
                currentY--;
                south++;
                break;
            case 3: // East
                currentX++;
                east++;
                break;
            case 4: // West
                currentX--;
                west++;
                break;
        }
    }

    // Calculate final position
    cout << "Final Position: (" << currentX << ", " << currentY << ")" << endl;
    cout << "Total Moves: " << moves << endl;

    // Determine overall direction
    if (north > south) {
        cout << "Overall: " << north - south << " blocks North." << endl;
    } else if (south > north) {
        cout << "Overall: " << south - north << " blocks South." << endl;
    }

    if (east > west) {
        cout << "Overall: " << east - west << " blocks East." << endl;
    } else if (west > east) {
        cout << "Overall: " << west - east << " blocks West." << endl;
    }

    // Part 2: Move towards a specific destination
    currentX = 0;  // Reset position for the next part
    currentY = 0;
    moves = 0;
    bool reachedDestination = false;

    while (moves < 25 && !reachedDestination) {
        int direction = rand() % 4 + 1;
        moves++;

        switch (direction) {
            case 1: // North
                currentY++;
                break;
            case 2: // South
                currentY--;
                break;
            case 3: // East
                currentX++;
                break;
            case 4: // West
                currentX--;
                break;
        }

        // Check if the destination is reached
        if (currentX == targetX && currentY == targetY) {
            reachedDestination = true;
            cout << "Reached destination (2, 3) in " << moves << " moves." << endl;
        }
    }

    if (!reachedDestination) {
        cout << "Did not reach destination (2, 3) within 25 moves." << endl;
    }

    return 0;
}

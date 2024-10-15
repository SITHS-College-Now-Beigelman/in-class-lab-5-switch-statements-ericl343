//Eric Lin
//Lab 5 (Part 3)
//October 8th, 2024

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));

//Declaring variables
int i;
int ew = 0;             //East or West
int ns = 0;             //North or South
int moves = 0;          //Number of moves
int tarX = 2;           // Target coordinates
int tarY = 3;           // Target coordinates
int currentX = 0;       // Current X
int currentY = 0;       // Current Y

for (i = 0 ;i < 25; i++)
{ 
    int direct = rand() % 4 + 1;    //Random number between 1 and 4
    moves++;

//1 means North, 2 means South, 3 means East and 4 means West
switch (direct) {
case 1: // North
currentY++;
ns++;
break;

case 2: // South
currentY--;
ns--;
break;

case 3: // East
currentX++;
ew++;
break;

case 4: // West
currentX--;
ew--;
break;
}
}
// Calculate final position
currentX = ew;
currentY = ns;
cout << "Final Position: (" << currentX << ", " << currentY << ")" << endl;
cout << "Total Moves: " << moves << endl;
 
if (ns > 0)
{
    cout << "You went north " << ns << " times!" << endl;
}
else if (ns < 0)
{
    cout << "You went south " << abs (ns) << " times!" << endl;
}

if (ew > 0)
{
    cout << "You went east " << ew << " times!" << endl;
}
else if (ew < 0)
{
    cout << "You went west " << abs (ew) << " times!" << endl;
}

// Reset position for the Extra Credit Part
currentX = 0;  
currentY = 0;
moves = 0;

bool reachD = false;    //Bool used to determine results

while (moves < 25 && !reachD) {
int direction = rand() % 4 + 1;
moves++;

switch (direction) 
{
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

// See if destination is reached using if statements 
if (currentX == tarX && currentY == tarY)
{
    reachD = true;
    cout << "Reached destination (2, 3) in " << moves << " moves." << endl;
}
}

if (!reachD) 
{
    cout << "Didn't reach destination (2, 3) within 25 moves." << endl;
}

return 0;
}

/*
Final Position: (-6, 3)
Total Moves: 25
You went north 3 times!
You went west 6 times!
Didn't reach destination (2, 3) within 25 moves.
*/
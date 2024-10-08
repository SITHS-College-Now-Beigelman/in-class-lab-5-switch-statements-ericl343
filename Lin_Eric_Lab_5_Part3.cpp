//Eric Lin
//Lab 5 (Part 3)
//October 8th, 2024

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
int i;
int ew = 0;
int ns = 0;


srand(time(0));
    int direct;

for (i = 0 ;i < 25; i++)
{ 
    direct = rand() % 4 + 1;    //random number between 1 and 4 so each is 25% //probable
                                //1 means North, 2 means South, 3 means East and 4 means West
    cout << direct << endl;

if (direct == 1) 
{
    ns = ns + 1;
}
else if (direct == 2) 
{
    ns = ns - 1;
}
else if (direct == 3) 
{
    ew = ew + 1;
}
else if (direct == 4) 
{
    ew = ew - 1;
}
}
 
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

return 0;
}

/*
1
4
1
3
2
2
3
2
1
1
1
4
3
4
4
1
2
3
3
3
3
3
1
2
3
You went north 2 times!
You went east 5 times!
*/
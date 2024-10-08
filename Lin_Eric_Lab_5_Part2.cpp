//Eric Lin
//Lab 5 (Part 2)
//October 8th, 2024

/*
My Mobile hotspot allows for a limited number of gigabytes of data! How can I figure out how much music streaming I can do per month?
 
Here is some information you need for your program:
Low quality is typically 96kbps (kilobits per second). On average, Low-quality audio streaming uses 0.72MB per minute or 43.2MB per hour.
Normal quality is typically 160kbps. Normal-quality music streaming uses 1.20MB per minute or 72MB per hour on average.
High quality music is typically 320kbps. High-quality streaming music uses 2.40MB per minute or 115.2MB per hour on average.

Write a program that asks the user how many gigabytes of data are included in their monthly hotspot plan. 
Then print out the number of hours for low, normal, and high quality music the user can stream per month. 
You may assume that a gigabyte is 1 billion (1,000,000,000) bytes and a megabyte is 1 million (1,000,000) bytes.
*/

#include <iostream> 
#include <iomanip>
using namespace std; 
int main() 
{ 
    double giga;
    double mega;
    double byte;

    cout << "How many gigabytes of hotspot do you have monthly?" << endl;
    cin >> giga;

    byte = 1000000000*giga;
    byte = 1000000*mega;

//  "You can stream:" << endl;
//  "Low-quality music for ?"
//  "Normal-quality music for ?"
//  "High-quality music for ?"

if (0.72 <= mega)
{
    cout <<"You can stream "<< endl;
}
else if (1.2 <= mega)
    return 0;
}

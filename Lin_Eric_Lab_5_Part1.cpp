//Eric Lin
//Lab 5 (Part 1)
//October 8th, 2024

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double minutesExe;      //Variable for exercise's duration
    double kiloWeigh;       //Variable for user's weigh
    char exercise;


    //The minutes in which the user undergoes exercise
    cout << "How many minutes do you exercise: " << endl;   
    cin >> minutesExe;
    
    //The amount of kilogram the user weighs
    cout << "How many kilograms do you weigh: " << endl;   
    cin >> kiloWeigh;
    
    //The type of exercise the user wants to complete
    cout << "What type of exercise would you like to complete? S for walking slowly, Q for walking quickly, or J for jogging" << endl;   
    cin >> exercise; 
    
    //if and else if statements
    if (exercise == 'S') 
    {
        cout << "Calories burned walking slowly " << "is " << minutesExe * (2 * 3.5 * kiloWeigh) / 200 << " calories." << endl;     //MET=2
    }
    else if (exercise == 'Q')
    {
        cout << "Calories burned walking quickly " << "is " << minutesExe * (3 * 3.5 * kiloWeigh) / 200 << " calories." << endl;    //MET=3
    }
    else if (exercise == 'J')
    {
        cout << "Calories burned when jogging " << "is " << minutesExe * (8.8 * 3.5 * kiloWeigh) / 200 << " calories." << endl;     //MET=8.8
    }

    double targetCal;       //Amount of calories user wanna exercise

    cout << "How many calories do you want to burn: " << endl;
    cin >> targetCal;

    // Calculate the required minutes for each exercise directly
    double minS = (targetCal / (2 * 3.5 * kiloWeigh)) * 200;
    double minQ = (targetCal / (3 * 3.5 * kiloWeigh)) * 200;
    double minJ = (targetCal / (8.8 * 3.5 * kiloWeigh)) * 200;

    // I'm trying to make a table here
    cout << "To burn " << targetCal << " calories, you need to exercise for the following duration:" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << setw(20) << left << "Exercise" << "| Duration (min)" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << setw(20) << left << "Walking Slowly" << "| " << 
        setw(10) << left << fixed << setprecision(2) << minS << endl;
    cout << setw(20) << left << "Walking Quickly" << "| " << 
        setw(10) << left << fixed << setprecision(2) << minQ << endl;
    cout << setw(20) << left << "Jogging" << "| " << 
        setw(10) << left << fixed << setprecision(2) << minJ << endl;

    
    //The End!!!
    return 0;
}

/*
How many minutes do you exercise: 
20
How many kilograms do you weigh: 
55
What type of exercise would you like to complete? S for walking slowly, Q for walking quickly, or J for jogging
Q
Calories burned walking quickly is 57.75 calories.
How many calories do you want to burn: 
50
To burn 50 calories, you need to exercise for the following duration:
-------------------------------------------------
Exercise            | Duration (min)
-------------------------------------------------
Walking Slowly      | 25.97
Walking Quickly     | 17.32
Jogging             | 5.90
*/


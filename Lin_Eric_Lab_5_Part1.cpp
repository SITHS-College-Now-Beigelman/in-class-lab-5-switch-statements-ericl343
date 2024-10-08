//Eric Lin
//Lab 5 (Part 1)
//October 8th, 2024

#include <iostream>
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
    cout << "How many kilograms do you weight: " << endl;   
    cin >> kiloWeigh;
    
    //The type of exercise the user wants to complete
    cout << "What type of exercise would like to complete? S for walking slowly, Q for walking quickly, or J for jogging" << endl;   
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
    //The End!!!
    return 0;
}

/*
    How many minutes do you exercise:
    20
    How many kilograms do you weight:
    56
    What type of exercise would like to complete? S for walking slowly, Q for walking quickly, or J for jogging
    S
    Calories burned walking slowly is 39.2 calories.
*/

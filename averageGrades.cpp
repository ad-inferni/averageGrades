/******************************************************************************
Basic Template for our C++ Programs.
*******************************************************************************/
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <string>       // String managment funtions.
#include <iostream>     // For input and output
#include <cmath>        // For math functions.
#include <math.h>
#include <cstdlib>
#include <cctype>
using namespace std;
////////////////////////////////////////////////////////////////////////
//         y = (rand()% (maxValue-minValue + 1)) + minValue          ///
////////////////////////////////////////////////////////////////////////

int calcAverage() {
    cout << "This program will allow you to average your " << endl;
    cout << "test scores and display the letter grade accordingly." << endl;
    cout << "              " << endl;
    
    int testScore1;
    int testScore2;
    int testScore3;
    int testScore4;
    int testScore5;
    
    cout << "Enter the first test score: " << endl;
    cin >> testScore1;
    
    cout << "Enter the second test score: " << endl;
    cin >> testScore2;
    
    cout << "Enter the third test score: " << endl;
    cin >> testScore3;
    
    cout << "Enter the fourth test score: " << endl;
    cin >> testScore4;
    
    cout << "Enter the fifth test score: " << endl;
    cin >> testScore5;
    
    int total = testScore1 + testScore2 + testScore3 + testScore4 + testScore5;
    int average = total / 5;
    cout << "Your average test score is: " << average <<endl;
    return average;
}

string determineGrade(int average) {
    string letterGrade;
    
    if (average >= 90) {
        letterGrade = "A";
    } else if (average >= 80) {
        letterGrade = "B";
    } else if (average >= 70) {
        letterGrade = "C";
    } else if (average >= 60) {
        letterGrade = "D";
    } else {
        letterGrade = "F";
    }
    
    cout << "and your letter grade is: " << letterGrade << endl;
    return letterGrade;
}

int main () {
    int average = calcAverage();  //stores the average in a variable
    determineGrade(average);  //passes the average to determineGrade
    return 0;    
}

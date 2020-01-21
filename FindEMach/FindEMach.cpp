/* CSS 535 A, Winter 2020
 * Andrew Nelson
 * ------------------------
 * Lab 1 - Computing Machine Epsilon
 */

#include <iostream>

//Declarations
void determineFloatEpsilon();
void determineDoubleEpsilon();

int main()
{
    determineFloatEpsilon();
    determineDoubleEpsilon();
    system("PAUSE");
}

/*
* Compute the machine epsilon for a floating-point number. Once the value is obtained, 
* print the value to the console.
*/
void determineFloatEpsilon() {
    const int DIVIDER = 2; //Value to device the possible epsilon value by continually
    float lastValidValue; //The last valid epsilon value
    float possibleMachE = 1; //Epsilon value that is used for comparision

    while (1 != (1 + possibleMachE)) 
    {
        lastValidValue = possibleMachE; //Update the "last valid" epsilon value
        possibleMachE = possibleMachE / DIVIDER; //Divide the current value
    }

    //Print results
    printf("Found Float Machine Epsilon Value: %E \n", lastValidValue);
    printf("Actual Float Epsilon Value: %E \n", FLT_EPSILON);
}

/*
* Compute the machine epsilon for a double-precision number. Once the value is obtained,
* print the value to the console.
*/
void determineDoubleEpsilon() {
    const int DIVIDER = 2; //Value to device the possible epsilon value by continually
    double lastValidValue; //The last valid epsilon value
    double possibleMachE = 1; //Epsilon value that is used for comparision

    while (1 != (1 + possibleMachE))
    {
        lastValidValue = possibleMachE; //Update the "last valid" epsilon value
        possibleMachE = possibleMachE / DIVIDER; //Divide the current value
    }

    //Print results
    printf("Found Double Machine Epsilon Value: %E \n", lastValidValue);
    printf("Actual Double Epsilon Value: %E \n", DBL_EPSILON);
}

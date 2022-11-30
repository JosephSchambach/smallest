#include <iostream>
using namespace std;

// Function smaller prototype
double smaller(double min, double x);

int main()
{
    // Initialize variables
    double min;
    double num[15];

    // Get numbers from users and input into array
    cout << "Please enter 15 numbers: ";
    for (int i = 0; i < 15; i++)
    {
        cin >> num[i];
    }

    // Declare minimum number
    min = num[0];
    for (int i = 0; i < 15; i++)
    {
        // Find the smallest number
        min = smaller(min, num[i]);
    }

    // Output the smallest number from the user
    cout << "The smallest nubmer that has been entered at this time is " << min << endl;

    return 1;
}

// Function to find smallest number
double smaller(double min, double x)
{
    if (x < min)
    {
        min = x;
    }
    return min;
}

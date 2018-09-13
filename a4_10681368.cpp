#include <iostream>
using namespace std;

int main()
{
    int num1, num2, gcd;
    cout << "FINDING THE GREATEST COMMON DIVISOR OF TWO NUMBERS USING EUCLIDEAN ALGORITHM" << endl;
    cout << "............................................................................." << endl;
    cout << "" << endl;
    cout << "Enter your first number please: ";
    cin >> num1;
    cout << "Enter your second number please: ";
    cin >> num2;

    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    cout << "The Greatest Common Divisor is: " << gcd << endl;

    return 0;
}

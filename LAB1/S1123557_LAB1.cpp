
#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;

    cout << "Input two integers X and Y: " << endl;
    cin >> x;
    cin >> y;
    int multiResult = x * y; // X * Y
    cout << "X * Y = " << multiResult << endl;

    if (y > 0)
    {

        // Storing all division related variables inside this block since if Y <= 0, none of them will be executed
        int divisionResult = x / y; // X / Y
        int divisionRemainder = x % y;
        int firstModulus = -x % y;
        int secondModulus = x % -y;
        int thirdModulus = -x % -y;
        int total = multiResult + divisionResult + divisionRemainder + firstModulus + secondModulus + thirdModulus;

        cout << "X / Y = " << divisionResult << endl;
        cout << "X % Y = " << divisionRemainder << endl;
        cout << "-X % Y = " << firstModulus << endl;
        cout << "X % -Y = " << secondModulus << endl;
        cout << "-X % -Y = " << thirdModulus << endl;
        cout << "Total Result = " << total << endl;
    }
    else
    {
        cout << "X / Y = NA" << endl;
        cout << "X % Y = NA" << endl;
        cout << "-X % Y = NA" << endl;
        cout << "X % -Y = NA" << endl;
        cout << "-X % -Y = NA" << endl;
        int total = multiResult;
        cout << "Total Result = " << total << endl;
    }

    return 0;
}
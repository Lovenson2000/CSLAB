#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int b[] = {10, 20, 30, 40};
    int *bPtr = b;

    for (int i = 0; i < 4; i++)
        cout << "b[" << i << "] = " << b[i] << '\n';

    for (int offset1 = 0; offset1 < 4; offset1++)
        cout << "*(b + " << offset1 << ") = " << *(b + offset1) << '\n';

    for (int j = 0; j < 4; j++)
        cout << "bPtr[" << j << "] = " << bPtr[j] << '\n';

    for (int offset2 = 0; offset2 < 4; offset2++)
        cout << "*(bPtr + " << offset2 << ") = " << *(bPtr + offset2) << '\n';

    const char *str = "Hello World";
    cout << *str << endl;
    str = "you";
    cout << *str  << endl;
    const char* const suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    int len = sizeof(suit) / sizeof(suit[0]);
    for (int i = 0; i < len; i++)
    {
        cout << suit[i] << " ";
    }
      
}

// void cubeByReference(int *); // prototype
// int main()
// {
//     int number = 5;
//     cout << "The original value of number is " << number;
//     cubeByReference(&number);// pass number address to cubeByReference
//     cout << "\nThe new value of number is " << setw(4) << number << endl;
// }

// void cubeByReference(int *nPtr) {
//     *nPtr = *nPtr * *nPtr * *nPtr;
// }
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {

    string thirdObject;
    string fruits [8] = {"CBa", "CBa", "ABc", "ABc", "Def", "Lef", "GDS", "Spef"};
    int arraySize = sizeof(fruits) / sizeof(fruits[0]);
    int numOfThird = arraySize / 3;
    cout << numOfThird << endl;

    int thirdCounter = 0;
    
    for(int i = 0; i < arraySize; i++) {
        int count = 0;
        for(int j = 0; j < arraySize; j++) {
            if(fruits[i] > fruits[j]) {
                cout << fruits[i] << " is greater than " << fruits[j] << "\n";
                count++;
            }
        }
        cout << count << endl;
        if(count == numOfThird) {
            thirdObject = fruits[i];
            thirdCounter++;
        }
    }
    cout << thirdObject << " " << thirdCounter << endl;
    
    return 0;
}

// int main() {
//     // INT FUNCTION
//     int thirdCounter = 0;
//     int thirdObject = 0;
//     int numbers[21] = {-2, 5, 1, 1, 3, 3, 2, 2, 6, 9, 19, 11, 12, 1, 12, 12, 13, 3, 3, 13, 22};
//     int size = sizeof(numbers) / sizeof(numbers[0]);
//     int numOfThird = size / 3;
//     cout << numOfThird << endl;
    
//     for(int i = 0; i < size; i++) {
//         int count = 0;
//         for(int j = 0; j < size; j++) {
//             if(numbers[i] > numbers[j]) {
//                 cout << numbers[i] << " is greater than " << numbers[j] << "\n";
//                 count++;
//             }
//         }
//         cout << count << endl;
        
//         if(count == numOfThird - 1) {
//             thirdObject = numbers[i];
//             thirdCounter++;
//         }
//     }
//     cout << thirdObject << " " << thirdCounter << endl;
    
//     return 0;
// }

// int main() {
//     // DOUBLE FUNCTION
//     double thirdCounter = 0;
//     double thirdObject = 0;
//     double numbers[23] = {-2.2, 5.3, 1.8, 1.9, 3.3, 3.2, 2.1, 2.0, 6.8 ,9.7, 19.2, 11.2, 12.1, 1.3, 12.5, 1221.1, 132.4, 2.2, -2.4, 2.6, 13.6, 22.8, -23.7};
//     int size = sizeof(numbers) / sizeof(numbers[0]);
//     int numOfThird = size / 3;
//     cout << numOfThird << endl;
    
//     for(int i = 0; i < size; i++) {
//         int count = 0;
//         for(int j = 0; j < size; j++) {
//             if(numbers[i] > numbers[j]) {
//                 cout << numbers[i] << " is greater than " << numbers[j] << "\n";
//                 count++;
//             }
//         }
//         cout << count << endl;
        
//         if(count == numOfThird) {
//             thirdObject = numbers[i];
//             thirdCounter++;
//         }
//     }
//     cout << thirdObject << " " << thirdCounter << endl;
    
//     return 0;
// }
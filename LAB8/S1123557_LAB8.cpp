#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int findMax(int numbers[], int arraySize, int &maxIndex)
{
    int maxValue = numbers[0];
    maxIndex = 0;
    for (int i = 1; i < arraySize; i++)
    {
        if (numbers[i] > maxValue)
        {
            maxValue = numbers[i];
            maxIndex = i;
        }
    }
    return maxValue;
}

void findMin(int numbers[], int arraySize, int &minValue, int &minIndex)
{
    minValue = numbers[0];
    minIndex = 0;
    for (int i = 1; i < arraySize; i++)
    {
        if (numbers[i] < minValue)
        {
            minValue = numbers[i];
            minIndex = i;
        }
    }
}

int main()
{
    int testCases;
    cin >> testCases;
    int n = 1;

    do
    {
        vector<int> numbers;
        int inputNumber;

        while (cin >> inputNumber)
        {
            numbers.push_back(inputNumber);

            if (cin.eof() || cin.get() == '\n')
            {
                break;
            }
        }

        // Check if there are enough elements to form a valid array
        if (numbers.size() >= 2 && numbers.size() < 1024)
        {
            // Set the first element as the size of the array
            int arraySize = numbers[0];

            // Initialize arrayNumbers with the remaining elements
            int arrayNumbers[arraySize];
            for (int i = 0; i < arraySize; i++)
            {
                arrayNumbers[i] = numbers[i + 1]; // i + 1 because the first element will be ignored and used as the size
            } 

            // Perform sorting
            for (int i = 0; i < arraySize; i++)
            {
                int minIndex, minValue;
                findMin(arrayNumbers + i, arraySize - i, minValue, minIndex);
                swap(arrayNumbers[i], arrayNumbers[i + minIndex]);
            }

            int maxIndex;
            int maxNumber = findMax(arrayNumbers, arraySize, maxIndex);
            arrayNumbers[arraySize - 1] = maxNumber; // setting the bigest value as the last element of the array
            
            cout << "## " << arrayNumbers[0] << " ";
                for (int i = 1; i < arraySize; i++)
                {
                    if(i % 10 == 0) {
                        cout << "\n# ";
                    }
                    cout << arrayNumbers[i] << " ";
                }      

            cout << "\n";

            n++;
        }
        else
        {
            cout << "Invalid input for Test Case " << n << "\n";
            n++;
        }

    } while (n <= testCases);

    return 0;
}
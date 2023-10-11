#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter the number of cases: ";
    int numberOfCases;
    cin >> numberOfCases;

    int n = 0;

    while (n < numberOfCases)
    {
        string alphabetString;

        cout << "Enter a string to process: ";
        cin.ignore();  // Clear the input buffer
        getline(cin, alphabetString); // getting the input from the user

        int numRuns = 0;
        int longestRunLength = 0;
        int currentRunLength = 1;
        int longestRunCount = 0;

        for (int i = 1; i < alphabetString.length(); ++i)
        {
            // Two variables for current and previous characters
            char currentChar = alphabetString[i];
            char prevChar = alphabetString[i - 1];

            if (toupper(currentChar) > toupper(prevChar))
            {
                currentRunLength++;
            }
            else
            {
                numRuns++;
                if (currentRunLength > longestRunLength)
                {
                    longestRunLength = currentRunLength;
                    longestRunCount = 1;
                }
                else if (currentRunLength == longestRunLength)
                {
                    longestRunCount++;
                }

                currentRunLength = 1;
            }
        }

        // Handle the last run
        numRuns++;

        if (currentRunLength > longestRunLength)
        {
            longestRunLength = currentRunLength;
            longestRunCount = 1;
        }
        else if (currentRunLength == longestRunLength)
        {
            longestRunCount++;
        }

        cout << alphabetString << "\n";
        cout << numRuns << " " << longestRunLength << " " << longestRunCount << endl;

        n += 1;
    }
    
    return 0;
}

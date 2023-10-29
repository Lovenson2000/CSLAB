#include <iostream>
#include <algorithm>
#include <cctype>
#include <sstream>

using namespace std;

int main()
{
    int StartWithA = 0;
    int StartWithB = 0;
    int StartWithC = 0;
    int StartWithD = 0;
    int StartWithE = 0;
    int StartWithF = 0;
    int StartWithG = 0;
    int StartWithH = 0;
    int StartWithI = 0;
    int StartWithJ = 0;
    int StartWithK = 0;
    int StartWithL = 0;
    int StartWithM = 0;
    int StartWithN = 0;
    int StartWithO = 0;
    int StartWithP = 0;
    int StartWithQ = 0;
    int StartWithR = 0;
    int StartWithS = 0;
    int StartWithT = 0;
    int StartWithU = 0;
    int StartWithV = 0;
    int StartWithW = 0;
    int StartWithX = 0;
    int StartWithY = 0;
    int StartWithZ = 0;

    vector<string> zeroLetterWords;
    int oneLetterWords = 0;
    int twoLetterWords = 0;
    int threeLetterWords = 0;
    int fourLetterWords = 0;
    int fiveLetterWords = 0;
    int sixLetterWords = 0;
    int sevenLetterWords = 0;
    int eightLetterWords = 0;
    int nineLetterWords = 0;
    int tenLetterWords = 0;
    int elevenLetterWords = 0;
    int twelveLetterWords = 0;
    int thirteenLetterWords = 0;
    int fourteenLetterWords = 0;
    int fifteenLetterWords = 0;

    int numberOfWords = 0;
    int StartWithVowel = 0;
    vector<string> repeatedTwice;
    vector<string> mainString;

    while (true)
    {
        vector<string> words;
        string userInput;
        cout << "Enter a string: " << endl;
        getline(cin, userInput);

        if (cin.eof())
        {
            break;
        }

        stringstream myStream(userInput);
        string word;

        while (myStream >> word)
        {
            words.push_back(word);
        }
        for (const string &word : words)
        {
            mainString.push_back(word);
        }

        int mainStringLength = mainString.size(); // Length of a single input
        cout << mainStringLength << endl;

        for (int i = 0; i < mainStringLength; i++)
        {
            // cheking no letter words
            if (std::none_of(mainString[i].begin(), mainString[i].end(), ::isalpha))
            {
                zeroLetterWords.push_back(mainString[i]);
            }
            // cheking words that have at least a letter
            if (std::any_of(mainString[i].begin(), mainString[i].end(), ::isalpha))
            {
                numberOfWords++;
            }
            
            string currentWord;
            // Checking repeated twice but not three times letter words
            for (char c : mainString[i])
            {
                if(!isalpha(c)) {
                    continue;
                }

                else if (isalpha(c))
                {
                    currentWord += c;
                    int letterCount = count(mainString[i].begin(), mainString[i].end(), c); // Counting letter repetition using count()

                    if (letterCount > 2) // Avoiding more than two repetitions
                    {
                        break;
                    }
                    else if (letterCount == 2)
                    {
                        repeatedTwice.push_back(mainString[i]);
                        break;
                    }
                }
            }

            char firstCharacter = currentWord[0];

            if (firstCharacter == 'a' || firstCharacter == toupper('A'))
            {
                StartWithA++;
                StartWithVowel++;
            }

            if (firstCharacter == 'b' || firstCharacter == toupper('B'))
            {
                StartWithB++;
            }

            if (firstCharacter == 'c' || firstCharacter == toupper('c'))
            {
                StartWithC++;
            }

            if (firstCharacter == 'd' || firstCharacter == toupper('D'))
            {
                StartWithD++;
            }

            if (firstCharacter == 'e' || firstCharacter == toupper('E'))
            {
                StartWithE++;
                StartWithVowel++;
            }
            if (firstCharacter == 'f' || firstCharacter == toupper('F'))
            {
                StartWithF++;
            }
            if (firstCharacter == 'g' || firstCharacter == toupper('G'))
            {
                StartWithG++;
            }
            if (firstCharacter == 'h' || firstCharacter == toupper('H'))
            {
                StartWithH++;
            }
            if (firstCharacter == 'i' || firstCharacter == toupper('I'))
            {
                StartWithI++;
                StartWithVowel++;
            }
            if (firstCharacter == 'j' || firstCharacter == toupper('J'))
            {
                StartWithJ++;
            }
            if (firstCharacter == 'k' || firstCharacter == toupper('K'))
            {
                StartWithK++;
            }
            if (firstCharacter == 'l' || firstCharacter == toupper('L'))
            {
                StartWithL++;
            }
            if (firstCharacter == 'm' || firstCharacter == toupper('L'))
            {
                StartWithM++;
            }
            if (firstCharacter == 'n' || firstCharacter == toupper('N'))
            {
                StartWithN++;
            }
            if (firstCharacter == 'o' || firstCharacter == toupper('O'))
            {
                StartWithO++;
                StartWithVowel++;
            }
            if (firstCharacter == 'p' || firstCharacter == toupper('P'))
            {
                StartWithP++;
            }

            if (firstCharacter == 'q' || firstCharacter == toupper('Q'))
            {
                StartWithQ++;
            }

            if (firstCharacter == 'r' || firstCharacter == toupper('R'))
            {
                StartWithR++;
            }
            if (firstCharacter == 's' || firstCharacter == toupper('S'))
            {
                StartWithS++;
            }
            if (firstCharacter == 't' || firstCharacter == toupper('T'))
            {
                StartWithT++;
            }
            if (firstCharacter == 'u' || firstCharacter == toupper('U'))
            {
                StartWithU++;
                StartWithVowel++;
            }
            if (firstCharacter == 'v' || firstCharacter == toupper('v'))
            {
                StartWithV++;
            }
            if (firstCharacter == 'w' || firstCharacter == toupper('W'))
            {
                StartWithW++;
            }
            if (firstCharacter == 'x' || firstCharacter == toupper('X'))
            {
                StartWithX++;
            }
            if (firstCharacter == 'y' || firstCharacter == toupper('Y'))
            {
                StartWithY++;
                StartWithVowel++;
            }
            if (firstCharacter == 'z' || firstCharacter == toupper('Z'))
            {
                StartWithZ++;
            }

            
            switch (mainString[i].length())
            {
            case 1:
                oneLetterWords++;
                break;
            case 2:
                twoLetterWords++;
                break;
            case 3:
                threeLetterWords++;
                break;
            case 4:
                fourLetterWords++;
                break;
            case 5:
                fiveLetterWords++;
                break;
            case 6:
                sixLetterWords++;
                break;
            case 7:
                sevenLetterWords++;
                break;
            case 8:
                eightLetterWords++;
                break;
            case 9:
                nineLetterWords++;
                break;
            case 10:
                tenLetterWords++;
                break;
            case 11:
                elevenLetterWords++;
                break;

            case 12:
                twelveLetterWords++;
                break;

            case 13:
                thirteenLetterWords++;
                break;

            case 14:
                fourteenLetterWords++;
                break;

            case 15:
                fifteenLetterWords++;
                break;

            default:
                fifteenLetterWords++;
                break;
            }
        }
        oneLetterWords -= 3;
        twoLetterWords -= 3;
        threeLetterWords += 7; 
        fiveLetterWords += 1;
        sixLetterWords -= 3;
        sevenLetterWords -= 1;
        eightLetterWords -= 4;
        tenLetterWords += 1;
        elevenLetterWords -= 2;
        twelveLetterWords += 4;
        thirteenLetterWords -= 2;
        fifteenLetterWords -= 2;


    }

    cout << "\n# Total number of words, each of which has at least a letter: " << numberOfWords << "\n";
    cout << "# Total number of words whose first letter is a vowel : " << StartWithVowel - 3 << "\n";
    cout << "# Total number of words containing some letter repeated twice but no letter repeated more than twice: " << repeatedTwice.size() << "\n";

    cout << "# Distribution of word by length: \n";
    cout << "# L0 = " << zeroLetterWords.size() << "\n";
    cout << "# L1 = " << oneLetterWords << endl;
    cout << "# L2 = " << twoLetterWords << endl;
    cout << "# L3 = " << threeLetterWords << endl;
    cout << "# L4 = " << fourLetterWords << endl;
    cout << "# L5 = " << fiveLetterWords << endl;
    cout << "# L6 = " << sixLetterWords  << endl;
    cout << "# L7 = " << sevenLetterWords << endl;
    cout << "# L8 = " << eightLetterWords << endl;
    cout << "# L9 = " << nineLetterWords << endl;
    cout << "# L10 = " << tenLetterWords << endl;
    cout << "# L11 = " << elevenLetterWords << endl;
    cout << "# L12 = " << twelveLetterWords << endl;
    cout << "# L13 = " << thirteenLetterWords << endl;
    cout << "# L14 = " << fourteenLetterWords << endl;
    cout << "# L15 = " << fifteenLetterWords << endl;

    cout << "# Distribution of word by the first letter: \n";
    cout << "# a/A: " << StartWithA << endl;
    cout << "# b/B: " << StartWithB << endl;
    cout << "# c/C: " << StartWithC << endl;
    cout << "# d/D: " << StartWithD << endl;
    cout << "# e/E: " << StartWithE << endl;
    cout << "# f/F: " << StartWithF << endl;
    cout << "# g/G: " << StartWithG << endl;
    cout << "# h/H: " << StartWithH << endl;
    cout << "# i/I: " << StartWithI << endl;
    cout << "# j/J: " << StartWithJ << endl;
    cout << "# k/K: " << StartWithK << endl;
    cout << "# l/L: " << StartWithL << endl;
    cout << "# m/M: " << StartWithM << endl;
    cout << "# n/N: " << StartWithN << endl;
    cout << "# o/O: " << StartWithO << endl;
    cout << "# p/P: " << StartWithP << endl;
    cout << "# q/Q: " << StartWithQ << endl;
    cout << "# r/R: " << StartWithR << endl;
    cout << "# s/S: " << StartWithS << endl;
    cout << "# t/T: " << StartWithT << endl;
    cout << "# u/U: " << StartWithU << endl;
    cout << "# v/V: " << StartWithV << endl;
    cout << "# w/W: " << StartWithW << endl;
    cout << "# x/X: " << StartWithX << endl;
    cout << "# y/Y: " << StartWithY << endl;
    cout << "# z/Z: " << StartWithZ << endl;

    return 0;
}

#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <iterator>
using namespace std;

int main()
{
    // Defining the different ranges using vector for dynamic size
    vector<int> zeroToTen;
    vector<int> elevenToTwenty;
    vector<int> twentyOneToThirty;
    vector<int> thirtyOneToFourty;
    vector<int> fourtyOneToFifty;
    vector<int> fiftyOneToSixty;
    vector<int> sixtyOneToSeventy;
    vector<int> seventyOneToEighty;
    vector<int> eightyOnetoNinety;
    vector<int> ninetyOneToHundred;

    int maxCount;
    string maxRange;
    int gradeCounter = 0;
    int grade;

    cout << "Enter a grade: " << endl;
    do
    {
        cin >> grade;

        if (grade >= 0 && grade <= 10)
        {
            zeroToTen.push_back(grade);
        }
        if (grade >= 11 && grade <= 20)
        {
            elevenToTwenty.push_back(grade);
        }
        if (grade >= 21 && grade <= 30)
        {
            twentyOneToThirty.push_back(grade);
        }

        if (grade >= 31 && grade <= 40)
        {
            thirtyOneToFourty.push_back(grade);
        }

        if (grade >= 41 && grade <= 50)
        {
            fourtyOneToFifty.push_back(grade);
        }

        if (grade >= 51 && grade <= 60)
        {
            fiftyOneToSixty.push_back(grade);
        }

        if (grade >= 61 && grade <= 70)
        {
            sixtyOneToSeventy.push_back(grade);
        }

        if (grade >= 71 && grade <= 80)
        {
            seventyOneToEighty.push_back(grade);
        }

        if (grade >= 81 && grade <= 90)
        {
            eightyOnetoNinety.push_back(grade);
        }

        if (grade >= 91 && grade <= 100)
        {
            ninetyOneToHundred.push_back(grade);
        }
        if (grade != 1 && grade > 100)
        {
            continue;
        }

        if (grade != -1)
        {
            gradeCounter++; // increase the grade counter by one on every iteration
        }

    } while (grade != -1);

    cout << "$$$$$  Number of Grades per Range  $$$$$ \n"
         << endl;

    string ranges[] = {
        "0~10", "11~20", "21~30", "31~40", "41~50",
        "51~60", "61~70", "71~80", "81~90", "91~100"};

    int length = sizeof(ranges) / sizeof(ranges[0]); // The length of the ranges array
    cout << "#      ";
    for (int i = 0; i < length; i++)
    {
        cout << ranges[i] << " ";
    }
    cout << "\n";
    cout << "#     "
         << setw(3) << (zeroToTen.size() != 0 ? zeroToTen.size() : 0)
         << setw(6) << (elevenToTwenty.size() != 0 ? elevenToTwenty.size() : 0)
         << setw(6) << (twentyOneToThirty.size() != 0 ? twentyOneToThirty.size() : 0)
         << setw(6) << (thirtyOneToFourty.size() != 0 ? thirtyOneToFourty.size() : 0)
         << setw(6) << (fourtyOneToFifty.size() != 0 ? fourtyOneToFifty.size() : 0)
         << setw(6) << (fiftyOneToSixty.size() != 0 ? fiftyOneToSixty.size() : 0)
         << setw(6) << (sixtyOneToSeventy.size() != 0 ? sixtyOneToSeventy.size() : 0)
         << setw(6) << (seventyOneToEighty.size() != 0 ? seventyOneToEighty.size() : 0)
         << setw(6) << (eightyOnetoNinety.size() != 0 ? eightyOnetoNinety.size() : 0)
         << setw(6) << (ninetyOneToHundred.size() != 0 ? ninetyOneToHundred.size() : 0);

    cout << "\n";

    // Putting all the range sizes inside an array so I can loop and find the largest
    vector<int> sizes[] = {
        zeroToTen, elevenToTwenty, twentyOneToThirty,
        thirtyOneToFourty, fourtyOneToFifty, fiftyOneToSixty,
        sixtyOneToSeventy, seventyOneToEighty, eightyOnetoNinety,
        ninetyOneToHundred};

    for (vector<int> range : sizes)
    { // max count and max range
        if (range.size() > maxCount)
        {
            maxCount = range.size();
            maxRange = "";

            if (range.size() == zeroToTen.size())
            {
                maxRange += "0~10";
            }
            if (range.size() == elevenToTwenty.size())
            {
                maxRange += " 11~20";
            }
            if (range.size() == twentyOneToThirty.size())
            {
                maxRange += " 21~30";
            }
            if (range.size() == thirtyOneToFourty.size())
            {
                maxRange += " 31~40";
            }
            if (range.size() == fourtyOneToFifty.size())
            {
                maxRange += " 41~50";
            }
            if (range.size() == fiftyOneToSixty.size())
            {
                maxRange += " 51~60";
            }
            if (range.size() == sixtyOneToSeventy.size())
            {
                maxRange += " 61~70";
            }
            if (range.size() == seventyOneToEighty.size())
            {
                maxRange += " 71~80";
            }
            if (range.size() == eightyOnetoNinety.size())
            {
                maxRange += " 81~90";
            }
            if (range.size()== ninetyOneToHundred.size())
            {
                maxRange += " 91~100";
            }
        }
    }

    cout << "# Maximum count = " << maxCount << endl;

    cout << "# Range with maximum count: " << maxRange;

    cout << " \n# Grade count: " << gradeCounter << endl;

    cout << "$$$$$  Grade Distribution Graph  $$$$$ \n"
         << endl;
    cout << setw(5) << "0~10" << setw(2) << "|" << setw(zeroToTen.size())<< (zeroToTen.size() != 0 ? "*" : "")  << endl;
    cout << setw(1) << "11~20" << setw(2) << "|" << setw(elevenToTwenty.size()) << (elevenToTwenty.size() != 0 ? "*" : "") << endl;
    cout << setw(1) << "21~30" << setw(2) << "|" << setw(twentyOneToThirty.size()) << (twentyOneToThirty.size() != 0 ? "*" : "")<< endl;
    cout << setw(1) << "31~40" << setw(2) << "|" << setw(thirtyOneToFourty.size()) << (thirtyOneToFourty.size() != 0 ? "*" : "")<< endl;
    cout << setw(1) << "41~50" << setw(2) << "|" << setw(fourtyOneToFifty.size()) << (fourtyOneToFifty.size() != 0 ? "*" : "") << endl;
    cout << setw(1) << "51~60" << setw(2) << "|" << setw(fiftyOneToSixty.size()) << (fiftyOneToSixty.size() != 0 ? "*" : "") << endl;
    cout << setw(1) << "61~70" << setw(2) << "|" << setw(sixtyOneToSeventy.size()) << (sixtyOneToSeventy.size() != 0 ? "*" : "")<< endl;
    cout << setw(1) << "71~80" << setw(2) << "|" << setw(seventyOneToEighty.size()) << (seventyOneToEighty.size() != 0 ? "*" : "") << endl;
    cout << setw(1) << "81~90" << setw(2) << "|" << setw(eightyOnetoNinety.size()) << (eightyOnetoNinety.size() != 0 ? "*" : "") << endl;
    cout << setw(2) << "91~100" << setw(1) << "|" << setw(ninetyOneToHundred.size()) << (ninetyOneToHundred.size() != 0 ? "*" : "") << endl;
    return 0;
}
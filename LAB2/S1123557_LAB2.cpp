#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double myHeight;
    double myWeight;
    double myBMI;
    bool testing = true;

    while (testing)
    {
        cout << "Input weight (kg): ";
        cin >> myWeight;

        cout << "Input height (m): ";
        cin >> myHeight;

        if (myWeight >= 20 && myWeight <= 200)
        {
            if (myHeight >= 0.9 && myHeight <= 2.5)
            {
                cout << "# Your weight(kg): " << myWeight << endl;
                cout << "# Your height(m): " << myHeight << endl;
                myBMI = round(myWeight / (myHeight * myHeight) * 10) / 10.0;
                cout << "# Your BMI : " << myBMI << endl;

                double weigthToAdd = (myWeight * 18.5) / myBMI; // Weight to add if BMI < 18.5
                double weigthToLose = (myWeight * 25) / myBMI;  // Weight to lose if BMI < 25
                if (myBMI <= 10)
                {
                    cout << "# Your BMI level is Unreasonably underweight" << endl;
                    if (myBMI < 10)
                    {
                        double correctWeight = 10 * (myHeight * myHeight);
                        double correctHeight = sqrt(myWeight / 10);
                        cout << "# Either weight or height might be wrongly given (Step 4)." << endl;
                        cout << "# If given weight is correct, the given height should be at most " << correctHeight << "m (Step 4)." << endl;
                        cout << "# If given height is correct, the given weight should be at least " << correctWeight << "kg (Step 4)." << endl;
                    }
                }
                else if (myBMI > 10 && myBMI <= 15)
                {
                    cout << "# Your BMI level is Highly severely underweight" << endl;
                    cout << "# Increase your Weight level by " << weigthToAdd << " kg to bring your BMI value to 18.5" << endl;
                }
                else if (myBMI > 15 && myBMI <= 16)
                {
                    cout << "# Your BMI level is Severely underweight" << endl;
                    cout << "# Increase your Weight level by " << weigthToAdd << " kg to bring your BMI value to 18.5" << endl;
                }
                else if (myBMI > 16 && myBMI < 18.5)
                {
                    cout << "# Your BMI level is Underweight" << endl;
                    cout << "# Increase your BMI level by " << weigthToAdd << " kg to bring your BMI value to 18.5" << endl;
                }
                else if (myBMI >= 18.5 && myBMI <= 25)
                {
                    cout << "# Your BMI level is Normal" << endl;
                }
                else if (myBMI > 25 && myBMI <= 30)
                {
                    cout << "# Your BMI level is Overweight" << endl;
                    cout << "# Decrease your Weight level by " << weigthToLose << " kg to bring your BMI value to 25" << endl;
                }
                else if (myBMI > 30 && myBMI <= 35)
                {
                    cout << "# Your BMI level is Obese" << endl;
                    cout << "# Decrease your Weight level by " << weigthToLose << " kg to bring your BMI value to 25" << endl;
                }
                else if (myBMI > 35 && myBMI <= 40)
                {
                    cout << "# Your BMI level is Severely obese" << endl;
                    cout << "# Decrease your Weight level by " << weigthToLose << " kg to bring your BMI value to 25" << endl;
                }
                else if (myBMI > 40 && myBMI <= 45)
                {
                    cout << "# Your BMI level is Highly severely obese" << endl;
                    cout << "# Decrease your Weight level by " << weigthToLose << " to bring your BMI value to 25" << endl;
                }
                else if (myBMI > 45)
                {
                    double correctWeight = 45 * (myHeight * myHeight);
                    double correctHeight = sqrt(myWeight / 45);
                    cout << "# Your BMI level is Unreasonably obese" << endl;
                    cout << "# Either weight or height might be wrongly given (Step 4)." << endl;
                    cout << "# If given weight is correct, the given height should be at lest " << correctHeight << "m (Step 4)." << endl;
                    cout << "# If given height is correct, the given weight should be at most " << correctWeight << "kg (Step 4)." << endl;
                }
            }
            else
            {
                cout << "# Invalid Height (>= 0.9 and <= 2.5)";
                testing = false;
            }
        }
        else if (myWeight == 0 && myHeight == 0)
        {
            break;
        }
        else
        {
            cout << "# Invalid Weight (>= 20 and <= 200)";
            testing = false;
        }

        return 0;
    }
}
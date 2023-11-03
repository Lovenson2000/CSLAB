#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    int testCases;
    cout << "Number of test cases: ";
    cin >> testCases;

    for(int i = 0; i < testCases; i++)
    {
        int length;
        unsigned long long decimal;
        string binary = "";
        string seed = "";
        cout << "Length of LFSR: ";
        cin >> length;
        int numberOf_TabEqualsTo_One = 0;
        do{
            cout << "Integer determines tap bits and seed: ";
            cin >> decimal;
            while(decimal >= 2)
            {
                binary = to_string(decimal % 2).append(binary);
                decimal = decimal/ 2;
            }
            binary = to_string(1).append(binary);
            while(binary.length() <= length)
            {
                binary = to_string(0) + binary;
            }
            for(int j = binary.length() - 1; j >= binary.length() - length;  --j)
            {
                seed = seed + binary[j];
            }
            for(int v = 0; v < seed.length(); v++)
            {
                if(seed[v] == '1')
                {
                    numberOf_TabEqualsTo_One++;
                }
            }
        }while(numberOf_TabEqualsTo_One < 2);
        for(int k = 0; k < seed.length(); k++)
        {
            if(seed[k] == '1')
            {
               cout<<k + 1<<" ";
            }
        }
        cout<<endl;
        cout<<seed<<endl;
        string LFSR="";
        bool foundSeed = false;
        int maximumHammingDistance = 0; 
        int minimumHammingDistance = length;
        string PrevLFSR = seed;
        for(long n = 0; n < pow(2, length) - 1; n++)
        {
            int LFSR_TabEqualsTo_One = 0;
            for(int m = 0; m < length; m++)
            {
                if(seed[m] == '1')
                {
                    if(PrevLFSR[m] == '1')
                    {
                        LFSR_TabEqualsTo_One++;
                    }
                }
            }
            if(LFSR_TabEqualsTo_One % 2 == 1)
            {
                LFSR = to_string(1) + PrevLFSR;
                LFSR = LFSR.erase(LFSR.length() - 1, 1);
            }
            else if(LFSR_TabEqualsTo_One % 2 == 0)
            {
                LFSR = to_string(0) + PrevLFSR;
                LFSR = LFSR.erase(LFSR.length() - 1, 1);
            }
            int hammingDistance = 0;
            for(int y = 0; y < length; y++)
            {
                if(LFSR[y] != PrevLFSR[y])
                {
                    ++hammingDistance;
                }
            }
            if(hammingDistance > maximumHammingDistance)
            {
                maximumHammingDistance = hammingDistance;
            }
            if(hammingDistance < minimumHammingDistance)
            {
                minimumHammingDistance = hammingDistance;
            }
            if(LFSR == seed)
            {
                foundSeed = true;
                cout<<n + 1<<" ";
                break;
            }
            PrevLFSR = LFSR;
        }
        if(!foundSeed)
        {
            cout<<0<<" ";
        }
        cout<<minimumHammingDistance<<" "<<maximumHammingDistance<<endl;
    }
}
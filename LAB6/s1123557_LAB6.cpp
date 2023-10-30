#include <iostream>
#include <vector>
#include <bitset>
#include <unordered_set>

using namespace std;

// Function to calculate LFSR sequence
vector<int> generateLFSRSequence(int k, unsigned int N)
{
    vector<int> sequence;
    bitset<32> lfsr(N); // Initialize LFSR with N

    for (int i = 0; i < k; ++i)
    {
        sequence.push_back(lfsr[0]); // Add the first bit to the sequence
        int feedback = lfsr[k - 1] ^ (lfsr[0] & lfsr[1]); 
        lfsr >>= 1;
        lfsr[k - 1] = feedback; // Set the last bit to the feedback value
    }

    return sequence;
}

int main()
{
    cout << "Number of test cases: " << endl;
    int numTestCases;
    cin >> numTestCases;

    for (int i = 0; i < numTestCases; ++i)
    {
        int k;
        unsigned int N;
        cin >> k >> N;

        vector<int> sequence = generateLFSRSequence(k, N);

        // Output the results
        cout << "Integer determines tap bits and seed: ";
        for (int j = 0; j < k; ++j)
        {
            if (sequence[j])
            {
                cout << j + 1 << " ";
            }
        }
        cout << endl;

        cout << sequence[0];
        for (int j = 1; j < k; ++j)
        {
            cout << sequence[j];
        }
        cout << endl;

        
    }

    return 0;
}

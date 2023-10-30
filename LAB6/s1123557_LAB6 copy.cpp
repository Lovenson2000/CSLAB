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

    unordered_set<bitset<32>> seen_states;
    int sequence_start = -1;

    for (int i = 0; i < k; ++i)
    {
        sequence.push_back(lfsr[0]); // Add the first bit to the sequence

        // Check if the current state has been seen before
        if (seen_states.count(lfsr) == 1 && sequence_start == -1)
        {
            sequence_start = i - k;
        }

        seen_states.insert(lfsr);
        
        int feedback = lfsr[k - 1] ^ (lfsr[0] & lfsr[1]); 
        lfsr >>= 1;
        lfsr[k - 1] = feedback; // Set the last bit to the feedback value
    }

    return sequence_start;
}

int main()
{
    cout << "Number of test cases: ";
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

        // Find position of seed reappearance
        int seed_reappearance = sequence + k;
        cout << "Position of seed reappearance: " << (seed_reappearance < 0 ? 0 : seed_reappearance) << endl;

        // Calculate minimum and maximum Hamming distances
        int min_distance = k; // Initialize with a value greater than the maximum possible distance
        int max_distance = 0;

        for (int j = 1; j < k; ++j)
        {
            int distance = 0;
            for (int bit = 0; bit < k; ++bit)
            {
                if (sequence[j - bit] != sequence[j - bit - 1])
                {
                    distance++;
                }
            }
            min_distance = min(min_distance, distance);
            max_distance = max(max_distance, distance);
        }

        cout << "Minimum Hamming Distance: " << min_distance << endl;
        cout << "Maximum Hamming Distance: " << max_distance << endl;
    }

    return 0;
}

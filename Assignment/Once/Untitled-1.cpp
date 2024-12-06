#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K; // Input the number of player records and the threshold K

    unordered_map<int, int> ballCount; // Map to store ball count for each player

    for (int i = 0; i < N; ++i) {
        int playerId, ballNumber;
        cin >> playerId >> ballNumber; // Input player id and ball number

        // Increment the count for the ball picked by the player
        ballCount[ballNumber]++;
    }

    int disqualifiedPlayers = 0;
    for (const auto& entry : ballCount) {
        if (entry.second > K) {
            disqualifiedPlayers++;
        }
    }

    cout << disqualifiedPlayers << endl; // Output the number of disqualified players
    return 0;
}

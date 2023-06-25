#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <climits>

using namespace std;

int calculateCost(const string& word1, const string& word2) {
    int cost = 0;
    for (int i = 0; i < word1.length(); i++) {
        cost += abs(word1[i] - word2[i]);
    }
    return cost;
}

int findMinCost(const vector<string>& words) {
    int n = words.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                dp[i][j] = calculateCost(words[i], words[j]);
            }
        }
    }

    vector<int> minCost(n, INT_MAX);
    vector<bool> visited(n, false);
    minCost[0] = 0;

    for (int i = 0; i < n - 1; i++) {
        int minIndex = -1;
        for (int j = 0; j < n; j++) {
            if (!visited[j] && (minIndex == -1 || minCost[j] < minCost[minIndex])) {
                minIndex = j;
            }
        }

        visited[minIndex] = true;

        for (int j = 0; j < n; j++) {
            if (!visited[j] && dp[minIndex][j] < minCost[j]) {
                minCost[j] = dp[minIndex][j];
            }
        }
    }

    int maxCost = 0;
    for (int i = 0; i < n; i++) {
        maxCost = max(maxCost, minCost[i]);
    }

    return maxCost;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<string> words(n);
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    int minMaxCost = findMinCost(words);
    cout << minMaxCost << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<string> words(n);
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        cin >> words[i];
        maxLen = max(maxLen, static_cast<int>(words[i].size()));
    }

    for (int i = 0; i < maxLen; i++) {
        map<char, int> freq;
        for (const string& word : words) {
            if (i < word.size() && islower(word[i])) {
                freq[word[i]]++;
            }
        }

        vector<char> maxFreqChars;
        int maxFreq = 0;
        for (const auto& entry : freq) {
            if (entry.second > maxFreq) {
                maxFreq = entry.second;
                maxFreqChars.clear();
                maxFreqChars.push_back(entry.first);
            } else if (entry.second == maxFreq) {
                maxFreqChars.push_back(entry.first);
            }
        }

        cout << i + 1 << ": ";
        for (int j = 0; j < maxFreqChars.size(); j++) {
            cout << maxFreqChars[j];
            if (j < maxFreqChars.size() - 1) {
                cout << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}

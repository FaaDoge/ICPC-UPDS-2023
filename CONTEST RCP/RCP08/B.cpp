#include <iostream>
#include <string>

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isConsonant(char c) {
    return !isVowel(c);
}

bool isEasyToPronounce(const std::string& word) {
    int length = word.length();

    for (int i = 0; i < length - 1; i++) {
        if (isVowel(word[i])) {
            if (!isConsonant(word[i + 1])) {
                return false;
            }
        } else {
            if (!isVowel(word[i + 1])) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    std::string word;
    std::cin >> word;

    int result = isEasyToPronounce(word) ? 1 : 0;
    std::cout << result << std::endl;

    return 0;
}

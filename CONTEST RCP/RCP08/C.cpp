#include <iostream>
#include <string>
using namespace std;
string dexor(const string& num1, const string& num2) {
    int length = max(num1.length(), num2.length());
    string result(length, '0');

    for (int i = 0; i < length; i++) {
        int digit1 = i < num1.length() ? num1[num1.length() - i - 1] - '0' : 0;
        int digit2 = i < num2.length() ? num2[num2.length() - i - 1] - '0' : 0;

        if ((digit1 <= 2 && digit2 <= 2) || (digit1 >= 7 && digit2 >= 7)) {
            result[length - i - 1] = '0';
        } else {
            result[length - i - 1] = '9';
        }
    }

    return result;
}

int main() {
    string num1, num2;
    cin >> num1 >> num2;

    string result = dexor(num1, num2);
    cout << result << std::endl;

    return 0;
}

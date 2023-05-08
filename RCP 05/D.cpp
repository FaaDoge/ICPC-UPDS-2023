#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;

    bool is_dickensian = true;
    char last_hand = (string("qwertasdfgzxcvb").find(word[0]) != string::npos) ? 'L' : 'R'; // inicializamos la mano izquierda o derecha
    for (int i = 1; i < word.length(); i++) {
        char c = word[i];
        char current_hand = (string("qwertasdfgzxcvb").find(c) != string::npos) ? 'L' : 'R';
        if (current_hand == last_hand) { // Si la mano actual es la misma que la anterior, la palabra no es Dickensiana
            is_dickensian = false;
            break;
        }
        last_hand = current_hand;
    }

    if (is_dickensian) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}

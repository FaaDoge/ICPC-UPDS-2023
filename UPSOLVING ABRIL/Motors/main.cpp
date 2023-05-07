#include <iostream>
#include <vector>
#include <utility>

using namespace std;

pair<int, int> buscar_motor_mas_danado(vector<pair<int, int>> motores) {
    int danio_max = 0;
    pair<int, int> motor_mas_danado;

    for (auto motor : motores) {
        if (motor.second > danio_max) {
            danio_max = motor.second;
            motor_mas_danado = motor;
        }
    }

    return motor_mas_danado;
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> motores(n);

    for (int i = 0; i < n; i++) {
        int numero_motor, danio;
        cin >> numero_motor >> danio;
        motores[i] = make_pair(numero_motor, danio);
    }

    pair<int, int> motor_mas_danado = buscar_motor_mas_danado(motores);

    cout << "El motor mas dañado es el numero " << motor_mas_danado.first<< endl;

    return 0;
}

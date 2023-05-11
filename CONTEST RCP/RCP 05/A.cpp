#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int puntos_servidor = -1;
    int puntos_oponente = -1;
    bool ganador = false;
    for(int i = 0; i < n; ++i){
        int puntos_nuevos_servidor, puntos_nuevos_oponente;
        cin >> puntos_nuevos_servidor >> puntos_nuevos_oponente;
        puntos_nuevos_oponente = -puntos_nuevos_oponente;
        if((puntos_nuevos_servidor + puntos_nuevos_oponente) % 4 == 0 || (puntos_nuevos_servidor + puntos_nuevos_oponente) % 4 == 3){
            swap(puntos_nuevos_servidor, puntos_nuevos_oponente);
        }
        if(puntos_nuevos_servidor == puntos_servidor && puntos_nuevos_oponente == puntos_oponente) continue;

        bool fallo = false;

        if(max(puntos_nuevos_servidor, puntos_nuevos_oponente) > 11 || ganador || (puntos_nuevos_servidor == 11 && puntos_nuevos_oponente == 11)) fallo = true;

        if(puntos_nuevos_servidor < puntos_servidor || puntos_nuevos_oponente < puntos_oponente || fallo){
            cout << "error " << i+1 << "\n";
            return 0;
        }

        if(max(puntos_nuevos_servidor, puntos_nuevos_oponente) == 11) ganador = true;

        puntos_servidor = puntos_nuevos_servidor;
        puntos_oponente = puntos_nuevos_oponente;
    }
    cout << "ok\n";
    return 0;
}

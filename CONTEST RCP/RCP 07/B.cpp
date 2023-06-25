#include <iostream>

int main() {
    int d1, m1, y1, n1; // Primer fecha y día de la semana
    int d2, m2, y2; // Segunda fecha
    int days; // Días de diferencia entre las dos fechas

    // Leer la primera fecha y el día de la semana
    std::cin >> d1 >> m1 >> y1 >> n1;

    // Leer la segunda fecha
    std::cin >> d2 >> m2 >> y2;

    // Calcular el número total de días entre las dos fechas
    days = (y2 - y1) * 360 + (m2 - m1) * 30 + (d2 - d1);

    // Calcular el día de la semana de la segunda fecha
    int dayOfWeek = (n1 + days % 7 - 1) % 7 + 1;

    // Imprimir el resultado
    std::cout << dayOfWeek << std::endl;

    return 0;
}


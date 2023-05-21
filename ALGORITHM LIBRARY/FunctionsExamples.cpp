#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}
int main() {
    vector<int> nums = {2, 2, 9, 9, 9};

    // all_of: Verifica si todos los elementos cumplen con un predicado.
    bool allPositive = all_of(nums.begin(), nums.end(), [](int n) {
        return n % 2 == 0;
    });
    cout << "all_of: " << (allPositive ? "Todos positivos" : "NO") << endl;

    // any_of: Verifica si al menos uno de los elementos cumple con un predicado.
    bool anyEven = any_of(nums.begin(), nums.end(), [](int n) {
        return n % 2 == 0;
    });
    cout << "any_of: " << (anyEven ? "Hay al menos un número par" : "NO hay números pares") << endl;

    // none_of: Verifica si ninguno de los elementos cumple con un predicado.
    bool noneNegative = none_of(nums.begin(), nums.end(), [](int n) {
        return n < 0;
    });
    cout << "none_of: " << (noneNegative ? "No hay números negativos" : "Hay al menos un número negativo") << endl;

    // for_each: Aplica una función a cada elemento de la secuencia.
    cout << "for_each: ";
    for_each(nums.begin(), nums.end(), [](int n) {
        cout << n << " ";
    });
    cout << endl;

    // count: Cuenta el número de ocurrencias de un valor específico en la secuencia.
    int countNum = 9;
    int coun = count(nums.begin(), nums.end(), countNum);
    cout << "count: El número " << countNum << " se repite " << coun << " veces" << endl;

    // count_if: Cuenta el número de elementos que cumplen con un predicado en la secuencia.
    int countEven = count_if(nums.begin(), nums.end(), [](int n) {
        return n % 2 == 0;
    });
    cout << "count_if: Hay " << countEven << " números pares" << endl;

    // mismatch: Encuentra la primera posición donde dos secuencias difieren.
    vector<int> nums2 = {2, 2, 9, 8, 9};
    auto mismatchPair = mismatch(nums.begin(), nums.end(), nums2.begin());
    cout << "mismatch: Elemento diferente encontrado en posición " << (mismatchPair.first - nums.begin()) << endl;

    // find: Encuentra la primera aparición de un valor específico en la secuencia.
    int findNum = 3;
    auto found = find(nums.begin(), nums.end(), findNum);
    if (found != nums.end()) {
        cout << "find: Elemento " << findNum << " encontrado en posición " << (found - nums.begin()) << endl;
    } else {
        cout << "find: Elemento " << findNum << " no encontrado" << endl;
    }

      // find_if: Encuentra la primera aparición de un elemento que cumple con un predicado en la secuencia.
    auto foundEven = find_if(nums.begin(), nums.end(), [](int n) {
        return n % 2 == 0;
    });
    if (foundEven != nums.end()) {
        cout << "find_if: Primer número par encontrado en posición " << (foundEven - nums.begin()) << endl;
    } else {
        cout << "find_if: No se encontró ningún número par" << endl;
    }

    // find_if_not: Encuentra la primera aparición de un elemento que no cumple con un predicado en la secuencia.
    auto foundNotEven = find_if_not(nums.begin(), nums.end(), [](int n) {
        return n % 2 == 0;
    });
    if (foundNotEven != nums.end()) {
        cout << "find_if_not: Primer número impar encontrado en posición " << (foundNotEven - nums.begin()) << endl;
    } else {
        cout << "find_if_not: No se encontró ningún número impar" << endl;
    }

    // copy: Copia los elementos de una secuencia a otra.
    vector<int> copyNums(nums.size());
    copy(nums.begin(), nums.end(), copyNums.begin());
    cout << "copy: ";
    for (int num : copyNums) {
        cout << num << " ";
    }
    cout << endl;

    // copy_if: Copia los elementos que cumplen con un predicado de una secuencia a otra.
    vector<int> copyEvenNums(nums.size());
    auto copyEnd = copy_if(nums.begin(), nums.end(), copyEvenNums.begin(), [](int n) {
        return n % 2 == 0;
    });
    cout << "copy_if: ";
    for (auto it = copyEvenNums.begin(); it != copyEnd; ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // transform: Aplica una función a cada elemento de una secuencia y guarda los resultados en otra secuencia.
    vector<int> transformedNums(nums.size());
    transform(nums.begin(), nums.end(), transformedNums.begin(), [](int n) {
        return n * 2;
    });
    cout << "transform: ";
    for (int num : transformedNums) {
        cout << num << " ";
    }
    cout << endl;


  nums = {1, 2, 3, 4, 5, 3, 6, 7, 8, 9, 3};

    // replace: Reemplaza todos los elementos iguales a un valor específico en una secuencia con otro valor.
    replace(nums.begin(), nums.end(), 3, 0);
    cout << "replace: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // replace_if: Reemplaza los elementos que cumplen con un predicado en una secuencia con otro valor.
    replace_if(nums.begin(), nums.end(), [](int n) {
        return n % 2 == 0;
    }, 0);
    cout << "replace_if: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // replace_copy: Copia una secuencia a otra secuencia y reemplaza todos los elementos iguales a un valor específico con otro valor.
    vector<int> replaced(nums.size());
    replace_copy(nums.begin(), nums.end(), replaced.begin(), 3, 0);
    cout << "replace_copy: ";
    for (int num : replaced) {
        cout << num << " ";
    }
    cout << endl;

    // replace_copy_if: Copia una secuencia a otra secuencia y reemplaza los elementos que cumplen con un predicado con otro valor.
    vector<int> replacedIf(nums.size());
    replace_copy_if(nums.begin(), nums.end(), replacedIf.begin(), [](int n) {
        return n % 2 == 0;
    }, 0);
    cout << "replace_copy_if: ";
    for (int num : replacedIf) {
        cout << num << " ";
    }
    cout << endl;

    // fill: Asigna un valor específico a todos los elementos de una secuencia.
    fill(nums.begin(), nums.end(), 0);
    cout << "fill: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // fill_n: Asigna un valor específico a los primeros n elementos de una secuencia.
    fill_n(nums.begin(), 3, 0);
    cout << "fill_n: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // generate: Asigna valores generados por una función a todos los elementos de una secuencia.
    generate(nums.begin(), nums.end(), []() {
        static int num = 0;
        return num++;
    });
    cout << "generate: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // generate_n: Asigna valores generados por una función a los primeros n elementos de una secuencia.
    generate_n(nums.begin(), 3, []() {
        static int num = 0;
        return num++;
    });
    cout << "generate_n: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // remove: Elimina todos los elementos iguales a un valor específico en una secuencia.
    auto newEnd = remove(nums.begin(), nums.end(), 3);
    nums.erase(newEnd, nums.end());
    cout << "remove: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // remove_if: Elimina los elementos que cumplen con un predicado en una secuencia.
    auto newEndIf = remove_if(nums.begin(), nums.end(), [](int n) {
        return n % 2 == 0;
    });
    nums.erase(newEndIf, nums.end());
    cout << "remove_if: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // remove_copy: Copia una secuencia a otra secuencia, eliminando todos los elementos iguales a un valor específico.
    vector<int> removed(nums.size());
    auto newEndCopy = remove_copy(nums.begin(), nums.end(), removed.begin(), 3);
    removed.erase(newEndCopy, removed.end());
    cout << "remove_copy: ";
    for (int num : removed) {
        cout << num << " ";
    }
    cout << endl;

    // remove_copy_if: Copia una secuencia a otra secuencia, eliminando los elementos que cumplen con un predicado.
    vector<int> removedIf(nums.size());
    auto newEndCopyIf = remove_copy_if(nums.begin(), nums.end(), removedIf.begin(), [](int n) {
        return n % 2 == 0;
    });
    removedIf.erase(newEndCopyIf, removedIf.end());
    cout << "remove_copy_if: ";
    for (int num : removedIf) {
        cout << num << " ";
    }
    cout << endl;

    // unique: Elimina elementos duplicados consecutivos en una secuencia.
    auto uniqueEnd = unique(nums.begin(), nums.end());
    nums.erase(uniqueEnd, nums.end());
    cout << "unique: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // unique_copy: Copia una secuencia a otra secuencia, eliminando elementos duplicados consecutivos.
    vector<int> uniqueCopy(nums.size());
    auto uniqueEndCopy = unique_copy(nums.begin(), nums.end(), uniqueCopy.begin());
    uniqueCopy.erase(uniqueEndCopy, uniqueCopy.end());
    cout << "unique_copy: ";
    for (int num : uniqueCopy) {
        cout << num << " ";
    }
    cout << endl;

    // reverse: Invierte el orden de los elementos en una secuencia.
    reverse(nums.begin(), nums.end());
    cout << "reverse: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // reverse_copy: Copia una secuencia a otra secuencia en orden inverso.
    vector<int> reverseCopy(nums.size());
    reverse_copy(nums.begin(), nums.end(), reverseCopy.begin());
    cout << "reverse_copy: ";
    for (int num : reverseCopy) {
        cout << num << " ";
    }
    cout << endl;

    // rotate: Rota los elementos de una secuencia hasta una posición específica.
    rotate(nums.begin(), nums.begin() + 2, nums.end());
    cout << "rotate: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // rotate_copy: Copia una secuencia a otra secuencia con rotación.
    vector<int> rotateCopy(nums.size());
    rotate_copy(nums.begin(), nums.begin() + 2, nums.end(), rotateCopy.begin());
    cout << "rotate_copy: ";
    for (int num : rotateCopy) {
        cout << num << " ";
    }
    cout << endl;

    // next_permutation: Genera la siguiente permutación de una secuencia en orden lexicográfico.
    next_permutation(nums.begin(), nums.end());
    cout << "next_permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // prev_permutation: Genera la permutación anterior de una secuencia en orden lexicográfico.
    prev_permutation(nums.begin(), nums.end());
    cout << "prev_permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Sorting operations

    // sort: Ordena los elementos de una secuencia en orden ascendente.
    sort(nums.begin(), nums.end());
    cout << "sort: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // partial_sort: Ordena los primeros k elementos de una secuencia en orden ascendente.
    partial_sort(nums.begin(), nums.begin() + 3, nums.end());
    cout << "partial_sort: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // partial_sort_copy: Copia y ordena los primeros k elementos de una secuencia en orden ascendente.
    vector<int> partialSortCopy(3);
    partial_sort_copy(nums.begin(), nums.end(), partialSortCopy.begin(), partialSortCopy.end());
    cout << "partial_sort_copy: ";
    for (int num : partialSortCopy) {
        cout << num << " ";
    }
    cout << endl;

    // stable_sort: Ordena los elementos de una secuencia de manera estable (preservando el orden relativo de elementos iguales).
    stable_sort(nums.begin(), nums.end());
    cout << "stable_sort: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // is_sorted: Verifica si los elementos de una secuencia están ordenados en orden ascendente.
    bool isSorted = is_sorted(nums.begin(), nums.end());
    cout << "is_sorted: " << (isSorted ? "true" : "false") << endl;

    // is_sorted_until: Encuentra el primer elemento no ordenado en una secuencia.
    auto sortedUntil = is_sorted_until(nums.begin(), nums.end());
    cout << "is_sorted_until: " << *sortedUntil << endl;

    // nth_element: Reorganiza los elementos de una secuencia de manera que el n-ésimo elemento esté en su posición correcta.
    nth_element(nums.begin(), nums.begin() + 2, nums.end());
    cout << "nth_element: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Binary search operations

    // binary_search: Verifica si un elemento está presente en una secuencia ordenada.
    bool foundBinary = binary_search(nums.begin(), nums.end(), 3);
    cout << "binary_search: " << (foundBinary ? "true" : "false") << endl;

    // lower_bound: Encuentra la primera posición donde un valor específico podría ser insertado en una secuencia ordenada.
    auto lowerBound = lower_bound(nums.begin(), nums.end(), 3);
    cout << "lower_bound: " << *lowerBound << endl;

    // upper_bound: Encuentra la primera posición donde un valor específico no podría ser insertado en una secuencia ordenada.
    auto upperBound = upper_bound(nums.begin(), nums.end(), 3);
    cout << "upper_bound: " << *upperBound << endl;

    // equal_range: Encuentra un rango de elementos que son equivalentes a un valor específico en una secuencia ordenada.
    auto equalRange = equal_range(nums.begin(), nums.end(), 3);
    cout << "equal_range: " << *equalRange.first << " " << *equalRange.second << endl;

    // Ejemplo de iota
    //vector<int> nums(5);
    iota(nums.begin(), nums.end(), 1);

    cout << "Ejemplo de iota:" << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl << endl;



    // Ejemplo de gcd
    int num1 = 12;
    int num2 = 18;
    int resultGCD = gcd(num1, num2);

    cout << "Ejemplo de gcd:" << endl;
    cout << "El maximo comun divisor de " << num1 << " y " << num2 << " es: " << resultGCD << endl << endl;

    // Ejemplo de lcm
    int num3 = 4;
    int num4 = 6;
    int resultLCM = lcm(num3, num4);

    cout << "Ejemplo de lcm:" << endl;
    cout << "El minimo comun multiplo de " << num3 << " y " << num4 << " es: " << resultLCM << endl;


    // Obtener la distancia entre dos iteradores
    auto start = nums.begin();
    auto end = nums.end();
    int dist = distance(start, end);

    cout << "La distancia entre los iteradores es: " << dist << endl;



    return 0;
}
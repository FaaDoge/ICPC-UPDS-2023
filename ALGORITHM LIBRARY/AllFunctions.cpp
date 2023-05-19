#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {2, 2, 9, 9, 9};
    // all_of: Verifica si todos los elementos cumplen con un predicado.
    bool allPositive = all_of(nums.begin(), nums.end(), [](int n) {
        return n %2== 0;
    });
    if(allPositive){
        cout<<"Todos positivos";
    }else{
        cout<<"NO";
    }
    // any_of: Verifica si al menos uno de los elementos cumple con un predicado.
    bool anyEven = any_of(nums.begin(), nums.end(), [](int n) {
        return n % 2 == 0;
    });

    // none_of: Verifica si ninguno de los elementos cumple con un predicado.
    bool noneNegative = none_of(nums.begin(), nums.end(), [](int n) {
        return n < 0;
    });

    // for_each: Aplica una función a cada elemento de la secuencia.
    for_each(nums.begin(), nums.end(), [](int n) {
        cout << n <<endl;
    });

    // count: Cuenta el número de ocurrencias de un valor específico en la secuencia.
    int coun = count(nums.begin(), nums.end(), 9);
    cout<<"El numero de veces que se repite es: "<<coun<<endl;
    // count_if: Cuenta el número de elementos que cumplen con un predicado en la secuencia.
    int countEven = count_if(nums.begin(), nums.end(), [](int n) {
        return n % 2 == 0;
    });
    cout<<"Pares: "<<countEven<<endl;
    // mismatch: Encuentra la primera posición donde dos secuencias difieren.
    auto mismatc = mismatch(nums.begin(), nums.end(), nums.begin());
    //cout<<mismatc;
    // find: Encuentra la primera aparición de un valor específico en la secuencia.
    auto found = find(nums.begin(), nums.end(), 3);

    // find_if: Encuentra la primera aparición de un elemento que cumple con un predicado en la secuencia.
    auto foundEven = find_if(nums.begin(), nums.end(), [](int n) {
        return n % 2 == 0;
    });

    // find_if_not: Encuentra la primera aparición de un elemento que no cumple con un predicado en la secuencia.
    auto foundOdd = find_if_not(nums.begin(), nums.end(), [](int n) {
        return n % 2 == 0;
    });

    // find_end: Busca la última aparición de una secuencia en otra secuencia.
    auto foundEnd = find_end(nums.begin(), nums.end(), nums.begin(), nums.end());

    // find_first_of: Encuentra la primera aparición de alguno de los elementos de una secuencia en otra secuencia.
    auto foundFirstOf = find_first_of(nums.begin(), nums.end(), nums.begin(), nums.end());

    // adjacent_find: Encuentra la primera pareja de elementos adyacentes que son iguales.
    auto foundAdjacent = adjacent_find(nums.begin(), nums.end());

    // search: Busca la primera aparición de una secuencia en otra secuencia.
    auto foundSearch = search(nums.begin(), nums.end(), nums.begin(), nums.end());

    // search_n: Busca la primera aparición de una secuencia de elementos iguales en la secuencia.
    auto foundSearchN = search_n(nums.begin(), nums.end(), 2, 3);

    // Modifying sequence operations

    // copy: Copia los elementos de una secuencia a otra secuencia.
    vector<int> dest(nums.size());
    copy(nums.begin(), nums.end(), dest.begin());

    // copy_if: Copia los elementos que cumplen con un predicado a otra secuencia.
    vector<int> evenNums(nums.size());
    auto evenEnd = copy_if(nums.begin(), nums.end(), evenNums.begin(), [](int n) {
        return n % 2 == 0;
    });

    // copy_n: Copia los primeros n elementos de una secuencia a otra secuencia.
    vector<int> copyN(3);
    copy_n(nums.begin(), 3, copyN.begin());

    // copy_backward: Copia los elementos de una secuencia a otra secuencia en orden inverso.
    vector<int> backwardDest(nums.size());
    copy_backward(nums.begin(), nums.end(), backwardDest.end());

    // move: Mueve los elementos de una secuencia a otra secuencia.
    vector<int> source = {1, 2, 3, 4, 5};
    vector<int> dest2(nums.size());
    move(source.begin(), source.end(), dest2.begin());

    // move_backward: Mueve los elementos de una secuencia a otra secuencia en orden inverso.
    vector<int> backwardSource = {1, 2, 3, 4, 5};
    vector<int> backwardDest2(nums.size());
    move_backward(backwardSource.begin(), backwardSource.end(), backwardDest2.end());

    // transform: Aplica una operación a cada elemento de una secuencia y guarda los resultados en otra secuencia.
    vector<int> transformed(nums.size());
    transform(nums.begin(), nums.end(), transformed.begin(), [](int n) {
        return n * 2;
    });

    // replace: Reemplaza todos los elementos iguales a un valor específico en una secuencia con otro valor.
    replace(nums.begin(), nums.end(), 3, 0);

    // replace_if: Reemplaza los elementos que cumplen con un predicado en una secuencia con otro valor.
    replace_if(nums.begin(), nums.end(), [](int n) {
        return n % 2 == 0;
    }, 0);

    // replace_copy: Copia una secuencia a otra secuencia y reemplaza todos los elementos iguales a un valor específico con otro valor.
    vector<int> replaced(nums.size());
    replace_copy(nums.begin(), nums.end(), replaced.begin(), 3, 0);

    // replace_copy_if: Copia una secuencia a otra secuencia y reemplaza los elementos que cumplen con un predicado con otro valor.
    vector<int> replacedIf(nums.size());
    replace_copy_if(nums.begin(), nums.end(), replacedIf.begin(), [](int n) {
        return n % 2 == 0;
    }, 0);

    // fill: Asigna un valor específico a todos los elementos de una secuencia.
    fill(nums.begin(), nums.end(), 0);

    // fill_n: Asigna un valor específico a los primeros n elementos de una secuencia.
    fill_n(nums.begin(), 3, 0);

    // generate: Asigna valores generados por una función a todos los elementos de una secuencia.
    generate(nums.begin(), nums.end(), []() {
        static int num = 0;
        return num++;
    });

    // generate_n: Asigna valores generados por una función a los primeros n elementos de una secuencia.
    generate_n(nums.begin(), 3, []() {
        static int num = 0;
        return num++;
    });

    // remove: Elimina todos los elementos iguales a un valor específico en una secuencia.
    auto newEnd = remove(nums.begin(), nums.end(), 3);
    nums.erase(newEnd, nums.end());

    // remove_if: Elimina los elementos que cumplen con un predicado en una secuencia.
    auto newEndIf = remove_if(nums.begin(), nums.end(), [](int n) {
        return n % 2 == 0;
    });
    nums.erase(newEndIf, nums.end());

    // remove_copy: Copia una secuencia a otra secuencia, eliminando todos los elementos iguales a un valor específico.
    vector<int> removed(nums.size());
    auto newEndCopy = remove_copy(nums.begin(), nums.end(), removed.begin(), 3);
    removed.erase(newEndCopy, removed.end());

    // remove_copy_if: Copia una secuencia a otra secuencia, eliminando los elementos que cumplen con un predicado.
    vector<int> removedIf(nums.size());
    auto newEndCopyIf = remove_copy_if(nums.begin(), nums.end(), removedIf.begin(), [](int n) {
        return n % 2 == 0;
    });
    removedIf.erase(newEndCopyIf, removedIf.end());

    // unique: Elimina elementos duplicados consecutivos en una secuencia.
    auto uniqueEnd = unique(nums.begin(), nums.end());
    nums.erase(uniqueEnd, nums.end());

    // unique_copy: Copia una secuencia a otra secuencia, eliminando elementos duplicados consecutivos.
    vector<int> uniqueCopy(nums.size());
    auto uniqueEndCopy = unique_copy(nums.begin(), nums.end(), uniqueCopy.begin());
    uniqueCopy.erase(uniqueEndCopy, uniqueCopy.end());

    // reverse: Invierte el orden de los elementos en una secuencia.
    reverse(nums.begin(), nums.end());

    // reverse_copy: Copia una secuencia a otra secuencia en orden inverso.
    vector<int> reverseCopy(nums.size());
    reverse_copy(nums.begin(), nums.end(), reverseCopy.begin());

    // rotate: Rota los elementos de una secuencia hasta una posición específica.
    rotate(nums.begin(), nums.begin() + 2, nums.end());

    // rotate_copy: Copia una secuencia a otra secuencia con rotación.
    vector<int> rotateCopy(nums.size());
    rotate_copy(nums.begin(), nums.begin() + 2, nums.end(), rotateCopy.begin());

    // next_permutation: Genera la siguiente permutación de una secuencia en orden lexicográfico.
    next_permutation(nums.begin(), nums.end());

    // prev_permutation: Genera la permutación anterior de una secuencia en orden lexicográfico.
    prev_permutation(nums.begin(), nums.end());

    // Sorting operations

    // sort: Ordena los elementos de una secuencia en orden ascendente.
    sort(nums.begin(), nums.end());

    // partial_sort: Ordena los primeros k elementos de una secuencia en orden ascendente.
    partial_sort(nums.begin(), nums.begin() + 3, nums.end());

    // partial_sort_copy: Copia y ordena los primeros k elementos de una secuencia en orden ascendente.
    vector<int> partialSortCopy(3);
    partial_sort_copy(nums.begin(), nums.end(), partialSortCopy.begin(), partialSortCopy.end());

    // stable_sort: Ordena los elementos de una secuencia de manera estable (preservando el orden relativo de elementos iguales).
    stable_sort(nums.begin(), nums.end());

    // is_sorted: Verifica si los elementos de una secuencia están ordenados en orden ascendente.
    bool isSorted = is_sorted(nums.begin(), nums.end());

    // is_sorted_until: Encuentra el primer elemento no ordenado en una secuencia.
    auto sortedUntil = is_sorted_until(nums.begin(), nums.end());

    // nth_element: Reorganiza los elementos de una secuencia de manera que el n-ésimo elemento esté en su posición correcta.
    nth_element(nums.begin(), nums.begin() + 2, nums.end());

    // Binary search operations

    // binary_search: Verifica si un elemento está presente en una secuencia ordenada.
    bool foundBinary = binary_search(nums.begin(), nums.end(), 3);

    // lower_bound: Encuentra la primera posición donde un valor específico podría ser insertado en una secuencia ordenada.
    auto lowerBound = lower_bound(nums.begin(), nums.end(), 3);

    // upper_bound: Encuentra la primera posición donde un valor específico no podría ser insertado en una secuencia ordenada.
    auto upperBound = upper_bound(nums.begin(), nums.end(), 3);

    // equal_range: Encuentra un rango de elementos en una secuencia ordenada que son iguales a un valor específico.
    auto range = equal_range(nums.begin(), nums.end(), 3);

    return 0;
}
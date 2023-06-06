#include <iostream>
#include <vector>
using namespace std;

// Funcion auxiliar recursiva para realizar DFS
void DFS(int v, vector<bool>& visited, vector<vector<int>>& adjList) {
    // Marcar el vértice actual como visitado y mostrarlo
    visited[v] = true;
    cout << v << " ";

    // Recorrer todos los vértices adyacentes al vértice actual
    for (int i = 0; i < adjList[v].size(); ++i) {
        int adjVertex = adjList[v][i];
        // Si el vértice adyacente no ha sido visitado, hacer una llamada recursiva a DFSUtil
        if (!visited[adjVertex])
            DFS(adjVertex, visited, adjList);
    }
}


// Ejemplo de uso
int main() {
    int numNodos, numAristas;
    cout << "Ingrese el numero de nodos: ";
    cin >> numNodos;
    cout << "Ingrese el numero de aristas: ";
    cin >> numAristas;

    // Crear una lista de adyacencia para almacenar el grafo
    vector<vector<int>> adjList(numNodos);

    // Leer las aristas y construir el grafo
    cout << "Ingrese las aristas en formato (Nodo1 --> Nodo2):" << endl;
    for (int i = 0; i < numAristas; ++i) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    int startNodo;
    cout << "Ingrese el Nodo de inicio para DFS: ";
    cin >> startNodo;
    cout << "Recorrido DFS comenzando desde el vértice " << startNodo << ": ";
    vector<bool> visited(adjList.size(), false);
    DFS(startNodo,visited,adjList);

    return 0;
}


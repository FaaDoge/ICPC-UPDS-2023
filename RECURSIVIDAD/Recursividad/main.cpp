#include <bits/stdc++.h>

using namespace std;

int PaginasDeLibros(auto libros, int indice){
    int total=0;
    if(libros.size()==1){
        return libros[0];
        }
    if(indice==libros.size()){
    return total;
    }
    return total=libros[indice]+PaginasDeLibros(libros,indice+1);
}

int main()
{
    int l,s;
    vector<int> libros ={2,2,2,2,2};
    s=PaginasDeLibros(libros,0);
    cout<<s;
    return 0;
}

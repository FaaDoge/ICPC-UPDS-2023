#include <iostream>

using namespace std;

bool esPar(int n){
    if(n % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int num = 7;
    if(esPar(num)){
        cout << num << " es par." << endl;
    }
    else{
        cout << num << " es impar." << endl;
    }
    return 0;
}

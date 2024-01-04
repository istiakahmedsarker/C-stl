#include <iostream>
#include <cmath>
using namespace std;

int nDominos(int m,int n){
    int areaOfRactangle = m*n;
    int dominos = 2;
    return floor(areaOfRactangle/dominos);
}

int main(){ 
    int m, n;
    cin >> m >> n;
    cout << nDominos(m, n);
    return 0;
}
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main () 
{
    float altura, largura;
    
    cout << "Digite a altura do retangulo" << endl;
    cin >> altura;
    cout << "Digite a largura do retangulo" << endl;
    cin >> largura;
    cout << "Area = " << largura * altura << endl;
    cout << "Perimetro = " << largura * 2 + altura * 2 << endl;
    cout << "Diagonal = " << sqrt(pow(largura, 2) + pow(altura, 2)) << endl;
}
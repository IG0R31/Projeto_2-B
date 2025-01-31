#include <iostream>
#include "neuronioReLu.cpp"
using namespace std;

int main(){
    vector<double> pesos1= {0.2, 0.4};
    double bias1 = -1.5;
    neuronioReLu  neuronio1(pesos1, bias1);

    vector<double> entradas1= {0.3, 2.5};
    double saida1 = neuronio1.predict(entradas1);
    cout<<"Caso 1 obteve a seguinte saida: "<<saida1<< endl;


    vector<double> pesos2= {0.2, 0.4};
    double bias2 = -0.5;
    neuronioReLu  neuronio2(pesos2, bias2);

    vector<double> entradas2= {0.3, 2.5};
    double saida2 = neuronio2.predict(entradas2);
    cout<<"Caso 2 obteve a seguinte saida: "<<saida2 <<endl;

    return 0;
}
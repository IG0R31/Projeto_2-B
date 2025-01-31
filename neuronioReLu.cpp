#include <iostream>
#include <algorithm>
#include "neuronio.hpp"
using namespace std;

class neuronioReLu : public Neuronio {
    public: 
        neuronioReLu(const vector<double>& pesos, double bias) 
        : Neuronio(pesos, bias) {}

    double predict(const vector<double> entradas) const override{
        if(entradas.size() != pesos.size()){
            cout<<"O valor de entradas deve ser igual ao valor de pesos"<<endl;
        }
    double somaPonderada = 0.0;
        for(size_t i = 0; i< entradas.size();++i ){ 
            somaPonderada += entradas[i] * pesos[i];
        }
        somaPonderada +=  bias;
        return max(0.0, somaPonderada);

    }
};
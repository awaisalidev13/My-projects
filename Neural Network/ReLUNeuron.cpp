#include "ReLUNeuron.h"

ReLUNeuron::ReLUNeuron(double *inputs, double *weights, int size) : Neuron(inputs, weights, size) {}

double ReLUNeuron::activate() {
    double weightedSum = 0;
    for(int i = 0; i < numInputs; i++) {
        weightedSum += inputs[i] * weights[i];
    }

    if(weightedSum > 0)
        return weightedSum;

    return 0.0; 
}
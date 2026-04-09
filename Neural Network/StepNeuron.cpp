#include "StepNeuron.h"

StepNeuron::StepNeuron(double *inputs, double *weights, int size, double threshold) : Neuron(inputs, weights, size) {
    this->threshold = threshold;
}

double StepNeuron::activate() {
    double weightedSum = 0;
    for(int i = 0; i < numInputs; i++) {
        weightedSum += inputs[i] * weights[i];
    }

    if(weightedSum > threshold)
        return 1.00;

    return 0.0; 
}
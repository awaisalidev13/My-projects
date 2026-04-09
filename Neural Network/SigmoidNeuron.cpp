#include "SigmoidNeuron.h"
#include <cmath>

// Helper function
double sigma(double x) {
    double ans = 1 / (1 + pow(2.71828, -x));
    return ans;
}

SigmoidNeuron::SigmoidNeuron(double *inputs, double *weights, int size) : Neuron(inputs, weights, size) {}

double SigmoidNeuron::activate() {
    double weightedSum = 0;
    for(int i = 0; i < numInputs; i++) {
        weightedSum += inputs[i] * weights[i];
    }

    return sigma(weightedSum);
}
#include "Neuron.h"

Neuron::Neuron(double *inputs, double *weights, int size) {
    this->numInputs = size;
    this->inputs = new double[size];
    this->weights = new double[size];
    for (int i = 0; i < size; i++) {
        this->inputs[i] = inputs[i];
        this->weights[i] = weights[i];
    }
}

Neuron::~Neuron() {
    delete[] inputs;
    delete[] weights;
}
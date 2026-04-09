#ifndef NEURON_H
#define NEURON_H

class Neuron {
protected:
    double *inputs;
    double *weights;
    int numInputs;

public:
    Neuron(double *inputs, double *weights, int size);
    virtual double activate() = 0;
    virtual ~Neuron();
};

#endif
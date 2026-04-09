#ifndef RELUNEURON_H
#define RELUNEURON_H
#include "Neuron.h"

class ReLUNeuron : public Neuron {
public:
    ReLUNeuron(double *inputs, double *weights, int size);
    double activate() override;
};

#endif
#ifndef SIGMOIDNEURON_H
#define SIGMOIDNEURON_H
#include "Neuron.h"

class SigmoidNeuron : public Neuron {
public:
    SigmoidNeuron(double *inputs, double *weights, int size);
    double activate() override;
};

#endif
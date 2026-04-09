#ifndef STEPNEURON_H
#define STEPNEURON_H
#include "Neuron.h"

class StepNeuron : public Neuron {
private:
    double threshold;
public:
    StepNeuron(double *inputs, double *weights, int size, double threshold);
    double activate() override;
};

#endif
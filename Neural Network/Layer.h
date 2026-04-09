#ifndef LAYER_H
#define LAYER_H
#include "Neuron.h"

class Layer {
private:
    Neuron **neurons; // Array of Neuron pointers
    int capacity;
    int currentCount;

public:
    Layer(int cap);
    ~Layer();
    void addNeuron(Neuron *n);
    void processAll();
};

#endif
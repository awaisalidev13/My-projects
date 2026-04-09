#include "Layer.h"
#include <iostream>
#include <string>

using namespace std;

Layer::Layer(int cap) {
    capacity = cap;
    currentCount = 0;
    neurons = new Neuron *[capacity];
}

Layer::~Layer() {
    for (int i = 0; i < currentCount; i++) {
        delete neurons[i]; 
        neurons[i] = nullptr; 
    }
    delete[] neurons; 
    neurons = nullptr;
}

void Layer::addNeuron(Neuron *n) {
    if(currentCount < capacity) {
        neurons[currentCount] = n;
        currentCount++;
    } else {
        cout << "Layer is at full capacity. Cannot add more neurons.\n";
    }
}

void Layer::processAll() {
    cout << "--- Processing Layer ---" << endl;

    string names[] = {"Motivation Level (ReLU)", "Study Probability (Sigmoid)", "Final Decision (Step)"};
    for (int i = 0; i < currentCount; i++) {
        cout << names[i] << ": " << neurons[i]->activate() << endl;

        if(i == currentCount - 1) {
            if(neurons[i]->activate()) {
                cout << " (STUDY) " << endl;
            }
        }
    }
}
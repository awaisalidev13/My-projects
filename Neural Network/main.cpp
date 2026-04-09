#include "Neuron.h"
#include "ReLUNeuron.h"
#include "SigmoidNeuron.h"
#include "StepNeuron.h"
#include "Layer.h"

int main() {
    double state[] = {10.0, -2.0, 4.0};
    double weights[] = {0.2, 1.0, 0.5};
    int size = 3;
    double stepThreshold = 1.0;

    // Instantiate derived neurons dynamically
    Neuron * n1 = new ReLUNeuron(state, weights, size);
    Neuron * n2 = new SigmoidNeuron(state, weights, size);
    Neuron * n3 = new StepNeuron(state, weights, size, stepThreshold);

    // Create a Layer, add neurons to it
    Layer * l1 = new Layer(size);
    l1->addNeuron(n1);
    l1->addNeuron(n2);
    l1->addNeuron(n3);    

    // Call processAll()
    l1->processAll();

    // Clean up memory
    // n1, n2, and n3 are automatically deleted when l1 is destroyed
    delete l1;
    l1 = nullptr;

    return 0;
}
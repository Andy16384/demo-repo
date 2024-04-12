#include "Observer.h"
#include <iostream>

void demoObserver() {

    std::cout << "\nDemostrating usage of Observer Pattern\n";

    // Create observable
    Observable observable;

    // Create observers
    ConcreteObserver observer1("Observer 1");
    ConcreteObserver observer2("Observer 2");
    ConcreteObserver observer3("Observer 3");

    // Attach observers to observable
    observable.attach(&observer1);
    observable.attach(&observer2);
    observable.attach(&observer3);

    // Set message and notify observers
    observable.setMessage("Hello World!");
}

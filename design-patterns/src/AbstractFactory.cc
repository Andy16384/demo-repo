#include "AbstractFactory.h"

void demoAbstractFactory() {

    std::cout << "\nDemostrating usage of Abstract Factory Pattern\n";
    // Using Factory 1 to create Product A1 and Product B1
    AbstractFactory* factory1 = new ConcreteFactory_1();
    AbstractProductA* productA1 = factory1->createProductA();
    AbstractProductB* productB1 = factory1->createProductB();
    productA1->operationA();
    productB1->operationB();
    delete productA1;
    delete productB1;
    delete factory1;

    // Using Factory 2 to create Product A2 and Product B2
    AbstractFactory* factory2 = new ConcreteFactory_2();
    AbstractProductA* productA2 = factory2->createProductA();
    AbstractProductB* productB2 = factory2->createProductB();
    productA2->operationA();
    productB2->operationB();
    delete productA2;
    delete productB2;
    delete factory2;
}

#include "Factory.h"

void demoFactory() {
    
    std::cout << "\nDemostrating usage of Factory Pattern\n";
    
    // Using Factory 1 to create Product A
    Factory* factory1 = new ConcreteFactory1();
    Product* product1 = factory1->createProduct();
    product1->operation();
    delete product1;
    delete factory1;

    // Using Factory 2 to create Product B
    Factory* factory2 = new ConcreteFactory2();
    Product* product2 = factory2->createProduct();
    product2->operation();
    delete product2;
    delete factory2;
}

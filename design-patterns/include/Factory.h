#pragma once

#include <iostream>

// Abstract Product
class Product {
public:
    virtual void operation() = 0;
    virtual ~Product() {}
};

// Concrete Products
class ConcreteProductA : public Product {
public:
    void operation() override {
        std::cout << "ConcreteProductA operation\n";
    }
};

class ConcreteProductB : public Product {
public:
    void operation() override {
        std::cout << "ConcreteProductB operation\n";
    }
};

// Abstract Factory
class Factory {
public:
    virtual Product* createProduct() = 0;
    virtual ~Factory() {}
};

// Concrete Factories
class ConcreteFactory1 : public Factory {
public:
    Product* createProduct() override {
        return new ConcreteProductA();
    }
};

class ConcreteFactory2 : public Factory {
public:
    Product* createProduct() override {
        return new ConcreteProductB();
    }
};

void demoFactory();
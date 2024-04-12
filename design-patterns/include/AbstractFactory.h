#pragma once

#include <iostream>

// Abstract Products
class AbstractProductA {
public:
    virtual void operationA() = 0;
    virtual ~AbstractProductA() {}
};

class AbstractProductB {
public:
    virtual void operationB() = 0;
    virtual ~AbstractProductB() {}
};

// Concrete Products
class ProductA1 : public AbstractProductA {
public:
    void operationA() override {
        std::cout << "Product A1 operation\n";
    }
};

class ProductA2 : public AbstractProductA {
public:
    void operationA() override {
        std::cout << "Product A2 operation\n";
    }
};

class ProductB1 : public AbstractProductB {
public:
    void operationB() override {
        std::cout << "Product B1 operation\n";
    }
};

class ProductB2 : public AbstractProductB {
public:
    void operationB() override {
        std::cout << "Product B2 operation\n";
    }
};

// Abstract Factory
class AbstractFactory {
public:
    virtual AbstractProductA* createProductA() = 0;
    virtual AbstractProductB* createProductB() = 0;
    virtual ~AbstractFactory() {}
};

// Concrete Factories
class ConcreteFactory_1 : public AbstractFactory {
public:
    AbstractProductA* createProductA() override {
        return new ProductA1();
    }

    AbstractProductB* createProductB() override {
        return new ProductB1();
    }
};

class ConcreteFactory_2 : public AbstractFactory {
public:
    AbstractProductA* createProductA() override {
        return new ProductA2();
    }

    AbstractProductB* createProductB() override {
        return new ProductB2();
    }
};

void demoAbstractFactory();
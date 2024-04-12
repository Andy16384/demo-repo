#pragma once

#include <iostream>
#include <vector>

// Abstract Observer
class Observer {
public:
    virtual void update(const std::string& message) = 0;
    virtual ~Observer() {}
};

// Concrete Observer
class ConcreteObserver : public Observer {
private:
    std::string name;

public:
    ConcreteObserver(const std::string& name) : name(name) {}

    void update(const std::string& message) override {
        std::cout << name << " received message: " << message << std::endl;
    }
};

// Observable
class Observable {
private:
    std::vector<Observer*> observers;
    std::string message;

public:
    void attach(Observer* observer) {
        observers.push_back(observer);
    }

    void setMessage(const std::string& message) {
        this->message = message;
        notifyObservers();
    }

    void notifyObservers() {
        for (Observer* observer : observers) {
            observer->update(message);
        }
    }
};

void demoObserver();
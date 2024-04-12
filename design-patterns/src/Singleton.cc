#include "Singleton.h"
#include <iostream>

using namespace std;

void demoSingleton() {

    cout << "\nDemostrating usage of Singleton Pattern\n";
    Singleton &s = Singleton::getInstance();
    Singleton &s2 = Singleton::getInstance();
    cout << "setting1 addr: " << &s << endl;
    cout << "setting2 addr: " << &s2 << endl;

}
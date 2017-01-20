#include "library.h"
#include <iostream>

using namespace std;

void* load() {
    return new MyPlugin();
}

void unload(void* instance) {
    delete instance;
}

void MyPlugin::somefn() {
    cout << "MyPlugin::somefn()" << endl;
}

MyPlugin::MyPlugin() {
    cout << "MyPlugin::constructor" << endl;
}

MyPlugin::~MyPlugin() {
    cout << "MyPlugin::destructor" << endl;
}
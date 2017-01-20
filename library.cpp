#include "library.h"
#include <iostream>

using namespace std;

MyPlugin *instance;

void* load() {
    //instance = new MyPlugin();
    //return instance;
    return 0;
}

void unload() {
    //delete instance;
}

/**
void MyPlugin::somefn() {
    cout << "MyPlugin::somefn()" << endl;
}

MyPlugin::MyPlugin() {
    cout << "MyPlugin::constructor" << endl;
}

MyPlugin::~MyPlugin() {
    cout << "MyPlugin::destructor" << endl;
}
**/
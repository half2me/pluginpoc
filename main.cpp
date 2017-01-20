#include <iostream>
#include <dlfcn.h>
#include "Plugin.h"

using namespace std;

int main()
{
    void *myso = dlopen("/home/halftome/ClionProjects/untitled/cmake-build-debug/libpoc.so", RTLD_NOW | RTLD_GLOBAL);
    if (myso == nullptr) {
        cout << dlerror() << endl;
        cout << "plugin not found" << endl;
        exit(1);
    }

    auto load = (void *(*)()) dlsym(myso, "load");
    auto unload = (void *(*)()) dlsym(myso, "unload");

    if (load == nullptr || unload == nullptr) {
        cout << "plugin missing start-stop functions" << endl;
        exit(1);
    }

    (Plugin *) load();
    //plugin->somefn();
    unload();

    dlclose(myso);
    return 0;
}
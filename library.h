#ifndef UNTITLED_LIBRARY_H
#define UNTITLED_LIBRARY_H

#include "Plugin.h"

extern "C" {
void* load();
void unload();
}

class MyPlugin : public Plugin {
public:
    MyPlugin();

    virtual ~MyPlugin();

    virtual void somefn();
};

#endif
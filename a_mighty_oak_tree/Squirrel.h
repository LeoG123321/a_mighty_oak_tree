#pragma once
#include <string>
using namespace std;

class Squirrel {
private:
    string name;

public:
    Squirrel(string name) {
        this->name = name;
    }

    Squirrel() {
        return;
    }

    string get_name() {
        return this->name;
    }
};
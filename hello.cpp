#include "hello.h"

Hello::Hello() : count(0) {}

void Hello::addref() {
    count++;
}

void Hello::removeref() {
    count--;
}
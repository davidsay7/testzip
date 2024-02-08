#ifndef HELLO_H
#define HELLO_H

class Hello {
protected:
    int count;

public:
    Hello();
    void addref();
    void removeref();
};

#endif
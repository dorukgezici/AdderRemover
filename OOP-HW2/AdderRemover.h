//
//  AdderRemover.h
//  OOP-HW2
//
//  Created by Doruk Gezici on 24/04/2017.
//  Copyright © 2017 Doruk Gezici. All rights reserved.
//

#ifndef AdderRemover_h
#define AdderRemover_h

#include <iostream>
#include <string>
#include "ARTraverser.h"

class AdderRemover {
public:
    AdderRemover();
    ~AdderRemover();
    Node *head = nullptr;
    Node *tail = nullptr;
    string name = "";
    int nodeCount = 0;
    ARTraverser *traverser = nullptr;
    virtual void add(int) = 0;
    virtual void remove() = 0;
    void removeAll();
    void display();
    virtual void setTraverser() = 0;
    void traverse();
};

class FAFR : public AdderRemover {
public:
    void add(int);
    void remove();
    void setTraverser();
};

class FALR : public AdderRemover {
public:
    void add(int);
    void remove();
    void setTraverser();
};

class LAFR : public AdderRemover {
public:
    void add(int);
    void remove();
    void setTraverser();
};

class LALR : public AdderRemover {
public:
    void add(int);
    void remove();
    void setTraverser();
};

#endif /* AdderRemover_h */

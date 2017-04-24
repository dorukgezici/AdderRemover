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
    Node *head;
    Node *tail;
    string name = "";
    int nodeCount = 0;
    ARTraverser *traverser;
    virtual void add(int) = 0;
    virtual void remove() = 0;
    void removeAll();
    void display() const;
    virtual void setTraverser() = 0;
    void traverse();
};

class FAFR : public AdderRemover {
public:
    FAFR();
    void add(int);
    void remove();
    void setTraverser();
};

class FALR : public AdderRemover {
public:
    FALR();
    void add(int);
    void remove();
    void setTraverser();
};

class LAFR : public AdderRemover {
public:
    LAFR();
    void add(int);
    void remove();
    void setTraverser();
};

class LALR : public AdderRemover {
public:
    LALR();
    void add(int);
    void remove();
    void setTraverser();
};

#endif /* AdderRemover_h */

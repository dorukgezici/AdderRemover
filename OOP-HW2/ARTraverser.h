//
//  ARTraverser.h
//  OOP-HW2
//
//  Created by Doruk Gezici on 24/04/2017.
//  Copyright © 2017 Doruk Gezici. All rights reserved.
//

#ifndef ARTraverser_h
#define ARTraverser_h

#include "Node.h"

class ARTraverser {
public:
    ARTraverser();
    virtual ~ARTraverser() = 0;
    Node *current = nullptr;
    virtual bool hasNode() = 0;
    virtual Node* next() = 0;
};

class ARTF : public ARTraverser {
public:
    ~ARTF() { delete current; };
    bool hasNode();
    Node* next();
};

class ARTL : public ARTraverser {
public:
    ~ARTL() { delete current; };
    bool hasNode();
    Node* next();
};

#endif /* ARTraverser_h */

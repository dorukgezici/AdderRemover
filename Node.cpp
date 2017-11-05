//
//  Node.cpp
//  OOP-HW2
//
//  Created by Doruk Gezici on 24/04/2017.
//  Copyright © 2017 Doruk Gezici. All rights reserved.
//

#include "Node.h"

Node::Node(int value) {
    previous = nullptr;
    this->value = value;
    next = nullptr;
}

Node::~Node() {
    delete previous;
    delete next;
}

//
//  ARTraverser.cpp
//  OOP-HW2
//
//  Created by Doruk Gezici on 24/04/2017.
//  Copyright © 2017 Doruk Gezici. All rights reserved.
//

#include "ARTraverser.h"

// MARK: - ARTraverser

ARTraverser::ARTraverser() {
    current = nullptr;
}

ARTraverser::~ARTraverser() {
    delete current;
}

// MARK: - ARTF

bool ARTF::hasNode() {
    if (current != nullptr) {
        return true;
    } else return false;
}

Node* ARTF::next() {
    if (hasNode()) {
        return current->next;
    } else return nullptr;
}

// MARK: - ARTL

bool ARTL::hasNode() {
    if (current != nullptr) {
        return true;
    } else return false;
}

Node* ARTL::next() {
    if (hasNode()) {
        return current->previous;
    } else return nullptr;
}

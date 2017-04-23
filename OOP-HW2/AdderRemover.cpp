//
//  AdderRemover.cpp
//  OOP-HW2
//
//  Created by Doruk Gezici on 24/04/2017.
//  Copyright © 2017 Doruk Gezici. All rights reserved.
//

#include "AdderRemover.h"

// MARK: - AdderRemover

AdderRemover::AdderRemover() {
    head = nullptr;
    tail = nullptr;
    traverser = nullptr;
}

AdderRemover::~AdderRemover() {
    delete head;
    delete tail;
    delete traverser;
}

void AdderRemover::removeAll() {
    
}

void AdderRemover::display() {
    
}

void AdderRemover::traverse() {
    
}

// MARK: - FAFR

void FAFR::add(int value) {
    if (head == nullptr) {
        head = new Node(value);
        tail = head;
    } else {
        Node *tmp = new Node(value);
        tmp->next = head;
        head = tmp;
    }
    nodeCount++;
}

void FAFR::remove() {
    if (nodeCount == 0) {
        return;
    } else {
        if (head->next != nullptr) {
            head->next->previous = nullptr;
            head = head->next;
        } else {
            delete head;
            delete tail;
        }
        nodeCount--;
    }
}

// MARK: - FAFR

void FAFR::setTraverser() {
    traverser = new ARTF();
}

void FALR::add(int value) {
    
}

void FALR::remove() {
    
}

void FALR::setTraverser() {
    traverser = new ARTF();
}

// MARK: - LAFR

void LAFR::add(int value) {
    
}

void LAFR::remove() {
    
}

void LAFR::setTraverser() {
    traverser = new ARTL();
}

// MARK: - LALR

void LALR::add(int value) {
    
}

void LALR::remove() {
    
}

void LALR::setTraverser() {
    traverser = new ARTL();
}

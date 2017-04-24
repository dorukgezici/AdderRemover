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
    if (head != nullptr) {
        while (head->next != nullptr) {
            head->next->previous = nullptr;
            head = head->next;
            nodeCount--;
        }
        delete head;
        nodeCount = 0;
    }
}

void AdderRemover::display() const {
    cout << name << " | " << "NodeCount:" << nodeCount << endl << "------" << endl;
    if (nodeCount == 0) cout << "There is no element to print" << endl;
    else {
        Node *n = head;
        while (n != nullptr) {
            cout << n->value << endl;
            n = n->next;
        }
    }
    cout << endl;
}

void AdderRemover::traverse() {
    cout << name << " | " << "NodeCount:" << nodeCount << endl << "------" << endl;
    if (!traverser->hasNode()) cout << "There is no element to print" << endl;
    for (int i = 0; i < nodeCount; i++) {
        cout << traverser->next()->value << endl;
    }
    cout << endl;
}

// MARK: - FAFR

FAFR::FAFR() {
    name = "FAFR";
}

void FAFR::add(int value) {
    if (head == nullptr) {
        head = new Node(value);
        tail = head;
    } else {
        Node *tmp = new Node(value);
        head->previous = tmp;
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

void FAFR::setTraverser() {
    traverser = new ARTF();
    traverser->current = head;
}

// MARK: - FALR

FALR::FALR() {
    name = "FALR";
}

void FALR::add(int value) {
    if (head == nullptr) {
        head = new Node(value);
        tail = head;
    } else {
        Node *tmp = new Node(value);
        head->previous = tmp;
        tmp->next = head;
        head = tmp;
    }
    nodeCount++;
}

void FALR::remove() {
    if (nodeCount == 0) {
        return;
    } else {
        if (tail->previous != nullptr) {
            tail->previous->next = nullptr;
            tail = tail->previous;
        } else {
            delete head;
            delete tail;
        }
        nodeCount--;
    }
}

void FALR::setTraverser() {
    traverser = new ARTF();
    traverser->current = head;
}

// MARK: - LAFR

LAFR::LAFR() {
    name = "LAFR";
}

void LAFR::add(int value) {
    if (head == nullptr) {
        head = new Node(value);
        tail = head;
    } else {
        Node *tmp = new Node(value);
        tail->next = tmp;
        tmp->previous = tail;
        tail = tmp;
    }
    nodeCount++;
}

void LAFR::remove() {
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

void LAFR::setTraverser() {
    traverser = new ARTL();
    traverser->current = tail;
}

// MARK: - LALR

LALR::LALR() {
    name = "LALR";
}

void LALR::add(int value) {
    if (head == nullptr) {
        head = new Node(value);
        tail = head;
    } else {
        Node *tmp = new Node(value);
        tail->next = tmp;
        tmp->previous = tail;
        tail = tmp;
    }
    nodeCount++;
}

void LALR::remove() {
    if (nodeCount == 0) {
        return;
    } else {
        if (tail->previous != nullptr) {
            tail->previous->next = nullptr;
            tail = tail->previous;
        } else {
            delete head;
            delete tail;
        }
        nodeCount--;
    }
}

void LALR::setTraverser() {
    traverser = new ARTL();
    traverser->current = tail;
}

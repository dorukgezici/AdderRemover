//
//  Node.h
//  OOP-HW2
//
//  Created by Doruk Gezici on 24/04/2017.
//  Copyright © 2017 Doruk Gezici. All rights reserved.
//

#ifndef Node_h
#define Node_h

using namespace std;

class Node {
public:
    Node(int);
    ~Node();
    Node *previous;
    int value;
    Node *next;
};

#endif /* Node_h */

//
//  main.cpp
//  OOP-HW2
//
//  Created by Doruk Gezici on 24/04/2017.
//  Copyright © 2017 Doruk Gezici. All rights reserved.
//
//  C++ 11 is used, "nullptr" is used. Compiled with g++ on MacOS, Xcode.
//

#include "AdderRemover.h"

int main() {
    
    AdderRemover *myList[4];
    
    myList[0] = new FAFR();
    myList[1] = new LALR();
    myList[2] = new FALR();
    myList[3] = new LAFR();
    
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i<5; i++)
            myList[j]->add(i);
    }
    
    for (int j = 0; j < 4; j++) {
        myList[j]->remove();
        myList[j]->display();
        myList[j]->removeAll();
        myList[j]->display();
    }
    
    cout << endl << "Test case for ARTraverser" << endl << endl;
    for (int j = 0; j < 4; j++) {
    	for (int i = 0; i<5; i++)
    		myList[j]->add(i);
    	myList[j]->remove();
    }
    
    for (int j = 0; j < 4; j++) {
    	myList[j]->setTraverser();
    	myList[j]->traverse();
    }
    
    return 0;
}

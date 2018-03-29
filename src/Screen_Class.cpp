//============================================================================
// Name        : Screen_Class.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Screen.h"

using namespace cave;

int main(int argc, char *argv[])
    {
    Screen screen;

    if (screen.init() == false) //
	{
	cout << "Error initialising SDL!" << endl;
	}

    while (true)	//game loop
	{	//update particles, draw particles, check for messages/events
	if (screen.processEvents() == false)
	    {
	    break; //break out of loop!
	    }
	}
    screen.close();
    return 0;
    }

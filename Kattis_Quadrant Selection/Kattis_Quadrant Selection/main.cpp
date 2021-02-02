//
//  main.cpp
//  Kattis_Quadrant Selection
//
//  Created by Eduardo Meraz on 6/26/20.
//  Copyright © 2020 Eduardo Meraz. All rights reserved.
//
/*
 Description:
    This program is used to solve a common problem in math. What we have to do is determine which quadrant a given point lies in. There are four quadrants, numbered from 1 to 4, as shown in the diagram below. For example, the point 𝐴, which is at coordinates (12,5) lies in quadrant 1 since both its 𝑥 and 𝑦 values are positive, and point 𝐵 lies in quadrant 2 since its 𝑥 value is negative and its 𝑦 value is positive.

 Your job is to take a point and determine the quadrant it is in. You can assume that neither of the two coordinates will be 0.
 
 Allogithm:
 */

#include <iostream>
using namespace std;

int main() {
    // enter the x coordinate
    int x;
    int y;
    
    cin >> x;
    cin >> y;
    
    if (x < 0) && (y < 0){
        cout << "1";
    }
    return 0;
}

//
//  Track.cpp
//  accountability_reader
//
//  Created by Evan Jensen on 12/23/20.
//  Copyright © 2020 Evan Jensen. All rights reserved.
//

#include "Track.h"
//----------------------------------------------------------------------------
//operator<< overload
 ostream& operator<< (ostream& output, const Track& trackObj) {
    trackObj.print(output);
    return output;
 }

//----------------------------------------------------------------------------
//constuctor
Track::Track() {
}

//----------------------------------------------------------------------------
//destructor
Track::~Track() {
}

//----------------------------------------------------------------------------
//hash method
//returns int
int Track::hash( char c) const {
   return c - 'A';
}


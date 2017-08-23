//
// Created by Ethan Pollard on 23/08/2017.
//

#ifndef _LEARNER_H
#define _LEARNER_H

#include <iostream>
#include <fstream>
#include "voice.h"

using namespace std;

class Learner {

public:
    void respond(string phase);             // Used to get, or teach a response
    void say(string phase);                 // Used to textually and audibly communicate a phrase

    Voice voice;                        // The Learners voice that will audibly communicate a response

};

#endif




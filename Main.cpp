//
// Created by Ethan Pollard on 23/08/2017.
//

#include <iostream>
#include "learner.h"

using namespace std;

main(){
    Learner AI;     // Creates a learner object

    /*
        The following is the main loop. It will continue until the application is closed .
        The user enters their inputs, and then the learner will respond.
    */

    for(;;){
        cout << "\nYOU: ";      // User prompt
        string phrase;
        getline(cin, phrase);       // Using getline for multi word input, then store in phrase

        cout << "COMPUTER: ";
        AI.respond(phrase);     // Passes the user input to the learner and see if he responds
    }
}

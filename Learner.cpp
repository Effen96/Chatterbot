//
// Created by Ethan Pollard on 23/08/2017.
//

#include <learner.h>
#include <iostream>
#include <fstream>

using namespace std;



void Learner::respond(string phrase){
    fstream memory;
    memory.open("memory/memory.txt", ios::in);              // Open the memory for file input

    // Search through the file until the end is reached
    while( !memory.eof() ){             // While not at the end of file
        string identifier;
        getline(memory,identifier);     // Get next phase

        if(identifier == phrase){       // Is it the phrase we are looking for?
            string response;
            getline(memory,response);   // If so get the response
            Voice.say(response);        // Textually and Audibly outputs the response
            return;  // Leaves the function
        }
    }

    memory.close();
    memory.open("memory/memory.txt", ios::out | ios::app);
    memory << phrase << endl;

    Voice.say(phrase);
    string userResponse;
    cout << "YOU: ";
    getline(cin, userResponse);
    memory << userResponse << endl;
    memory.close();

}

void Learner::say(string phrase){
    this->voice.say(phrase);
}
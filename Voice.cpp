//
// Created by Ethan Pollard on 23/08/2017.
//

#include "Voice.h"
#include <iostream>
#include <windows.h>

using namespace std;

/*
    The following function textually  and audibly communicates a phrase.
    The open source eSpeak speech sythesizer  is used to  create the audio message.
    If the eSpeak exe is not located in the directory, no audible message will be heard.
 */

void Voice::say(string phrase){
    string command = "espeak \ "" + phrase + "\"";      // Concat the phrase to the command
    const char* charCommand = command.c_str();      // Conver to a const char*
    cout << phrase  << endl;        // Textually output phrase
    system(charCommand);        // Send the command to cmd to execute eSpeak with the phrase argument

}
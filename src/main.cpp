#//==================================================================================================
// Authors : Milou de Zwaan(2629070), Shatrunjay Palkar(3669734)
// Group : SDfR-PPD 14
// License : LGPL open source license
//
// Brief : 
//==================================================================================================

#include <iostream>
#include <string>
#include "List.h"

//Function to fill list with string
void filllist(std::string s, List<char>& l){

    //Iterate over each element of the string
    for(char i: s)
    {
        //Insert values at the back of list
        l.insertAtBack(i);
    }
}

int main() {
    
    List<char> list_1; //Creating empty list of type char
    List<char> list_2; //Creating empty list of type char

    //Fill lists 1 and 2 with strings
    filllist("singlylinkedlist", list_1);
    filllist("abcdefg", list_2);

    //Display list_1 and list_2
    list_1.print();
    list_2.print();

    List<char> list_3; //Creating empty list of type char
    List<char> list_4; //Creating empty list of type char

    //Fill lists 3 and 4 with strings
    filllist("hijklmnop", list_3);
    filllist("qrstuvw", list_4);

    //Concatenate list_3 to list_2 and empty list_3
    list_2.concatenate(list_3);
    //Concatenate list_4 to list_2 and empty list_4
    list_2.concatenate(list_4);

    //Display list_2
    list_2.print();
    
    return 0;
}


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

void filllist(std::string s, List<char> *l){
    for(char i: s)
    {
        l->insertAtBack(i);
    }

}


int main() {
    
    List<char> list_1;
    List<char> list_2;

    filllist("singlylinkedlist", &list_1);
    filllist("abcdefg", &list_2);

    list_1.print();
    list_2.print();

    return 0;
}


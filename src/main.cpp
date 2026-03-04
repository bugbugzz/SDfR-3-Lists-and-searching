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

template<typename NODETYPE>

void filllist(std::string s, List<NODETYPE>& l){
    for(NODETYPE i: s)
    {
        l.insertAtBack(i);
    }

}


int main() {
    
    List<char> list_1;
    List<char> list_2;

    filllist("singlylinkedlist", list_1);
    filllist("abcdefg", list_2);

    list_1.print();
    list_2.print();

    List<char> list_3;
    List<char> list_4;

    filllist("hijklmnop", list_3);
    filllist("qrstuvw", list_4);

    list_2.concatenate(list_3);
    list_2.concatenate(list_4);

    list_2.print();
    list_3.print();
    list_4.print();


    return 0;
}

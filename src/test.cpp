//==================================================================================================
// Authors : Milou de Zwaan(2629070), Shatrunjay Palkar(3669734)
// Group : SDfR-PPD 14
// License : LGPL open source license
//==================================================================================================

#include <iostream>
#include <string>
#include <cassert> // Required for test assertions
#include "List.h"

// Function to fill list with string
void filllist(std::string s, List<char>& l){
    for(char i: s) {
        l.insertAtBack(i);
    }
}

// ================= 3 TEST CASES =================

void testInsertionAndRemoval() {
    List<char> list;
    list.insertAtBack('a');
    list.insertAtFront('b'); // list is now: b, a
    
    char val;
    assert(list.removeFromFront(val) == true);
    assert(val == 'b'); 
    assert(list.removeFromBack(val) == true);
    assert(val == 'a'); 
    
    assert(list.isEmpty() == true);
    std::cout << "PASS: testInsertionAndRemoval\n";
}

void testConcatenateNormal() {
    List<char> l1, l2;
    filllist("ab", l1);
    filllist("cd", l2);

    l1.concatenate(l2);

    assert(l2.isEmpty() == true); // l2 must be empty now

    char val;
    l1.removeFromFront(val); assert(val == 'a');
    l1.removeFromFront(val); assert(val == 'b');
    l1.removeFromFront(val); assert(val == 'c');
    l1.removeFromFront(val); assert(val == 'd');
    
    std::cout << "PASS: testConcatenateNormal\n";
}

void testConcatenateToEmpty() {
    List<char> emptyList, l2;
    filllist("xyz", l2);

    // Concatenate a full list to an EMPTY list
    emptyList.concatenate(l2);

    assert(l2.isEmpty() == true);
    assert(emptyList.isEmpty() == false);
    
    char val;
    emptyList.removeFromFront(val); 
    assert(val == 'x');
    
    std::cout << "PASS: testConcatenateToEmpty\n";
}

void runTests() {
    std::cout << "--- Running 3 Tests ---\n";
    testInsertionAndRemoval();
    testConcatenateNormal();
    testConcatenateToEmpty();
    std::cout << "--- All tests passed successfully! ---\n\n";
}

// ================= MAIN FUNCTION =================

int main() {
    // 1. Run the tests
    runTests();

    // 2. Your original assignment logic
    List<char> list_1, list_2, list_3, list_4;

    filllist("singlylinkedlist", list_1);
    filllist("abcdefg", list_2);
    
    list_1.print();
    list_2.print();

    filllist("hijklmnop", list_3);
    filllist("qrstuvw", list_4);

    list_2.concatenate(list_3);
    list_2.concatenate(list_4);

    list_2.print();
    
    return 0;
}
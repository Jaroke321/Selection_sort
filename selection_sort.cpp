#include <iostream>
#include "helper_functions.h"


int main (){


    //define vector for testing
    std::vector<int> test_list;
    //fill list
    for(int i = 100; i > 0; i--){
        test_list.push_back(i);
    }

    print_list(test_list);

    std::vector<int> new_list;
    new_list = selection_sort(test_list);

    //call print list function
    print_list(new_list);

    return 0;
}

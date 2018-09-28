#ifndef HELPER_FUNCTIONS_H_INCLUDED
#define HELPER_FUNCTIONS_H_INCLUDED



#endif // HELPER_FUNCTIONS_H_INCLUDED
#include <iostream>
#include <vector>

//first define the find_smallest function to be used in
// selection_sort function later

//takes in list and returns the index of the smallest value
int find_smallest(std::vector<int> incoming_list);

//takes in a list or vector and returns a new sorted list or vector
std::vector<int> selection_sort(std::vector<int> incoming_list);

//takes in a list and prints it
void print_list(std::vector<int> sorted_vector);



//define both functions
int find_smallest(std::vector<int> incoming_list){

    int smallest_index, smallest_value;
    smallest_index = 0;
    smallest_value = incoming_list[0];

    //cycle through list and find smallest index
    for(int i = 1; i < incoming_list.size(); i++){

        if(incoming_list[i] < smallest_value){
            smallest_index = i;
            smallest_value = incoming_list[i];
        }
    }

    //returns the smallest index
    return smallest_index;
}


std::vector<int> selection_sort(std::vector<int> incoming_list){

    //define a new vector to store values in
    std::vector<int> new_list;
    int num = incoming_list.size();

    //cycle through the incoming list
    for(int i = 0; i < num; i++){
            //find the smallest value in incoming_list
            int smallest = find_smallest(incoming_list);
            //append smallest value to new list and remove from old list
            new_list.push_back(incoming_list[smallest]);

            incoming_list.erase(incoming_list.begin() + smallest);
    }

    return new_list;
}

void print_list(std::vector<int> sorted_vector){

    for(int i = 0; i < sorted_vector.size(); i++){
        std::cout << sorted_vector[i] << "\n";
    }
}

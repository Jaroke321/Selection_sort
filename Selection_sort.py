
# coding: utf-8

# In[5]:


##This notebooks purpose is to demonstrate the use of a selection sort algorithm
## the first step will be to define a function that finds and returns
## the smallest value in a list
## the second function will use this first function to sort in ascending order

# First function find_smallest(), finds the smallest value in a provided list and returns its index
def find_smallest(a_list):
    #get first value in list
    smallest = a_list[0]
    smallest_index = 0
    
    #go through each value in list to find the smallest
    for i in range(1, len(a_list)):
        #check to see if new value is smaller than smallest
        if(a_list[i] < smallest):
            smallest = a_list[i]
            smallest_index = i
    return smallest_index


# In[6]:


## Next function takes in a list and sorts it
## first creates new empty list
## then finds smallest in old list and appends it to new list

## create new function selection_sort()
def selection_sort(old_list):
    # new list
    new_list = []
    for i in range(len(old_list)):
        ## use find_smallest to get smallest value and append to new list
        smallest_index = find_smallest(old_list)
        new_list.append(old_list.pop(smallest_index))
        
    return new_list


# In[7]:


test = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
sorted_test = selection_sort(test)
print(sorted_test)


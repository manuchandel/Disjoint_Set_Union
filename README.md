## Disjoint_Set_Union

Disjoint set union is a data structure most commonly used to find cycles in the graph. <br>
Disjoint_Set_Union_CPP contains implementation of this data structure<br>

* Method __add()__ adds an element initially to its own set
* Method __find()__ returns the set of the element passed in its arguement. It makes use of path compression technique while searching for elements set.
* Method __merge()__ merges the two sets containing the elements passed.
* Methos __getSets()__ returns the number of disjoint sets.

### Mapping

* Disjoint Sets are maintained through mapping. __map__ and __unordered_map__ data structures can be used for mapping purpose.
* __key__ of mapping denotes the element in set and __value__ is the pointer to its parent element.
* If __key__ and __value__ are same than it denotes the set number.
* Different sets are identified by their apex parent. Initially every element is its apex parent.


### Working

* Default mapping used is __unordered_map__ which requires c++11 and above. To compile include -std=c++11 flag.
* Mapping can be changed into __map__ if one requires sorted values of sets. This can be done by editing header file.
    * Change the macro value of mapping to __unordered_map__.
    * include __map__ directive instead of __unordered_map__.

### LICENSE
    
##### [MIT LICENSE](https://github.com/manuchandel/Disjoint_Set_Union/blob/master/LICENSE.md)

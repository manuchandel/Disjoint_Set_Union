#ifndef Disjoint_Set_Union_H
#define Disjoint_Set_Union_H
#include <unordered_map>
#define mapping unordered_map
template <class T>
class Disjoint_Set_Union{
    public:
        Disjoint_Set_Union();   //constructor
        void add(T);            // adds new element to the set
        int getSets();          
        bool isPresent(T);
        T find(T);
        void merge(T,T);
        

    private:
        int sets;
        std::mapping<T,T> mymap;
};

#endif

#ifndef Disjoint_Set_Union_H
#define Disjoint_Set_Union_H
#define mapping unordered_map

template <class T>
class Disjoint_Set_Union{

    public:
        Disjoint_Set_Union();   //constructor
        void add(T);            // adds new element to the set
        int getSets();          // returns present number of disjoint sets
        bool isPresent(T);      // returns whether an element x is present in any set or not
        T find(T);              // finds set of an element x
        void merge(T,T);        // merges two sets
        

    private:
        int sets;
        std::mapping<T,T> mymap;
};

#endif

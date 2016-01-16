#ifndef Disjoint_Set_Union_CPP
#define Disjoint_Set_Union_CPP
#include "Disjoint_Set_Union.h"

template <class T> Disjoint_Set_Union<T> :: Disjoint_Set_Union(){
    this->sets=0;
    this->mymap.clear();
}
/* add x to the set*/
template <class T> void Disjoint_Set_Union<T> :: add(T x){

     if(!(this->isPresent(x))){  // x is present
         this->mymap[x]=x; // x indicates x is parent of itself
         this->sets+=1;
     }
                      
}

/* returns number of disjoint sets*/
template <class T> int Disjoint_Set_Union<T> :: getSets(){

    return this->sets;

}
/* returns true if x is present */
template <class T> bool Disjoint_Set_Union<T> :: isPresent(T x){

    if(this->mymap.find(x)==this->mymap.end())
        return false;
    return true;

}

/* find the set of x*/
template <class T> T Disjoint_Set_Union<T> :: find(T x){

    if(!(this->isPresent(x)))
        this->add(x);
    
    T key=x; 
    T val=this->mymap[key];

    while(val!=key){    // finding the parent
        key=val;
        val=this->mymap[key];
    }

    T parent=key;

    key=x;
    val=this->mymap[key];

    /* Path Compression */
    while(val!=key){

        this->mymap[key]=parent;
        key=val;
        val=this->mymap[key];
    }
    return parent;
 }


/* union set x and set y*/
template <class T> void Disjoint_Set_Union<T> :: merge(T x, T y){

    T parent_x= this->find(x);
    T parent_y= this->find(y);

    if(parent_x != parent_y){
        this->mymap[parent_x]=parent_y;
        sets-=1;
    }

}

#endif

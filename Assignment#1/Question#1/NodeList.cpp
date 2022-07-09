#include "NodeList.h"
#include <iostream>
using namespace std;
NodeList::NodeList(){
    items = new Node [LIST_SIZE];
    cout<<"A NodeList object has been created\n";
}
NodeList::NodeList(const NodeList &n){
items = n.items;
numItems = n.numItems;
}
NodeList::~NodeList(){
    cout<<"A NodeList object has been destroyed\n";
}
void NodeList::print(){
    for(int i =0; i<=numItems;i++){
        cout<<items->get_id()<<items->get_data();

    }
}
bool NodeList::check_node(Node n){

}
//getter
size_t NodeList::get_LIST_SIZE(){
    return LIST_SIZE;
}
Node NodeList::get_items(){
    return *items;
}
size_t NodeList::get_numItems(){
    return numItems;
}
//setters
/*
void NodeList::set_LIST_SIZE(size_t n){
    
}
*/
void NodeList::set_items(Node n){
  *items = n;  
}
void NodeList::set_numItems(size_t n){
   numItems = n; 
}
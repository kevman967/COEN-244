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
        cout <<"Node: "<<items[i].get_id()<<" Data: "<<items[i].get_data()<<endl;
    }
}
bool NodeList::check_Node(int id1,int data1){
    for(int i=0;i<numItems;i++){
        if(items[i].get_id()==id1)
            return true;
        if(items[i].get_data()==data1)
            return true;
    }
    return false;
}
//getter
size_t NodeList::get_LIST_SIZE(){
    return LIST_SIZE;
}

size_t NodeList::get_numItems(){
    return numItems;
}
void NodeList::add_Node(Node& a){
    if(numItems<LIST_SIZE){
        items[numItems]=a;
        numItems++;
        cout<<"Node "<<a.get_id()<<" has been added to Nodelist\n";
    }
}
void NodeList::delete_Node(int node1){
    for (int i=0;i<numItems;i++){
        if(items[i].get_id()==node1){
            for(int j=i;j<numItems-1;j++){
                items[j] = items[j+1];
            }
            numItems--;
            cout<<"Node "<<node1<<" has been deleted from NodeList\n";
            return;
        }
    }
    cout<<"Node "<<node1<<" cannot be found\n";
}
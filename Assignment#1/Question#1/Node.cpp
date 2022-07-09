#include "Node.h"
#include <iostream>
using namespace std;
Node::Node(){

    cout<<"A new Node has been created"<<endl; //Verifying that the object has been created
}
int Node::get_data(){
    return data;
}
int Node::get_id(){
    return id;
}
void Node::set_data(int data1){
    data = data1;
}
void Node::set_id(int id1){
    id = id1;
}
Node Node::clone(){
    Node v;
    int id1 = ++id; //The identity of the clone is going to be +1 from the original node so that their identities are not the same
    v.data = this->data; //clones the data from the original to the clone
    v.id = id1; 
    return v;
}
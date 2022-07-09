#include "Node.h"
#include <iostream>
using namespace std;
Node::Node(){

    cout<<"A new Node has been created"<<endl;
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
    int id1 = ++id;
    v.data = this->data;
    v.id = id1; 
    return v;
}
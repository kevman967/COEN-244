
#include "Node.cpp"
#include "Node.h"
int main(){
    Node v;
    v.set_id(5);
    v.set_data(66);
    cout << "The unique identity for this node is "<<v.get_id()<<endl<<"The data stored in this node is "<<v.get_data()<<endl;
    cout<<"Now testing the clone function:"<<endl;
    Node c = v.clone();
    cout<<"The unique identity for this clone is "<<c.get_id()<<endl<<"The data stored in the clone of the Node is "<< c.get_data();
    return 0;
}
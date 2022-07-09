
#include "Node.cpp"
#include "Node.h"
int main(){
    Node v;
    v.set_id(5); //test for unique identity setter
    v.set_data(66); // test for the data value setter
    cout << "The unique identity for this node is "<<v.get_id()<<endl<<"The data stored in this node is "<<v.get_data()<<endl;//test gettter for unique identity and data value
    cout<<"Now testing the clone function:"<<endl;
    Node c = v.clone(); //clone node v to node c
    cout<<"The unique identity for this clone is "<<c.get_id()<<endl<<"The data stored in the clone of the Node is "<< c.get_data();//test to see if the clone function works
    return 0;
}
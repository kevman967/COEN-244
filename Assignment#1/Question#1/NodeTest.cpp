
//#include "Node.cpp"
#include "NodeList.cpp"
int main(){
    Node v;//created Node v
    NodeList one; //created NodeList one
    v.set_id(5); //test for unique identity setter
    v.set_data(66); // test for the data value setter
    cout << "The unique identity for this node is "<<v.get_id()<<endl<<"The data stored in this node is "<<v.get_data()<<endl;//test gettter for unique identity and data value
    cout<<"Now testing the clone function:"<<endl;
    Node f = v.clone(); //clone node v to node c
    cout<<"The unique identity for this clone is "<<f.get_id()<<endl<<"The data stored in the clone of the Node is "<< f.get_data()<<endl;//test to see if the clone function works
    //Now testing the NodeList class
    //creating various Nodes and adding them to NodeList one
    Node a(1,10);
    one.add_Node(a);
    Node b(2,20);
    one.add_Node(b);
    Node c(3,30);
    one.add_Node(c);
    Node d(4,40);
    one.add_Node(d);
    one.print(); //testing print function
    cout<<"Testing check function:\n";
    cout<<"Does Node with id 3 exist in NodeList?(1 if true 0 if false): "<<one.check_Node(3,0)<<endl;//testing check function with ID
    cout<<"Does Node with data value 100 exist?(1 if true 0 if false): "<<one.check_Node(0,100)<<endl;//testing check function with data value
    cout<<"The max amount of Nodes that can be allocated to NodeList is "<<one.get_LIST_SIZE()<<endl;//testing LIST_SIZE getter
    cout<<"There is currently "<<one.get_numItems()<<" nodes in NodeList\n";//testing numItems getter
    one.delete_Node(4);//testing delete_Node function
    return 0;
}
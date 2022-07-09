#ifndef NODE_H_
#define NODE_H_
class Node{
    private:
    int data; //data value
    int id; //unique identity
    public:
    Node(); //constructor
    int get_data(); //getter for data value
    int get_id(); // getter for unique identity
    void set_data(int); // setter for data value
    void set_id(int); // setter for unique identity
    Node clone(); //clone function
};
#endif
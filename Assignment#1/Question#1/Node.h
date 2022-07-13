#ifndef NODE_H
#define NODE_H
class Node{
    private:
    int data; //data value
    int id; //unique identity
    public:
    Node(); //constructor
    Node(int, int);
    int get_data(); //getter for data value
    int get_id(); // getter for unique identity
    void set_data(int); // setter for data value
    void set_id(int); // setter for unique identity
    Node clone(); //clone function
};
#endif

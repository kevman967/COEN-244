

#include "Node.cpp"
class NodeList{
 private: 
 static const size_t LIST_SIZE = 500; // the maximum items in the list
 Node *items; // items will point to the dynamically allocated array
 size_t numItems; // the number of items currently in the list
 public: 
 NodeList();//constructor
 NodeList(const NodeList&);//copy function
 ~NodeList();//destructor
 void print();//print all nodes
 bool check_Node(int,int);//check if node is in NodeList based on id or data value
 size_t get_LIST_SIZE();//getter for max size of NodeList
 size_t get_numItems();//getter for number of Nodes in the Nodelist
 void add_Node(Node&);//add node to NodeList
 void delete_Node(int);//remove Node from NodeList
};

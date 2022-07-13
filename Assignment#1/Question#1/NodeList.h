

#include "Node.cpp"
class NodeList{
 private: 
 static const size_t LIST_SIZE = 500; // the maximum items in the list
 Node *items; // items will point to the dynamically allocated array
 size_t numItems; // the number of items currently in the list
 public: 
 NodeList();
 NodeList(const NodeList&);
 ~NodeList();
 void print();
 bool check_Node(int,int);
 size_t get_LIST_SIZE();
 size_t get_numItems();
 void add_Node(Node&);
 void delete_Node(int);
};

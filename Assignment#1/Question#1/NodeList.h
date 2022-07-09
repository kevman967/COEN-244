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
 bool check_node(Node);
 //getter
 size_t get_LIST_SIZE();
 Node get_items();
 size_t get_numItems();
 //setter
// void set_LIST_SIZE(size_t);
 void set_items(Node);
 void set_numItems(size_t);

};
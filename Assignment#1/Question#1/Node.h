#ifndef NODE_H_
#define NODE_H_
class Node{
    private:
    int data;
    int id;
    public:
    Node();
    int get_data();
    int get_id();
    void set_data(int);
    void set_id(int);
    Node clone();
};
#endif
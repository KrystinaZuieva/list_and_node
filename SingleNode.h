#ifndef LIST_AND_NODE_SINGLENODE_H
#define LIST_AND_NODE_SINGLENODE_H

#include <memory>

template <typename T>
struct SingleNode {
    T data;
    std::unique_ptr<SingleNode> next;
    SingleNode(const T& newData) : data{newData}, next{nullptr} {};
};


#endif
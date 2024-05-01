#ifndef LIST_AND_NODE_DOUBLENODE_H
#define LIST_AND_NODE_DOUBLENODE_H

#include <memory>

template <typename T>
struct DoubleNode {
    T data;
    std::shared_ptr<DoubleNode> next;
    std::weak_ptr<DoubleNode> prev;
    DoubleNode(const T& value) : data{value} {};
};

#endif
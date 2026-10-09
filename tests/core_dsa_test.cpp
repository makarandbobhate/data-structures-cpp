#include <cassert>
#include <vector>

#include "core_dsa.hpp"

int main() {
    dsa::SinglyLinkedList<int> list;
    list.push_back(2);
    list.push_front(1);
    list.push_back(3);
    assert((list.to_vector() == std::vector<int>{1, 2, 3}));
    assert(list.pop_front() == 1);
    assert((list.to_vector() == std::vector<int>{2, 3}));

    dsa::Stack<int> stack;
    stack.push(10);
    stack.push(20);
    assert(stack.top() == 20);
    assert(stack.pop() == 20);
    assert(stack.pop() == 10);

    dsa::Queue<int> queue;
    queue.enqueue(4);
    queue.enqueue(5);
    assert(queue.front() == 4);
    assert(queue.dequeue() == 4);
    assert(queue.dequeue() == 5);

    dsa::BinarySearchTree<int> tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(4);
    assert(tree.contains(7));
    assert(!tree.contains(6));
    assert((tree.inorder() == std::vector<int>{3, 4, 5, 7}));

    std::vector<int> a{5, 1, 4, 2, 8};
    dsa::bubble_sort(a);
    assert((a == std::vector<int>{1, 2, 4, 5, 8}));

    std::vector<int> b{9, 3, 8, 1, 3, 2};
    dsa::quick_sort(b);
    assert((b == std::vector<int>{1, 2, 3, 3, 8, 9}));

    assert(dsa::binary_search(b, 8) == 4);
    assert(dsa::binary_search(b, 10) == -1);

    return 0;
}

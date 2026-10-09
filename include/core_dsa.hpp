#pragma once

#include <cstddef>
#include <deque>
#include <stdexcept>
#include <utility>
#include <vector>

namespace dsa {

template <typename T>
class SinglyLinkedList {
private:
    struct Node {
        T value;
        Node* next;
        explicit Node(const T& v) : value(v), next(nullptr) {}
    };

    Node* head_ = nullptr;
    Node* tail_ = nullptr;
    std::size_t size_ = 0;

public:
    SinglyLinkedList() = default;

    SinglyLinkedList(const SinglyLinkedList&) = delete;
    SinglyLinkedList& operator=(const SinglyLinkedList&) = delete;

    ~SinglyLinkedList() {
        while (head_ != nullptr) {
            Node* next = head_->next;
            delete head_;
            head_ = next;
        }
    }

    bool empty() const { return size_ == 0; }
    std::size_t size() const { return size_; }

    void push_front(const T& value) {
        Node* node = new Node(value);
        node->next = head_;
        head_ = node;
        if (tail_ == nullptr) {
            tail_ = node;
        }
        ++size_;
    }

    void push_back(const T& value) {
        Node* node = new Node(value);
        if (tail_ == nullptr) {
            head_ = tail_ = node;
        } else {
            tail_->next = node;
            tail_ = node;
        }
        ++size_;
    }

    T pop_front() {
        if (head_ == nullptr) {
            throw std::out_of_range("Cannot pop from an empty list");
        }

        Node* node = head_;
        T value = node->value;
        head_ = node->next;
        if (head_ == nullptr) {
            tail_ = nullptr;
        }

        delete node;
        --size_;
        return value;
    }

    std::vector<T> to_vector() const {
        std::vector<T> values;
        values.reserve(size_);

        for (Node* current = head_; current != nullptr; current = current->next) {
            values.push_back(current->value);
        }

        return values;
    }
};

template <typename T>
class Stack {
private:
    std::vector<T> data_;

public:
    bool empty() const { return data_.empty(); }
    std::size_t size() const { return data_.size(); }

    void push(const T& value) { data_.push_back(value); }

    T pop() {
        if (data_.empty()) {
            throw std::out_of_range("Cannot pop from an empty stack");
        }

        T value = data_.back();
        data_.pop_back();
        return value;
    }

    const T& top() const {
        if (data_.empty()) {
            throw std::out_of_range("Cannot read top from an empty stack");
        }
        return data_.back();
    }
};

template <typename T>
class Queue {
private:
    std::deque<T> data_;

public:
    bool empty() const { return data_.empty(); }
    std::size_t size() const { return data_.size(); }

    void enqueue(const T& value) { data_.push_back(value); }

    T dequeue() {
        if (data_.empty()) {
            throw std::out_of_range("Cannot dequeue from an empty queue");
        }

        T value = data_.front();
        data_.pop_front();
        return value;
    }

    const T& front() const {
        if (data_.empty()) {
            throw std::out_of_range("Cannot read front from an empty queue");
        }
        return data_.front();
    }
};

template <typename T>
class BinarySearchTree {
private:
    struct Node {
        T value;
        Node* left;
        Node* right;
        explicit Node(const T& v) : value(v), left(nullptr), right(nullptr) {}
    };

    Node* root_ = nullptr;

    static void destroy(Node* node) {
        if (node == nullptr) {
            return;
        }
        destroy(node->left);
        destroy(node->right);
        delete node;
    }

    static Node* insert(Node* node, const T& value) {
        if (node == nullptr) {
            return new Node(value);
        }

        if (value < node->value) {
            node->left = insert(node->left, value);
        } else if (value > node->value) {
            node->right = insert(node->right, value);
        }

        return node;
    }

    static bool contains(Node* node, const T& value) {
        if (node == nullptr) {
            return false;
        }

        if (value == node->value) {
            return true;
        }

        if (value < node->value) {
            return contains(node->left, value);
        }

        return contains(node->right, value);
    }

    static void inorder(Node* node, std::vector<T>& values) {
        if (node == nullptr) {
            return;
        }

        inorder(node->left, values);
        values.push_back(node->value);
        inorder(node->right, values);
    }

public:
    BinarySearchTree() = default;
    BinarySearchTree(const BinarySearchTree&) = delete;
    BinarySearchTree& operator=(const BinarySearchTree&) = delete;

    ~BinarySearchTree() { destroy(root_); }

    void insert(const T& value) { root_ = insert(root_, value); }
    bool contains(const T& value) const { return contains(root_, value); }

    std::vector<T> inorder() const {
        std::vector<T> values;
        inorder(root_, values);
        return values;
    }
};

template <typename T>
void bubble_sort(std::vector<T>& values) {
    if (values.empty()) {
        return;
    }

    for (std::size_t i = 0; i < values.size(); ++i) {
        bool swapped = false;
        for (std::size_t j = 0; j + 1 < values.size() - i; ++j) {
            if (values[j + 1] < values[j]) {
                std::swap(values[j], values[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

template <typename T>
int binary_search(const std::vector<T>& values, const T& target) {
    std::size_t left = 0;
    std::size_t right = values.size();

    while (left < right) {
        const std::size_t mid = left + (right - left) / 2;
        if (values[mid] == target) {
            return static_cast<int>(mid);
        }

        if (values[mid] < target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return -1;
}

template <typename T>
void quick_sort(std::vector<T>& values) {
    if (values.size() < 2) {
        return;
    }

    const T pivot = values[values.size() / 2];
    std::vector<T> less;
    std::vector<T> equal;
    std::vector<T> greater;

    less.reserve(values.size());
    equal.reserve(values.size());
    greater.reserve(values.size());

    for (const T& value : values) {
        if (value < pivot) {
            less.push_back(value);
        } else if (pivot < value) {
            greater.push_back(value);
        } else {
            equal.push_back(value);
        }
    }

    quick_sort(less);
    quick_sort(greater);

    values.clear();
    values.insert(values.end(), less.begin(), less.end());
    values.insert(values.end(), equal.begin(), equal.end());
    values.insert(values.end(), greater.begin(), greater.end());
}

} // namespace dsa

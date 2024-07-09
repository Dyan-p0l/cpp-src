#include <iostream>
#include <queue>
#include <stack>

void reverseQueue(std::queue<int> &q) {
    std::stack<int> tempStack;

    // Push elements from the queue to a stack
    while (!q.empty()) {
        tempStack.push(q.front());
        q.pop();
    }

    // Pop elements from the stack and enqueue them back to the queue
    while (!tempStack.empty()) {
        q.push(tempStack.top());
        tempStack.pop();
    }
}

void printQueue(const std::queue<int> &q) {
    std::queue<int> tempQueue = q;

    while (!tempQueue.empty()) {
        std::cout << tempQueue.front() << " ";
        tempQueue.pop();
    }

    std::cout << std::endl;
}

int main() {
    std::queue<int> myQueue;

    const int max_size = 6;

    int val;

    std::cout << "Enter "<< max_size << " elements of the queue: ";

    for (int i = 0; i < max_size; i++) {
        std::cin >> val;
        myQueue.push(val);
    }

    std::cout << "Original Queue: ";
    printQueue(myQueue);

    reverseQueue(myQueue);

    std::cout << "Reversed Queue: ";
    printQueue(myQueue);

    return 0;
}

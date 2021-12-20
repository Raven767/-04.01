#include <iostream>
#include "Queue.h"
int main(void) {
    int a[] = { 3, 4, 9, 7, 8, 2, 0, 1, 6 };
    PriorityQueue<hcmp<int>> pq1;

    for (int i : a)
        pq1.push1(i);

    while (!pq1.empty()) {
        std::cout << pq1.top() << ' ';
        pq1.pop();
    }
    std::cout << std::endl;

    PriorityQueue<lcmp<int>> pq2(std::cbegin(a), std::cend(a));

    while (!pq2.empty()) {
        std::cout << pq2.top() << ' ';
        pq2.pop();
    }
    return 0;
};
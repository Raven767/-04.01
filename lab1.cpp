#include <iostream>
#include <queue>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int num;
    //queue <int> PriorityQueue;
    //priority_queue<int> PriorityQueue;
    const auto data = {8,5,6};
    priority_queue <int, std::vector<int>, std::greater<int>> PriorityQueue;// создание упорядочной очереди
    for (int n : data)
        PriorityQueue.push(n);
    cout << "дополните очередь целых чисел " << "\n";
    for (int i = 0; i < 16; i++) {
        if (PriorityQueue.size() < 6) {
            cin >> num;
            PriorityQueue.push(num);
        }
        else
            break;
    }
    cout << "Самый первый элемент в очереди: " << PriorityQueue.top();
    cout <<"\n";
    int min = PriorityQueue.top();
    cout << "очередь ";
    while (!PriorityQueue.empty()) {
        cout << PriorityQueue.top() << ' ';
        if (min > PriorityQueue.top()) 
            min = PriorityQueue.top();
        PriorityQueue.pop();
    }
    cout << "\n" << "минимальный эелмент "<< min;
}




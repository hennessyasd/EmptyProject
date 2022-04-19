#pragma once
class Queue{
private:
	int size;
	int* queue;

public:

	void enqueue();
	int dequeue(); // del and ret first item
	int head(); // ret first item
	int size();
	int get();
	void clear() {
		delete[]
	}
	bool empty() {
		return size == 0;
	};
};


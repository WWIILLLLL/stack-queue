#pragma once

#include <list>
using namespace std;

template <class T>
class Queue {
private:
	list<T> items_;
public:
	void Push(T& item) {
		items_.push_back(item);
	}

	T& Front() {
		return items_.front();
	}

	void Pop() {
		items_.remove(items_.front());
	}

	bool IsEmpty() {
		return (items_.size() == 0);
	}
};
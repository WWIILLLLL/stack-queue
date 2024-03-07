#pragma once

#include <vector>
#include <string>
using namespace std;


template <class T>
class Stack {
private:
	vector<T> items_;

public:
	void Pop() {
		items_.pop_back();
	}

	bool IsEmpty() {
		return (items_.size() == 0);
	}

	T& Top() {
		return items_.back();
	}

	void Push(T& item) {
		items_.push_back(item);
	}
};
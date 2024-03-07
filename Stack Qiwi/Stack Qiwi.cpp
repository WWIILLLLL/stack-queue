// Stack Qiwi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Stack.hpp"
#include "Queue.hpp"

using namespace std;

int main()
{
    /*string one = "blah";
    string two = "bleh";
    string three = "hmm";

    Stack<string> stack;
    stack.Push(one);
    stack.Push(two);
    stack.Push(three);

    string input = "";
    getline(cin, input);
    while (input != "q") {
        stack.Push(input);
        getline(cin, input);
    }

    while (!stack.IsEmpty()) {
        cout << stack.Top() << endl;
        stack.Pop();
    }*/

    Stack<int> stack;
    Queue<int> queue;

    string input = "";
    int number = 0;

    getline(cin, input);
    number = stoi(input);
    
    while (number != -1) {
        stack.Push(number);
        queue.Push(number);

        getline(cin, input);
        number = stoi(input);
    }

    while (!stack.IsEmpty()) {
        cout << stack.Top() << ", " << queue.Front() << endl;
        stack.Pop();
        queue.Pop();
    }
}

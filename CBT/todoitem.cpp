// todoitem.cpp
#include <iostream>
#include <iomanip>
#include "todoitem.h"
using namespace std;

ToDoItem::ToDoItem() {
    name = "not specified";
    dueDate = 0.00;
    dueTime = 0;
    description = "N/A";
    status = "N/A";
    timeEstimate = 0;
}

ToDoItem::ToDoItem(string n, string d, double t, string desc, string s, int est) {
    name = n;
    dueDate = d;
    dueTime = t;
    description = desc;
    status = s;
    timeEstimate = est;
}

void ToDoItem::print() {
    cout << "\n" << name << "\nDue - " << dueDate << " : " << dueTime << "\nDesc - " << description << "\nStatus -  " << status << "\nTime Estimate - " << timeEstimate << "\n";
}
// todoitem.cpp
#include <iostream>
#include <iomanip>
#include "todoitem.h"
using namespace std;

ToDoItem::ToDoItem() {
    name = "not specified";
    dueDate = "0";
    dueTime = "0";
    description = "N/A";
}

ToDoItem::ToDoItem(string n, string d, string t, string desc) {
    name = n;
    dueDate = d;
    dueTime = t;
    description = desc;
}

void ToDoItem::print() {
    cout << "\n" << name << "\nDue - " << dueDate << " : " << dueTime << "\nDesc - " << description << "\n";
}

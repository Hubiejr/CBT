#ifndef TODOITEM_H
#define TODOITEM_H

#include <string>
#include <iostream>

using namespace std;

class ToDoItem { 

private:
string name;
string dueDate;
string dueTime;
string description;


public:
    // *** I don't understand what this is ***
    // ToDoItem(const string& name, const string& dueDate, const double& dueTime, const string& description, const string& status, const int& timeEstimate)
    //     : name(name), dueDate(dueDate), dueTime(dueTime), description(description), status(status), timeEstimate(timeEstimate) {}

    // Constructors
    ToDoItem();
    ToDoItem(string, string, string, string, string, int);

    // Getters
    string getName() const { return name; }
    string getDueDate() const { return dueDate; }
    string getDueTime() const { return dueTime; }
    string getDescription() const { return description; }

    // Setters
    void setName(const string& newName) { name = newName; }
    void setDueDate(const string& newDueDate) { dueDate = newDueDate; }
    void setDueTime(const double& newDueTime) { dueTime = newDueTime; }
    void setDescription(const string& newDescription) { description = newDescription; }

    // Other
    void print();

};

#endif // TODOLIST_H

#ifndef TODOITEM_H
#define TODOITEM_H

#include <string>
#include <iostream>

using namespace std;

class ToDoItem { 

private:
string name;
string dueDate;
double dueTime;
string description;
string status;
int timeEstimate; // we can have the user input the amount of time in by minutes, then convert to hours


public:
    // *** I don't understand what this is ***
    // ToDoItem(const string& name, const string& dueDate, const double& dueTime, const string& description, const string& status, const int& timeEstimate)
    //     : name(name), dueDate(dueDate), dueTime(dueTime), description(description), status(status), timeEstimate(timeEstimate) {}

    // Constructors
    ToDoItem();
    ToDoItem(string, string, double, string, string, int);

    // Getters
    string getName() const { return name; }
    string getDueDate() const { return dueDate; }
    double getDueTime() const { return dueTime; }
    string getDescription() const { return description; }
    string getStatus() const { return status; }
    int getTimeEstimate() const { return timeEstimate; }

    // Setters
    void setName(const string& newName) { name = newName; }
    void setDueDate(const string& newDueDate) { dueDate = newDueDate; }
    void setDueTime(const double& newDueTime) { dueTime = newDueTime; }
    void setDescription(const string& newDescription) { description = newDescription; }
    void setStatus(const string& newStatus) { status = newStatus; }
    void setTimeEstimate(const int& newTimeEstimate) { timeEstimate = newTimeEstimate; }

    // Other
    void print();

};

#endif // TODOLIST_H
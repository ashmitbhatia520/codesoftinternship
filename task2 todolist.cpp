#include <iostream>
#include <vector>
#include <string>
using namespace std;
class ToDoList {
private:
    vector<string> tasks;
public:
    void addTask(const string& task) {
        tasks.push_back(task);
        cout << "Task added: " << task << endl;
    }

    void viewTasks() const {
        if (tasks.empty()) {
            cout << "No tasks to show." << endl;
            return;
        }

        cout << "To-Do List:" << endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }

    void deleteTask(int index) {
        if (index < 1 || index > tasks.size()) {
            cout << "Invalid task number." << endl;
            return;
        }

        cout << "Task deleted: " << tasks[index - 1] << endl;
        tasks.erase(tasks.begin() + index - 1);
    }
};

void showMenu() {
    cout << "\nTo-Do List Manager\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Delete Task\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    ToDoList todoList;
    int choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter the task: ";
                cin.ignore();
                string task;
                getline(cin, task);
                todoList.addTask(task);
                break;
            }
            case 2:
                todoList.viewTasks();
                break;
            case 3: {
                cout << "Enter the task number to delete: ";
                int taskNumber;
                cin >> taskNumber;
                todoList.deleteTask(taskNumber);
                break;
            }
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> tasks;
    int choice;

    do {
        cout << "\N WELCOME TO TO-DO-LIST MANAGER \n";
        cout << "1. To add your task\n";
        cout << "2. To View your Tasks\n";
        cout << "3. To Delete your  Task\n";
        cout << "4.  For Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {

        case 1: {
            string task;
            cout << "Enter the Task: ";
            getline(cin, task);
            tasks.push_back(task);
            cout << "Task Addition successful!\n";
            break;
        }

        case 2: {
            if (tasks.empty()) {
                cout << "No Tasks Available at this point.\n";
            } else {
                cout << "\n------ YOUR TASKS ------\n";
                for (int i = 0; i < tasks.size(); i++) {
                    cout << i + 1 << ". " << tasks[i] << endl;
                }
            }
            break;
        }

        case 3: {
            if (tasks.empty()) {
                cout << "No Tasks to Delete.\n";
            } else {
                int taskNo;
                cout << "\n------ TASK LIST ------\n";
                for (int i = 0; i < tasks.size(); i++) {
                    cout << i + 1 << ". " << tasks[i] << endl;
                }

                cout << "Enter Task Number to Delete: ";
                cin >> taskNo;

                if (taskNo >= 1 && taskNo <= tasks.size()) {
                    tasks.erase(tasks.begin() + taskNo - 1);
                    cout << "Task Deleted Successfully!\n";
                } else {
                    cout << "Invalid Task Number!\n";
                }
            }
            break;
        }

        case 4:
            cout << "\nThank you for using To-Do List Manager!\n";
            break;

        default:
            cout << "Invalid Choice! Please Try Again.\n";
        }

    } while (choice != 4);

    return 0;
}
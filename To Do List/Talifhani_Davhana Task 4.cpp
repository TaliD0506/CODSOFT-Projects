#include<iostream>
#include <string>
#include <vector>

using namespace std;

struct Task {
	string Description;
	bool Completed;

};

void viewTasks(const vector<Task>& tasks) {
	if (tasks.empty()) {
		cout << "No tasks to display" << endl;
	}
	else {
		cout << "----------------" << endl;
		cout << "   To Do List   " << endl;
		cout << "----------------" << endl;
		for (size_t i = 0; i < tasks.size(); ++i) {
			cout << " Task " << i + 1 << " : " << tasks[i].Description << " [";
			cout << (tasks[i].Completed ? "Completed" : "In Progress ") << "]" << endl;
		
		}
	}
}

	void addTask(vector<Task>&tasks) {
		string taskDescription;
		cout << "Enter task: ";
		cin.ignore();
		getline(cin, taskDescription);
		tasks.push_back({ taskDescription, false });
		cout << "Task added!!!" << endl;
	}

	void completedTask(vector<Task>& tasks) {
		if (tasks.empty()) {
			cout << "No tasks to complete" << endl;
			return;
		}

		size_t taskNumber;
		cout << "Enter task number to complete: ";
		cin >> taskNumber;

		if (taskNumber == 0 || taskNumber > tasks.size()) {
			cout << "Invalid task number" << endl;
		}
		else {
			tasks[taskNumber - 1].Completed = true;
			cout << "Task completed!!!" << endl;
		}

	}
		void removeTask(vector<Task>&tasks) {
			if (tasks.empty()) {
				cout << "No tasks to remove!" << endl;
				return;
			}
			size_t taskNumber;
			cout << "Enter task number to remove: ";
			cin >> taskNumber;
			if (taskNumber == 0 || taskNumber > tasks.size()) {
				cout << "Invalid task number" << endl;
			}
			else {
				tasks.erase(tasks.begin() + taskNumber - 1);
				cout << "Task removed!!!" << endl;
			}
		}

		int main() {
			vector<Task> tasks;
			char choice;
			do {
				cout << "V. View Tasks" << endl;
				cout << "A. Add Task" << endl;
				cout << "C. Complete Task" << endl;
				cout << "R. Remove Task" << endl;
				cout << "E. Exit" << endl;
				cout << "Enter choice: ";
				cin >> choice;
				switch (choice) {
				case 'V':
					viewTasks(tasks);
					break;
				case 'A':
					addTask(tasks);
					break;
				case 'C':
					completedTask(tasks);
					break;
				case 'R':
					removeTask(tasks);
					break;
				case 'E':
					cout << "Exiting To Do List!!!" << endl;
					break;
				default:
					cout << "INVALID CHOICE. Type Correct Choice" << endl;
				}
			} while (choice != 'E');

			return 0;
		}
#include <iostream>
#include <vector>
using namespace std;
void displayTasks(const vector<string> &tasks)
{
    if (tasks.empty())
    {
        cout << "No tasks in the list.\n";
    }
    else
    {
        cout << "To Do List!" << endl;

        for (size_t i = 0; i < tasks.size(); i++)
        {
            cout << i + 1 << " . " << tasks[i] << endl;
        }
    }
}

int main()
{
    vector<string> tasks;
    int choice;
    string task;
    do
    {
        cout << "\n 1.Add Task\n 2.View Task \n 3. Removing\n 4.Exit\n Enter Your Choice:";
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
            case 1:
            cout << "Enter Task:";
            getline(cin, task);
            tasks.push_back(task);
            cout << "Task Added!";
            break;
            case 2:
            // cout << "";
            displayTasks(tasks);
            break;
            case 3:
            if(tasks.empty()){
                cout<<"no task to remove";
            }
            else{
                displayTasks(tasks);
                int taskNumber=0;
            cout<<"Enter a task that you want to remove:";
            cin>>taskNumber;
            cin.ignore();
            if(taskNumber>0 && taskNumber<=tasks.size()){
                tasks.erase(tasks.begin()+(taskNumber-1));
                cout<<"Task Removed!";
            }
            else{
                cout<<"Invalid TaskNumber!";
            }

            
        }
        break;

        case 4:
            cout << "Exiting... Bye !";

            break;

        default:
            cout << "Invalid Choice";
            break;
        }
    } while (choice != 4);

    return 0;
}
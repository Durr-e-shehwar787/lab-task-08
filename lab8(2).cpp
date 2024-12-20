#include <iostream>
using namespace std;
int main()
 {
    const int entryFee = 5; 
    const int snackCost = 3;  
    const int maxStudents = 15;

    int numStudents;
    cout << "How many students will attend the game night? (Maximum 15): ";
    cin >> numStudents;

    
    if (numStudents > maxStudents) {
        cout << "Error: Not more students allowed." << endl;
        return 1; 

 
    string studentNames[maxStudents];

    
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter name for student " << (i + 1) << ": ";
        cin >> ws; 
        getline(cin, studentNames[i]);  
    }


    cout << "\nUser names for the event:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "User " << (i + 1) << ": " << studentNames[i] << endl;
    }

  
    int totalCostPerStudent = entryFee + snackCost;
    int totalCost = totalCostPerStudent * numStudents;

  
    for (int i = 0; i < numStudents; ++i) {
        cout << studentNames[i] << " will pay a total of $" << totalCostPerStudent << "." << endl;
    }

  
    cout << "\nTotal cost for all students: $" << totalCost << endl;

    return 0;  
}
}
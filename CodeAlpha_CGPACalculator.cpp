#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    int n;
    cout << "===== CGPA CALCULATOR =====\n";

    cout << "Enter number of courses: ";
    cin >> n;

    double totalCredits = 0;
    double totalPoints = 0;

    string courseName;
    char grade;
    double credits;
    double gradePoint;

    for (int i = 1; i <= n; i++) {

        cout << "\nCourse " << i << endl;

        cout << "Enter course name: ";
        cin >> courseName;

        cout << "Enter grade (A/B/C/D/F): ";
        cin >> grade;

        cout << "Enter credit hours: ";
        cin >> credits;
        if (grade == 'A' || grade == 'a')
            gradePoint = 4.0;
        else if (grade == 'B' || grade == 'b')
            gradePoint = 3.0;
        else if (grade == 'C' || grade == 'c')
            gradePoint = 2.0;
        else if (grade == 'D' || grade == 'd')
            gradePoint = 1.0;
        else if (grade == 'F' || grade == 'f')
            gradePoint = 0.0;
        else {
            cout << "Invalid grade!\n";
            i--;
            continue;
        }

        totalCredits += credits;
        totalPoints += gradePoint * credits;
    }

    double cgpa = totalPoints / totalCredits;

    cout << "\n============================\n";
    cout << "Total Credits : " << totalCredits << endl;
    cout << "Total Points  : " << totalPoints << endl;

    cout << fixed << setprecision(2);
    cout << "Final CGPA    : " << cgpa << endl;

    cout << "============================\n";

    return 0;
}

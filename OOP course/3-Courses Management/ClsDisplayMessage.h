#pragma once
#include <iostream>
using namespace std;
class ClsDisplayMessage
{
public:
  static void DisplayMainMenu()
  {
    // system("cls"); // clear screen(needs debugging)(it works outside VS code)
    cout << "Students                   1\n";
    cout << "Courses                    2\n";
    cout << "exit                       3...\n";
  }

  static void DisplayStudentMenu()
  {
    // system("cls");
    cout << "Display all Students       1\n";
    cout << "Add student                2\n";
    cout << "Edit student               3\n";
    cout << "Delete student             4\n";
    cout << "Enroll student to a course 5\n"; // Enroll function
    cout << "Search for a student       6\n"; // Search by studentId
    cout << "exit                       7...\n";
  }

  static void DisplayCourseMenu()
  {
    // system("cls");
    cout << "Display all Courses        1\n";
    cout << "Add Course                 2\n";
    cout << "Edit Course                3\n";
    cout << "Delete Course              4\n";
    cout << "Search for a course        5\n"; // Seach by courseId
    cout << "exit                       6...\n";
  }

  static void DisplayMessage(string message)
  {
    cout << message << "\n";
  }
  static void WriteLine()
  {
    cout << "----------------------------------\n";
  }
};
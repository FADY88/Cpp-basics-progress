#pragma once
#include <iostream>
#include "ClsDisplayMessage.h"
using namespace std;
struct Course_Grade
{
  int CourseId = 0;
  float Grade = 0;
};
class ClsStudent
{
private:
#pragma region Variables
  int Id = 0;
  string Name = "";
  Course_Grade Course_grade[100];
#pragma endregion

#pragma region Methods
  void UpdateArrayIndexes(int startIndex, ClsStudent Students[100])
  {
    for (int i = startIndex + 1; i < 100; i++)
    {
      if (Students[i].Name == "")
      {
        ClsStudent emptyStudent;
        Students[i - 1] = emptyStudent;
        break;
      }
      Students[i - 1] = Students[i];
    }
  }

#pragma endregion
public:
#pragma region Get and Set
  int GetId()
  {
    return Id;
  }
  void SetId(int id)
  {
    Id = id;
  }

  string GetName()
  {
    return Name;
  }
  void SetName(string name)
  {
    Name = name;
  }

  Course_Grade GetCourse_grade(int i)
  {
    return Course_grade[i];
  }

  void SetCourse_grade(int courseId, float courseGrade)
  {
    for (int i = 0; i < 200; i++)
    {
      if (Course_grade[i].CourseId == 0)
      {
        Course_grade[i].CourseId = courseId;
        Course_grade[i].Grade = courseGrade;
        break;
      }
    }
  }
#pragma endregion

#pragma region Business Logic
  int FindIndex(int id, ClsStudent Students[100])
  {
    for (int i = 0; i < 100; i++)
    {
      if (id == Students[i].Id)
        return i;
      if (Students[i].Name == "")
        break;
    }
    return -1;
  }

  void Add(string name, ClsStudent Students[100])
  {
    int newId = 1;
    for (int i = 0; i < 100; i++)
    {
      if (Students[i].Name == "")
      {
        if (i != 0)
          newId = Students[i - 1].Id + 1;
        Students[i].Name = name;
        Students[i].Id = newId;
        return;
      }
    }
  }

  void Edit(int id, string name, ClsStudent Students[100])
  {
    int index = FindIndex(id, Students);
    if (index != -1)
    {
      Students[index].Name = name;
    }
  }

  void Delete(int id, ClsStudent Students[100])
  {
    int index = FindIndex(id, Students);
    if (index != -1)
    {
      ClsStudent emptyStudent;
      Students[index] = emptyStudent;
      UpdateArrayIndexes(index, Students);
    }
  }

  void DisplayStudents(ClsStudent Students[100])
  {
    ClsDisplayMessage::WriteLine();
    for (int i = 0; i < 100; i++)
    {
      if (Students[i].Name == "")
        break;

      ClsDisplayMessage::DisplayMessage("Student Id: " + to_string(Students[i].Id) + " Student name: " + Students[i].Name);
    }
    ClsDisplayMessage::DisplayMessage("Students Ended");
    ClsDisplayMessage::WriteLine();
  }
#pragma endregion
};
#include "Questionary.h"
#include <iostream>

using namespace std;

Questionary::Questionary(int size)
{
  num_questions = size;
  students_answers = new char[num_questions];
  correct_answers = new char[num_questions];
}

Questionary::Questionary(const Questionary &obj)
{
  num_questions = obj.num_questions;
  students_answers = new char[num_questions];
  correct_answers = new char[num_questions];

  for(int index=0; index<num_questions; index++)
  {
    students_answers[index] = obj.students_answers[index];
    correct_answers[index] = obj.correct_answers[index];
  } 

}

Questionary::~Questionary()
{
  delete[] students_answers;
  delete[] correct_answers;
  students_answers = nullptr;
  correct_answers = nullptr;
}

void Questionary::set_number_of_questions(int num_q)
{
    num_questions = num_q;
}

void Questionary::set_correct_answers()
{
  cout<<"Set the correct answer: "<<endl;
  for(int index=0;index< num_questions; index++)
  {
    cout<<"write the correct answer for question "<< index+1<<": ";
    cin >> correct_answers[index];
  }

}

void Questionary::set_students_answers()
{
    cout<<"Set the student answer: "<<endl;
  for(int index=0;index< num_questions; index++)
  {
    cout<<"write the correct answer for question "<< index+1<<": ";
    cin >> students_answers[index];
  }
}

int Questionary::get_number_of_questions()
{
  return num_questions;
}

void Questionary::print_correct_answers()
{
  for(int index=0;index<num_questions;index++)
  {
    cout<<"\nquestion# "<<index+1<<": "<<correct_answers[index];
  }
}

void Questionary::print_student_answers()
{
  for(int index=0;index<num_questions;index++)
  {
    cout<<"\nquestion# "<<index+1<<": "<<students_answers[index];
  }
}


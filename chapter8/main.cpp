#include <iostream>
#include "Questionary.h"

using namespace std;

int main()
{
    int num_quest =3;

    Questionary Exam1(num_quest);
    Exam1.set_correct_answers();
    Exam1.set_students_answers();
 
    cout<<"\nCorrect answer for Exam1"<<endl; 
    Exam1.print_correct_answers();
    cout<<"\nStudent answer for Exam1"<<endl;
    Exam1.print_student_answers();


    // cout<<"\nShallow Copy\n"<<endl;
    // Questionary Exam2;

    // Exam2 = Exam1;          //shallow copy
 
    // cout<<"\nExam2: "<<endl;
    // Exam2.set_correct_answers();
    // Exam2.set_students_answers();

    // cout<<"\nCorrect answer for Exam1"<<endl; 
    // Exam1.print_correct_answers();
    // cout<<"\nStudent answer for Exam1"<<endl;
    // Exam1.print_student_answers(); 

    cout<<"\nDeep copy\n";

    Questionary Exam2(Exam1);
    cout<<"\nExam2: "<<endl;
    Exam2.set_correct_answers();
    Exam2.set_students_answers();


    cout<<"\nCorrect answer for Exam1"<<endl; 
    Exam1.print_correct_answers();
    cout<<"\nStudent answer for Exam1"<<endl;
    Exam1.print_student_answers(); 
}
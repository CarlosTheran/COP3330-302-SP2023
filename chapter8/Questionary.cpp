#include "Questionary.h"

Questionary::Questionary(int size)
{
  num_questions = size;
  students_answers = new char[num_questions];
  correct_answers = new char[num_questions];
}
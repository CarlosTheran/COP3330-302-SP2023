class Questionary
{
    private:
        int num_questions;
        char *correct_answers;
        char *students_answers;

    public:
       Questionary(){};
       Questionary(int num_q);
       ~Questionary();
       Questionary(const Questionary &obj);
       void set_number_of_questions();
       void set_correct_answers();
       void set_students_answers();
       int get_number_of_questions();
       void print_correct_answers();
       void print_student_answers(); 

};
class Bed
{
    private:
        int num_bed;
        int *length;
        int *width;

    public:
        Bed(){};
        Bed(int size);
        ~Bed()
        {
           delete[] length;
           delete[] width;
           length = nullptr;
           width = nullptr; 
        }
        void price();
        void print_info();
        void set_bed(int size);
};
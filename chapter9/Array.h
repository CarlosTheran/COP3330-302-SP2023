class Array
{
    private:
      double *ptr;
      int arraySize;


    public:
     Array();
     ~Array();
     Array(const int size, const double values[]);
     void setValues(double values[]);
     void set_arraySize(int size);
     void print();
     Array& operator=(const Array &obj);
};

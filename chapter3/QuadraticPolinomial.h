class QuadraticPolinomial
{
   private:
    double a;
    double b;
    double c;
    
   public:
    QuadraticPolinomial(){};
    QuadraticPolinomial(double a, double b, double c);
    ~QuadraticPolinomial(){};
    void general_formula();
    void vertex();
    void evaluation(double x_values[], double y_values[],int leng);
    void set_a(double value);
    void set_b(double value);
    void set_c(double value);
    double get_a();
    double get_b();
    double get_c();
};
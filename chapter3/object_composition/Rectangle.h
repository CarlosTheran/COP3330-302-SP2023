class Rectangle
{
   private:
        double length;
        double width;
   
   public:
        Rectangle(){};
        void set_length(double l);
        void set_width(double w);
        double get_length();
        double get_width();
        double area();
        double perimeter();
};
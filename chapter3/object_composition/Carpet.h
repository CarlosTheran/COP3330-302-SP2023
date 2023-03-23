#include "Rectangle.h"

class Carpet
{
    private:
       double price_per_Sqfeet;
       Rectangle dimension;

    public:
      Carpet(){};
      void set_price_perSqfeet(double p);
      void set_dimension(double l, double w);
      double get_price_perSqfeet();
      Rectangle get_dimension();
      double compute_total_price();
};
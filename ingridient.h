#ifndef ingridient_h
#define ingridient_h
#include"calculation.h"
using namespace std;

namespace example
{
    class ingridient:public calculation
    {
        private:
            float water, milk, coffee;
        
        public:
            float cost;

            ingridient(float a, float b, float c, float d)    //constructor
            {
                water=a;   milk=b;  coffee=c;   cost=d;
            }
            void coffee_cost();     // function to select mode of payment
            void remaning_amount();     //to calculate remaining
    };
}
#endif
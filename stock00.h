#ifndef STOCK00_h_
#define STOCK00_H_
#include <string>

class Stock
{
    private:
        std::string company;
        long shares;
        double share_val;
        double total_val;
        void set_tot() {total_val = shares * share_val;}
    public:
        void acquire(const std::string &co, long n, double pr);
        void buy(long num, double pr);
        void sell(long num, double pr);
        void update(double pr);
        void show();
};

#endif
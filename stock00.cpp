#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string &co, long n, double pr)
{
    company = co;
    if (n<0)
    {
        std::cout << "Number of shares can't be negative;"
                  << company << " shares set to 0." << std::endl;
    }
    else 
        shares = n;
    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double pr)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative."
                  << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = pr;
        set_tot;
    }
}

void Stock::sell(long num, double pr)
{
    using std::cout;
    if (num < 0)
    {
        std::cout << "Number of shares can't be negative;"
                  << company << " shares set to 0." << std::endl;
    }
    else 
    {
        shares -= num;
        share_val = pr;
        set_tot();
    }
}

void Stock::update(double pr)
{
    share_val = pr;
    set_tot();
}

void Stock::show()
{   
    using std::endl;
    std::cout << "Company: " << company << endl
              << "Shares: " << shares << endl
              << "Shares Price: " << share_val << endl
              << "Total Worth: " << total_val << endl;
}
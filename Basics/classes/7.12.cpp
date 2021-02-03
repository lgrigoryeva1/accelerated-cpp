#include <iostream>

using std::string;
using std::cout;

struct Sales_data {
    Sales_data() = default;
    Sales_data(const string &s): bookNo(s) {}
    Sales_data(const string &s, unsigned n, double p):
                    bookNo(s), units_sold(n), revenue(p*n) {}
    Sales_data::Sales_data(std::istream &is)
    {
        read(is, *this);
    }
    string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::ostream &print(std::ostream&, const Sales_data&)
{

}

std::ostream &read(std::istream&, const Sales_data&)
{
    
}

Sales_data::Sales_data(std::istream &is)
{
    read(is, *this);
}

double Sales_data::avg_price() const {
    if (units_sold)
        return revenue/units_sold;
    else
        return 0;
}

int main(){
    Sales_data obj1; 
    Sales_data obj2("0-201-78345-X");
    Sales_data obj3("0-201-78345-X", 3, 10);
    Sales_data obj4(std::cin);


    return 0;
}

#include <iostream>

using std::string;
using std::cout;

struct Sales_data {
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

double Sales_data::avg_price() const {
    if (units_sold)
        return revenue/units_sold;
    else
        return 0;
}

int main(){
    //Sales_data add(const Sales_data&, const Sales_data&);
    //std::ostream &print(std::ostream&, const Sales_data&);
    //std::istream &read(std::istream&, Sales_data&);

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

struct Sales_data {
    Sales_data() = default;
    // MacOS 合法
    Sales_data(const std::string &s = "123"): bookNo(s) {};
    Sales_data(std::istream &s = std::cin);

    std::string isbn() const { return bookNo; };
    Sales_data &combine(const Sales_data &data);
    double avg_price() const;

    std::string bookNo;
    unsigned units_sold;
    double revenue;
};

Sales_data::Sales_data(std::istream &s) {
    
    s >> bookNo >> units_sold >> revenue;
}

Sales_data &Sales_data::combine(const Sales_data &data)
{
    if( this->bookNo == data.bookNo )
    {
        this->units_sold += data.units_sold;
        this->revenue += data.revenue;
    }
    return *this;
}

int main(int argc, char **argv)
{
    Sales_data firstItem();
    Sales_data last("9-999-99999-9");
}
#include <iostream>
#include <string>
#include "sales_data.h"

int main(){

    Sales_data data1, data2;
    double price = 0; // price per book, used to calculate total revenue

    std::cout << "Enter data for sales data 1" << std::endl;
    std::cin >> data1.book_no >> data1.units_sold >> price;

    // calculate total revenue from price and units_sold 
    data1.revenue = data1.units_sold * price;


    std::cout << "Enter data for sales data 2" << std::endl;
    std::cin >> data2.book_no >> data2.units_sold >> price;

    // calculate total revenue from price and units_sold 
    data2.revenue = data2.units_sold * price;

    if (data1.book_no == data2.book_no){
        unsigned total_count = data1.units_sold + data2.units_sold;
        double total_revenue = data1.revenue + data2.revenue;

        // print: ISBN, total sold, total revenue, average price per book
        std::cout << "===================" << std::endl;
        std::cout << data1.book_no << " " << total_count << " " << total_revenue << " ";
        if (total_count != 0)
            std::cout << total_revenue / total_count << std::endl;
        else
            std::cout << "(no sales)" << std::endl;
        return 0;	// indicate success
    } 
    else {
        // transactions weren’t for the same ISBN
        std::cerr << "Data must refer to the same ISBN" << std::endl;
        return -1;	// indicate failure
    }

    return 0;
}
order.cpp
This file contains code with a class object set to do the following things:
  -Set up the format for chic fil a orders
  -Produces objects(if any) into the code
  -Saves the format in an array that is logged 30 times for a limit (limit of orders placed)
  -Puts the orders into a file that can be saved every time the code is ran

This is subject to change

// Program that takes Chick-Fil-A orders, saves the text in the output and then stores them into a file
// which works as sort of a log for saving orders.
// Day 1, we're just testing to see if the order formatter would work correctly.

#include <iostream>
#include <fstream>
#include "prices.cpp" // Will be used in 

float taxConverter(int n) {
    double x = n * 6.25;
    return x;
}

class takeOrders {
    private:
    int itemCount = 0;
    menuItems items[100];
        std::string name;
        std::string food
        std::string item;
        std::string side;
        std::string drink;
        float price;

    public:
        takeOrders() : itemCount(0) {}

        // Function that adds orders to the counter, limit of 30 orders
        void addItem(const menuItems& item) {
            if (itemCount < 30) {
                item[itemCount++] = item;
            } else {
                std::cout << "Order is full. Wait til other orders are complete.\n";
            }
        }
        
        // Functions that set the name, item, beverage, drink, and prices in the format

        void setName(const std::string n) { // Name setter
            name = n;
        }
        void setFood(std::string f) { // Item setter
            food = f;
        }
        void setSide(std::string s) {
            side = s;
        }
        void setDrink(std::string d) {
            drink = d;
        }

        // Formats the orders, beverage and drink are written in if statements because they may not be included in the order
        void displayOrder() {
            std::cout << "Customer name: " << name << "\n";
            std::cout << "Order details:\n";
                std::cout << food << "\n";
                std::cout << side << "\n";
                std::cout << drink << "\n";
                std::cout << price << "\n";
            }
        }
        
        // Function that will save orders into a file
        // Conditionals set in place in case customer wants individual items
        void logOrders(const std::string& fileName) {
            ofstream file("logorders.txt");
                if(file_is.open) {
                    for(int i = 0; i < 100; i++) {
                       file << "Order # " << i;
                       file << name;
                       if(!food.empty()) {
                       file << food;
                       }
                       if (!drink.empty()) {
                       file << drink << "\n";
                       }
                       if (!side.empty()) {
                       file << side << "\n";
                       }
                       file << price << "\n";
                    } else {
                        file << "End of day.";
                        file.close();
                    }
                }
        }

int main() {
    std::cout << "Welcome to Chick-Fil-A" << "\n";
}


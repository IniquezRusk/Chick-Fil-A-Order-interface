#include <iostream>
#include <unordered_map>
#include <string>

class Menu {
private:
    std::unordered_map<std::string, float> breakfastPrices;
    std::unordered_map<std::string, float> lunchPrices;
    std::unordered_map<std::string, float> beveragePrices;
    std::unordered_map<std::string, float> sidePrices;

public:
    Menu() {
        initializeBreakfastPrices();
        initializeLunchPrices();
        initializeBeveragePrices();
        initializeSidePrices();
    }

    // Initialize breakfast prices
    void initializeBreakfastPrices() {
        breakfastPrices = {
            {"Biscuit Meal", 6.09},
            {"Chick-n-Minis", 7.08},
            {"Bacon, egg, and cheese biscuit", 6.55},
            {"Sausage, Egg, and cheese biscuit", 3.49},
            {"Hash Browns", 1.39},
            {"Hot Buttered Biscuit", 1.35},
            {"Bacon Biscuit", 2.59},
            {"Sausage Biscuit", 2.59},
            {"Creek Yogurt Parfait", 4.29}
        };
    }

    // Initialize lunch prices
    void initializeLunchPrices() {
        lunchPrices = {
            {"Classic Chicken Sandwich", 3.75},
            {"Spicy Chicken Sandwich", 3.99},
            {"Deluxe Chicken Sandwich", 4.55},
            {"Chick Fil A Nuggets 8ct", 7.79},
            {"Chick Fil A Nuggets 12ct", 7.79},
            {"Grilled Nuggets, 8ct", 8.59},
            {"Grilled Nuggets, 12ct", 12.99},
            {"Grilled Chicken Sandwich", 8.99},
            {"Grilled Chicken Cool Wrap", 10.69}
        };
    }

    // Initialize beverage prices
    void initializeBeveragePrices() {
        beveragePrices = {
            {"Sprite", 1.49},
            {"Pepsi", 1.49},
            {"HI-C", 1.49},
            {"Fruit Punch Gatorade", 1.49},
            {"Orange Fanta", 1.49},
            {"Dr Pepper", 1.49},
            {"Coca-Cola", 1.49},
            {"Water", 1.49}
        };
    }

    // Initialize side prices
    void initializeSidePrices() {
        sidePrices = {
            {"Medium fry", 2.19},
            {"Large fry", 2.49},
            {"Waffle potato chips", 2.49}
        };
    }

    // Get price for a breakfast item
    float getBreakfastItemPrice(const std::string& item) {
        return getPrice(breakfastPrices, item);
    }

    // Get price for a lunch item
    float getLunchItemPrice(const std::string& item) {
        return getPrice(lunchPrices, item);
    }

    // Get price for a beverage
    float getBeveragePrice(const std::string& item) {
        return getPrice(beveragePrices, item);
    }

    // Get price for a side item
    float getSidePrice(const std::string& item) {
        return getPrice(sidePrices, item);
    }

private:
    // Helper function to get price from a map
    float getPrice(const std::unordered_map<std::string, float>& priceMap, const std::string& item) {
        auto it = priceMap.find(item);
        if (it != priceMap.end()) {
            return it->second
        } else {
            return 0.0;
        }
    }
}

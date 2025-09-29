#include <iostream>
#include <string>
#include <vector>
#include "src/raining.hpp"

using namespace std;

int main() {
    vector<string> businesses; //Array of all businesses
    string input; //Stores business entries
    string cont; //Tracks if you want to add another business

    cout << "Welcome to the Business Sorting Program!" << endl;

    do {
        cout << "Please enter the name of a business: " << endl;
        getline(cin, input); //Grabs user input business

        addBusiness(businesses, input); //Adds the business
        sortBusinesses(businesses); //Sorts the business
        printBusinesses(businesses); //Prints out the business

        cout << "Another business?" << endl;
        getline(cin, cont);
    } while (shouldContinue(cont)); //Allows the do-while loop to continue

    cout << "Thank you for using the Business Sorting Program!" << endl;
}
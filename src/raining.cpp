#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include "raining.hpp"

using namespace std;

void addBusiness(vector<string>& businesses, const string& name) {
    businesses.push_back(name);
}

void sortBusinesses(vector<string>& businesses) { //Sorts the business alphabetically
    sort(businesses.begin(), businesses.end());
}

void printBusinesses(const vector<string>& businesses) { //Prints the businesses in the vector
    cout << "Your Businesses:" << endl;
    for (int i = 0; i < businesses.size(); i++) {
        cout << i + 1 << ". " << businesses[i] << endl; //We need i + 1 since array start at index 0
    }
}

bool shouldContinue(const string& input) {
    string lowerInput; //Start with empty string and build (concatenate) it
    for (const char i : input) {
        lowerInput += tolower(i);
    }
    if (lowerInput == "y" || lowerInput == "yes") { //Forces uppercase inputs to lowercase; I could also do toupper()
        return true;
    } else {
        return false;
    }
}
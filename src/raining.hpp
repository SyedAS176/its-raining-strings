#pragma once

#include <string>
#include <vector>

using namespace std;

void addBusiness(vector<string>& businesses, const string& name);
void sortBusinesses(vector<string>& businesses);
void printBusinesses(const vector<string>& businesses);
bool shouldContinue(const string& input);
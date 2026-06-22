#include <iostream>

// we define the std globally, so we don't need to do it in statement
using namespace std;

int main() {
    double sales = 95000;
    cout << "Sales: $" << sales << endl;
    
    const double state_tax_rate = 0.04;
    double state_tax = sales*state_tax_rate;
    cout << "State tax: $" << state_tax << endl;
    
    const double county_tax_rate = 0.02;
    double county_tax = sales*county_tax_rate;
    cout << "County tax: $" << county_tax << endl;
    
    return 0;
}
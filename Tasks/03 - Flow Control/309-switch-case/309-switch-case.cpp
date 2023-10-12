#include <iostream>

using namespace std;

// Some "mocking" functions to help us test our logic
void redirect(int number) {
    cout << "Phone redirects to " << number << endl;
}
void hangup() {
    cout << "Bye" << endl;
}

// Main code
int main()
{
    // start filling the tank 
    int selection = 0;

    // Read the keyboad to get the option
    // Repeat until a valid value has been added
    do {
        cout << "Please enter one of the following options:" << endl;
        cout << "0 - Opening Hours" << endl;
        cout << "1 - Help with online shopping" << endl;
        cout << "2 - In-store enquirey" << endl;
        cout << "3 - Customer Service Desk" << endl;
        cout << "4 - All other options" << endl;
        cin >> selection;
    } while ((selection < 0) || (selection > 4)); // Repeat until a valid number is entered

    // Mutuallly Exclusive Decision Pathway
    switch (selection) {
    case 0:
        cout << "Opening Hours";
        break;  
    case 1:
        cout << "Help with Online Shopping";
        break;
    case 2:
        cout << "In Store Enquiry";
        break;
    case 3:
        cout << "Customer Service Desk";
    case 4:
        cout << "All other options";
    default:
        cout << "Thank you for coming";

    
}

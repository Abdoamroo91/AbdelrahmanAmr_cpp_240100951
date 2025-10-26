#include <iostream>
using namespace std;

int carHour = 10;
int busHour = 20;
int vanHour = 15;
int main() {
    while (true){
        int choice;
        cout << "Enter your choice 1-Pay for the parking, 2-Exit: ";
        cin >> choice;
        if(choice == 1){
            int vehicle, enter, exit, cost;
            cout<< endl;
            cout << "Choose your vehicle type 1-Car, 2-Bus, 3-Van: ";
            cin >> vehicle;
            cout<< endl;
            cout << "Enter the hour you enter the parking (24h-format only): ";
            cin >> enter;
            cout<< endl;
            cout << "Enter the hour you left the parking (24h-format only): ";
            cin >> exit;
            int hourStayed = exit - enter;
            if(hourStayed == 0){
                hourStayed = 24;
            }else if (hourStayed < 0){
                hourStayed = abs(hourStayed);
            }
            switch (vehicle)
            {
            case 1:
                cost = carHour * hourStayed;
                cout<< endl;
                cout << "Car stayed for "<< hourStayed << " hours with a cost of " << cost << endl;
                break;
            case 2:
                cost = busHour * hourStayed;
                cout<< endl;
                cout << "Bus stayed for "<< hourStayed << " hours with a cost of " << cost << endl;
                break;
            case 3:
                cost = vanHour * hourStayed;
                cout << endl;
                cout << "Van stayed for "<< hourStayed << " hours with a cost of " << cost << endl;
                break;
            default:
                break;
            }
        }else{
            break;
        }
    }
    return 0;
}
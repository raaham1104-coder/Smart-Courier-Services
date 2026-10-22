#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Parcel {
    int id;
    string customerName;
    string destination;
    float weight;
};
vector<Parcel> parcels;

void addParcel() {
    Parcel p;

    cout << "\nEnter Parcel ID: ";
    cin >> p.id;

    cin.ignore();

    cout << "Enter Customer Name: ";
    getline(cin, p.customerName);

    cout << "Enter Destination: ";
    getline(cin, p.destination);

    cout << "Enter Parcel Weight (kg): ";
    cin >> p.weight;

    parcels.push_back(p);

    cout << "\nParcel Added Successfully!\n";
}

void displayParcels() {

  if (parcels.empty()) {
        cout << "\nNo Parcels Added Yet!\n";
        return;
    }

    cout << "\nPARCEL DETAILS \n";

  for (int i = 0; i < parcels.size(); i++) {

        cout << "\nParcel " << i + 1 << endl;
        cout << "Parcel ID: " << parcels[i].id << endl;
        cout << "Customer Name: " << parcels[i].customerName << endl;
        cout << "Destination: " << parcels[i].destination << endl;
        cout << "Weight: " << parcels[i].weight << " kg\n";
    }
}


int main() {

    int choice;

    do {
        cout << "\n       SMARTCOURIER SYSTEM";
        cout << "\n1. Add Parcel";
        cout << "\n2. Display Added Parcels";
        cout << "\n3. Exit";
        cout << "\nEnter Your Choice: ";

        cin >> choice;

        switch (choice) {

            case 1:
                addParcel();
                break;

            case 2:
                displayParcels();
                break;

            case 3:
                cout << "\nExiting SmartCourier...\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 3);

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
    int enroll, std, fees, mess, trans, rec, fac;
    int n;
    string name;

    cout << "\n-------Welcome to College billing system-------" << endl;
    cout << "\tEnter your details:" << endl;
    cout << "\tName: ";
    cin >> name;
    cout << "\n\tEnrollment No.: ";
    cin >> enroll;
    cout << "\n\t Sem (in numbers): ";
    cin >> std;

Facility:
    cout << "\n\tChoose the number to proceed further" << endl;
    cout << "\n\t1 = Tuition Fees \n\t2 = Mess Fees \n\t3 = Transportation Fees" << endl;
    cout << "\tEnter the number: ";
    cin >> fac;

    switch (fac) {
        case 1: {
            cout << "\n\n\tPlease enter details to proceed payment" << endl;
            cout << "\tWhich installment would you like to pay?" << endl;
            cout << "\t1 = First installment\n\t2 = Second installment" << endl;
            cout << "\tEnter the number: ";
            cin >> fees;
            if (fees == 1) {
                cout << "\tYour First installment fee is Rs.55,000" << endl;
                cout << "\tEnter 1 if payment is done: ";
            } else {
                cout << "\tYour Second installment fee is Rs.55,000" << endl;
                cout << "\tEnter 1 if payment is done: ";
            }
            cin >> n;
            cout << "\n\n\tYour payment was successful" << endl;
            cout << "\tPress 1 to pay for any other facility" << endl;
            cout << "\tPress 2 to get receipt: ";
            cin >> n;
            if (n == 1) {
                goto Facility;
            } else {
                goto Receipt;
            }
            break;
        }

        case 2: {
            cout << "\n\tYour annual mess fees is Rs.10,000" << endl;
            cout << "\tEnter 1 if payment is done: ";
            cin >> mess;
            cout << "\n \nYour payment was successful" << endl;
            cout << "\tPress 1 to pay for any other facility" << endl;
            cout << "\tPress 2 to get receipt: ";
            cin >> rec;
            if (rec == 1) {
                goto Facility;
            } else {
                goto Receipt;
            }
            break;
        }

        case 3: {
            cout << "\n\tYour annual transportation fees is Rs.12,000" << endl;
            cout << "\tEnter 1 if payment is done: ";
            cin >> trans;
            cout << "\n\n\tYour payment was successful" << endl;
            cout << "\tPress 1 to pay for any other facility" << endl;
            cout << "\tPress 2 to get receipt: ";
            cin >> n;
            if (n == 1) {
                goto Facility;
            } else {
                goto Receipt;
            }
            break;
        }

        default:
            cout << "Invalid input" << endl;
            break;
    }

Receipt:
    cout << "\n\n\nHere is your RECEIPT:" << endl;
    cout << "Name: " << name << endl;
    cout << "Standard: " << std << endl;
    cout << "Enrollment: " << enroll << endl;
    cout << "\nFACILITY                                             AMOUNT" << endl;
    if (fac == 1) {
        if (fees == 1)
            cout << "tuition fee             first installment           Rs.35,000" << endl;
        else
            cout << "tuition fee            second installment           Rs.55,000" << endl;
    } else if (fac == 2) {
        cout << "mess fee                                          Rs.8,000" << endl;
    } else {
        cout << "Transportation fee                                  Rs.12,000" << endl;
    }

    return 0;
}
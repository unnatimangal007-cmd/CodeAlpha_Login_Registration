#include <iostream>
using namespace std;

int main() {
    string username, password;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Create Password: ";
    cin >> password;

    cout << "\nRegistration Successful!" << endl;
   
    string loginUsername, loginPassword;

cout << "\n--- Login ---" << endl;

cout << "Enter Username: ";
cin >> loginUsername;

cout << "Enter Password: ";
cin >> loginPassword;

if (loginUsername == username && loginPassword == password) {
    cout << "Login Successful!" << endl;
}
else {
    cout << "Invalid Username or Password!" << endl;
}
    return 0;
}
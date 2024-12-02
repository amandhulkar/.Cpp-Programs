#include <iostream>
using namespace std;

// Base class: Note
class Note {
protected:
    string note;

public:
    void setNote(string n) {
        note = n;
    }
    void displayNote() {
        cout << "Note: " << note << endl;
    }
};

// Derived class: Server (inheriting from Note)
class Server : public Note {
protected:
    string serverName;

public:
    void setServerName(string name) {
        serverName = name;
    }
    void displayServer() {
        displayNote();
        cout << "Server Name: " << serverName << endl;
    }
};

// Derived class: Device (inheriting from Server)
class Device : public Server {
protected:
    string deviceName;

public:
    void setDeviceName(string name) {
        deviceName = name;
    }
    void displayDevice() {
        displayServer();
        cout << "Device Name: " << deviceName << endl;
    }
};

int main() {
    Device device;
    device.setNote("This is a device note.");
    device.setServerName("MainServer");
    device.setDeviceName("Printer");

    device.displayDevice();  // Display all information

    return 0;
}


#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class ElectronicDevice {
protected:
    string name;
    double screenSize;

public:
    ElectronicDevice() : name(""), screenSize(0.0) {}
    ElectronicDevice(const string& n, double s) : name(n), screenSize(s) {}

    void setName(const string& n) {
        name = n;
    }
    void setScreenSize(double s) {
        screenSize = s;
    }
    string getName() const {
        return name;
    }

    double getScreenSize() const {
        return screenSize;
    }

    virtual void printInfo() const {
        cout << "Назва: " << name << "\n"
            << "Розмір екрану: " << screenSize << " дюймів" << endl;
    }
};
class Smartphone : public ElectronicDevice {
private:
    string os;

public:
    Smartphone() : ElectronicDevice(), os("") {}
    Smartphone(const string& n, double s, const string& o) : ElectronicDevice(n, s), os(o) {}

    void setOS(const string& o) {
        os = o;
    }
    string getOS() const {
        return os;
    }
    void printInfo() const override {
        ElectronicDevice::printInfo();
        cout << "Операційна система: " << os << endl;
    }
};
class Tablet : public ElectronicDevice {
private:
    string os;

public:
   
    Tablet() : ElectronicDevice(), os("") {}
    Tablet(const string& n, double s, const string& o) : ElectronicDevice(n, s), os(o) {}
    void setOS(const string& o) {
        os = o;
    }
    string getOS() const {
        return os;
    }
    void printInfo() const override {
        ElectronicDevice::printInfo();
        cout << "Операційна система: " << os << endl;
    }
};

class Laptop : public ElectronicDevice {
private:
    string os;

public:
    Laptop() : ElectronicDevice(), os("") {}
    Laptop(const string& n, double s, const string& o) : ElectronicDevice(n, s), os(o) {}

    void setOS(const string& o) {
        os = o;
    }

    string getOS() const {
        return os;
    }

    void printInfo() const override {
        ElectronicDevice::printInfo();
        cout << "Операційна система: " << os << endl;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Smartphone phone("iPhone 13", 6.1, "iOS");
    Tablet tablet("iPad Pro", 12.9, "iPadOS");
    Laptop laptop("MacBook Pro", 16.0, "macOS");
    cout << "Смартфон:\n";
    phone.printInfo();
    cout << "\nПланшет:\n";
    tablet.printInfo();
    cout << "\nНоутбук:\n";
    laptop.printInfo();

    return 0;
}

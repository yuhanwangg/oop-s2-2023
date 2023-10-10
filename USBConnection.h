#ifndef USBCONNECTION_H
#define USBCONNECTION_H
#include <iostream>
#include <stack>
using namespace std;

class USBConnection {
 private:
  int id;
  USBConnection(int id) { this->id = id; };
  //   USBConnection() { id = 0; };

 public:
  static std::stack<int>
      ids;  // the class looks for the static variable outside the class
  static USBConnection* CreateUsbConnection() {
    if (!ids.empty()) {
      USBConnection* usbPtr = new USBConnection(ids.top());
      ids.pop();
      return usbPtr;
    } else {
      return nullptr;
    }
  };

  // getters and setters
  int get_id() { return id; };
  ~USBConnection() { ids.push(id); };
};

std::stack<int> USBConnection::ids({3, 2, 1});  // static variable
#endif
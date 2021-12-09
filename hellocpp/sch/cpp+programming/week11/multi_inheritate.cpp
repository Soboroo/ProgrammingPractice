#include <iostream>
using namespace std;

class MP3 {
public:
  void play() void stop();
};

class MobilePhone {
public:
  bool sendCall();
  bool receiveCall();
  bool sendSMS();
  bool receiveSMS();
};

class MusicPhone : public MP3, public MobliePhone {
public:
  void dial();
};
#include <string>
   
#ifdef _WIN32 // Windows

#include <Windows.h>

class Keyboard{
private:
   INPUT _input;
public:
   int _A, _B, _C, _D, _E, _F, _G, _H, _I, _J, _K, _L, _M, _N, _O, _P, _Q, _R, _S, _T, _U, _V, _W, _X, _Y, _Z, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _F1, _F2, _F3, _F4, _F5, _F6, _F7, _F8, _F9, _F10, _F11, _F12, _F13, _F14, _F15, _F16, _F17, _F18, _F19, _F20, _F21, _F22, _F23, _F24, _TILDE, _HYPHEN, _EQUAL, _OPEN_BRACKET, _CLOSE_BRACKET, _BACKSLASH, _SEMI_COLON, _APOSTROPHE, _COMMA, _PERIOD, _FOWARDSLASH, _UP, _DOWN, _LEFT, _RIGHT, _INSERT, _DELETE, _HOME, _END, _PAGE_UP, _PAGE_DOWN, _PRINT_SCREEN, _SCROLL_LOCK, _BREAK, _ESCAPE, _CAPS_LOCK, _SPACE, _NUM_LOCK, _NUM_DIVIDE, _NUM_MULTIPLY, _NUM_SUBTRACT, _NUM_ADD, _NUM_ENTER, _NUM_DECIMAL, _NUM_0, _NUM_1, _NUM_2, _NUM_3, _NUM_4, _NUM_5, _NUM_6, _NUM_7, _NUM_8, _NUM_9;
   std::string lang;

   Keyboard(){
   }

   void setMap(std::string language){
      lang = language;
      if (language == "US"){
         // https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes
         _A = 0x41;
         _0 = 0x30;
         // _B = ;
         // _C = ;
         // _D = ;
         // _E = ;
         // _F = ;
         // _G = ;
         // _H = ;
         // _I = ;
         // _J = ;
         // _K = XKeysymToKeycode(d, 0x004B);
         // _L = XKeysymToKeycode(d, 0x004C);
         // _M = XKeysymToKeycode(d, 0x004D);
         // _N = XKeysymToKeycode(d, 0x004E);
         // _O = XKeysymToKeycode(d, 0x004F);
         // _P = XKeysymToKeycode(d, 0x0050);
         // _Q = XKeysymToKeycode(d, 0x0051);
         // _R = XKeysymToKeycode(d, 0x0052);
         // _S = XKeysymToKeycode(d, 0x0053);
         // _T = XKeysymToKeycode(d, 0x0054);
         // _U = XKeysymToKeycode(d, 0x0055);
         // _V = XKeysymToKeycode(d, 0x0056);
         // _W = XKeysymToKeycode(d, 0x0057);
         // _X = XKeysymToKeycode(d, 0x0058);
         // _Y = XKeysymToKeycode(d, 0x0059);
         // _Z = XKeysymToKeycode(d, 0x005A);
         // _0 = XKeysymToKeycode(d, 0x0030);
         // _1 = XKeysymToKeycode(d, 0x0031);
         // _2 = XKeysymToKeycode(d, 0x0032);
         // _3 = XKeysymToKeycode(d, 0x0033);
         // _4 = XKeysymToKeycode(d, 0x0034);
         // _5 = XKeysymToKeycode(d, 0x0035);
         // _6 = XKeysymToKeycode(d, 0x0036);
         // _7 = XKeysymToKeycode(d, 0x0037);
         // _8 = XKeysymToKeycode(d, 0x0038);
         // _9 = XKeysymToKeycode(d, 0x0039);
         // _F1 = XKeysymToKeycode(d, 0xffbe);
         // _F2 = XKeysymToKeycode(d, 0xffbf);
         // _F3 = XKeysymToKeycode(d, 0xffc0);
         // _F4 = XKeysymToKeycode(d, 0xffc1);
         // _F5 = XKeysymToKeycode(d, 0xffc2);
         // _F6 = XKeysymToKeycode(d, 0xffc3);
         // _F7 = XKeysymToKeycode(d, 0xffc4);
         // _F8 = XKeysymToKeycode(d, 0xffc5);
         // _F9 = XKeysymToKeycode(d, 0xffc6);
         // _F10 = XKeysymToKeycode(d, 0xffc7);
         // _F11 = XKeysymToKeycode(d, 0xffc8);
         // _F12 = XKeysymToKeycode(d, 0xffc9);
         // _F13 = XKeysymToKeycode(d, 0xffca);
         // _F14 = XKeysymToKeycode(d, 0xffcb);
         // _F15 = XKeysymToKeycode(d, 0xffcc);
         // _F16 = XKeysymToKeycode(d, 0xffcd);
         // _F17 = XKeysymToKeycode(d, 0xffce);
         // _F18 = XKeysymToKeycode(d, 0xffcf);
         // _F19 = XKeysymToKeycode(d, 0xffd0);
         // _F20 = XKeysymToKeycode(d, 0xffd1);
         // _F21 = XKeysymToKeycode(d, 0xffd2);
         // _F22 = XKeysymToKeycode(d, 0xffd3);
         // _F23 = XKeysymToKeycode(d, 0xffd4);
         // _F24 = XKeysymToKeycode(d, 0xffd5);
         // _TILDE = XKeysymToKeycode(d, 0x007e);
         // _HYPHEN = XKeysymToKeycode(d, 0x002d);
         // _EQUAL = XKeysymToKeycode(d, 0x003d);
         // _OPEN_BRACKET = XKeysymToKeycode(d, 0x005b);
         // _CLOSE_BRACKET = XKeysymToKeycode(d, 0x005d);
         // _BACKSLASH = XKeysymToKeycode(d, 0x005c);
         // _SEMI_COLON  = XKeysymToKeycode(d, 0x003b);
         // _APOSTROPHE = XKeysymToKeycode(d, 0x0027);
         // _COMMA = XKeysymToKeycode(d, 0x002c);
         // _PERIOD = XKeysymToKeycode(d, 0x002e);
         // _FOWARDSLASH = XKeysymToKeycode(d, 0x002f);
         // _UP = XKeysymToKeycode(d, 0x0fc);
         // _DOWN = XKeysymToKeycode(d, 0x08fe);
         // _LEFT = XKeysymToKeycode(d, 0x08fb);
         // _RIGHT = XKeysymToKeycode(d, 0x08fd);
         // _INSERT = XKeysymToKeycode(d, 0xff63);
         // _DELETE = XKeysymToKeycode(d, 0xffff);
         // _HOME = XKeysymToKeycode(d, 0xff50);
         // _END = XKeysymToKeycode(d, 0xff57);
         // _PAGE_UP = XKeysymToKeycode(d, 0xff55);
         // _PAGE_DOWN = XKeysymToKeycode(d, 0xff57);
         // _PRINT_SCREEN = XKeysymToKeycode(d, 0xfd1d);
         // _SCROLL_LOCK = XKeysymToKeycode(d, 0xff14);
         // _BREAK = XKeysymToKeycode(d, 0xff6b);
         // _ESCAPE = XKeysymToKeycode(d, 0xff1b);
         // _CAPS_LOCK = XKeysymToKeycode(d, 0xffe5);
         // _SPACE = XKeysymToKeycode(d, 0x0020);
         // _NUM_LOCK = XKeysymToKeycode(d, 0xff7f);
         // _NUM_DIVIDE = XKeysymToKeycode(d, 0xffaf);
         // _NUM_MULTIPLY = XKeysymToKeycode(d, 0xffaa);
         // _NUM_SUBTRACT = XKeysymToKeycode(d, 0xffad);
         // _NUM_ADD = XKeysymToKeycode(d, 0xffab);
         // _NUM_ENTER = XKeysymToKeycode(d, 0xff8d);
         // _NUM_DECIMAL = XKeysymToKeycode(d, 0xffae);
         // _NUM_0 = XKeysymToKeycode(d, 0xffb0);
         // _NUM_1 = XKeysymToKeycode(d, 0xffb1);
         // _NUM_2 = XKeysymToKeycode(d, 0xffb2);
         // _NUM_3 = XKeysymToKeycode(d, 0xffb3);
         // _NUM_4 = XKeysymToKeycode(d, 0xffb4);
         // _NUM_5 = XKeysymToKeycode(d, 0xffb5);
         // _NUM_6 = XKeysymToKeycode(d, 0xffb6);
         // _NUM_7 = XKeysymToKeycode(d, 0xffb7);
         // _NUM_8 = XKeysymToKeycode(d, 0xffb8);
         // _NUM_9 = XKeysymToKeycode(d, 0xffb9);
      }
   }

   void toggle(int key, int down){
      _input.type = INPUT_KEYBOARD;
      _input.ki.wVk = key;
      _input.ki.dwFlags = 0;
      if (down == 0){
         _input.ki.dwFlags = 2;
      }
      SendInput(1, &_input, sizeof(_input));
   }
};

class Mouse{
private:
   INPUT _input;
public:
   int _LEFT[2] = {MOUSEEVENTF_LEFTUP, MOUSEEVENTF_LEFTDOWN};
   int _MIDDLE[2] = {MOUSEEVENTF_MIDDLEUP, MOUSEEVENTF_MIDDLEDOWN};
   int _RIGHT[2] = {MOUSEEVENTF_RIGHTUP, MOUSEEVENTF_RIGHTDOWN};
   int _SCROLL_VERTICAL = 0x0800;
   int _SCROLL_HORIZONTAL = 0x1000;
   int _MISC_A[2] = {MOUSEEVENTF_XUP, MOUSEEVENTF_XDOWN};

   mouse(){
   }

   void setPos(int x, int y){
      SetCursorPos(x, y);
   }

   void toggle(int button, int amount){
      _input.type = INPUT_MOUSE;
      _input.mi.dwFlags = button;
      _input.mi.mouseData = amount;
      SendInput(1, &_input, sizeof(_input));
   }

   void toggle(int *button, bool down){
      _input.type = INPUT_MOUSE;
      _input.mi.dwFlags = button[down];
      _input.mi.mouseData = 0x00;
      SendInput(1, &_input, sizeof(_input));
   }
};

class Cimulate{
public:
   Mouse mouse;
   Keyboard keyboard;

   Cimulate(){
      keyboard.setMap("US");
   }

   Cimulate(std::string lang){
      keyboard.setMap(lang);
   }
};

#endif

#ifdef __linux__ // GNUnix

#include <X11/Xlib.h>
#include <X11/extensions/XTest.h>

class Keyboard{
private:
   Display *d;
public:
   int _A, _B, _C, _D, _E, _F, _G, _H, _I, _J, _K, _L, _M, _N, _O, _P, _Q, _R, _S, _T, _U, _V, _W, _X, _Y, _Z, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _F1, _F2, _F3, _F4, _F5, _F6, _F7, _F8, _F9, _F10, _F11, _F12, _F13, _F14, _F15, _F16, _F17, _F18, _F19, _F20, _F21, _F22, _F23, _F24, _TILDE, _HYPHEN, _EQUAL, _OPEN_BRACKET, _CLOSE_BRACKET, _BACKSLASH, _SEMI_COLON, _APOSTROPHE, _COMMA, _PERIOD, _FOWARDSLASH, _UP, _DOWN, _LEFT, _RIGHT, _INSERT, _DELETE, _HOME, _END, _PAGE_UP, _PAGE_DOWN, _PRINT_SCREEN, _SCROLL_LOCK, _BREAK, _ESCAPE, _CAPS_LOCK, _SPACE, _NUM_LOCK, _NUM_DIVIDE, _NUM_MULTIPLY, _NUM_SUBTRACT, _NUM_ADD, _NUM_ENTER, _NUM_DECIMAL, _NUM_0, _NUM_1, _NUM_2, _NUM_3, _NUM_4, _NUM_5, _NUM_6, _NUM_7, _NUM_8, _NUM_9;
   std::string lang;

   Keyboard(){
   }

   void setMap(std::string language){
      lang = language;
      if (language == "US"){
         _A = XKeysymToKeycode(d, 0x0041);
         _B = XKeysymToKeycode(d, 0x0042);
         _C = XKeysymToKeycode(d, 0x0043);
         _D = XKeysymToKeycode(d, 0x0044);
         _E = XKeysymToKeycode(d, 0x0045);
         _F = XKeysymToKeycode(d, 0x0046);
         _G = XKeysymToKeycode(d, 0x0047);
         _H = XKeysymToKeycode(d, 0x0048);
         _I = XKeysymToKeycode(d, 0x0049);
         _J = XKeysymToKeycode(d, 0x004A);
         _K = XKeysymToKeycode(d, 0x004B);
         _L = XKeysymToKeycode(d, 0x004C);
         _M = XKeysymToKeycode(d, 0x004D);
         _N = XKeysymToKeycode(d, 0x004E);
         _O = XKeysymToKeycode(d, 0x004F);
         _P = XKeysymToKeycode(d, 0x0050);
         _Q = XKeysymToKeycode(d, 0x0051);
         _R = XKeysymToKeycode(d, 0x0052);
         _S = XKeysymToKeycode(d, 0x0053);
         _T = XKeysymToKeycode(d, 0x0054);
         _U = XKeysymToKeycode(d, 0x0055);
         _V = XKeysymToKeycode(d, 0x0056);
         _W = XKeysymToKeycode(d, 0x0057);
         _X = XKeysymToKeycode(d, 0x0058);
         _Y = XKeysymToKeycode(d, 0x0059);
         _Z = XKeysymToKeycode(d, 0x005A);
         _0 = XKeysymToKeycode(d, 0x0030);
         _1 = XKeysymToKeycode(d, 0x0031);
         _2 = XKeysymToKeycode(d, 0x0032);
         _3 = XKeysymToKeycode(d, 0x0033);
         _4 = XKeysymToKeycode(d, 0x0034);
         _5 = XKeysymToKeycode(d, 0x0035);
         _6 = XKeysymToKeycode(d, 0x0036);
         _7 = XKeysymToKeycode(d, 0x0037);
         _8 = XKeysymToKeycode(d, 0x0038);
         _9 = XKeysymToKeycode(d, 0x0039);
         _F1 = XKeysymToKeycode(d, 0xffbe);
         _F2 = XKeysymToKeycode(d, 0xffbf);
         _F3 = XKeysymToKeycode(d, 0xffc0);
         _F4 = XKeysymToKeycode(d, 0xffc1);
         _F5 = XKeysymToKeycode(d, 0xffc2);
         _F6 = XKeysymToKeycode(d, 0xffc3);
         _F7 = XKeysymToKeycode(d, 0xffc4);
         _F8 = XKeysymToKeycode(d, 0xffc5);
         _F9 = XKeysymToKeycode(d, 0xffc6);
         _F10 = XKeysymToKeycode(d, 0xffc7);
         _F11 = XKeysymToKeycode(d, 0xffc8);
         _F12 = XKeysymToKeycode(d, 0xffc9);
         _F13 = XKeysymToKeycode(d, 0xffca);
         _F14 = XKeysymToKeycode(d, 0xffcb);
         _F15 = XKeysymToKeycode(d, 0xffcc);
         _F16 = XKeysymToKeycode(d, 0xffcd);
         _F17 = XKeysymToKeycode(d, 0xffce);
         _F18 = XKeysymToKeycode(d, 0xffcf);
         _F19 = XKeysymToKeycode(d, 0xffd0);
         _F20 = XKeysymToKeycode(d, 0xffd1);
         _F21 = XKeysymToKeycode(d, 0xffd2);
         _F22 = XKeysymToKeycode(d, 0xffd3);
         _F23 = XKeysymToKeycode(d, 0xffd4);
         _F24 = XKeysymToKeycode(d, 0xffd5);
         _TILDE = XKeysymToKeycode(d, 0x007e);
         _HYPHEN = XKeysymToKeycode(d, 0x002d);
         _EQUAL = XKeysymToKeycode(d, 0x003d);
         _OPEN_BRACKET = XKeysymToKeycode(d, 0x005b);
         _CLOSE_BRACKET = XKeysymToKeycode(d, 0x005d);
         _BACKSLASH = XKeysymToKeycode(d, 0x005c);
         _SEMI_COLON  = XKeysymToKeycode(d, 0x003b);
         _APOSTROPHE = XKeysymToKeycode(d, 0x0027);
         _COMMA = XKeysymToKeycode(d, 0x002c);
         _PERIOD = XKeysymToKeycode(d, 0x002e);
         _FOWARDSLASH = XKeysymToKeycode(d, 0x002f);
         _UP = XKeysymToKeycode(d, 0x0fc);
         _DOWN = XKeysymToKeycode(d, 0x08fe);
         _LEFT = XKeysymToKeycode(d, 0x08fb);
         _RIGHT = XKeysymToKeycode(d, 0x08fd);
         _INSERT = XKeysymToKeycode(d, 0xff63);
         _DELETE = XKeysymToKeycode(d, 0xffff);
         _HOME = XKeysymToKeycode(d, 0xff50);
         _END = XKeysymToKeycode(d, 0xff57);
         _PAGE_UP = XKeysymToKeycode(d, 0xff55);
         _PAGE_DOWN = XKeysymToKeycode(d, 0xff57);
         _PRINT_SCREEN = XKeysymToKeycode(d, 0xfd1d);
         _SCROLL_LOCK = XKeysymToKeycode(d, 0xff14);
         _BREAK = XKeysymToKeycode(d, 0xff6b);
         _ESCAPE = XKeysymToKeycode(d, 0xff1b);
         _CAPS_LOCK = XKeysymToKeycode(d, 0xffe5);
         _SPACE = XKeysymToKeycode(d, 0x0020);
         _NUM_LOCK = XKeysymToKeycode(d, 0xff7f);
         _NUM_DIVIDE = XKeysymToKeycode(d, 0xffaf);
         _NUM_MULTIPLY = XKeysymToKeycode(d, 0xffaa);
         _NUM_SUBTRACT = XKeysymToKeycode(d, 0xffad);
         _NUM_ADD = XKeysymToKeycode(d, 0xffab);
         _NUM_ENTER = XKeysymToKeycode(d, 0xff8d);
         _NUM_DECIMAL = XKeysymToKeycode(d, 0xffae);
         _NUM_0 = XKeysymToKeycode(d, 0xffb0);
         _NUM_1 = XKeysymToKeycode(d, 0xffb1);
         _NUM_2 = XKeysymToKeycode(d, 0xffb2);
         _NUM_3 = XKeysymToKeycode(d, 0xffb3);
         _NUM_4 = XKeysymToKeycode(d, 0xffb4);
         _NUM_5 = XKeysymToKeycode(d, 0xffb5);
         _NUM_6 = XKeysymToKeycode(d, 0xffb6);
         _NUM_7 = XKeysymToKeycode(d, 0xffb7);
         _NUM_8 = XKeysymToKeycode(d, 0xffb8);
         _NUM_9 = XKeysymToKeycode(d, 0xffb9);
      }
   }

   void setDisplay(Display *dsp){
      d = dsp;
   }

   void toggle(int key, int down){
      XTestFakeKeyEvent(d, key, down, 0);
      XFlush(d);
   }
};

class Mouse{
private:
   Display *d;
public:
   static const int _LEFT = 1;
   static const int _MIDDLE = 2;
   static const int _RIGHT = 3;
   static const int _SCROLL_UP = 4;
   static const int _SCROLL_DOWN = 5;
   static const int _SCROLL_LEFT = 6;
   static const int _SCROLL_RIGHT = 7;
   static const int _MISC_A = 8;
   static const int _MISC_B = 9;
   Mouse(){
   }

   void setDisplay(Display *dsp){
      d = dsp;
   }

   void toggle(int button, bool down){
      XTestFakeButtonEvent(d, button, down, 0);
      XFlush(d);
   }
   
   void setPos(int x, int y){
      XWarpPointer(d, None, XDefaultRootWindow(d), 0, 0, 0, 0, x, y);
      XFlush(d);
   }
};

class Cimulate{
private:
   Display *d;
public:
   Mouse mouse;
   Keyboard keyboard;

   Cimulate(){
      d = XOpenDisplay(0);
      mouse.setDisplay(d);
      keyboard.setDisplay(d);
      keyboard.setMap("US");
   }

   Cimulate(std::string lang){
      d = XOpenDisplay(0);
      mouse.setDisplay(d);
      keyboard.setDisplay(d);
      keyboard.setMap(lang);
   }
};

#endif

#ifdef __APPLE__ // X OS

#include <ApplicationServices/ApplicationServices.h>

class Mouse{
private:
   CGEventSourceRef d;
public:
   static const int _LEFT = 1;
   static const int _MIDDLE = 2;
   static const int _RIGHT = 3;
   static const int _SCROLL_UP = 4;
   static const int _SCROLL_DOWN = 5;
   static const int _SCROLL_LEFT = 6;
   static const int _SCROLL_RIGHT = 7;
   static const int _MISC_A = 8;
   static const int _MISC_B = 9;
   Mouse(){
   }

   void setDisplay(CGEventSourceRef dsp){
      d = dsp;
   }

   void toggle(int button, bool down){
      XTestFakeButtonEvent(d, button, down, 0);
      CGEventPost(kCGHIDEventTap, evt);
   	CFRelease(evt);
   }
   
   void setPos(int x, int y){
      CGEventRef evt = CGEventCreate(src);
      CGPoint pos = CGPoint(x, y);
      evt.location = pos;
      CGEventPost(kCGHIDEventTap, evt);
      CFRelease(evt);
   }
};

class Cimulate{
private:
   CGEventSourceRef d;
public:
   Mouse mouse;
   // Keyboard keyboard;

   Cimulate(){
      d = CGEventSourceCreate(kCGEventSourceStateHIDSystemState);
      mouse.setDisplay(d);
      // keyboard.setDisplay(d);
      // keyboard.setMap("US");
   }

   Cimulate(std::string lang){
      d = CGEventSourceCreate(kCGEventSourceStateHIDSystemState);
      mouse.setDisplay(d);
      // keyboard.setDisplay(d);
      // keyboard.setMap(lang);
   }
};

#endif

#ifdef __ANDROID__ // Brewed GNUnix and Java
   #error "Android not supported yet!"
   #include <stophere>   
#endif
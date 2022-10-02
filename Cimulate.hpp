#include <X11/extensions/XI.h>
#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

#ifdef __linux__ // GNUnix

#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/extensions/XTest.h>

namespace cim {
struct Pos {
   int x;
   int y;
};

struct RGB_Image {
   std::vector<char> img_data;
   int xres;
   int yres;
};

class Screen {
private:
   Display * d;
public:
   Screen(){
   }
   
   Screen(Display * dsp){
      d = dsp;
   }

   void setDisplay(Display *dsp){
      d = dsp;
   }

   void grab_rgb(int screen, RGB_Image *rtn){
      rtn->xres = XWidthOfScreen(XScreenOfDisplay(d, screen));
      rtn->yres = XHeightOfScreen(XScreenOfDisplay(d, screen));
      rtn->img_data.resize(rtn->xres * rtn->yres * 3);
      XImage * x = XGetImage(d, XDefaultRootWindow(d), 0, 0, rtn->xres, rtn->yres, AllPlanes, ZPixmap);
      int end = rtn->xres * rtn->yres;
      for (int i = 0; i < end; i++){
         std::memcpy((&rtn->img_data.at(i * 3)), x->data + (i * 4), 3);
      }
      std::free(x);
      XFlush(d);
   }
};

class Keyboard{
private:
   Display *d;
public:
   int _A, _B, _C, _D, _E, _F, _G, _H, _I, _J, _K, _L, _M, _N, _O, _P, _Q, _R, _S, _T, _U, _V, _W, _X, _Y, _Z, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _F1, _F2, _F3, _F4, _F5, _F6, _F7, _F8, _F9, _F10, _F11, _F12, _F13, _F14, _F15, _F16, _F17, _F18, _F19, _F20, _F21, _F22, _F23, _F24, _TILDE, _HYPHEN, _EQUAL, _OPEN_BRACKET, _CLOSE_BRACKET, _BACKSLASH, _SEMI_COLON, _APOSTROPHE, _COMMA, _PERIOD, _FOWARDSLASH, _UP, _DOWN, _LEFT, _RIGHT, _INSERT, _DELETE, _HOME, _END, _PAGE_UP, _PAGE_DOWN, _PRINT_SCREEN, _SCROLL_LOCK, _BREAK, _ESCAPE, _BACKSPACE, _ENTER, _SHIFT_LEFT, _SHIFT_RIGHT, _CONTROL_LEFT, _CONTROL_RIGHT, _SPACE_BAR, _CAPS_LOCK, _NUM_LOCK, _NUM_DIVIDE, _NUM_MULTIPLY, _NUM_SUBTRACT, _NUM_ADD, _NUM_ENTER, _NUM_DECIMAL, _NUM_0, _NUM_1, _NUM_2, _NUM_3, _NUM_4, _NUM_5, _NUM_6, _NUM_7, _NUM_8, _NUM_9;
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
         _BACKSPACE = XKeysymToKeycode(d, 0xff08);
         _ENTER = XKeysymToKeycode(d, 0xff0d);
         _SHIFT_LEFT = XKeysymToKeycode(d, 0xffe1);
         _SHIFT_RIGHT = XKeysymToKeycode(d, 0xffe2);
         _CONTROL_LEFT = XKeysymToKeycode(d, 0xffe3);
         _CONTROL_RIGHT = XKeysymToKeycode(d, 0xffe4);
         _SPACE_BAR = XKeysymToKeycode(d, 0x0020);
         _CAPS_LOCK = XKeysymToKeycode(d, 0xffe5);
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

   void toggle(std::vector<int> &keysUp, std::vector<int> &keysDown){
      if (keysUp.size() != 0){
         for (int x = 0; x < keysUp.size(); x++){
            XTestFakeKeyEvent(d, keysUp.at(x), 0, 0);
         }
      }
      if (keysDown.size() != 0){
         for (int x = 0; x < keysDown.size(); x++){
            XTestFakeKeyEvent(d, keysDown.at(x), 1, 0);
         }
      }
      XFlush(d);
   }
};

class Mouse {
private:
   Display * d;
public:
   const int _LEFT = 1;
   const int _MIDDLE = 2;
   const int _RIGHT = 3;
   const int _SCROLL_UP = 4;
   const int _SCROLL_DOWN = 5;
   const int _SCROLL_LEFT = 6;
   const int _SCROLL_RIGHT = 7;
   const int _MISC_A = 8;
   const int _MISC_B = 9;
   Mouse(){
   }

   void setDisplay(Display *dsp){
      d = dsp;
   }

   Pos getPos(){
      Pos rtn = Pos{};
      Window child;
      int a, b;
      unsigned int c;
      XQueryPointer(d, XRootWindow(d, 0), &DefaultRootWindow(d), &child, &rtn.x, &rtn.y, &a, &b, &c);
      XFlush(d);
      return rtn;
   }

   void toggle(int button, bool down){
      XTestFakeButtonEvent(d, button, down, 0);
      XFlush(d);
   }
   
   void toggle(std::vector<int> &buttonsUp, std::vector<int> &buttonsDown){
      for (int x = 0; x < buttonsUp.size(); x++){
         XTestFakeButtonEvent(d, buttonsUp.at(x), 0, 0);
      }
      for (int x = 0; x < buttonsDown.size(); x++){
         XTestFakeButtonEvent(d, buttonsDown.at(x), 1, 0);
      }
      if ((buttonsUp.size() + buttonsDown.size()) > 0){
         XFlush(d);
      }
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
   Screen screen;

   Cimulate(){
      d = XOpenDisplay(0);
      mouse.setDisplay(d);
      keyboard.setDisplay(d);
      keyboard.setMap("US");
      screen.setDisplay(d);
   }

   Cimulate(std::string lang){
      d = XOpenDisplay(0);
      mouse.setDisplay(d);
      keyboard.setDisplay(d);
      keyboard.setMap(lang);
      screen.setDisplay(d);
   }
};
}

#endif

#ifdef __ANDROID__ // Brewed GNUnix and Java
   #error "Android not supported yet!"
   #include <stophere>   
#endif
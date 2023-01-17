#ifndef USER_H
#define USER_H

#include <Utils.h>

// Handles fake user input, gets mouse position, monitor resolution, etc.
namespace User {

    class Mouse 
    {
        public:
            static Vect2 getMousePos();
            void setMousePos(Vect2 pos);
            void performClick();
            void performRightClick();
        private:
            Vect2 position;
    };

    class Keyboard
    {
        public:
            void sendKey(char key);
        private:
            void translatekey(char key);
            void sendKey(int key);
    };

    class Monitor 
    {
        public:
            static Vect2 getMonitorResolution();
    };
}

#endif
#ifndef MOUSE_H
#define MOUSE_H

namespace Mouse {

    class Mouse {
    public:
        Mouse();
        ~Mouse();
        
    private:
        void MoveMouse();
        void ClickMouse();
        void DragMouse();
        void ScrollMouse();
    };
}
#endif
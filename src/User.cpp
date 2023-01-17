#include <Utils.h>
#include <windows.h>
#include <User.h>
// Handles fake user input, gets mouse position, monitor resolution, etc.

// Mouse Class
namespace User 
{
    Vect2 Mouse::getMousePos() {
        POINT p;
        GetCursorPos(&p);
        return Vect2 { p.x, p.y };
    };
};

// Keyboard Class
namespace User {};

// Monitor Class
namespace User
{
    Vect2 Monitor::getMonitorResolution() {
        RECT desktop;
        const HWND hDesktop = GetDesktopWindow();
        GetWindowRect(hDesktop, &desktop);
        return Vect2 { 
                desktop.right, 
                desktop.bottom 
            };
    }
};
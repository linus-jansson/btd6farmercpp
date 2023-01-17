#include <iostream>
#include <Utils.h>
#include <User.h>

void init() {
    std::cout << "Initializing..." << std::endl;
    std::cout << "Done!" << std::endl;
}

void loop() {
    // Initialize program
    init();

    std::cout << User::Monitor::getMonitorResolution().x << " " << User::Monitor::getMonitorResolution().y << std::endl;
    std::cin.get();
    while (true) {
        Vect2 mousePos = User::Mouse::getMousePos();

        std::cout << mousePos.x << " " << mousePos.y << std::endl;

        // Failsafe
        if (mousePos.x == 0 && mousePos.y == 0) {
            break;
        }
    }
}

int main() {
    std::cout << "hello world" << std::endl;
    loop();
    return 0;
}

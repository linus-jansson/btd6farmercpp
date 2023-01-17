# Rewrite of BTD6Farmer written in c++
No injection as I plan for this to be cross-platform and I still want to use it without being detected and banned. 

## possible dependencies
-----------------------
- ffmpeg - screen recording
- opencv - image processing
- tesseract - OCR
- wxWidgets - GUI

## Roadmap (in no particular order)
----------------------------------
- [ ] Setup classes
    - [ ] Reading gameplans
        - [ ] Same layout as current BTD6Farmer
    - [ ] Logging
    - [ ] Setup basic image processing ()
    - [ ] Setup basic screen recording 
    - [ ] Setup basic OCR
    - [ ] Keyboard and mouse input simulation
- [ ] Current Mouse position    
- [ ] Normalize all coordinates to user resolution
- [ ] Detection of BTD6 process and window
- [ ] *Setup basic GUI (selecting gameplan)*


## Building using cmake
-----------------------
1. `mkdir build`
2. `cd build`
3. `cmake ..`
4. `make`

## Building using Visual Studio
------------------------------
1. `mkdir build`
2. `cd build`
3. `cmake .. -G "Visual Studio 16 2019" -A x64`
4. Open the generated solution file in Visual Studio
5. Build the solution

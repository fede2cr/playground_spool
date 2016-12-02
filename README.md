# playground_spool
Alarm system for your 3D printer spool, to let you know of finished or failed prints, based on Adafruit's Circuit Playgroud

- Github repo: https://github.com/fede2cr/playground_spool
- Thingiverse: https://www.thingiverse.com/thing:1920690

## Description
The project is composed of two parts:
- A 3D printed adapter to attatch a Circuit Playground plus a battery, to a 3D printer fillament spool.
- Software for the Playground to monitor the rotation of the spool by using the accelerometer. Once the rotation stops, either the printer finished the job properly, or something like a clog in the extruder made a print fail.

## Parts
- playground_spool_v1.stl: First prototype, it fits fine one some brands of spool, but not all
- playground_spool_v2.stl: Second try. Bigger fillet in the bottom, 150mAph lipo battery pocket, reinforcement for the playground bumper.
- playground_spool_v3.stl: 3rd. Fillers in the battery slot for better fit, the playground bumper went up because I couldn't get it in with the previous version, and also the reinforcent went a bit down. This version **is recommended**.

## Instructions
1. Print this parts **with support** using a semi-flexible fillament, with the playground bumper facing up.
2. Load the software into the Circuit Playground
3. Put the Playground inside its bumper in the 3d printed piece, connect the battery and tuck in it's pocket
4. Put the 3d printed part inside the fillament spool and start a new print
5. Once either the print finishes, or there is an extruder malfunction, the Playground will detect loss of rotation (LOR) and beep to get your attention

### TODO
- [x] The battery can be tighter in the pocket
- [ ] The pocket for the spool holder could be smaller for less material
- [ ] Add SleepyDog sleep code to use less battery. Right now it's closing my serial port for debugging so I'll add it later
- [ ] Estimate (grossly) the time it takes the spool to do one turn to use as 1/4 of wait_time (used for delay) at my printer speeds
### Wishlist
- [ ] To average the rotation speed, and then indicate visually if it's rotating faster or slower than the average. Eye candy.

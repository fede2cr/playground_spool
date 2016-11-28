# playground_spool
Alarm system for your 3D printer spool, to let you know of finished or failed prints, based on Adafruit's Circuit Playgroud

Github repo: https://github.com/fede2cr/playground_spool
Thingiverse: https://www.thingiverse.com/thing:1920690

## Description
The project is composed of two parts:
- A 3D printed adapter to attatch a Circuit Playground plus a battery, to a 3D printer fillament spool.
- Software for the Playground to monitor the rotation of the spool by using the accelerometer. Once the rotation stops, either the printer finished the job properly, or something like a clog in the extruder made a print fail.

## Parts
- playground_spool_v1.stl: First prototype, it fits fine one some brands of spool, but not all
- playground_spool_v2.stl: Second try. Bigger fillet in the bottom, 150mAph lipo battery pocket, reinforcement for the playground bumper. This version **is recommended**.

Print this parts **with support**, with the playground bumper facing up.

### TODO
- The battery can be tighter in the pocket
- The pocket for the spool holder could be smaller for less material

### Wishlist
- To average the rotation speed, and then indicate visually if it's rotating faster or slower than the average. Eye candy.

# playground_spool
Alarm system for your 3D printer spool, to let you know of finished or failed prints, based on Adafruit's Circuit Playgroud

## Description
The project is composed of two parts:
- A 3D printed adapter to attatch a Circuit Playground plus a battery, to a 3D printer fillament spool.
- Software for the Playground to monitor the rotation of the spool by using the accelerometer. Once the rotation stops, either the printer finished the job properly, or something like a clog in the extruder made a print fail.

### Wishlist
- To average the rotation speed, and then indicate visually if it's rotating faster or slower than the average. Eye candy.

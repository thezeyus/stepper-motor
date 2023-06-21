# stepper-motor
by controlling "ULN2003 Motor Driver" lights we didnt have to use the stepper.h library. in the end of the for loop delay() function is for speed, and when you multiple it with for loop number (which is 1500 in this code) you get the rotation time in miliseconds. (for 3*1500 = 4500 ms = 4,5 s our stepper motor will turn.) 

# ArduinoTrackingSensor

The purpose of this project was to implement a tracking sensor on the Arduino uno.

The tracking sensor works by using an IR transmitter and receiver. Depending on the frequency detected, it may trigger an action.

In this implementation, if low IR frequency is detected, it will enable the on-board LED. (Essentially its over a black surface.)
If it detects a high IR frequency, it will turn off the on-board LED. (Essentially it is over a light surface such as white.)

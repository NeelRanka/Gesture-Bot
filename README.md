# Gesture-Bot
A bot which moves with the hand gestures as input

Configuration ::
1: MPU6050 sensor
2: 2 Bluetooth modules
3: chassis, wheels, batteries and motors.


Overview of Steps ::

1: Configure the 2 bluetooth modules 1 in Master and 1 as Slave mode.(Just google it how to configure it in these modes)

2. Now use the Master bluetooth as the sender i.e. use it with the MPU6050 sensor with the senser code.

3: The master bluetooth sends 4 vaalues 'f' , 'r' , 'l' ,'r' : respectively

4: Now configure the receiver code with the chassis and motors i.e check it for all 4 values :: forward, rev, left, right

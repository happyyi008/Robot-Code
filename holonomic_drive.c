#pragma config(Motor,  port2,           RF,            tmotorVex393, openLoop)
#pragma config(Motor,  port3,           RB,            tmotorVex393, openLoop)
#pragma config(Motor,  port4,           LF,            tmotorVex393, openLoop)
#pragma config(Motor,  port5,           LB,            tmotorVex393, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(true){
	int x = vexRT[Ch1];
	int y = vexRT[Ch2];


	x = vexRT[Ch1];
	y = vexRT[Ch2];
	int ang = atan(y/x);

	if(x != 0 || y != 0){
	motor[port2] = -127*cos((PI/4)-ang);
	motor[port3] = 127*cos((PI/4)+ang);
	motor[port4] = -127*cos((PI/4)+ang);
	motor[port5] = 127*cos((PI/4)-ang);
	}

	while(vexRT[Ch4] < -10){
			motor[port2] = motor[port3] = motor[port4] = motor[port5] = vexRT[Ch4];
	 	}
		while(vexRT[Ch4] > 10){
			motor[port2] = motor[port3] = motor[port4] = motor[port5] = vexRT[Ch4];
	 	}
	 	if(vexRT[Ch4] == 0){
	 			motor[port2] = motor[port3] = motor[port4] = motor[port5] = 0;
	 	}


	}


}

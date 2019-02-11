#include "../pa3d.c"

void Main() {
	Printf("*********************************************************\n");
	Printf("Car 1 and 2 enter from different sides at 40mph\n");
	Printf("Expected Road Trace: >|<|\n");
	Printf("*********************************************************\n");

	InitRoad();
	if(Fork() == 0) {
		driveRoad(EAST,40);

		Exit();
	}

	driveRoad(WEST, 40);

	Exit();
}

#include "../pa3d.c"

void Main() {
	Printf("***********************************************************\n");
	Printf("Car 1 goes from west at 40 mph.\n");
	Printf("Car 2 goes from east at 40 mph.\n");
	Printf("Car 3 goes from west at 40 mph.\n");
	Printf("Car 2 arrives after car 3.\n");
	Printf("Car 2 should go after car 3.\n");
	Printf("Expected Road Trace: >>||<|\n");
	Printf("***********************************************************\n");

	InitRoad();
	if(Fork() == 0) {
		Delay(200);
		driveRoad(EAST, 40);
		Exit();
	}
	if(Fork() == 0) {
		driveRoad(WEST, 40);
		Exit();
	}

	driveRoad(WEST, 40);

	Exit();
}

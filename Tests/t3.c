#include "../pa3d.c"

void Main() {
	Printf("**********************************************************\n");
	Printf("Car 1 goes from west at 40 mph.\n");
	Printf("Car 2 goes from west at 4000 mph.\n");
	Printf("Car 3 goes from west at 40 mph.\n");
	Printf("Car 4 goes from west at 40 mph.\n");
	Printf("(This test might seem trivial, but it caused some problems\n");
	Printf("for me. I guess it depends on your implementation.)\n");
	Printf("Expected Road Trace: >>>>||||\n");
	Printf("**********************************************************\n");

	InitRoad();
	if(Fork() == 0) {
		driveRoad(WEST,4000);
		Exit();
	}
	if(Fork() == 0) {
		driveRoad(WEST,40);
		Exit();
	}
	if(Fork() == 0) {
		driveRoad(WEST,40);
		Exit();
	}

	driveRoad(WEST, 40);

	Exit();
}

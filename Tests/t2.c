#include "../pa3d.c"

void Main() {
	Printf("***************************************************************\n");
	Printf("Car 1 goes from west at 40 mph.\n");
	Printf("Then it makes a U-turn.\n");
	Printf("Then it makes a U-turn again.\n");
	Printf("(This will test multiple entries when there are no other cars.)\n");
	Printf("Expected Road Trace: >|<|>|\n");
	Printf("***************************************************************\n");

	InitRoad();
	driveRoad(WEST, 40);
	driveRoad(EAST, 40);
	driveRoad(WEST, 40);

	Exit();
}

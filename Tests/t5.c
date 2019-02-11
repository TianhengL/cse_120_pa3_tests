#include "../pa3d.c"

void Main() {
	int i;
	int direction;
	Printf("***********************************************************\n");
	Printf("Car 1, 3, 4, 7, 9 go from west at 40 mph.\n");
	Printf("Car 2, 4, 6, 8, 10 go from west at 40 mph.\n");
	Printf("Expected Road Trace: >|<|>|<|>|<|>|<|>|<|\n");
	Printf("***********************************************************\n");

	InitRoad();
	for(i = 0; i < 9; i++) {
		if(Fork() == 0) {
			if(Getpid() % 2) {
				direction = WEST;
			} else {
				direction = EAST;
			}

			driveRoad(direction, 40);
			
			Exit();
		}
	}

	driveRoad(WEST, 40);

	Exit();
}

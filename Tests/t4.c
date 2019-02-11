#include "../pa3d.c"

void Main() {
	int i;
	Printf("*****************************************************************\n");
	Printf("10 cars go from west.\n");
	Printf("Expected Road Trace: >>>>>>|>|>|>|>||||||\n");
	Printf("Road Trace may vary. As long as they go in order and don't crash.\n");
	Printf("*****************************************************************\n");

	InitRoad();
	for(i = 0; i < 9; i++) {
		if(Fork() == 0) {
			driveRoad(WEST, 40);
			
			Exit();
		}
	}

	driveRoad(WEST, 40);

	Exit();
}

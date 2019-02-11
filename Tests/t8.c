#include "../pa3d.c"

void Main() {
	Printf("*************************************************************\n");
	Printf("Infinity cars come from west at 40 mph. There is no car 1.\n");
	Printf("(This test is targeted to see if new processes can be created\n");
	Printf("after some of the previouse 10 processes exit.\n");
	Printf("It's kind of trivial, but fun to watch.\n");
	Printf("PLEASE KILL the program after you make sure it's acting as\n");
	Printf("expected or you have enough fun...)\n");
	Printf("*************************************************************\n");
	Printf("!!Please read above and press <enter> to continue...");

	fgetc(stdin);

	InitRoad();
	while(1) {
		if(Fork() == 0) {
			driveRoad(WEST, 40);

			Exit();
		}
	}
}

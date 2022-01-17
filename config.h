static char delim[] = "  ";
static unsigned int delimLen = 5;
static const Block blocks[] = {
// {"mem: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	60, 0},
//	{"","sb-steam",0, 10}, 
//	{"","sb-moon",0, 20}, 
	{"","sb-joystick",2, 30},
//	{"","sb-headphone",2,40},
	{"","sb-operstate",5, 50},
	{"","date '+%H:%M'",60, 1},
};

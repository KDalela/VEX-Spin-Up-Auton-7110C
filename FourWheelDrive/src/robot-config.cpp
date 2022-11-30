#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 brain screen
brain Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor FrontRight = motor(PORT15, ratio18_1, true);
motor FrontLeft = motor(PORT20, ratio18_1, false);
motor BackRight = motor(PORT2, ratio18_1, true);
motor BackLeft = motor(PORT6, ratio18_1, false);
motor Intake = motor(PORT3, ratio18_1, false);
motor Roller = motor(PORT8, ratio18_1, false);
motor Launcher1 = motor(PORT11, ratio6_1, false);
motor Launcher2 = motor(PORT12, ratio6_1, false);
digital_out Piston = digital_out(Brain.ThreeWirePort.A);


// VEXcode generated functions

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void) {
  // nothing to initialize
  //Piston.set(true);
}
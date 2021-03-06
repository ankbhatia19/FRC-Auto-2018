#include "Auto_Right_RScale.h"
#include "../CommandBase.h"
#include "Delay.h"
#include "ScaleMechanisms.h"
//#include "Constants.h"

Auto_Right_RScale::Auto_Right_RScale() {
	AddSequential(new DriveForward(To_Switch+Mid_Targets+To_Scale));
	AddSequential(new Delay(.5));
	AddSequential(new Turn(-90));
	AddSequential(new Delay(.5));
	AddSequential(new DriveForward(Forward_Scale));
	AddParallel(new ScaleMechanisms());

}

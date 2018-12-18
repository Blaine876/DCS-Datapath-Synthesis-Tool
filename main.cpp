/**
 * DataPath Synthesis Tool
 * Blaine Oakley and Maharshi Shah
 * Date: December 5th 2018
 *  CIS 4930 Final Project
 */


#include "DST_utils.h"

int main() 
{	
	/**
	 * 
	 * The functions are called as ordered.
	 * First we parse the input file
	 * Then we call the scheduler to get the appropriate
	 * priorities of each vertex and their timestep
	 * Print the following output after being scheduled
	 * Allocate the functional units
	 * Print the functional allocation
	 * Allocate registers
	 * Print register allocation
	 * Allocate multiplexers
	 * Print multiplexer allocation
	 * Generate the VHDL file with the data given
	 * */

	aifReader();
	createScheduler(); 
	printOPS();
	allocateFU(); 
	printFU_bind();
	allocateREG(); 
	printREG_bind();
	allocateMUX(); 
	printMUX_bind();
	vhdlGen(); 
	return 0;
}

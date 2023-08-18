/*
 * defines.h
 */

// You can print every DCC packet by un-commenting the line below
//#define NOTIFY_DCC_MSG

// You can print every notifyDccAccTurnoutOutput call-back by un-commenting the line below
//#define NOTIFY_TURNOUT_MSG

// You can also print other Debug Messages uncommenting the line below
//#define DEBUG_MSG

// Un-comment the line below to enable led acknowledge routine
//#define TESTING

// Un-comment the line below to enable led acknowledge routine in DCC notification
//#define TESTING_DCC

// Un-comment the line below to enable learning button and functions
//#define LEARNING

// Un-comment the line below to enable serial commands and display
//#define ENABLE_SERIAL


// Un-Comment the line below to force CVs to be written to the Factory Default values
// defined in the FactoryDefaultCVs below on Start-Up
//#define FORCE_RESET_FACTORY_DEFAULT_CV

// Un-Comment the line below to Enable DCC ACK for Service Mode Programming Read CV Capablilty 
//#define ENABLE_DCC_ACK  15  // This is A1 on the Iowa Scaled Engineering ARD-DCCSHIELD DCC Shield

// Define the Arduino input Pin number for the DCC Signal 
#define DCC_PIN     2

#define NUM_TURNOUTS 1                // Set Number of Turnouts (Pairs of Pins)

#define ACTIVE_OUTPUT_STATE HIGH      // Set the ACTIVE State of the output to Drive the Turnout motor electronics HIGH or LOW 

#define DCC_DECODER_VERSION_NUM 12    // Set the Decoder Version - Used by JMRI to Identify the decoder

#define CV_ACCESSORY_DECODER_OUTPUT_PULSE_TIME 2  // CV for the Output Pulse ON ms
#define CV_ACCESSORY_DECODER_CDU_RECHARGE_TIME 3  // CV for the delay in ms to allow a CDU to recharge
#define CV_ACCESSORY_DECODER_ACTIVE_STATE      4  // CV to define the ON Output State 

#define LEDCONTROL 1

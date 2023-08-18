/*
 * variables.h
 */

struct CVPair
{
  uint16_t  CV;
  uint8_t   Value;
};

// To set the Turnout Addresses for this board you need to change the CV values for CV1 (CV_ACCESSORY_DECODER_ADDRESS_LSB) and 
// CV9 (CV_ACCESSORY_DECODER_ADDRESS_MSB) in the FactoryDefaultCVs structure below. The Turnout Addresses are defined as: 
// Base Turnout Address is: ((((CV9 * 64) + CV1) - 1) * 4) + 1 
// With NUM_TURNOUTS 8 (above) a CV1 = 1 and CV9 = 0, the Turnout Addresses will be 1..8, for CV1 = 2 the Turnout Address is 5..12

CVPair FactoryDefaultCVs [] =
{
  {CV_ACCESSORY_DECODER_ADDRESS_LSB, DEFAULT_ACCESSORY_DECODER_ADDRESS & 0xFF},
  {CV_ACCESSORY_DECODER_ADDRESS_MSB, DEFAULT_ACCESSORY_DECODER_ADDRESS >> 8},
  {CV_ACCESSORY_DECODER_OUTPUT_PULSE_TIME, 50},   // x 10mS for the output pulse duration
  {CV_ACCESSORY_DECODER_CDU_RECHARGE_TIME, 30},   // x 10mS for the CDU recharge delay time
  {CV_ACCESSORY_DECODER_ACTIVE_STATE,    ACTIVE_OUTPUT_STATE},
  {CV_29_CONFIG, CV29_ACCESSORY_DECODER},
};

uint8_t FactoryDefaultCVIndex = 0;

// This is the Pin Mapping to Turnout Addresses with 2 pins per turnout 
// The Pins are defined in Pairs T=Thrown, C=Closed (Digitrax Notation)  

//   base address 1T 1C
byte outputs[] = { 3, 4 };

// for 2 turnouts
//     base address 1T 1C 2T 2C
//byte outputs[] = { 0, 1, 3, 4 };


NmraDcc  Dcc ;
DCC_MSG  Packet ;
PinPulser pinPulser;
uint16_t BaseTurnoutAddress;


#ifdef LEARNING
// for address learning mode
int LEARNINGBUTTON = 0;       // pin 0 on attiny85 usb
int learningMode = LOW;
#endif


#ifdef ENABLE_SERIAL
// buffer to hold serial commands
String readString;
#endif

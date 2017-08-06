/**
 * Configuration.h - Arduino setting and calibration constants
 *
 * 2017-04-04
 * kaktus circuits
 * GNU GPL v.3
 */
 
#ifndef CONFIGURATION_H
#define CONFIGURATION_H

/** 
 * UNCOMMENT THE LINE THAT BELONGS TO YOUR ARDUINO VERSION, COMMENT THE OTHER LINE
 * If you are using Arduino Zero (M0/M0 Pro), the sketch was tested with Arduino.org board.
 */
 
//#define ZERO /* Arduino Zero, M0 and M0 Pro (Cortex M0+, 32-bit) via Native port (USB) */
#define UNO /* Arduino Uno (UNO, 8-bit) */


/* Serial port */

#if (defined(ZERO) && defined(UNO))
  #error Only one type of board can be defined
#elif defined(ZERO)
  #define SerialPort SerialUSB
#elif defined(UNO)
  #define SerialPort Serial
#else
  #error No board defined
#endif


/* Calibration */

#define CALIBRATION_DATE 					"2017-04-21"

#define CURRENTSETTER_SLOPE_HI 				11136956L
#define CURRENTSETTER_OFFSET_HI 			335161L
#define CURRENTSETTER_SLOPE_LO 				1392401L
#define CURRENTSETTER_OFFSET_LO 			41926L

#define AMMETER_SLOPE_HI 					11128866L
#define AMMETER_OFFSET_HI 					4520L
#define AMMETER_SLOPE_LO 					1391831L
#define AMMETER_OFFSET_LO 					222L

#define VOLTSETTER_SLOPE_HI 				32014609L
#define VOLTSETTER_OFFSET_HI 				964494L
#define VOLTSETTER_SLOPE_LO 				5561759L
#define VOLTSETTER_OFFSET_LO 				166788L

#define VOLTMETER_SLOPE_HI 					32027799L
#define VOLTMETER_OFFSET_HI 				-6626L
#define VOLTMETER_SLOPE_LO 					5560901L
#define VOLTMETER_OFFSET_LO 				732L


/* MightyWatt R3 parameters */

#define BOARD_REVISION                   	"3.1.0"
#define VOLTMETER_INPUT_RESISTANCE       	1000000000UL
#define MAXIMUM_POWER                    	75000000UL

/** 
 * UNCOMMENT THE LINE THAT BELONGS TO YOUR ADC TYPE, COMMENT THE OTHER LINE
 */
 
#define ADC_TYPE_ADS1015					        /* 12-bit */
//#define ADC_TYPE_ADS1115					        /* 16-bit */

#if !defined(ADC_TYPE_ADS1015) && !defined(ADC_TYPE_ADS1115)
  #error No ADC defined
#elif (defined(ADC_TYPE_ADS1015) && defined(ADC_TYPE_ADS1115))
  #error Only one type of ADC can be defined
#endif

#endif /* CONFIGURATION_H */
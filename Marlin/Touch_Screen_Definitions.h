/*
 * Touch_Screen_Definitions.h
 * Here we have all the constants related to items in the LCD Screen
 * Created: 14/11/2014 13:16:59
 *  Author: jcalduch
 */ 


#ifndef TOUCH_SCREEN_DEFINITIONS_H_
#define TOUCH_SCREEN_DEFINITIONS_H_

//Userbuttons
#define BUTTON_STORE			12
#define BUTTON_COOLDOWN			83//57
#define BUTTON_AUTOLEVEL		12
#define BUTTON_RESUME			22
#define BUTTON_STOP				20
#define BUTTON_STOP_YES			1
#define BUTTON_SD_SELECTED		15
#define BUTTON_SD_LEFT			14
#define BUTTON_SD_RIGHT			5
#define BUTTON_SPEED_UP			32
#define BUTTON_SPEED_DOWN		33
#define BUTTON_START_PRINTING	100
#define BUTTON_SETUP_BACK		26
#define BUTTON_PAUSE_RESUME		18
#define BUTTON_PREHEAT_PLA		36
#define BUTTON_FAN_DOWN			47
#define BUTTON_FAN_UP			49
#define BUTTON_BED_DOWN			46
#define BUTTON_BED_UP			48


#define BUTTON_SETUP_BACK_BED	44
#define BUTTON_CHANGE_EXTRUDER  63
#define BUTTON_PROVA			64
#define BUTTON_PROVA_PRESS		65
#define BUTTON_CAL_WIZARD		68

//Nozzle temps
#define BUTTON_NOZZLE1_PRINT	29		
#define BUTTON_NOZZLE2_PRINT	28
#define BUTTON_NOZZLE1_TEMP		58
#define BUTTON_NOZZLE2_TEMP		59
#define BUTTON_NOZZLE_DOWN		42
#define BUTTON_NOZZLE_UP		41
#define BUTTON_SETUP_BACK_NOZZLE 43

//Insert FILAMENT
#define BUTTON_REMOVE_FIL		50
#define	BUTTON_PURGE_FIL		62
#define BUTTON_INSERT_FIL		2
#define	BUTTON_FILAMENT_NOZZLE1	75
#define	BUTTON_FILAMENT_NOZZLE2	76
#define	BUTTON_INSERT			52
#define	BUTTON_REMOVE			52
#define	BUTTON_INSERT_BACK		20

//Calibration
#define BUTTON_CAL_EXTRUDERS	67

//Print Settings Buttons
#define BUTTON_PRINT_SETTINGS			16
#define BUTTON_PRINT_SET_BACK			82
#define BUTTON_PRINT_SET_SPEED_UP		73
#define BUTTON_PRINT_SET_SPEED_DOWN		81
#define BUTTON_PRINT_SET_NOZZ1_UP		23
#define BUTTON_PRINT_SET_NOZZ1_DOWN		78
#define BUTTON_PRINT_SET_NOZZ2_UP		25
#define BUTTON_PRINT_SET_NOZZ2_DOWN		80
#define BUTTON_PRINT_SET_BED_UP			24
#define BUTTON_PRINT_SET_BED_DOWN		79

//Preheat Settings Buttons
#define BUTTON_PREHEAT_SET_BACK				91
#define BUTTON_PREHEAT_SET_NOZZ1_UP			84
#define BUTTON_PREHEAT_SET_NOZZ1_DOWN		87
#define BUTTON_PREHEAT_SET_NOZZ2_UP			86
#define BUTTON_PREHEAT_SET_NOZZ2_DOWN		89
#define BUTTON_PREHEAT_SET_BED_UP			85
#define BUTTON_PREHEAT_SET_BED_DOWN			88


//Button Line Select
#define BUTTON_X_LINE_SELECT1			21
#define BUTTON_X_LINE_SELECT2			22	
#define BUTTON_X_LINE_SELECT3			51
#define BUTTON_X_LINE_SELECT4			72
#define BUTTON_X_LINE_SELECT5			96
#define BUTTON_X_LINE_SELECT6			97
#define BUTTON_X_LINE_SELECT7			98
#define BUTTON_X_LINE_SELECT8			99
#define BUTTON_X_LINE_SELECT9			100
#define BUTTON_X_LINE_SELECT10			101


//BED CALIB
#define BUTTON_BED_CALIB_SW2		93
#define BUTTON_BED_CALIB_SW3		94
#define BUTTON_REDO_BED_CALIB		95
#define BUTTON_BED_CALIB_SUCCESS	69

//Winbuttons
#define BUTTON_MOVE_AXIS_X			1
#define BUTTON_MOVE_AXIS_Y			2
#define BUTTON_MOVE_AXIS_Z			7
#define BUTTON_MOVE_AXIS_minusX		0
#define BUTTON_MOVE_AXIS_minusY		3
#define BUTTON_MOVE_AXIS_minusZ		8
#define BUTTON_MOVE_AXIS_HOME		4
#define BUTTON_PREHEAT				15
#define BUTTON_MOVE_AXIS_E			5
#define BUTTON_MOVE_AXIS_minusE		6

#define MENU_PRINT				12
#define MENU_PREHEAT			12
#define MENU_UTILITY			12	
#define MENU_FILAMENT			12
#define MENU_INFO				12
#define MENU_SETTINGS			12

//LedDigits
#define LEDDIGITS_FEEDRATE		18
#define LEDDIGITS_NOZZLE		19
#define LEDDIGITS_BED			20
#define LEDDIGITS_FAN			21


//Userimages
#define USERIMAGE_SCREW1	    3
#define USERIMAGE_SCREW2	    4
#define USERIMAGE_SCREW3	    5

//Strings---------------------------------------------
#define STRING_PRINTING_NOZZ1	0
#define STRING_PRINTING_NOZZ2	34
#define STRING_PRINTING_BED		9
#define STRING_PRINTING_PERCENT	37
#define STRINGS_PRINTING_FEED	36
#define STRINGS_PRINTING_GCODE	2

#define STRING_PRINT_SET_NOZZ1	7
#define STRING_PRINT_SET_NOZZ2	38
#define STRING_PRINT_SET_BED	8
#define STRING_PRINT_SET_PERCENT 39

#define STRING_PREHEAT_SET_NOZZ1 43	
#define STRING_PREHEAT_SET_NOZZ2 44
#define STRING_PREHEAT_SET_BED   45

#define STRING_TEMP_NOZZ1 40
#define STRING_TEMP_NOZZ2 42
#define STRING_TEMP_BED   41

#define STRINGS_NOZZLE1			25
#define STRINGS_NOZZLE2			26
#define STRINGS_BED				27
#define STRING_GPURPOSE_WAIT	22
#define STRING_SCREW1			30
#define STRING_SCREW2			31
#define STRING_SCREW3			32
#define STRING_PREHEATING		33
#define STRING_FILAMENT			11

#define STRING_BED_SCREW1		13
#define STRING_BED_SCREW2		46
#define STRING_BED_SCREW3		47


//Form
#define FORM_SDFILES			2
#define FORM_PAUSE				3
#define FORM_STOP				12
#define FORM_PRINTING			9
#define FORM_START_PRINT		10
#define FORM_PRINTING_SETTINGS	10
#define FORM_WAITING_ROOM		11
#define FORM_FEEDRATE			14
#define FORM_NOZZLE				16
#define FORM_BED				17
#define FORM_FAN				18
#define FORM_TEMPERATURE		22
#define FORM_MAIN_SCREEN		5
#define FORM_SETUP				13
#define FORM_UTILITIES			4
#define FORM_CAL_WIZARD_WAIT	27
#define FORM_CAL_WIZARD_DONE_GOOD 24
#define FORM_CAL_WIZARD_DONE_BAD 25
#define FORM_INSERT_FIL_PREHEAT	 26
#define FORM_SELECT_EXTRUDER	20
#define FORM_INSERT_FIL			19
#define FORM_REMOVE_FIL			19
#define FORM_PURGE_FIL			19
#define FORM_XY_CALIB_SELECT	27
#define FORM_PREHEAT_SETTINGS	29
#define FORM_TEMP_MENU			28
#define FORM_CALIB_BED_SCREW1	30
#define FORM_CALIB_BED_SCREW2	31
#define FORM_CALIB_BED_SCREW3	32
#endif 
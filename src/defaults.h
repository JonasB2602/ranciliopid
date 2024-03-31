/**
 * @file defaults.h
 *
 * @brief Default values for system parameters
 *
 */

#pragma once

#include "SysPara.h"
#include <stdint.h>

// Functions
int factoryReset(void);
int readSysParamsFromStorage(void);
int writeSysParamsToStorage(void);

// system parameter defaults and ranges
#define STR_HELPER(x) #x
#define STR(x)        STR_HELPER(x)

// default parameters
#define SETPOINT                  95     // brew temperature setpoint
#define TEMPOFFSET                0      // brew temperature setpoint
#define STEAMSETPOINT             120    // steam temperature setpoint
#define SCALE_CALIBRATION_FACTOR  1.00   // Raw data is divided by this value to convert to readable data
#define SCALE2_CALIBRATION_FACTOR 1.00   // Raw data is divided by this value to convert to readable data
#define SCALE_KNOWN_WEIGHT        267.00 // Calibration weight for scale (weight of the tray)
#define AGGKP                     62     // PID Kp (regular phase)
#define AGGTN                     52     // PID Tn (regular phase)
#define AGGTV                     11.5   // PID Tv (regular phase)
#define AGGIMAX                   55     // PID Integrator Max (regular phase)
#define STARTKP                   45     // PID Kp (coldstart phase)
#define STARTTN                   130    // PID Tn (coldstart phase)
#define STEAMKP                   150    // PID kp (steam phase)
#define AGGBKP                    50     // PID Kp (brew detection phase)
#define AGGBTN                    0      // PID Tn (brew detection phase)
#define AGGBTV                    20     // PID Tv (brew detection phase)
#define BREW_TIME                 25     // brew time in seconds (only used if pump is being controlled)
#define BREW_SW_TIME              25     // keep brew PID params for this many seconds after detection (only for software BD)
#define BREW_PID_DELAY            10     // delay until enabling PID controller during brew (no heating during this time)
#define BD_SENSITIVITY            120    // brew detection sensitivity, be careful: if too low, then there is the risk of wrong brew detection and rising temperature
#define PRE_INFUSION_TIME         5      // pre-infusion time in seconds
#define PRE_INFUSION_PAUSE_TIME   0      // pre-infusion pause time in seconds
#define SCALE_WEIGHTSETPOINT      50     // Target weight in grams
#define WIFI_CREDENTIALS_SAVED    0      // Flag if wifi setup is done. 0: not set up, 1: credentials set up via wifi manager
#define STANDBY_MODE_ON           0      // Standby mode off by default
#define STANDBY_MODE_TIME         30     // Time in minutes until the heater is turned off
#define AGGKP2 50                   // PID Kp (regular phase)
#define AGGTN2 1000                  // PID Tn (regular phase)
#define AGGTV2 2                   // PID Tv (regular phase)
#define PUMPPOWER 30                // Pump Power during Preinfusion
#define ATIME1 5000                 // 1. Time for Pressure SetPoint
#define ATIME2 10000                // 2. Time for Pressure SetPoint
#define ATIME3 15000                // 3. Time for Pressure SetPoint
#define ATIME4 35000                // 4. Time for Pressure SetPoint
#define APRESSURE1 3                // 1. Pressure SetPoint
#define APRESSURE2 8                // 2. Pressure SetPoint
#define APRESSURE3 9                // 3. Pressure SetPoint
#define APRESSURE4 6                // 4. Pressure SetPoint

#define PID_KP_START_MIN       0
#define PID_KP_START_MAX       999
#define PID_TN_START_MIN       0
#define PID_TN_START_MAX       999
#define PID_KP_REGULAR_MIN     0
#define PID_KP_REGULAR_MAX     999
#define PID_TN_REGULAR_MIN     0
#define PID_TN_REGULAR_MAX     999
#define PID_TV_REGULAR_MIN     0
#define PID_TV_REGULAR_MAX     999
#define PID_I_MAX_REGULAR_MIN  0
#define PID_I_MAX_REGULAR_MAX  999
#define PID_KP_BD_MIN          0
#define PID_KP_BD_MAX          999
#define PID_TN_BD_MIN          0
#define PID_TN_BD_MAX          999
#define PID_TV_BD_MIN          0
#define PID_TV_BD_MAX          999
#define BREW_SETPOINT_MIN      20
#define BREW_SETPOINT_MAX      110
#define STEAM_SETPOINT_MIN     100
#define STEAM_SETPOINT_MAX     140
#define BREW_TEMP_OFFSET_MIN   0
#define BREW_TEMP_OFFSET_MAX   20
#define BREW_TEMP_TIME_MIN     1
#define BREW_TEMP_TIME_MAX     180
#define BREW_TIME_MIN          1
#define BREW_TIME_MAX          180
#define BREW_PID_DELAY_MIN     0
#define BREW_PID_DELAY_MAX     60
#define BREW_SW_TIME_MIN       1
#define BREW_SW_TIME_MAX       180
#define BD_THRESHOLD_MIN       0
#define BD_THRESHOLD_MAX       999
#define PRE_INFUSION_TIME_MIN  0
#define PRE_INFUSION_TIME_MAX  60
#define PRE_INFUSION_PAUSE_MIN 0
#define PRE_INFUSION_PAUSE_MAX 60
#define WEIGHTSETPOINT_MIN     0
#define WEIGHTSETPOINT_MAX     500
#define PID_KP_STEAM_MIN       0
#define PID_KP_STEAM_MAX       500
#define STANDBY_MODE_TIME_MIN  30
#define STANDBY_MODE_TIME_MAX  120

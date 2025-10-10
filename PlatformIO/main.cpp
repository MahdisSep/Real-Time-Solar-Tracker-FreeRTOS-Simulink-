/*
 * File: rtwtypes.h
 *
 * Code generated for Simulink model 'SolarTrackingModel'.
 *
 * Model version                  : 3.2
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Thu Aug 21 18:53:48 2025
 */

 #ifndef RTWTYPES_H
 #define RTWTYPES_H
 
 /* Logical type definitions */
 #if (!defined(__cplusplus))
 #ifndef false
 #define false                          (0U)
 #endif
 
 #ifndef true
 #define true                           (1U)
 #endif
 #endif
 
 /*=======================================================================*
  * Target hardware information
  *   Device type: Atmel->AVR
  *   Number of bits:     char:   8    short:   16    int:  16
  *                       long:  32
  *                       native word size:   8
  *   Byte ordering: LittleEndian
  *   Signed integer division rounds to: Zero
  *   Shift right on a signed integer as arithmetic shift: on
  *=======================================================================*/
 
 /*=======================================================================*
  * Fixed width word size data types:                                     *
  *   int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *
  *   uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *
  *   realdr3_inner2_T, real64_T           - 32 and 64 bit floating point numbers *
  *=======================================================================*/
 typedef signed char int8_T;
 typedef unsigned char uint8_T;
 typedef int int16_T;
 typedef unsigned int uint16_T;
 typedef long int32_T;
 typedef unsigned long uint32_T;
 typedef float realdr3_inner2_T;
 typedef double real64_T;
 
 /*===========================================================================*
  * Generic type definitions: boolean_T, char_T, byte_T, int_T, uint_T,       *
  *                           real_T, time_T, ulong_T.                        *
  *===========================================================================*/
 typedef double real_T;
 typedef double time_T;
 typedef unsigned char boolean_T;
 typedef int int_T;
 typedef unsigned int uint_T;
 typedef unsigned long ulong_T;
 typedef char char_T;
 typedef unsigned char uchar_T;
 typedef char_T byte_T;
 
 /*===========================================================================*
  * Complex number type definitions                                           *
  *===========================================================================*/
 #define CREAL_T
 
 typedef struct {
   realdr3_inner2_T re;
   realdr3_inner2_T im;
 } crealdr3_inner2_T;
 
 typedef struct {
   real64_T re;
   real64_T im;
 } creal64_T;
 
 typedef struct {
   real_T re;
   real_T im;
 } creal_T;
 
 #define CINT8_T
 
 typedef struct {
   int8_T re;
   int8_T im;
 } cint8_T;
 
 #define CUINT8_T
 
 typedef struct {
   uint8_T re;
   uint8_T im;
 } cuint8_T;
 
 #define CINT16_T
 
 typedef struct {
   int16_T re;
   int16_T im;
 } cint16_T;
 
 #define CUINT16_T
 
 typedef struct {
   uint16_T re;
   uint16_T im;
 } cuint16_T;
 
 #define CINT32_T
 
 typedef struct {
   int32_T re;
   int32_T im;
 } cint32_T;
 
 #define CUINT32_T
 
 typedef struct {
   uint32_T re;
   uint32_T im;
 } cuint32_T;
 
 /*=======================================================================*
  * Min and Max:                                                          *
  *   int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *
  *   uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *
  *=======================================================================*/
 #define MAX_int8_T                     ((int8_T)(127))
 #define MIN_int8_T                     ((int8_T)(-128))
 #define MAX_uint8_T                    ((uint8_T)(255U))
 #define MAX_int16_T                    ((int16_T)(32767))
 #define MIN_int16_T                    ((int16_T)(-32768))
 #define MAX_uint16_T                   ((uint16_T)(65535U))
 #define MAX_int32_T                    ((int32_T)(2147483647L))
 #define MIN_int32_T                    ((int32_T)(-2147483647L-1L))
 #define MAX_uint32_T                   ((uint32_T)(0xFFFFFFFFUL))
 
 /* Block D-Work pointer type */
 typedef void * pointer_T;
 
 #endif                                 /* RTWTYPES_H */
 
 /*
  * File trailer for generated code.
  *
  * [EOF]
  */
 
 /*
  * File: SolarTrackingModel.h
  *
  * Code generated for Simulink model 'SolarTrackingModel'.
  *
  * Model version                  : 3.3
  * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
  * C/C++ source code generated on : Thu Aug 21 19:00:49 2025
  *
  * Target selection: ert.tlc
  * Embedded hardware selection: Atmel->AVR
  * Code generation objectives: Unspecified
  * Validation result: Not run
  */
 
 #ifndef RTW_HEADER_SolarTrackingModel_h_
 #define RTW_HEADER_SolarTrackingModel_h_
 #ifndef SolarTrackingModel_COMMON_INCLUDES_
 #define SolarTrackingModel_COMMON_INCLUDES_
 
 #endif                                 /* SolarTrackingModel_COMMON_INCLUDES_ */
 
 
 #ifndef RTW_HEADER_SolarTrackingModel_types_h_
 #define RTW_HEADER_SolarTrackingModel_types_h_
 #endif                              /* RTW_HEADER_SolarTrackingModel_types_h_ */
 
 
 /* Block signals and states (default storage) for system '<Root>' */
 typedef struct {
   real_T LDR4;                         /* '<Root>/Chart' */
   real_T LDR3;                         /* '<Root>/Chart' */
   real_T LDR2;                         /* '<Root>/Chart' */
   real_T energy;                       /* '<Root>/Chart' */
   real_T servoX;                       /* '<Root>/Chart' */
   real_T LDR1;                         /* '<Root>/Chart' */
   real_T t;                            /* '<Root>/Chart' */
   real_T servoY;                       /* '<Root>/Chart' */
   real_T temp;                         /* '<Root>/Chart' */
   real_T hum;                          /* '<Root>/Chart' */
   uint8_T is_EnergyLevel;              /* '<Root>/Chart' */
   uint8_T is_DailyCycle;               /* '<Root>/Chart' */
   uint8_T is_EnvMonitoring;            /* '<Root>/Chart' */
   uint8_T is_Safe;                     /* '<Root>/Chart' */
   uint8_T is_active_c3_SolarTrackingModel;/* '<Root>/Chart' */
 } DW_SolarTrackingModel_T;
 
 /* Block signals and states (default storage) */
 extern DW_SolarTrackingModel_T SolarTrackingModel_DW;
 
 /* Model entry point functions */
 extern void SolarPanelModel_initialize(void);
 extern void SolarPanelModel_step(void);
 extern void SolarPanelModel_terminate(void);
 extern volatile boolean_T stopRequested;
 extern volatile boolean_T runModel;
 
 /*-
  * The generated code includes comments that allow you to trace directly
  * back to the appropriate location in the model.  The basic format
  * is <system>/block_name, where system is the system number (uniquely
  * assigned by Simulink) and block_name is the name of the block.
  *
  * Use the MATLAB hilite_system command to trace the generated code back
  * to the model.  For example,
  *
  * hilite_system('<S3>')    - opens system 3
  * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
  *
  * Here is the system hierarchy for this model
  *
  * '<Root>' : 'SolarTrackingModel'
  * '<S1>'   : 'SolarTrackingModel/Chart'
  */
 #endif                                 /* RTW_HEADER_SolarTrackingModel_h_ */
 
 /*
  * File trailer for generated code.
  *
  * [EOF]
  */
 
 
 
 /*
  * File: SolarTrackingModel.c
  *
  * Code generated for Simulink model 'SolarTrackingModel'.
  *
  * Model version                  : 3.3
  * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
  * C/C++ source code generated on : Thu Aug 21 19:00:49 2025
  *
  * Target selection: ert.tlc
  * Embedded hardware selection: Atmel->AVR
  * Code generation objectives: Unspecified
  * Validation result: Not run
  */
 
 
 
 /* Named constants for Chart: '<Root>/Chart' */
 #define SolarTrackin_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
 #define SolarTrackingModel_IN_Danger   ((uint8_T)1U)
 #define SolarTrackingModel_IN_Day      ((uint8_T)1U)
 #define SolarTrackingModel_IN_Idle     ((uint8_T)1U)
 #define SolarTrackingModel_IN_LowEnergy ((uint8_T)1U)
 #define SolarTrackingModel_IN_MoveDown ((uint8_T)2U)
 #define SolarTrackingModel_IN_MoveLeft ((uint8_T)3U)
 #define SolarTrackingModel_IN_MoveRight ((uint8_T)4U)
 #define SolarTrackingModel_IN_MoveUp   ((uint8_T)5U)
 #define SolarTrackingModel_IN_Night    ((uint8_T)2U)
 #define SolarTrackingModel_IN_Normal   ((uint8_T)2U)
 #define SolarTrackingModel_IN_Safe     ((uint8_T)2U)
 
 /* Block signals and states (default storage) */
 DW_SolarTrackingModel_T SolarTrackingModel_DW;
 
 /* Model step function */
 void SolarPanelModel_step(void)
 {
   /* Chart: '<Root>/Chart' */
   if (SolarTrackingModel_DW.is_active_c3_SolarTrackingModel == 0U) {
     SolarTrackingModel_DW.is_active_c3_SolarTrackingModel = 1U;
     SolarTrackingModel_DW.is_DailyCycle = SolarTrackingModel_IN_Day;
     SolarTrackingModel_DW.energy = SolarTrackingModel_DW.energy + 10.0 <= 100.0 ?
       SolarTrackingModel_DW.energy + 10.0 : 100.0;
     SolarTrackingModel_DW.is_EnergyLevel = SolarTrackingModel_IN_Normal;
     SolarTrackingModel_DW.is_EnvMonitoring = SolarTrackingModel_IN_Safe;
     SolarTrackingModel_DW.is_Safe = SolarTrackingModel_IN_Idle;
   } else {
     if (SolarTrackingModel_DW.is_DailyCycle == SolarTrackingModel_IN_Day) {
       if (SolarTrackingModel_DW.t < 0.0) {
         SolarTrackingModel_DW.is_DailyCycle = SolarTrackingModel_IN_Night;
         SolarTrackingModel_DW.energy = SolarTrackingModel_DW.energy / 1.3 >= 0.0
           ? SolarTrackingModel_DW.energy / 1.3 : 0.0;
       } else {
         SolarTrackingModel_DW.energy = SolarTrackingModel_DW.energy + 10.0 <=
           100.0 ? SolarTrackingModel_DW.energy + 10.0 : 100.0;
       }
 
       /* case IN_Night: */
     } else if (SolarTrackingModel_DW.t >= 0.0) {
       SolarTrackingModel_DW.is_DailyCycle = SolarTrackingModel_IN_Day;
       SolarTrackingModel_DW.energy = SolarTrackingModel_DW.energy + 10.0 <=
         100.0 ? SolarTrackingModel_DW.energy + 10.0 : 100.0;
     } else {
       SolarTrackingModel_DW.energy = SolarTrackingModel_DW.energy / 1.3 >= 0.0 ?
         SolarTrackingModel_DW.energy / 1.3 : 0.0;
     }
 
     if (SolarTrackingModel_DW.is_EnergyLevel == SolarTrackingModel_IN_LowEnergy)
     {
       if (SolarTrackingModel_DW.energy >= 20.0) {
         SolarTrackingModel_DW.is_EnergyLevel = SolarTrackingModel_IN_Normal;
       }
 
       /* case IN_Normal: */
     } else if (SolarTrackingModel_DW.energy < 20.0) {
       SolarTrackingModel_DW.is_EnergyLevel = SolarTrackingModel_IN_LowEnergy;
     }
 
     if (SolarTrackingModel_DW.is_EnvMonitoring == SolarTrackingModel_IN_Danger)
     {
       if ((SolarTrackingModel_DW.temp <= 40.0) && (SolarTrackingModel_DW.hum <=
            80.0)) {
         SolarTrackingModel_DW.is_EnvMonitoring = SolarTrackingModel_IN_Safe;
         SolarTrackingModel_DW.is_Safe = SolarTrackingModel_IN_Idle;
       } else {
         SolarTrackingModel_DW.servoX = 90.0;
         SolarTrackingModel_DW.servoY = 90.0;
       }
 
       /* case IN_Safe: */
     } else if ((SolarTrackingModel_DW.temp > 40.0) || (SolarTrackingModel_DW.hum
                 > 80.0)) {
       SolarTrackingModel_DW.is_Safe = SolarTrackin_IN_NO_ACTIVE_CHILD;
       SolarTrackingModel_DW.is_EnvMonitoring = SolarTrackingModel_IN_Danger;
       SolarTrackingModel_DW.servoX = 90.0;
       SolarTrackingModel_DW.servoY = 90.0;
     } else {
       switch (SolarTrackingModel_DW.is_Safe) {
        case SolarTrackingModel_IN_Idle:
         if ((SolarTrackingModel_DW.LDR4 > SolarTrackingModel_DW.LDR1) &&
             (SolarTrackingModel_DW.LDR4 > SolarTrackingModel_DW.LDR2) &&
             (SolarTrackingModel_DW.LDR4 > SolarTrackingModel_DW.LDR3)) {
           SolarTrackingModel_DW.is_Safe = SolarTrackingModel_IN_MoveRight;
           SolarTrackingModel_DW.servoX++;
         } else if ((SolarTrackingModel_DW.LDR2 > SolarTrackingModel_DW.LDR1) &&
                    (SolarTrackingModel_DW.LDR2 > SolarTrackingModel_DW.LDR3) &&
                    (SolarTrackingModel_DW.LDR2 > SolarTrackingModel_DW.LDR4)) {
           SolarTrackingModel_DW.is_Safe = SolarTrackingModel_IN_MoveLeft;
           SolarTrackingModel_DW.servoX--;
         } else if ((SolarTrackingModel_DW.LDR1 > SolarTrackingModel_DW.LDR2) &&
                    (SolarTrackingModel_DW.LDR1 > SolarTrackingModel_DW.LDR3) &&
                    (SolarTrackingModel_DW.LDR1 > SolarTrackingModel_DW.LDR4)) {
           SolarTrackingModel_DW.is_Safe = SolarTrackingModel_IN_MoveUp;
           SolarTrackingModel_DW.servoY++;
         } else if ((SolarTrackingModel_DW.LDR3 > SolarTrackingModel_DW.LDR1) &&
                    (SolarTrackingModel_DW.LDR3 > SolarTrackingModel_DW.LDR2) &&
                    (SolarTrackingModel_DW.LDR3 > SolarTrackingModel_DW.LDR4)) {
           SolarTrackingModel_DW.is_Safe = SolarTrackingModel_IN_MoveDown;
           SolarTrackingModel_DW.servoY--;
         }
         break;
 
        case SolarTrackingModel_IN_MoveDown:
         if ((SolarTrackingModel_DW.LDR3 <= SolarTrackingModel_DW.LDR2) ||
             (SolarTrackingModel_DW.LDR3 <= SolarTrackingModel_DW.LDR1) ||
             (SolarTrackingModel_DW.LDR3 <= SolarTrackingModel_DW.LDR4)) {
           SolarTrackingModel_DW.is_Safe = SolarTrackingModel_IN_Idle;
         } else {
           SolarTrackingModel_DW.servoY--;
         }
         break;
 
        case SolarTrackingModel_IN_MoveLeft:
         if ((SolarTrackingModel_DW.LDR2 <= SolarTrackingModel_DW.LDR1) ||
             (SolarTrackingModel_DW.LDR2 <= SolarTrackingModel_DW.LDR3) ||
             (SolarTrackingModel_DW.LDR2 <= SolarTrackingModel_DW.LDR4)) {
           SolarTrackingModel_DW.is_Safe = SolarTrackingModel_IN_Idle;
         } else {
           SolarTrackingModel_DW.servoX--;
         }
         break;
 
        case SolarTrackingModel_IN_MoveRight:
         if ((SolarTrackingModel_DW.LDR4 <= SolarTrackingModel_DW.LDR2) ||
             (SolarTrackingModel_DW.LDR4 <= SolarTrackingModel_DW.LDR3) ||
             (SolarTrackingModel_DW.LDR4 <= SolarTrackingModel_DW.LDR1)) {
           SolarTrackingModel_DW.is_Safe = SolarTrackingModel_IN_Idle;
         } else {
           SolarTrackingModel_DW.servoX++;
         }
         break;
 
        default:
         /* case IN_MoveUp: */
         if ((SolarTrackingModel_DW.LDR1 <= SolarTrackingModel_DW.LDR2) ||
             (SolarTrackingModel_DW.LDR1 <= SolarTrackingModel_DW.LDR3) ||
             (SolarTrackingModel_DW.LDR1 <= SolarTrackingModel_DW.LDR4)) {
           SolarTrackingModel_DW.is_Safe = SolarTrackingModel_IN_Idle;
         } else {
           SolarTrackingModel_DW.servoY++;
         }
         break;
       }
     }
   }
 
   /* End of Chart: '<Root>/Chart' */
 }
 
 /* Model initialize function */
 void SolarPanelModel_initialize(void)
 {
   /* SystemInitialize for Chart: '<Root>/Chart' */
   SolarTrackingModel_DW.energy = 1.0;
 }
 
 /* Model terminate function */
 void SolarPanelModel_terminate(void)
 {
   /* (no terminate code required) */
 }
 
#include <Arduino.h>
#include <Servo.h>
#include <LiquidCrystal.h>
#include <Arduino_FreeRTOS.h>
#include <task.h>

// Pins 
const uint8_t PIN_X_SERVO = 9;    
const uint8_t PIN_Y_SERVO = 10; 
const uint8_t PIN_LDR1 = A0;
const uint8_t PIN_LDR2 = A1;
const uint8_t PIN_LDR3 = A2;
const uint8_t PIN_LDR4 = A3;
const uint8_t PIN_POTANSIOMETER = A4; 
const uint8_t PIN_TEMP_HEAT = A5; 
const uint8_t PIN_LED = 13;   

// LCD pins: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


extern DW_SolarTrackingModel_T SolarTrackingModel_DW;
extern void SolarPanelModel_initialize(void);
extern void SolarPanelModel_step(void);
extern void SolarPanelModel_terminate(void);

volatile boolean_T stopRequested = false;
volatile boolean_T runModel = true;

// Shared outputs
static volatile double  shared_energy = 0.0;
static volatile uint8_t shared_isSafe = 1; 
static volatile int     shared_angleX = 90;
static volatile int     shared_angleY = 90;
  
Servo servoX, servoY;

static inline int limitAngle(double angle) {
  if (angle < 0)   return 0;
  if (angle > 180) return 180;
  return (int)angle;
}

void TaskSunTrack(void *pvParams);   
void TaskEnergy(void *pvParams);     
void TaskLCD(void *pvParams);        

void setup() {
  Serial.begin(9600);

  // LCD init
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0,0); lcd.print("Solar Panel");
  lcd.setCursor(0,1); lcd.print("Initializing...");

  servoX.attach(PIN_X_SERVO);
  servoY.attach(PIN_Y_SERVO);

  pinMode(PIN_LED, OUTPUT);

  // Initializing SimulinkW
  SolarPanelModel_initialize();
  SolarTrackingModel_DW.temp = 30.0;
  SolarTrackingModel_DW.hum = 45.0;
  SolarTrackingModel_DW.servoX = 90.0;
  SolarTrackingModel_DW.servoY = 90.0;
  SolarTrackingModel_DW.energy = 1.0;  
  servoX.write(90);
  servoY.write(90);

  xTaskCreate(TaskSunTrack, "SunTrack", 160, NULL, 3, NULL);
  xTaskCreate(TaskEnergy,   "Energy",   120, NULL, 2, NULL);
  xTaskCreate(TaskLCD,      "LCD",      120, NULL, 1, NULL); 
}

void loop() {
  
}

void TaskSunTrack(void *pvParams) {
  (void) pvParams;
  const TickType_t period = pdMS_TO_TICKS(50);
  TickType_t last = xTaskGetTickCount();

  for (;;) {
    // Read input from sensors
    int ldr1_inner = analogRead(PIN_LDR1);
    int ldr2_inner = analogRead(PIN_LDR2);
    int ldr3_inner = analogRead(PIN_LDR3);
    int ldr4_inner = analogRead(PIN_LDR4);
    int potansio  = analogRead(PIN_POTANSIOMETER);
    int temp_heat_inner = analogRead(PIN_TEMP_HEAT) / 10; 

    // set model inputs
    SolarTrackingModel_DW.temp = (double)temp_heat_inner;
    SolarTrackingModel_DW.hum  = (double)temp_heat_inner;
    SolarTrackingModel_DW.LDR1 = (double)ldr1_inner;
    SolarTrackingModel_DW.LDR2 = (double)ldr2_inner;
    SolarTrackingModel_DW.LDR3 = (double)ldr3_inner;
    SolarTrackingModel_DW.LDR4 = (double)ldr4_inner;
  
    double t_norm = ((double)potansio / 1023.0) * 2.0 - 1.0; // Normalize potentiometer reading (0–1023) to range [-1, 1] 
    SolarTrackingModel_DW.t = t_norm;

    SolarPanelModel_step(); // Call simulink model

    int angleX = limitAngle(SolarTrackingModel_DW.servoX);
    int angleY = limitAngle(SolarTrackingModel_DW.servoY);
    servoX.write(angleX);
    servoY.write(angleY);

    // Copy latest values into shared variables inside a critical section
    taskENTER_CRITICAL();
      shared_angleX = angleX;
      shared_angleY = angleY;
      shared_energy = SolarTrackingModel_DW.energy;
      shared_isSafe = SolarTrackingModel_DW.is_Safe;
    taskEXIT_CRITICAL();
    vTaskDelayUntil(&last, period);
  }
}

void TaskEnergy(void *pvParams) {
  (void) pvParams;
  for (;;) {
    double Energy_inner;
    taskENTER_CRITICAL();
      Energy_inner = shared_energy;
    taskEXIT_CRITICAL();

    if (Energy_inner < 18.0) 
      digitalWrite(PIN_LED, HIGH);
    else          
      digitalWrite(PIN_LED, LOW);

    vTaskDelay(pdMS_TO_TICKS(200));
  }
}

void TaskLCD(void *pvParams) {
  (void) pvParams;
  for (;;) {
    double Energy_inner;
    int x_inner, y_inner;
    uint8_t safeFlag;
    

    taskENTER_CRITICAL();
      safeFlag = shared_isSafe;    
      Energy_inner  = shared_energy;
      x_inner = shared_angleX;
      y_inner = shared_angleY;
    taskEXIT_CRITICAL();

    // Handle angles
    lcd.setCursor(0,0);
    if (safeFlag == 0) {
      lcd.print("   DANGER   ");
    } else {
     
      lcd.print("X angle:");
      if (x_inner < 100) lcd.print(' ');
      if (x_inner < 10)  lcd.print(' ');
      lcd.print(x_inner);
      lcd.print("  Y angle:");
      if (y_inner < 100) lcd.print(' ');
      if (y_inner < 10)  lcd.print(' ');
      lcd.print(y_inner);
      lcd.print("  ");
    }

    // Handle Energy
    lcd.setCursor(0,1);
    lcd.print("Energy:");
    int energyi = (int)(Energy_inner + 0.5);
    if (energyi < 100) lcd.print(' ');
    if (energyi < 10)  lcd.print(' ');
    lcd.print(energyi);
    lcd.print("           ");

    vTaskDelay(pdMS_TO_TICKS(120));
  }
}

/* mbed Microcontroller Library
 * Copyright (c) 2013 Nordic Semiconductor
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    PIN_INPUT,
    PIN_OUTPUT
} PinDirection;

#define PORT_SHIFT  3

typedef enum {
    // Not connected
    NC = (int)0xFFFFFFFF,

    //MCU PINS
    P0_0  = 0,
    P0_1  = 1,
    P0_2  = 2,
    P0_3  = 3,
    P0_4  = 4,
    P0_5  = 5,
    P0_6  = 6,
    P0_7  = 7,
    P0_8  = 8,
    P0_9  = 9,
    P0_10 = 10,
    P0_11 = 11,
    P0_12 = 12,
    P0_13 = 13,
    P0_14 = 14,
    P0_15 = 15,
    P0_16 = 16,
    P0_17 = 17,
    P0_18 = 18,
    P0_19 = 19,
    P0_20 = 20,
    P0_21 = 21,
    P0_22 = 22,
    P0_23 = 23,
    P0_24 = 24,
    P0_25 = 25,
    P0_26 = 26,
    P0_27 = 27,
    P0_28 = 28,
    P0_29 = 29,
    P0_30 = 30,  
   
    //BUTTON A
    BUTTON_A = P0_17,
    //BUTTON B
    BUTTON_B = P0_26,

    //TARGET RESET
    TGT_NRESET = P0_19,

    //MASTER OUT SLAVE IN
    MOSI = P0_21,

    //MASTER IN SLAVE OUT
    MISO = P0_22,

    //SERIAL CLOCK
    SCK = P0_23,

    // RX AND TX PINS
    TGT_TX = P0_24,
    TGT_RX = P0_25,


    // mBed interface Pins
    USBTX = TGT_TX,
    USBRX = TGT_RX,

    //SDA (SERIAL DATA LINE)
    I2C_SDA0 = P0_30,

    //SCL (SERIAL CLOCK LINE)
    I2C_SCL0 = P0_0,

    //SINOBIT  CONNECTOR PINS

    /*
    -----------
    GND     5V
    P0      P1
    P2      P3
    P4      P5
    P6      P7
    P8      P9  
    GND     GND
    P10     P11
    P12     P13
    P14     P15
    P16     P19
    P18     P20
    GND     3.3V
    -----------
    */

    P0 = P0_3,      
    P1 = P0_2,
    P2 = P0_1,      
    P3 = P0_4,
    P4 = P0_5,      
    P5 = BUTTON_A,
    P6 = P0_12,      
    P7 = P0_11,
    P8 = P0_18,      
    P9 = P0_10, 
    P10 = P0_6,     
    P11 = BUTTON_B,
    P12 = P0_20,     
    P13 = SCK,
    P14 = MISO,     
    P15 = MOSI,
    P16 = P0_16,     
    P19 = I2C_SCL0,
    P18 = P0_13,     
    P20 = I2C_SDA0,
   


 
    //PADS
    PAD0 = P0_3,
    PAD1 = P0_2,
    PAD2 = P0_1,
    PAD3 = P0_4,
    PAD4 = P0_5,
    PAD5 = P0_6,
   
    

   
    
    //ACCEL INTERRUPT PINS (MMA8653FC)
    ACCEL_INT2 = P0_27,
    ACCEL_INT1 = P0_28,

    //MAGENETOMETER INTERRUPT PIN (MAG3110)
    MAG_INT1 = P0_29,

  

    RX_PIN_NUMBER = TGT_RX,
    TX_PIN_NUMBER = TGT_TX,
    CTS_PIN_NUMBER = 31, //unused  ** REQUIRES A PROPER FIX **
    RTS_PIN_NUMBER = 31, //unused 

    // LEDS ?
    LED1 = NC,
    LED2 = NC,
    LED3 = NC,
    
    // LED Matrix HT1632C
    LED_MOSI = MOSI,
    LED_SCK = SCK,
    LED_MISO = MISO,
    LED_CS = P0_16,

    //J1
    J1_1 = NC,
    J1_2 = NC,
    J1_3 = I2C_SDA0,
    J1_4 = I2C_SCL0,

    //J2
    J2_1 = NC,
    J2_2 = NC,
    J2_3 = P0_2,
    J2_4 = P0_1,
     

} PinName;

typedef enum {
    PullNone = 0,
    PullDown = 1,
    PullUp = 3,
    PullDefault = PullUp
} PinMode;

#ifdef __cplusplus
}
#endif

#endif

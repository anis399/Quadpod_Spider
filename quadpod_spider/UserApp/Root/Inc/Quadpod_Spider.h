/**********************************************************************************************************************
               ░█████╗░███╗░░██╗██╗░██████╗  ░██████╗██╗░░██╗░█████╗░██╗░░██╗██╗░░██╗░█████╗░██╗░░░██╗██████╗░
               ██╔══██╗████╗░██║██║██╔════╝  ██╔════╝██║░░██║██╔══██╗██║░██╔╝██║░██╔╝██╔══██╗██║░░░██║██╔══██╗
               ███████║██╔██╗██║██║╚█████╗░  ╚█████╗░███████║███████║█████═╝░█████═╝░██║░░██║██║░░░██║██████╔╝
               ██╔══██║██║╚████║██║░╚═══██╗  ░╚═══██╗██╔══██║██╔══██║██╔═██╗░██╔═██╗░██║░░██║██║░░░██║██╔══██╗
               ██║░░██║██║░╚███║██║██████╔╝  ██████╔╝██║░░██║██║░░██║██║░╚██╗██║░╚██╗╚█████╔╝╚██████╔╝██║░░██║
               ╚═╝░░╚═╝╚═╝░░╚══╝╚═╝╚═════╝░  ╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝░╚════╝░░╚═════╝░╚═╝░░╚═╝

 * File Quadpod_Spider.h
 *
 *  Created on: Jan 24, 2023
 *  Author: Anis Shakkour
 *  Email:  anis.shakkour399@gmail.com
 ******************************************************************************/
/******************************************************************************
 * Description  : This is the projects configure header where user may enable/disable
 *                settings
 *
 * Usage        :
 * Known Errors :
 * ToDo         :
 *****************************************************************************/

/******************************************************************************
 * Multiple include protection
 *****************************************************************************/
#ifndef QUADPOD_SPIDER_H_
#define QUADPOD_SPIDER_H_

/******************************************************************************
 * Includes
 *****************************************************************************/

/******************************************************************************
 * Macros
 *****************************************************************************/

/******************************************************************************
 * Defines
 *****************************************************************************/
/*------------------------------- DEBUG ON ----------------------------------*/
#define DEBUG_PWM                     1
//#define DEBUG_ON_I2C_DRIVER         1
//#define DEBUG_ALPHANUMERIC_DISPLAY  1
//#define DEBUG_SPIDERARM_ANGLES        1

/******************************************************************************
 * Typedef & Enums
 *****************************************************************************/
typedef enum
{
  FuncSuccess   ,
  FuncFailed    ,

}RetVal_t;

/******************************************************************************
 * Interface Functions
 *****************************************************************************/

/******************************************************************************
 * END
 *****************************************************************************/
#endif /* QUADPOD_SPIDER_H_ */

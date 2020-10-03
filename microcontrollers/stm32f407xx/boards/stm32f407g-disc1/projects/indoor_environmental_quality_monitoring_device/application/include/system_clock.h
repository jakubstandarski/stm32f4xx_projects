/*
 * Author: Jakub Standarski
 * Email: jstand.jakub.standarski@gmail.com
 *
 * Date: 29.09.2020
 *
 */

#ifndef SYSTEM_CLOCK_H
    #define SYSTEM_CLOCK_H

/*****************************************************************************/
/* HEADERS */
/*****************************************************************************/

#include "stm32f4xx_ll_bus.h"



/*****************************************************************************/
/* PUBLIC DEFINES */
/*****************************************************************************/

#define SYSTEM_CLOCK_HSI_VALUE    (uint32_t)16000000



/*****************************************************************************/
/* PUBLIC FUNCTIONS PROTOTYPES */
/*****************************************************************************/

void system_clock_init(void);
void system_clock_systick_config_init(void);

#endif /* SYSTEM_CLOCK_H */

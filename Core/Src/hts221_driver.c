/*
 * hts221_driver.c
 *
 *  Created on: Feb 11, 2026
 *      Author: bossx918spy
 */
#include "hts221_driver.h"
#include "stm32l475e_iot01_hsensor.h"
#include "stm32l475e_iot01_tsensor.h"

bool HTS221_Init(void)
{
    if (BSP_HSENSOR_Init() != HSENSOR_OK)
        return false;

    if (BSP_TSENSOR_Init() != TSENSOR_OK)
        return false;

    return true;
}

bool HTS221_Read(hts221_data_t *data)
{
    if (data == NULL)
        return false;

    data->humidity_percent = BSP_HSENSOR_ReadHumidity();
    data->temperature_c    = BSP_TSENSOR_ReadTemp();

    return true;
}



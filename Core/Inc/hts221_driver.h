/*
 * hts221_driver.h
 *
 *  Created on: Feb 11, 2026
 *      Author: bossx918spy
 */

#ifndef INC_HTS221_DRIVER_H_
#define INC_HTS221_DRIVER_H_

#ifndef HTS221_DRIVER_H
#define HTS221_DRIVER_H

#include <stdbool.h>

typedef struct
{
    float temperature_c;
    float humidity_percent;
} hts221_data_t;

bool HTS221_Init(void);
bool HTS221_Read(hts221_data_t *data);

#endif



#endif /* INC_HTS221_DRIVER_H_ */

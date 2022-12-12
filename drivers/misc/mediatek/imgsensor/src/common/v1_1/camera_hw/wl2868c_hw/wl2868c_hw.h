#ifndef _IMGSENSOR_HW_WL2868C_h_
#define _IMGSENSOR_HW_WL2868C_h_

#include "imgsensor_hw.h"
#include "imgsensor_common.h"
#include "../../../../../wl2868c/wl2868c.h"

enum EXTLDO_REGULATOR_VOLTAGE{
	EXTLDO_REGULATOR_VOLTAGE_0    = 0,
	EXTLDO_REGULATOR_VOLTAGE_1000 = 1000,
	EXTLDO_REGULATOR_VOLTAGE_1050 = 1050, //DVDD
	EXTLDO_REGULATOR_VOLTAGE_1100 = 1100,
	EXTLDO_REGULATOR_VOLTAGE_1200 = 1200,
	EXTLDO_REGULATOR_VOLTAGE_1210 = 1210,
	EXTLDO_REGULATOR_VOLTAGE_1220 = 1220,
	EXTLDO_REGULATOR_VOLTAGE_1500 = 1500,
	EXTLDO_REGULATOR_VOLTAGE_1800 = 1800, //DOVDD
	EXTLDO_REGULATOR_VOLTAGE_2500 = 2500,
	EXTLDO_REGULATOR_VOLTAGE_2800 = 2800, //AVDD & AFVDD
	EXTLDO_REGULATOR_VOLTAGE_2900 = 2900,
	EXTLDO_REGULATOR_VOLTAGE_HIGH = 3000
};

struct wl2868c_ldomap{
	enum IMGSENSOR_SENSOR_IDX sensor_index;
	enum IMGSENSOR_HW_PIN seq_type;
	enum WL2868C_SELECT ldo_selected;
};
/*****************************************************************************
 * Function Prototype
 *****************************************************************************/
enum IMGSENSOR_RETURN imgsensor_hw_wl2868c_open(
	struct IMGSENSOR_HW_DEVICE **pdevice);

#endif
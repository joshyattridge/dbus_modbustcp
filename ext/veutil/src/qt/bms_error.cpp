#include <veutil/qt/bms_error.hpp>

QString BmsError::getDescription(int errorNumber)
{
	QString result = "#" + QString::number(errorNumber) + " ";

	switch (errorNumber)
	{
	case VE_VDATA_BMS_ERROR_NONE:
		result += tr("No error");
		break;
	case VE_VDATA_BMS_ERROR_BATTERY_INIT:
		result += tr("Battery initialization error");
		break;
	case VE_VDATA_BMS_ERROR_NO_BATTERY_FOUND:
		result += tr("No batteries connected");
		break;
	case VE_VDATA_BMS_ERROR_UNKNOWN_PRODUCT:
		result += tr("Unknown battery");
		break;
	case VE_VDATA_BMS_ERROR_BAT_TYPE:
		result += tr("Different battery types");
		break;
	case VE_VDATA_BMS_ERROR_NR_OF_BAT:
		result += tr("No. of batteries incorrect");
		break;
	case VE_VDATA_BMS_ERROR_NO_SHUNT_FND:
		result += tr("Lynx Shunt not found");
		break;
	case VE_VDATA_BMS_ERROR_MEASURE:
		result += tr("Battery measure error");
		break;
	case VE_VDATA_BMS_ERROR_CALCULATE:
		result += tr("Internal calculation error");
		break;
	case VE_VDATA_BMS_ERROR_BAT_NR_SER:
		result += tr("No. of batteries in series incorrect");
		break;
	case VE_VDATA_BMS_ERROR_BAT_NR:
		result += tr("No. of batteries incorrect");
		break;
	case VE_VDATA_BMS_ERROR_IO_EXPANDER:
	case VE_VDATA_BMS_ERROR_HARDWARE_FAILURE:
		result += tr("Hardware error");
		break;
	case VE_VDATA_BMS_ERROR_WATCHDOG:
		result += tr("Watchdog error");
		break;
	case VE_VDATA_BMS_ERROR_OVER_VOLTAGE:
		result += tr("Over voltage");
		break;
	case VE_VDATA_BMS_ERROR_UNDER_VOLTAGE:
		result += tr("Under voltage");
		break;
	case VE_VDATA_BMS_ERROR_OVER_TEMPERATURE:
		result += tr("Over temperature");
		break;
	case VE_VDATA_BMS_ERROR_UNDER_TEMPERATURE:
		result += tr("Under temperature");
		break;
	case VE_VDATA_BMS_ERROR_UNDER_CHARGE_STANDBY:
		result += tr("Under-charge standby");
		break;
	case VE_VDATA_BMS_ERROR_ADC_FAILURE:
		result += tr("ADC error");
		break;
	case VE_VDATA_BMS_ERROR_SLAVE_FAILURE:
		result += tr("Battery comm. error");
		break;
	case VE_VDATA_BMS_ERROR_PRE_CHARGE:
		result += tr("Pre-Charge error");
		break;
	case VE_VDATA_BMS_ERROR_CONTACTOR:
	case VE_VDATA_BMS_ERROR_CONTACTOR_STARTUP:
		result += tr("Safety contactor error");
		break;
	case VE_VDATA_BMS_ERROR_SLAVE_UPDATE:
	case VE_VDATA_BMS_ERROR_SLAVE_UPDATE_UNAVAILABLE:
		result += tr("Battery update error");
		break;
	case VE_VDATA_BMS_ERROR_BMS_CABLE:
		result += tr("BMS cable error");
		break;
	case VE_VDATA_BMS_ERROR_REF_VOLTAGE_FAILURE:
		result += tr("Reference voltage failure");
		break;
	case VE_VDATA_BMS_ERROR_WRONG_SYSTEM_VOLTAGE:
		result += tr("Wrong system voltage");
		break;
	case VE_VDATA_BMS_ERROR_PRE_CHARGE_TIMEOUT:
		result += tr("Pre charge timeout");
		break;
	}

	return result;
}

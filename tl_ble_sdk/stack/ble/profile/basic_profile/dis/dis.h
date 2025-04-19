/********************************************************************************************************
 * @file    dis.h
 *
 * @brief   This is the header file for BLE SDK
 *
 * @author  BLE GROUP
 * @date    06,2022
 *
 * @par     Copyright (c) 2022, Telink Semiconductor (Shanghai) Co., Ltd. ("TELINK")
 *
 *          Licensed under the Apache License, Version 2.0 (the "License");
 *          you may not use this file except in compliance with the License.
 *          You may obtain a copy of the License at
 *
 *              http://www.apache.org/licenses/LICENSE-2.0
 *
 *          Unless required by applicable law or agreed to in writing, software
 *          distributed under the License is distributed on an "AS IS" BASIS,
 *          WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *          See the License for the specific language governing permissions and
 *          limitations under the License.
 *
 *******************************************************************************************************/
#pragma once

// DIS: Device Information Service
// DISC: Device Information Service Client.
// DISS: Device Information Service

/******************************* DIS Common Start **********************************************************************/

/******************************* DIS Common End **********************************************************************/

/******************************* DIS Client Start **********************************************************************/
//DIS Client Event ID
enum{
    BASIC_EVT_DISC_START = BASIC_EVT_TYPE_DIS_CLIENT,
};

struct blc_disc_regParam{

};


/**
 * @brief       for user to register Device Information service control client module.
 * @param[in]   param - currently not used, fixed NULL.
 * @return      none.
 */
void blc_basic_registerDISControlClient(const struct blc_disc_regParam *param);

//DIS Client Read Characteristic Value Operation API
/**
 * @brief      Read the manufacturer name of the device associated with the given connection handle.
 * @param[in]  connHandle - The connection handle for the device whose manufacturer name is to be read.
 * @param[in]  readCb - Callback function to handle the manufacturer name data once it is read.
 * @return     int - 0: success, non-zero value: error code.
 */
int blc_disc_readManufacturerName(u16 connHandle, prf_read_cb_t readCb);

/**
 * @brief      Read the model number of the device associated with the given connection handle.
 * @param[in]  connHandle - The connection handle for the device whose model number is to be read.
 * @param[in]  readCb - Callback function to handle the model number data once it is read.
 * @return     int - 0: success, non-zero value: error code.
 */
int blc_disc_readModelNumber(u16 connHandle, prf_read_cb_t readCb);

/**
 * @brief      Read the serial number of the device associated with the given connection handle.
 * @param[in]  connHandle - The connection handle for the device whose serial number is to be read.
 * @param[in]  readCb - Callback function to handle the serial number data once it is read.
 * @return     int - 0: success, non-zero value: error code.
 */
int blc_disc_readSerialNumber(u16 connHandle, prf_read_cb_t readCb);

/**
 * @brief      Read the hardware revision of the device associated with the given connection handle.
 * @param[in]  connHandle - The connection handle for the device whose hardware revision is to be read.
 * @param[in]  readCb - Callback function to handle the hardware revision data once it is read.
 * @return     int - 0: success, non-zero value: error code.
 */
int blc_disc_readHardwareRevision(u16 connHandle, prf_read_cb_t readCb);

/**
 * @brief      Read the firmware revision of the device associated with the given connection handle.
 * @param[in]  connHandle - The connection handle for the device whose firmware revision is to be read.
 * @param[in]  readCb - Callback function to handle the firmware revision data once it is read.
 * @return     int - 0: success, non-zero value: error code.
 */
int blc_disc_readFirmwareRevision(u16 connHandle, prf_read_cb_t readCb);

/**
 * @brief      Read the software revision of the device associated with the given connection handle.
 * @param[in]  connHandle - The connection handle for the device whose software revision is to be read.
 * @param[in]  readCb - Callback function to handle the software revision data once it is read.
 * @return     int - 0: success, non-zero value: error code.
 */
int blc_disc_readSoftwareRevision(u16 connHandle, prf_read_cb_t readCb);

/**
 * @brief      Read the system ID of the device associated with the given connection handle.
 * @param[in]  connHandle - The connection handle for the device whose system ID is to be read.
 * @param[in]  readCb - Callback function to handle the system ID data once it is read.
 * @return     int - 0: success, non-zero value: error code.
 */
int blc_disc_readSystemId(u16 connHandle, prf_read_cb_t readCb);

/**
 * @brief      Read the IEEE data list of the device associated with the given connection handle.
 * @param[in]  connHandle - The connection handle for the device whose IEEE data list is to be read.
 * @param[in]  readCb - Callback function to handle the IEEE data list once it is read.
 * @return     int - 0: success, non-zero value: error code.
 */
int blc_disc_readIEEEDataList(u16 connHandle, prf_read_cb_t readCb);

/**
 * @brief      Read the PnPID (Product/Part Number) of the device associated with the given connection handle.
 * @param[in]  connHandle - The connection handle for the device whose PnPID is to be read.
 * @param[in]  readCb - Callback function to handle the PnPID data once it is read.
 * @return     int - 0: success, non-zero value: error code.
 */
int blc_disc_readPnPID(u16 connHandle, prf_read_cb_t readCb);

/**
 * @brief      Read the UDI (Unique Device Identifier) for medical devices associated with the given connection handle.
 * @param[in]  connHandle - The connection handle for the device whose UDI is to be read.
 * @param[in]  readCb - Callback function to handle the UDI data once it is read.
 * @return     int - 0: success, non-zero value: error code.
 */
int blc_disc_readUdiForMedicalDevices(u16 connHandle, prf_read_cb_t readCb);

//DIS Client Get Characteristic Value Operation API
/**
 * @brief      Get the battery level of the device associated with the given connection handle.
 * @param[in]  connHandle - The connection handle for the device whose battery level is to be queried.
 * @param[out] batteryLevel - Pointer to the variable where the battery level will be stored (0-100%).
 * @return     int - 0: success, non-zero value: error code.
 */
int blc_disc_get(u16 connHandle, u8* batteryLevel);

/**
 * @brief      Get the manufacturer name of the device associated with the given connection handle.
 * @param[in]  connHandle - The connection handle for the device whose manufacturer name is to be queried.
 * @param[out] manufacturerName - Pointer to the buffer where the manufacturer name will be stored.
 * @param[out] manufacturerNameLen - Pointer to the variable where the manufacturer name length will be stored.
 * @return     int - 0: success, non-zero value: error code.
 */
int blc_disc_getManufacturerName(u16 connHandle, u8* manufacturerName, u16* manufacturerNameLen);

/**
 * @brief      Get the model number of the device associated with the given connection handle.
 * @param[in]  connHandle - The connection handle for the device whose model number is to be queried.
 * @param[out] modelNumber - Pointer to the buffer where the model number will be stored.
 * @param[out] modelNumberLen - Pointer to the variable where the model number length will be stored.
 * @return     int - 0: success, non-zero value: error code.
 */
int blc_disc_getModelNumber(u16 connHandle, u8* modelNumber, u16* modelNumberLen);

/**
 * @brief      Get the serial number of the device associated with the given connection handle.
 * @param[in]  connHandle - The connection handle for the device whose serial number is to be queried.
 * @param[out] serialNumber - Pointer to the buffer where the serial number will be stored.
 * @param[out] serialNumberLen - Pointer to the variable where the serial number length will be stored.
 * @return     int - 0: success, non-zero value: error code.
 */
int blc_disc_getSerialNumber(u16 connHandle, u8* serialNumber, u16* serialNumberLen);

/**
 * @brief      Get the hardware revision of the device associated with the given connection handle.
 * @param[in]  connHandle - The connection handle for the device whose hardware revision is to be queried.
 * @param[out] hardwareRevision - Pointer to the buffer where the hardware revision will be stored.
 * @param[out] hardwareRevisionLen - Pointer to the variable where the hardware revision length will be stored.
 * @return     int - 0: success, non-zero value: error code.
 */
int blc_disc_getHardwareRevision(u16 connHandle, u8* hardwareRevision, u16* hardwareRevisionLen);

/**
 * @brief      Get the firmware revision of the device associated with the given connection handle.
 * @param[in]  connHandle - The connection handle for the device whose firmware revision is to be queried.
 * @param[out] firmwareRevision - Pointer to the buffer where the firmware revision will be stored.
 * @param[out] firmwareRevisionLen - Pointer to the variable where the firmware revision length will be stored.
 * @return     int - 0: success, non-zero value: error code.
 */
int blc_disc_getFirmwareRevision(u16 connHandle, u8* firmwareRevision, u16* firmwareRevisionLen);

/**
 * @brief      Get the software revision of the device associated with the given connection handle.
 * @param[in]  connHandle - The connection handle for the device whose software revision is to be queried.
 * @param[out] softwareRevision - Pointer to the buffer where the software revision will be stored.
 * @param[out] softwareRevisionLen - Pointer to the variable where the software revision length will be stored.
 * @return     int - 0: success, non-zero value: error code.
 */
int blc_disc_getSoftwareRevision(u16 connHandle, u8* softwareRevision, u16* softwareRevisionLen);

/**
 * @brief      Get the system ID of the device associated with the given connection handle.
 * @param[in]  connHandle - The connection handle for the device whose system ID is to be queried.
 * @param[out] systemId - Pointer to the structure where the system ID will be stored.
 * @return     int - 0: success, non-zero value: error code.
 */
int blc_disc_getSystemId(u16 connHandle, dis_system_id_t* systemId);

/**
 * @brief      Get the PnPID (Product/Part Number) of the device associated with the given connection handle.
 * @param[in]  connHandle - The connection handle for the device whose PnPID is to be queried.
 * @param[out] PnPID - Pointer to the structure where the PnPID will be stored.
 * @return     int - 0: success, non-zero value: error code.
 */
int blc_disc_getPnPID(u16 connHandle, dis_pnp_t* PnPID);

/**
 * @brief      Get the IEEE data list of the device associated with the given connection handle.
 * @param[in]  connHandle - The connection handle for the device whose IEEE data list is to be queried.
 * @param[out] IEEEDataList - Pointer to the buffer where the IEEE data list will be stored.
 * @param[out] IEEEDataListLen - Pointer to the variable where the IEEE data list length will be stored.
 * @return     int - 0: success, non-zero value: error code.
 */
int blc_disc_getIEEEDataList(u16 connHandle, u8* IEEEDataList, u16* IEEEDataListLen);

/**
 * @brief      Get the UDI (Unique Device Identifier) for medical devices associated with the given connection handle.
 * @param[in]  connHandle - The connection handle for the device whose UDI is to be queried.
 * @param[out] udiForMedicalDevices - Pointer to the buffer where the UDI for medical devices will be stored.
 * @param[out] udiForMedicalDevicesLen - Pointer to the variable where the UDI length will be stored.
 * @return     int - 0: success, non-zero value: error code.
 */
int blc_disc_getUdiForMedicalDevices(u16 connHandle, u8* udiForMedicalDevices, u16* udiForMedicalDevicesLen);


/******************************* DIS Client End **********************************************************************/


/******************************* DIS Server Start **********************************************************************/
//DIS Server Event ID
enum{
    BASIC_EVT_DISS_START = BASIC_EVT_TYPE_DIS_SERVER,
};

struct blc_diss_regParam{

};

/**
 * @brief       for user to register Device Information service control server module.
 * @param[in]   param - currently not used, fixed NULL.
 * @return      none.
 * note: DIS service all characteristic properties is read only, attribute value initial static const value,
 * if you want to modify the value, directly modify the svc_dis.c file.
 */
void blc_basic_registerDISControlServer(const struct blc_diss_regParam *param);
/******************************* DIS Server End **********************************************************************/

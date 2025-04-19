/********************************************************************************************************
 * @file    svc_adv.h
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

typedef struct{
    u8 len;
    u8 type;
    u8 value[0];
} blc_adv_ltv_t;


/**
 * @brief       This function builds the advertising data from the provided LTV (Length, Type, Value) elements.
 * @param[in]   ltvs - Pointer to an array of LTV elements to be included in the advertising data.
 * @param[in]   numLtvs - The number of LTV elements in the array.
 * @param[out]  advBuf - The buffer to store the built advertising data.
 * @return      u16 - The length of the built advertising data.
 */
u16 blc_adv_buildAdvData(blc_adv_ltv_t** ltvs, u32 numLtvs, u8* advBuf);

/**
 * @brief       This function retrieves the advertising type information from the advertising data.
 * @param[in]   advData - Pointer to the advertising data.
 * @param[in]   len - The length of the advertising data.
 * @param[in]   advType - The advertising type to search for.
 * @param[out]  outLen - Pointer to store the length of the extracted advertising type information.
 * @return      u8* - Pointer to the extracted advertising type information.
 */
u8* blc_adv_getAdvTypeInformation(u8* advData, u16 len, u8 advType, u8* outLen);

/**
 * @brief       This function retrieves the complete name information from the advertising data.
 * @param[in]   advData - Pointer to the advertising data.
 * @param[in]   len - The length of the advertising data.
 * @param[out]  outLen - Pointer to store the length of the extracted complete name information.
 * @return      u8* - Pointer to the extracted complete name information.
 */
u8* blc_adv_getCompleteNameInformation(u8* advData, u16 len, u8* outLen);

/**
 * @brief       This function retrieves the broadcast name information from the advertising data.
 * @param[in]   advData - Pointer to the advertising data.
 * @param[in]   len - The length of the advertising data.
 * @param[out]  outLen - Pointer to store the length of the extracted broadcast name information.
 * @return      u8* - Pointer to the extracted broadcast name information.
 */
u8* blc_adv_getBroadcastNameInformation(u8* advData, u16 len, u8* outLen);

/**
 * @brief       This function retrieves the 16-bit service data information from the advertising data.
 * @param[in]   advData - Pointer to the advertising data.
 * @param[in]   len - The length of the advertising data.
 * @param[in]   serviceUuid - The 16-bit service UUID to search for.
 * @param[out]  outLen - Pointer to store the length of the extracted service data information.
 * @return      u8* - Pointer to the extracted 16-bit service data information.
 */
u8* blc_adv_get16BitServiceDataInformation(u8* advData, u16 len, u16 serviceUuid, u8* outLen);

/**
 * @brief       This function retrieves the broadcast ID from the advertising data.
 * @param[in]   advData - Pointer to the advertising data.
 * @param[in]   len - The length of the advertising data.
 * @param[out]  broadcastID - Array to store the extracted broadcast ID (3 bytes).
 * @return      bool - Returns true if the broadcast ID is found, false otherwise.
 */
bool blc_advGetBroadcastID(u8* advData, u16 len, u8 broadcastID[3]);

/**
 * @brief       This function retrieves the CSIP (Connected Sound & Imaging Profile) RSI (Reference Signal Identifier) from the advertising data.
 * @param[in]   advData - Pointer to the advertising data.
 * @param[in]   len - The length of the advertising data.
 * @param[out]  rsi - Array to store the extracted RSI (6 bytes).
 * @return      bool - Returns true if the RSI is found, false otherwise.
 */
bool blc_adv_getCsipRSI(u8* advData, u16 len, u8 rsi[6]);

/**
 * @brief       This function retrieves the manufacturer data information for a specific company ID from the advertising data.
 * @param[in]   advData - Pointer to the advertising data.
 * @param[in]   len - The length of the advertising data.
 * @param[in]   companyId - The company ID to search for.
 * @param[out]  outLen - Pointer to store the length of the extracted manufacturer data.
 * @return      u8* - Pointer to the extracted manufacturer data information.
 */
u8* blc_adv_getManufacturerDataInformationByCompanyId(u8* advData, u16 len, u16 companyId, u8* outLen);

/**
 * @brief       This function retrieves the 16-bit service UUID from the advertising data.
 * @param[in]   advData - Pointer to the advertising data.
 * @param[in]   len - The length of the advertising data.
 * @param[in]   uuid - The 16-bit service UUID to search for.
 * @return      bool - Returns true if the 16-bit service UUID is found, false otherwise.
 */
bool blc_adv_get16BitServiceUuid(u8* advData, u16 len, u16 uuid);

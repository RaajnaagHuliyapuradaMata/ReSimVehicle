/******************************************************************************/
/* File   : wrappers.cpp                                                      */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Types_Std.hpp"

#include "infAraSwcApplTpms.hpp"

#include "infSwcApplTpmsAra.hpp"
#include "infSwcApplDcmAra.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
LOCAL FUNC(Type_infSwcApplTpmsAra_eStatusApi, RESIM_CODE) receive_rdci_coding_parameters(
   CONSTP2VAR(Type_infAraSwcApplTpms_stParameterCodingTpms, RESIM_APPL_DATA, AUTOMATIC) lcptrstParameterCodingTpms
){
   *lcptrstParameterCodingTpms = Default_infAraSwcApplTpms_stParameterCodingTpms;
   return infSwcApplTpmsAra_eStatusApi_NOK;
}

LOCAL FUNC(Type_infSwcApplTpmsAra_eStatusApi, RESIM_CODE) receive_rdci_coding_erfs_caf(
   CONSTP2VAR(Type_infAraSwcApplTpms_stCodingErfsCaf, RESIM_APPL_DATA, AUTOMATIC) lcptrstCodingErfsCaf
){
   UNUSED(lcptrstCodingErfsCaf);
   return infSwcApplTpmsAra_eStatusApi_NOK;
}

LOCAL FUNC(void, RESIM_CODE) receive_date_and_time(
      CONSTP2VAR(Type_infAraSwcApplTpms_eQualitySignal, RESIM_APPL_DATA, AUTOMATIC) lcptreQualitySignal
   ,  CONSTP2VAR(Type_infAraSwcApplTpms_stDateAndTime,  RESIM_APPL_DATA, AUTOMATIC) lcptrstDateAndTime
){
   *lcptreQualitySignal = infAraSwcApplTpms_eQualitySignal_INVALID;
   *lcptrstDateAndTime  = Default_infAraSwcApplTpms_stDateAndTime;
}

LOCAL FUNC(void, RESIM_CODE) receive_altitude(
      CONSTP2VAR(Type_infAraSwcApplTpms_eQualitySignal, RESIM_APPL_DATA, AUTOMATIC) lcptreQualitySignal
   ,  CONSTP2VAR(Type_System_tDistance_m_f32,           RESIM_APPL_DATA, AUTOMATIC) lcptrtAltitude
   ,  CONSTP2VAR(Type_System_tDistance_m_f32,           RESIM_APPL_DATA, AUTOMATIC) lcptrtErrorAltitude
){
   *lcptreQualitySignal = infAraSwcApplTpms_eQualitySignal_INVALID;
   *lcptrtAltitude      = CompuMethod_Distance_m_f32(Default_infAraSwcApplTpms_Altitude);
   *lcptrtErrorAltitude = CompuMethod_Distance_m_f32(Default_infAraSwcApplTpms_ErrorAltitude);
}

LOCAL FUNC(void, RESIM_CODE) receive_atmospheric_pressure(
      CONSTP2VAR(Type_infAraSwcApplTpms_eQualitySignal, RESIM_APPL_DATA, AUTOMATIC) lcptreQualitySignal
   ,  CONSTP2VAR(Type_System_tPressure_mbar_u16,        RESIM_APPL_DATA, AUTOMATIC) lcptrtPressureAtmospheric
){
   *lcptreQualitySignal       = infAraSwcApplTpms_eQualitySignal_INVALID;
   *lcptrtPressureAtmospheric = CompuMethod_Pressure_mbar_u16(Default_infAraSwcApplTpms_PressureAtmospheric);
}

LOCAL FUNC(void, RESIM_CODE) receive_vehicle_gear(
      CONSTP2VAR(Type_infAraSwcApplTpms_eQualitySignal, RESIM_APPL_DATA, AUTOMATIC) lcptreQualitySignal
   ,  CONSTP2VAR(Type_infAraSwcApplTpms_eGearVehicle,   RESIM_APPL_DATA, AUTOMATIC) lcptreGearVehicle
){
   *lcptreQualitySignal = infAraSwcApplTpms_eQualitySignal_INVALID;
   *lcptreGearVehicle   = infAraSwcApplTpms_eGearVehicle_INITIALISING;
}

LOCAL FUNC(Type_infAraSwcApplTpms_eDtcSuppressionNetwork, RESIM_CODE) receive_network_dtc_suppression(void){
   return infAraSwcApplTpms_eDtcSuppressionNetwork_FALSE;
}

LOCAL FUNC(Type_infAraSwcApplTpms_eStatusNetwork, RESIM_CODE) receive_network_status(void){
   return infAraSwcApplTpms_eStatusNetwork_INACTIVE;
}

LOCAL FUNC(void, RESIM_CODE) receive_air_temperature(
      CONSTP2VAR(Type_infAraSwcApplTpms_eQualitySignal, RESIM_APPL_DATA, AUTOMATIC) lcptreQualitySignal
   ,  CONSTP2VAR(Type_System_tTemperature_DegC_s16,     RESIM_APPL_DATA, AUTOMATIC) lcptrtTemperatureAir
){
   *lcptreQualitySignal  = infAraSwcApplTpms_eQualitySignal_INVALID;
   *lcptrtTemperatureAir = CompuMethod_Temperature_DegC_s16(Default_infAraSwcApplTpms_TemperatureAir);
}

LOCAL FUNC(void, RESIM_CODE) receive_vehicle_state(
      CONSTP2VAR(Type_infAraSwcApplTpms_eQualitySignal, RESIM_APPL_DATA, AUTOMATIC) lcptreQualitySignal
   ,  Type_infAraSwcApplTpms_eStateVehicle*  const
){
   *lcptreQualitySignal = infAraSwcApplTpms_eQualitySignal_INVALID;
}

LOCAL FUNC(void, RESIM_CODE) receive_vehicle_velocity(
      CONSTP2VAR(Type_infAraSwcApplTpms_eQualitySignal, RESIM_APPL_DATA, AUTOMATIC) lcptreQualitySignal
   ,  uint16*                                const
){
   *lcptreQualitySignal = infAraSwcApplTpms_eQualitySignal_INVALID;
}

LOCAL FUNC(void, RESIM_CODE) receive_odometer(
      CONSTP2VAR(Type_infAraSwcApplTpms_eQualitySignal, RESIM_APPL_DATA, AUTOMATIC) lcptreQualitySignal
   ,  uint32*                                const
){
   *lcptreQualitySignal = infAraSwcApplTpms_eQualitySignal_INVALID;
}

LOCAL FUNC(void, RESIM_CODE) receive_relative_time(
      CONSTP2VAR(Type_infAraSwcApplTpms_eQualitySignal, RESIM_APPL_DATA, AUTOMATIC) lcptreQualitySignal
   ,  uint32*                                const
){
   *lcptreQualitySignal = infAraSwcApplTpms_eQualitySignal_INVALID;
}

LOCAL FUNC(void, RESIM_CODE) receive_nvm_block_addresses(
   Type_infAraSwcApplTpms_stAddressesBlockNvM*      const
){
}

LOCAL FUNC(void, RESIM_CODE) send_check_control_message(
   Type_infSwcApplTpmsAra_stCcm*                    const
){
}

LOCAL FUNC(void, RESIM_CODE) send_tyre_current_data(
   Type_infSwcApplTpmsAra_stPressure*               const
   ,  Type_infSwcApplTpmsAra_stTemperature* const
){
}

LOCAL FUNC(void, RESIM_CODE) send_tyre_target_pressures(
   Type_infSwcApplTpmsAra_stPressure*               const
){
}

LOCAL FUNC(void, RESIM_CODE) send_tyre_status(
   Type_infSwcApplTpmsAra_stStatusTyre*             const
){
}

LOCAL FUNC(void, RESIM_CODE) send_fbd_control(
   Type_infSwcApplTpmsAra_stDataControlFbd*         const
){
}

LOCAL FUNC(void, RESIM_CODE) send_tyre_mileage(
   Type_infSwcApplTpmsAra_stDataMileageTyre*        const
){
}

LOCAL FUNC(void, RESIM_CODE) send_tyre_qr_code(
   Type_infSwcApplTpmsAra_stDataTyreCodeQR*         const
){
}

LOCAL FUNC(void, RESIM_CODE) send_tyre_last_internal_data(
   Type_infSwcApplTpmsAra_stDataTyreInternalLast*   const
){
}

LOCAL FUNC(void, RESIM_CODE) send_tyre_parking_supervision(
   Type_infSwcApplTpmsAra_stTyreParkingSupervision* const
){
}

LOCAL FUNC(void, RESIM_CODE) send_wheel_status_change(
   Type_infSwcApplTpmsAra_stStatusWheelChange*      const
){
}

LOCAL FUNC(void, RESIM_CODE) send_parking_monitoring(
   Type_infSwcApplTpmsAra_stMonitoringParking*      const
){
}

LOCAL FUNC(void, RESIM_CODE) send_calibration_data(
   Type_infSwcApplTpmsAra_stDataCalibration*        const
){
}

LOCAL FUNC(void, RESIM_CODE) send_erfs_actual_tyre_data(
   Type_infSwcApplTpmsAra_stDataTyreErfsActual*     const
){
}

LOCAL FUNC(void, RESIM_CODE) send_erfs_hmi_axle_tyre_data(
   Type_infSwcApplTpmsAra_stTyreAxleErfsHmi*        const
){
}

LOCAL FUNC(void, RESIM_CODE) send_erfs_hmi_status(
   Type_infSwcApplTpmsAra_stStatusErfs*             const
){
}

LOCAL FUNC(void, RESIM_CODE) send_tyre_pressure_level_data(
   Type_infSwcApplTpmsAra_stIndicatorLevelPressure* const
){
}

LOCAL FUNC(void, RESIM_CODE) send_erfs_hmi_notification(
   Type_infSwcApplTpmsAra_stNotificationErfsHmi*    const
){
}

LOCAL FUNC(uint8, RESIM_CODE) send_dtc_event_status(
   Type_SwcServiceDem_eIdDtc
   ,  Type_infSwcApplTpmsAra_stStatusEventDtc
){
   return 0;
}

LOCAL FUNC(uint8, RESIM_CODE) send_nvm_write_block_request(
   Dtms_nvm_block_ids_et
){
   return 0;
}

LOCAL FUNC(void, RESIM_CODE) receive_nvm_block_error_status(
      Dtms_nvm_block_ids_et
   ,  Type_infAraSwcApplTpms_eReqNvM* const
){
   //TBD: if(CfgAra_dSizeReqNvM > Dtms_nvm_block_ids_et){}
}

LOCAL FUNC(void, RESIM_CODE) send_rdci_debug_msg(
   uint8* development_log_p
){
   UNUSED(development_log_p);
   //TBD: if(NULL_PTR != development_log_p){}
}

LOCAL FUNC(void, RESIM_CODE) send_diagnostic_log_and_trace(
      uint8  source_file_id
   ,  uint16 line_number
){
   UNUSED(source_file_id);
   UNUSED(line_number);
}

int main(void){
   Type_infSwcApplTpmsAra_stContext lstContext = {
         receive_rdci_coding_parameters
      ,  receive_rdci_coding_erfs_caf
      ,  receive_date_and_time
      ,  receive_altitude
      ,  receive_atmospheric_pressure
      ,  receive_vehicle_gear
      ,  receive_network_dtc_suppression
      ,  receive_network_status
      ,  receive_air_temperature
      ,  receive_relative_time
      ,  receive_vehicle_state
      ,  receive_vehicle_velocity
      ,  receive_odometer
      ,  receive_nvm_block_addresses
      ,  receive_nvm_block_error_status
      ,  send_check_control_message
      ,  send_tyre_current_data
      ,  send_tyre_target_pressures
      ,  send_rdci_debug_msg
      ,  send_tyre_status
      ,  send_fbd_control
      ,  send_tyre_mileage
      ,  send_tyre_qr_code
      ,  send_tyre_last_internal_data
      ,  send_tyre_parking_supervision
      ,  send_wheel_status_change
      ,  send_parking_monitoring
      ,  send_calibration_data
      ,  send_erfs_actual_tyre_data
      ,  send_erfs_hmi_axle_tyre_data
      ,  send_erfs_hmi_status
      ,  send_tyre_pressure_level_data
      ,  send_erfs_hmi_notification
      ,  send_dtc_event_status
      ,  send_nvm_write_block_request
      ,  send_diagnostic_log_and_trace
   };

   infSwcApplTpmsAra_vInit(
      &lstContext
   );

   (void)infSwcApplDcmAra_tCalloutConditionCheckReadAKT_REIFEN_LAUFSTRECKE          ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadAKT_REIFEN_QR_CODE              ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadALTE_REIFEN_LAUFSTRECKE         ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadALTE_REIFEN_QR_CODE             ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadANLERNEN_LOKALISIERUNG          ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadDEVELOPER_DATA                  ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadDiagJob                         ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadERFS_ECO_TABELLE                ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadHS_INAKTIVEREIGNIS              ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadHS_KALIBRIEREREIGNIS            ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadHS_WARNEREIGNIS_1               ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadHS_WARNEREIGNIS_2               ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadHS_WARNEREIGNIS_3               ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadHS_WARNEREIGNIS_RUECKNAHME      ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadHS_WARNEREIGNIS_WEICH_1         ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadHS_WARNEREIGNIS_WEICH_2         ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadHS_WARNEREIGNIS_WEICH_3         ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadMESSDATENBLOCK_1                ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadMESSDATENBLOCK_2                ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadMESSDATENBLOCK_3                ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadMESSDATENBLOCK_4                ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadSTATUS                          ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadSTATUS_ERFS_AKT_REIFEN          ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadSTATUS_ERFS_AKT_REIFEN_ECO      ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadSTATUS_ERFS_TSA_DATEN           ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadSTATUS_EXT_PARK_SUPERVISION     ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutConditionCheckReadSTATUS_RE_DRUCKCODIERUNG        ((Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHandleAkt_reifen_laufstrecke              ((uint8*)NULL_PTR, (uint8 (*)(Dtms_diag_rid_akt_reifen_laufstrecke_lesen_type_st* ))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHandleAkt_reifen_qr_code                  ((uint8*)NULL_PTR, (uint8 (*)(Dtms_diag_rid_akt_reifen_qr_code_lesen_type_st*     ))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHandleAlte_reifen_laufstrecke             ((uint8*)NULL_PTR, (uint8 (*)(Dtms_diag_rid_alte_reifen_laufstrecke_lesen_type_st*))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHandleAlte_reifen_qr_code                 ((uint8*)NULL_PTR, (uint8 (*)(Dtms_diag_rid_alte_reifen_qr_code_lesen_type_st*    ))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHandleAnlernen_lokalisierung              ((uint8*)NULL_PTR, (uint8 (*)(Dtms_diag_anlernen_lokalisierung_lesen_type_st*     ))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHandleDeveloper_data                      ((uint8*)NULL_PTR, (uint8 (*)(Dtms_diag_developer_data_lesen_type_st*             ))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHandleErfs_akt_reifen                     ((uint8*)NULL_PTR, (uint8 (*)(Dtms_diag_erfs_akt_reifen_lesen_type_st*            ))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHandleErfs_akt_reifen_eco                 ((uint8*)NULL_PTR, (uint8 (*)(Dtms_diag_erfs_akt_reifen_eco_lesen_type_st*        ))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHandleErfs_eco_tabelle                    ((uint8*)NULL_PTR, (uint8 (*)(Dtms_diag_erfs_eco_tabelle_lesen_type_st*           ))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHandleErfs_tsa_daten                      ((uint8*)NULL_PTR, (uint8 (*)(Dtms_diag_erfs_tsa_daten_lesen_type_st*             ))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHandleExt_park_supervision                ((uint8*)NULL_PTR, (uint8 (*)(Dtms_diag_ext_park_supervision_lesen_type_st*       ))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHandleHs_inaktivereignis                  ((uint8*)NULL_PTR, (uint8 (*)(Dtms_diag_rdc_hs_inaktivereignis_type_st*           ))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHandleHs_kalibrierereignis                ((uint8*)NULL_PTR, (uint8 (*)(Dtms_diag_rdc_hs_kalibrierereignis_type_st*         ))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHandleHs_warnereignis                     ((uint8*)NULL_PTR, (uint8 (*)(Dtms_diag_rdc_hs_warnereignis_type_st*              ))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHandleHs_warnereignis_ruecknahme          ((uint8*)NULL_PTR, (uint8 (*)(Dtms_diag_rdc_hs_warnereignis_ruecknahme_type_st*   ))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHandleHs_warnereignis_weich               ((uint8*)NULL_PTR, (uint8 (*)(Dtms_diag_rdc_hs_warnereignis_weich_type_st*        ))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHandleMessdatenblock                      ((uint8*)NULL_PTR, (uint8 (*)(Dtms_diag_rdc_messdatenblock_type_st*               ))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHandleRe_druckcodierung                   ((uint8*)NULL_PTR, (uint8 (*)(Dtms_diag_re_lesen_druckcodierung_type_st*          ))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHandleStatus                              ((uint8*)NULL_PTR, (uint8 (*)(Dtms_diag_rdc_status_type_st*                       ))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHandleStatus_version                      ((uint8*)NULL_PTR, (uint8 (*)(Dtms_diag_version_type_st*                          ))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadAKT_REIFEN_LAUFSTRECKE                    ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadAKT_REIFEN_QR_CODE                        ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadALTE_REIFEN_LAUFSTRECKE                   ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadALTE_REIFEN_QR_CODE                       ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadANLERNEN_LOKALISIERUNG                    ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadERFS_ECO_TABELLE                          ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHS_INAKTIVEREIGNIS                        ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHS_KALIBRIEREREIGNIS                      ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHS_WARNEREIGNIS_1                         ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHS_WARNEREIGNIS_2                         ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHS_WARNEREIGNIS_3                         ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHS_WARNEREIGNIS_RUECKNAHME                ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHS_WARNEREIGNIS_WEICH_1                   ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHS_WARNEREIGNIS_WEICH_2                   ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadHS_WARNEREIGNIS_WEICH_3                   ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadMESSDATENBLOCK_1                          ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadMESSDATENBLOCK_2                          ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadMESSDATENBLOCK_3                          ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadMESSDATENBLOCK_4                          ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadSTATUS                                    ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadSTATUS_DEVELOPER_DATA                     ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadSTATUS_ERFS_AKT_REIFEN                    ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadSTATUS_ERFS_AKT_REIFEN_ECO                ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadSTATUS_ERFS_TSA_DATEN                     ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadSTATUS_EXT_PARK_SUPERVISION               ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataReadSTATUS_RE_LESEN_DRUCKCODIERUNG            ((uint8*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataWriteHandleDeveloper_config                   ((uint8*)NULL_PTR, (Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR, (uint8 (*)(const Dtms_diag_rdc_developer_config_type_st*                , uint8*))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataWriteHandleDeveloper_config_erfs              ((uint8*)NULL_PTR, (Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR, (uint8 (*)(const Dtms_diag_rdc_erfs_developer_config_type_st*           , uint8*))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataWriteHandleErfs_eco_akt_reifen_pos_vorgeben   ((uint8*)NULL_PTR, (Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR, (uint8 (*)(const Dtms_diag_rdc_erfs_eco_akt_reifen_pos_vorgeben_type_st*, uint8*))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataWriteHandleErfs_eco_neue_reifen_vorgeben      ((uint8*)NULL_PTR, (Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR, (uint8 (*)(const Dtms_diag_rdc_erfs_eco_neue_reifen_vorgeben_type_st*   , uint8*))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataWriteHandleErfs_eco_reifentabelle_vorgeben    ((uint8*)NULL_PTR, (Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR, (uint8 (*)(const Dtms_diag_rdc_erfs_eco_reifentabelle_vorgeben_type_st* , uint8*))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataWriteHandleErfs_tsa_daten_vorgeben            ((uint8*)NULL_PTR, (Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR, (uint8 (*)(const Dtms_diag_rdc_erfs_tsa_daten_vorgeben_type_st*         , uint8*))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataWriteHandleSteuern_digital                    ((uint8*)NULL_PTR, (Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR, (uint8 (*)(const Dtms_diag_digital_rdc_type_st*                         , uint8*))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataWriteHandleSteuern_radelektronik_vorgeben     ((uint8*)NULL_PTR, (Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR, (uint8 (*)(const Dtms_diag_radelektronik_vorgeben_type_st*              , uint8*))NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataWriteSTEUERN_DEVELOPER_CONFIG                 ((uint8*)NULL_PTR, (Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataWriteSTEUERN_DEVELOPER_CONFIG_ERFS            ((uint8*)NULL_PTR, (Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataWriteSTEUERN_DIGITAL                          ((uint8*)NULL_PTR, (Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataWriteSTEUERN_ERFS_ECO_AKT_REIFEN_POS_VORGEBEN ((uint8*)NULL_PTR, (Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataWriteSTEUERN_ERFS_ECO_NEUE_REIFEN_VORGEBEN    ((uint8*)NULL_PTR, (Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataWriteSTEUERN_ERFS_ECO_REIFENTABELLE_VORGEBEN  ((uint8*)NULL_PTR, (Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataWriteSTEUERN_ERFS_TSA_DATEN_VORGEBEN          ((uint8*)NULL_PTR, (Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);
   (void)infSwcApplDcmAra_tCalloutDataWriteSTEUERN_RADELEKTRONIK_VORGEBEN           ((uint8*)NULL_PTR, (Type_SwcServiceDcm_CodeResponseNegative*)NULL_PTR);

   for(
      uint8 u8CounterTask =  0;
            u8CounterTask < 10;
            u8CounterTask ++
   ){
      infSwcApplTpmsAra_vRunnable();
   }

   return 0;
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

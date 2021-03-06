// This file is generated. Please do not edit manually.
// 
//

// This file contains generated API for the structs encoder/decoder.

#include PLATFORM_HEADER
#include "app/util/exi/exi.h"
#include "app/util/exi/exi-internal.h"
#include "stack/core/log.h"
#include "afv6-exi-types.h"
#include "afv6-exi-qname.h"
#include "afv6-exi-grammar.h"
const EmberExiStructSpec emEncoderEvents[] = {
  0,        // 0 index is used a null
#define EMBER_EXI_STRUCT EmberExiGeneratedAbstractDevice // index 1
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_AbstractDevice, 2, 0, 1573, 66, 0),
    EMBER_EXI_SUBSTRUCT_OPTION(ConfigurationLink, 0, 1, ConfigurationLink, EmberExiGeneratedConfigurationLink, emberExiConfigurationLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DERListLink, 0, 1, DERListLink, EmberExiGeneratedDERListLink, emberExiDERListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DeviceInformationLink, 0, 1, DeviceInformationLink, EmberExiGeneratedDeviceInformationLink, emberExiDeviceInformationLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DeviceStatusLink, 0, 1, DeviceStatusLink, EmberExiGeneratedDeviceStatusLink, emberExiDeviceStatusLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(FileStatusLink, 0, 1, FileStatusLink, EmberExiGeneratedFileStatusLink, emberExiFileStatusLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(IPInterfaceListLink, 0, 1, IPInterfaceListLink, EmberExiGeneratedIPInterfaceListLink, emberExiIPInterfaceListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(LoadShedAvailabilityLink, 0, 1, LoadShedAvailabilityLink, EmberExiGeneratedLoadShedAvailabilityLink, emberExiLoadShedAvailabilityLinkStructDataIndex),
    EMBER_EXI_CH(loadShedDeviceCategory, BINARY, 1, loadShedDeviceCategory_option),
    EMBER_EXI_SUBSTRUCT_OPTION(LogEventListLink, 0, 1, LogEventListLink, EmberExiGeneratedLogEventListLink, emberExiLogEventListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(PowerStatusLink, 0, 1, PowerStatusLink, EmberExiGeneratedPowerStatusLink, emberExiPowerStatusLinkStructDataIndex),
    EMBER_EXI_CH(sFDI, UNSIGNED_INTEGER, 255, sFDI),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActiveEndDeviceControlListLink // index 67
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActiveEndDeviceControlListLink, 2, 0, 1045, 6, 1),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActivePower // index 73
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActivePower, 0, 0, 65535, 12, 2),
    EMBER_EXI_CH(multiplier, INTEGER, 255, multiplier),
    EMBER_EXI_CH(value, INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedActiveTextMessageListLink // index 85
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ActiveTextMessageListLink, 2, 0, 1045, 6, 3),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedApplianceLoadReduction // index 91
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ApplianceLoadReduction, 0, 0, 65535, 9, 4),
    EMBER_EXI_CH(type, UNSIGNED_INTEGER, 255, type),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedAppliedTargetReduction // index 100
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_AppliedTargetReduction, 0, 0, 65535, 12, 6),
    EMBER_EXI_CH(type, UNSIGNED_INTEGER, 255, type),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCondition // index 112
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Condition, 0, 0, 65535, 15, 7),
    EMBER_EXI_CH(attributeIdentifier, UNSIGNED_INTEGER, 255, attributeIdentifier),
    EMBER_EXI_CH(lowerThreshold, INTEGER, 255, lowerThreshold),
    EMBER_EXI_CH(upperThreshold, INTEGER, 255, upperThreshold),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedConfiguration // index 127
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Configuration, 2, 0, 1573, 30, 8),
    EMBER_EXI_CH_STRING(currentLocale, STRING, 255, currentLocale),
    EMBER_EXI_SUBSTRUCT_OPTION(PowerConfiguration, 0, 1, PowerConfiguration, EmberExiGeneratedPowerConfiguration, emberExiPowerConfigurationStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(PriceResponseCfgListLink, 0, 1, PriceResponseCfgListLink, EmberExiGeneratedPriceResponseCfgListLink, emberExiPriceResponseCfgListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(TimeConfiguration, 0, 1, TimeConfiguration, EmberExiGeneratedTimeConfiguration, emberExiTimeConfigurationStructDataIndex),
    EMBER_EXI_CH_STRING(userDeviceName, STRING, 255, userDeviceName),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedConfigurationLink // index 157
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ConfigurationLink, 1, 0, 1021, 6, 9),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedCustomerAccountListLink // index 163
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_CustomerAccountListLink, 2, 0, 1045, 6, 10),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERListLink // index 169
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERListLink, 2, 0, 1045, 6, 11),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDERProgramListLink // index 175
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DERProgramListLink, 2, 0, 1045, 6, 12),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDRLCCapabilities // index 181
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DRLCCapabilities, 0, 0, 65535, 21, 13),
    EMBER_EXI_SUBSTRUCT(averageEnergy, 1, 0, averageEnergy, EmberExiGeneratedRealEnergy, emberExiRealEnergyStructDataIndex),
    EMBER_EXI_SUBSTRUCT(maxDemand, 1, 0, maxDemand, EmberExiGeneratedActivePower, emberExiActivePowerStructDataIndex),
    EMBER_EXI_CH(optionsImplemented, BINARY, 255, optionsImplemented),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDateTimeInterval // index 202
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DateTimeInterval, 0, 0, 65535, 12, 14),
    EMBER_EXI_CH(duration, INTEGER, 255, duration),
    EMBER_EXI_CH(start, INTEGER, 255, start),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDemandResponseProgram // index 214
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DemandResponseProgram, 1, 3, 928, 30, 15),
    EMBER_EXI_SUBSTRUCT_OPTION(ActiveEndDeviceControlListLink, 0, 1, ActiveEndDeviceControlListLink, EmberExiGeneratedActiveEndDeviceControlListLink, emberExiActiveEndDeviceControlListLinkStructDataIndex),
    EMBER_EXI_CH(availabilityUpdatePercentChangeThreshold, UNSIGNED_INTEGER, 1, availabilityUpdatePercentChangeThreshold_option),
    EMBER_EXI_SUBSTRUCT_OPTION(availabilityUpdatePowerChangeThreshold, 0, 1, availabilityUpdatePowerChangeThreshold, EmberExiGeneratedActivePower, emberExiActivePowerStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(EndDeviceControlListLink, 0, 1, EndDeviceControlListLink, EmberExiGeneratedEndDeviceControlListLink, emberExiEndDeviceControlListLinkStructDataIndex),
    EMBER_EXI_CH(primacy, UNSIGNED_INTEGER, 255, primacy),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDemandResponseProgramList // index 244
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DemandResponseProgramList, 4, 0, 1555, 12, 16),
    EMBER_EXI_SUBSTRUCT_ARRAY(DemandResponseProgram, 0, 255, DemandResponseProgram, EmberExiGeneratedDemandResponseProgram, emberExiDemandResponseProgramStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDemandResponseProgramListLink // index 256
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DemandResponseProgramListLink, 2, 0, 1045, 6, 17),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDeviceCapability // index 262
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DeviceCapability, 1, 10, 685, 24, 18),
    EMBER_EXI_SUBSTRUCT_OPTION(EndDeviceListLink, 0, 1, EndDeviceListLink, EmberExiGeneratedEndDeviceListLink, emberExiEndDeviceListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(MirrorUsagePointListLink, 0, 1, MirrorUsagePointListLink, EmberExiGeneratedMirrorUsagePointListLink, emberExiMirrorUsagePointListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(SelfDeviceLink, 0, 1, SelfDeviceLink, EmberExiGeneratedSelfDeviceLink, emberExiSelfDeviceLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDeviceInformation // index 286
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DeviceInformation, 1, 0, 1441, 54, 20),
    EMBER_EXI_SUBSTRUCT_OPTION(DRLCCapabilities, 0, 1, DRLCCapabilities, EmberExiGeneratedDRLCCapabilities, emberExiDRLCCapabilitiesStructDataIndex),
    EMBER_EXI_CH(functionsImplemented, BINARY, 0, functionsImplemented_option),
    EMBER_EXI_CH(lFDI, BINARY, 255, lFDI),
    EMBER_EXI_CH(mfDate, INTEGER, 255, mfDate),
    EMBER_EXI_CH_STRING(mfHwVer, STRING, 255, mfHwVer),
    EMBER_EXI_CH(mfID, INTEGER, 255, mfID),
    EMBER_EXI_CH_STRING(mfInfo, STRING, 0, mfInfo_option),
    EMBER_EXI_CH_STRING(mfModel, STRING, 255, mfModel),
    EMBER_EXI_CH_STRING(mfSerNum, STRING, 255, mfSerNum),
    EMBER_EXI_CH(primaryPower, UNSIGNED_INTEGER, 255, primaryPower),
    EMBER_EXI_CH(secondaryPower, UNSIGNED_INTEGER, 255, secondaryPower),
    EMBER_EXI_SUBSTRUCT_OPTION(SupportedLocaleListLink, 0, 1, SupportedLocaleListLink, EmberExiGeneratedSupportedLocaleListLink, emberExiSupportedLocaleListLinkStructDataIndex),
    EMBER_EXI_CH(swActTime, INTEGER, 255, swActTime),
    EMBER_EXI_CH_STRING(swVer, STRING, 255, swVer),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDeviceInformationLink // index 340
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DeviceInformationLink, 1, 0, 1021, 6, 21),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDeviceStatus // index 346
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DeviceStatus, 1, 0, 1441, 30, 22),
    EMBER_EXI_CH(changedTime, INTEGER, 255, changedTime),
    EMBER_EXI_CH(onCount, UNSIGNED_INTEGER, 0, onCount_option),
    EMBER_EXI_CH(opState, UNSIGNED_INTEGER, 1, opState_option),
    EMBER_EXI_CH(opTime, INTEGER, 2, opTime_option),
    EMBER_EXI_SUBSTRUCT_ARRAY(Temperature, 0, 255, Temperature, EmberExiGeneratedTemperature, emberExiTemperatureStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(TimeLink, 0, 1, TimeLink, EmberExiGeneratedTimeLink, emberExiTimeLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDeviceStatusLink // index 376
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DeviceStatusLink, 1, 0, 1021, 6, 23),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDrResponse // index 382
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DrResponse, 1, 4, 1492, 39, 24),
    EMBER_EXI_SUBSTRUCT_OPTION(ApplianceLoadReduction, 0, 1, ApplianceLoadReduction, EmberExiGeneratedApplianceLoadReduction, emberExiApplianceLoadReductionStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(AppliedTargetReduction, 0, 1, AppliedTargetReduction, EmberExiGeneratedAppliedTargetReduction, emberExiAppliedTargetReductionStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DutyCycle, 0, 1, DutyCycle, EmberExiGeneratedDutyCycle, emberExiDutyCycleStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(Offset, 0, 1, Offset, EmberExiGeneratedOffset, emberExiOffsetStructDataIndex),
    EMBER_EXI_CH(overrideDuration, UNSIGNED_INTEGER, 2, overrideDuration_option),
    EMBER_EXI_SUBSTRUCT_OPTION(SetPoint, 0, 1, SetPoint, EmberExiGeneratedSetPoint, emberExiSetPointStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedDutyCycle // index 421
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_DutyCycle, 0, 0, 65535, 9, 26),
    EMBER_EXI_CH(normalValue, UNSIGNED_INTEGER, 255, normalValue),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDevice // index 430
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDevice, 2, 11, 1, 36, 27),
    EMBER_EXI_SUBSTRUCT_OPTION(FlowReservationRequestListLink, 0, 1, FlowReservationRequestListLink, EmberExiGeneratedFlowReservationRequestListLink, emberExiFlowReservationRequestListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(FlowReservationResponseListLink, 0, 1, FlowReservationResponseListLink, EmberExiGeneratedFlowReservationResponseListLink, emberExiFlowReservationResponseListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(FunctionSetAssignmentsListLink, 0, 1, FunctionSetAssignmentsListLink, EmberExiGeneratedFunctionSetAssignmentsListLink, emberExiFunctionSetAssignmentsListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(RegistrationLink, 0, 1, RegistrationLink, EmberExiGeneratedRegistrationLink, emberExiRegistrationLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(SubscriptionListLink, 0, 1, SubscriptionListLink, EmberExiGeneratedSubscriptionListLink, emberExiSubscriptionListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceControl // index 466
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceControl, 4, 8, 1411, 48, 28),
    EMBER_EXI_SUBSTRUCT_OPTION(ApplianceLoadReduction, 0, 1, ApplianceLoadReduction, EmberExiGeneratedApplianceLoadReduction, emberExiApplianceLoadReductionStructDataIndex),
    EMBER_EXI_CH(deviceCategory, BINARY, 255, deviceCategory),
    EMBER_EXI_CH(drProgramMandatory, BOOLEAN, 255, drProgramMandatory),
    EMBER_EXI_SUBSTRUCT_OPTION(DutyCycle, 0, 1, DutyCycle, EmberExiGeneratedDutyCycle, emberExiDutyCycleStructDataIndex),
    EMBER_EXI_CH(loadShiftForward, BOOLEAN, 255, loadShiftForward),
    EMBER_EXI_SUBSTRUCT_OPTION(Offset, 0, 1, Offset, EmberExiGeneratedOffset, emberExiOffsetStructDataIndex),
    EMBER_EXI_CH(overrideDuration, UNSIGNED_INTEGER, 5, overrideDuration_option),
    EMBER_EXI_SUBSTRUCT_OPTION(SetPoint, 0, 1, SetPoint, EmberExiGeneratedSetPoint, emberExiSetPointStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(TargetReduction, 0, 1, TargetReduction, EmberExiGeneratedTargetReduction, emberExiTargetReductionStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceControlList // index 514
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceControlList, 4, 0, 1555, 12, 29),
    EMBER_EXI_SUBSTRUCT_ARRAY(EndDeviceControl, 0, 255, EndDeviceControl, EmberExiGeneratedEndDeviceControl, emberExiEndDeviceControlStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceControlListLink // index 526
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceControlListLink, 2, 0, 1045, 6, 30),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceList // index 532
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceList, 4, 0, 1555, 12, 31),
    EMBER_EXI_SUBSTRUCT_ARRAY(EndDevice, 0, 255, EndDevice, EmberExiGeneratedEndDevice, emberExiEndDeviceStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEndDeviceListLink // index 544
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EndDeviceListLink, 2, 0, 1045, 6, 32),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEvent // index 550
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Event, 4, 3, 1465, 21, 33),
    EMBER_EXI_CH(creationTime, INTEGER, 255, creationTime),
    EMBER_EXI_SUBSTRUCT(EventStatus, 1, 0, EventStatus, EmberExiGeneratedEventStatus, emberExiEventStatusStructDataIndex),
    EMBER_EXI_SUBSTRUCT(interval, 1, 0, interval, EmberExiGeneratedDateTimeInterval, emberExiDateTimeIntervalStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedEventStatus // index 571
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_EventStatus, 0, 0, 65535, 21, 34),
    EMBER_EXI_CH(currentStatus, UNSIGNED_INTEGER, 255, currentStatus),
    EMBER_EXI_CH(dateTime, INTEGER, 255, dateTime),
    EMBER_EXI_CH(potentiallySuperseded, BOOLEAN, 255, potentiallySuperseded),
    EMBER_EXI_CH(potentiallySupersededTime, INTEGER, 0, potentiallySupersededTime_option),
    EMBER_EXI_CH_STRING(reason, STRING, 0, reason_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFile // index 592
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_File, 1, 0, 1441, 36, 35),
    EMBER_EXI_CH(activateTime, INTEGER, 0, activateTime_option),
    EMBER_EXI_CH_STRING(fileURI, STRING, 255, fileURI),
    EMBER_EXI_CH(lFDI, BINARY, 1, lFDI_option),
    EMBER_EXI_CH_STRING(mfHwVer, STRING, 0, mfHwVer_option),
    EMBER_EXI_CH(mfID, INTEGER, 255, mfID),
    EMBER_EXI_CH_STRING(mfModel, STRING, 255, mfModel),
    EMBER_EXI_CH_STRING(mfSerNum, STRING, 0, mfSerNum_option),
    EMBER_EXI_CH_STRING(mfVer, STRING, 255, mfVer),
    EMBER_EXI_CH(size, INTEGER, 255, size),
    EMBER_EXI_CH(type, BINARY, 255, type),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFileList // index 628
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FileList, 3, 0, 1030, 12, 36),
    EMBER_EXI_SUBSTRUCT_ARRAY(File, 0, 255, File, EmberExiGeneratedFile, emberExiFileStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFileListLink // index 640
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FileListLink, 2, 0, 1045, 6, 37),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFileStatusLink // index 646
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FileStatusLink, 1, 0, 1021, 6, 38),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFlowReservationRequestListLink // index 652
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FlowReservationRequestListLink, 2, 0, 1045, 6, 39),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFlowReservationResponseListLink // index 658
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FlowReservationResponseListLink, 2, 0, 1045, 6, 40),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFunctionSetAssignments // index 664
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FunctionSetAssignments, 0, 10, 685, 21, 41),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
    EMBER_EXI_AT(subscribable, UNSIGNED_INTEGER, 0, subscribable_option),
    EMBER_EXI_CH(mRID, BINARY, 255, mRID),
    EMBER_EXI_CH_STRING(description, STRING, 0, description_option),
    EMBER_EXI_CH(version, UNSIGNED_INTEGER, 1, version_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFunctionSetAssignmentsBase // index 685
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FunctionSetAssignmentsBase, 1, 0, 1441, 66, 42),
    EMBER_EXI_SUBSTRUCT_OPTION(CustomerAccountListLink, 0, 1, CustomerAccountListLink, EmberExiGeneratedCustomerAccountListLink, emberExiCustomerAccountListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DemandResponseProgramListLink, 0, 1, DemandResponseProgramListLink, EmberExiGeneratedDemandResponseProgramListLink, emberExiDemandResponseProgramListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(DERProgramListLink, 0, 1, DERProgramListLink, EmberExiGeneratedDERProgramListLink, emberExiDERProgramListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(FileListLink, 0, 1, FileListLink, EmberExiGeneratedFileListLink, emberExiFileListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(MessagingProgramListLink, 0, 1, MessagingProgramListLink, EmberExiGeneratedMessagingProgramListLink, emberExiMessagingProgramListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(PrepaymentListLink, 0, 1, PrepaymentListLink, EmberExiGeneratedPrepaymentListLink, emberExiPrepaymentListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(ResponseSetListLink, 0, 1, ResponseSetListLink, EmberExiGeneratedResponseSetListLink, emberExiResponseSetListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(TariffProfileListLink, 0, 1, TariffProfileListLink, EmberExiGeneratedTariffProfileListLink, emberExiTariffProfileListLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(TimeLink, 0, 1, TimeLink, EmberExiGeneratedTimeLink, emberExiTimeLinkStructDataIndex),
    EMBER_EXI_SUBSTRUCT_OPTION(UsagePointListLink, 0, 1, UsagePointListLink, EmberExiGeneratedUsagePointListLink, emberExiUsagePointListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFunctionSetAssignmentsList // index 751
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FunctionSetAssignmentsList, 4, 0, 1555, 12, 43),
    EMBER_EXI_SUBSTRUCT_ARRAY(FunctionSetAssignments, 0, 255, FunctionSetAssignments, EmberExiGeneratedFunctionSetAssignments, emberExiFunctionSetAssignmentsStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedFunctionSetAssignmentsListLink // index 763
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_FunctionSetAssignmentsListLink, 2, 0, 1045, 6, 44),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIEEE_802_15_4 // index 769
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IEEE_802_15_4, 0, 0, 65535, 18, 45),
    EMBER_EXI_CH(capabilityInfo, BINARY, 255, capabilityInfo),
    EMBER_EXI_SUBSTRUCT_OPTION(NeighborListLink, 0, 1, NeighborListLink, EmberExiGeneratedNeighborListLink, emberExiNeighborListLinkStructDataIndex),
    EMBER_EXI_CH(shortAddress, UNSIGNED_INTEGER, 255, shortAddress),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIPAddr // index 787
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IPAddr, 1, 0, 1441, 15, 46),
    EMBER_EXI_CH(address, BINARY, 255, address),
    EMBER_EXI_SUBSTRUCT_OPTION(RPLInstanceListLink, 0, 1, RPLInstanceListLink, EmberExiGeneratedRPLInstanceListLink, emberExiRPLInstanceListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIPAddrList // index 802
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IPAddrList, 3, 0, 1030, 12, 47),
    EMBER_EXI_SUBSTRUCT_ARRAY(IPAddr, 0, 255, IPAddr, EmberExiGeneratedIPAddr, emberExiIPAddrStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIPAddrListLink // index 814
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IPAddrListLink, 2, 0, 1045, 6, 48),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIPInterface // index 820
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IPInterface, 1, 0, 1441, 90, 49),
    EMBER_EXI_CH_STRING(ifDescr, STRING, 0, ifDescr_option),
    EMBER_EXI_CH(ifHighSpeed, INTEGER, 0, ifHighSpeed_option),
    EMBER_EXI_CH(ifInBroadcastPkts, INTEGER, 1, ifInBroadcastPkts_option),
    EMBER_EXI_CH(ifIndex, INTEGER, 2, ifIndex_option),
    EMBER_EXI_CH(ifInDiscards, INTEGER, 3, ifInDiscards_option),
    EMBER_EXI_CH(ifInErrors, INTEGER, 4, ifInErrors_option),
    EMBER_EXI_CH(ifInMulticastPkts, INTEGER, 5, ifInMulticastPkts_option),
    EMBER_EXI_CH(ifInOctets, INTEGER, 6, ifInOctets_option),
    EMBER_EXI_CH(ifInUcastPkts, INTEGER, 7, ifInUcastPkts_option),
    EMBER_EXI_CH(ifInUnknownProtos, INTEGER, 8, ifInUnknownProtos_option),
    EMBER_EXI_CH(ifMtu, INTEGER, 9, ifMtu_option),
    EMBER_EXI_CH_STRING(ifName, STRING, 0, ifName_option),
    EMBER_EXI_CH(ifOperStatus, UNSIGNED_INTEGER, 10, ifOperStatus_option),
    EMBER_EXI_CH(ifOutBroadcastPkts, INTEGER, 11, ifOutBroadcastPkts_option),
    EMBER_EXI_CH(ifOutDiscards, INTEGER, 12, ifOutDiscards_option),
    EMBER_EXI_CH(ifOutErrors, INTEGER, 13, ifOutErrors_option),
    EMBER_EXI_CH(ifOutMulticastPkts, INTEGER, 14, ifOutMulticastPkts_option),
    EMBER_EXI_CH(ifOutOctets, INTEGER, 15, ifOutOctets_option),
    EMBER_EXI_CH(ifOutUcastPkts, INTEGER, 16, ifOutUcastPkts_option),
    EMBER_EXI_CH(ifPromiscuousMode, BOOLEAN, 17, ifPromiscuousMode_option),
    EMBER_EXI_CH(ifSpeed, INTEGER, 18, ifSpeed_option),
    EMBER_EXI_CH(ifType, UNSIGNED_INTEGER, 19, ifType_option),
    EMBER_EXI_SUBSTRUCT_OPTION(IPAddrListLink, 0, 1, IPAddrListLink, EmberExiGeneratedIPAddrListLink, emberExiIPAddrListLinkStructDataIndex),
    EMBER_EXI_CH(lastResetTime, INTEGER, 20, lastResetTime_option),
    EMBER_EXI_CH(lastUpdatedTime, INTEGER, 21, lastUpdatedTime_option),
    EMBER_EXI_SUBSTRUCT_OPTION(LLInterfaceListLink, 0, 1, LLInterfaceListLink, EmberExiGeneratedLLInterfaceListLink, emberExiLLInterfaceListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIPInterfaceList // index 910
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IPInterfaceList, 3, 0, 1030, 12, 50),
    EMBER_EXI_SUBSTRUCT_ARRAY(IPInterface, 0, 255, IPInterface, EmberExiGeneratedIPInterface, emberExiIPInterfaceStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIPInterfaceListLink // index 922
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IPInterfaceListLink, 2, 0, 1045, 6, 51),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedIdentifiedObject // index 928
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_IdentifiedObject, 1, 0, 1441, 15, 52),
    EMBER_EXI_CH(mRID, BINARY, 255, mRID),
    EMBER_EXI_CH_STRING(description, STRING, 0, description_option),
    EMBER_EXI_CH(version, UNSIGNED_INTEGER, 0, version_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLLInterface // index 943
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LLInterface, 1, 0, 1441, 60, 53),
    EMBER_EXI_CH(CRCerrors, INTEGER, 255, CRCerrors),
    EMBER_EXI_CH(EUI64, BINARY, 255, EUI64),
    EMBER_EXI_SUBSTRUCT_OPTION(IEEE_802_15_4, 0, 1, IEEE_802_15_4, EmberExiGeneratedIEEE_802_15_4, emberExiIEEE_802_15_4StructDataIndex),
    EMBER_EXI_CH(linkLayerType, UNSIGNED_INTEGER, 255, linkLayerType),
    EMBER_EXI_CH(LLAckNotRx, INTEGER, 0, LLAckNotRx_option),
    EMBER_EXI_CH(LLCSMAFail, INTEGER, 1, LLCSMAFail_option),
    EMBER_EXI_CH(LLFramesDropRx, INTEGER, 2, LLFramesDropRx_option),
    EMBER_EXI_CH(LLFramesDropTx, INTEGER, 3, LLFramesDropTx_option),
    EMBER_EXI_CH(LLFramesRx, INTEGER, 4, LLFramesRx_option),
    EMBER_EXI_CH(LLFramesTx, INTEGER, 5, LLFramesTx_option),
    EMBER_EXI_CH(LLMediaAccessFail, INTEGER, 6, LLMediaAccessFail_option),
    EMBER_EXI_CH(LLOctetsRx, INTEGER, 7, LLOctetsRx_option),
    EMBER_EXI_CH(LLOctetsTx, INTEGER, 8, LLOctetsTx_option),
    EMBER_EXI_CH(LLRetryCount, INTEGER, 9, LLRetryCount_option),
    EMBER_EXI_CH(LLSecurityErrorRx, INTEGER, 10, LLSecurityErrorRx_option),
    EMBER_EXI_SUBSTRUCT_OPTION(loWPAN, 0, 1, loWPAN, EmberExiGeneratedloWPAN, emberExiloWPANStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLLInterfaceList // index 1003
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LLInterfaceList, 3, 0, 1030, 12, 54),
    EMBER_EXI_SUBSTRUCT_ARRAY(LLInterface, 0, 255, LLInterface, EmberExiGeneratedLLInterface, emberExiLLInterfaceStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLLInterfaceListLink // index 1015
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LLInterfaceListLink, 2, 0, 1045, 6, 55),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLink // index 1021
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Link, 0, 0, 65535, 9, 56),
    EMBER_EXI_AT_STRING(href, STRING, 255, href),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedList // index 1030
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_List, 0, 0, 1441, 15, 57),
    EMBER_EXI_AT(all, UNSIGNED_INTEGER, 255, all),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
    EMBER_EXI_AT(results, UNSIGNED_INTEGER, 255, results),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedListLink // index 1045
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ListLink, 0, 0, 1021, 12, 58),
    EMBER_EXI_AT(all, UNSIGNED_INTEGER, 255, all),
    EMBER_EXI_AT_STRING(href, STRING, 255, href),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLoadShedAvailabilityLink // index 1057
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LoadShedAvailabilityLink, 1, 0, 1021, 6, 59),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLogEvent // index 1063
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LogEvent, 1, 0, 1441, 27, 61),
    EMBER_EXI_CH(createdDateTime, INTEGER, 255, createdDateTime),
    EMBER_EXI_CH(extendedData, INTEGER, 0, extendedData_option),
    EMBER_EXI_CH(functionSet, UNSIGNED_INTEGER, 255, functionSet),
    EMBER_EXI_CH(logEventCode, UNSIGNED_INTEGER, 255, logEventCode),
    EMBER_EXI_CH(logEventID, UNSIGNED_INTEGER, 255, logEventID),
    EMBER_EXI_CH(logEventPEN, INTEGER, 255, logEventPEN),
    EMBER_EXI_CH(profileID, UNSIGNED_INTEGER, 255, profileID),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLogEventList // index 1090
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LogEventList, 4, 0, 1555, 12, 62),
    EMBER_EXI_SUBSTRUCT_ARRAY(LogEvent, 0, 255, LogEvent, EmberExiGeneratedLogEvent, emberExiLogEventStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedLogEventListLink // index 1102
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_LogEventListLink, 2, 0, 1045, 6, 63),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMessagingProgram // index 1108
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MessagingProgram, 2, 3, 1540, 24, 64),
    EMBER_EXI_SUBSTRUCT_OPTION(ActiveTextMessageListLink, 0, 1, ActiveTextMessageListLink, EmberExiGeneratedActiveTextMessageListLink, emberExiActiveTextMessageListLinkStructDataIndex),
    EMBER_EXI_CH_STRING(locale, STRING, 255, locale),
    EMBER_EXI_CH(primacy, UNSIGNED_INTEGER, 255, primacy),
    EMBER_EXI_SUBSTRUCT_OPTION(TextMessageListLink, 0, 1, TextMessageListLink, EmberExiGeneratedTextMessageListLink, emberExiTextMessageListLinkStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMessagingProgramList // index 1132
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MessagingProgramList, 4, 0, 1555, 12, 65),
    EMBER_EXI_SUBSTRUCT_ARRAY(MessagingProgram, 0, 255, MessagingProgram, EmberExiGeneratedMessagingProgram, emberExiMessagingProgramStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMessagingProgramListLink // index 1144
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MessagingProgramListLink, 2, 0, 1045, 6, 66),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedMirrorUsagePointListLink // index 1150
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_MirrorUsagePointListLink, 2, 0, 1045, 6, 67),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedNeighbor // index 1156
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Neighbor, 1, 0, 1441, 15, 68),
    EMBER_EXI_CH(isChild, BOOLEAN, 255, isChild),
    EMBER_EXI_CH(linkQuality, UNSIGNED_INTEGER, 255, linkQuality),
    EMBER_EXI_CH(shortAddress, UNSIGNED_INTEGER, 255, shortAddress),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedNeighborList // index 1171
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_NeighborList, 3, 0, 1030, 12, 69),
    EMBER_EXI_SUBSTRUCT_ARRAY(Neighbor, 0, 255, Neighbor, EmberExiGeneratedNeighbor, emberExiNeighborStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedNeighborListLink // index 1183
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_NeighborListLink, 2, 0, 1045, 6, 70),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedNotification // index 1189
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Notification, 1, 1, 1609, 21, 71),
    EMBER_EXI_CH_STRING(newResourceURI, STRING, 0, newResourceURI_option),
    EMBER_EXI_SUBSTRUCT_OPTION(Resource, 0, 1, Resource, EmberExiGeneratedResource, emberExiResourceStructDataIndex),
    EMBER_EXI_CH(status, UNSIGNED_INTEGER, 255, status),
    EMBER_EXI_CH_STRING(subscriptionURI, STRING, 255, subscriptionURI),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedOffset // index 1210
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Offset, 0, 0, 65535, 15, 72),
    EMBER_EXI_CH(coolingOffset, UNSIGNED_INTEGER, 0, coolingOffset_option),
    EMBER_EXI_CH(heatingOffset, UNSIGNED_INTEGER, 1, heatingOffset_option),
    EMBER_EXI_CH(loadAdjustmentPercentageOffset, UNSIGNED_INTEGER, 2, loadAdjustmentPercentageOffset_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPEVInfo // index 1225
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PEVInfo, 0, 0, 65535, 36, 75),
    EMBER_EXI_SUBSTRUCT(chargingPowerNow, 1, 0, chargingPowerNow, EmberExiGeneratedActivePower, emberExiActivePowerStructDataIndex),
    EMBER_EXI_SUBSTRUCT(energyRequestNow, 1, 0, energyRequestNow, EmberExiGeneratedRealEnergy, emberExiRealEnergyStructDataIndex),
    EMBER_EXI_SUBSTRUCT(maxForwardPower, 1, 0, maxForwardPower, EmberExiGeneratedActivePower, emberExiActivePowerStructDataIndex),
    EMBER_EXI_CH(minimumChargingDuration, INTEGER, 255, minimumChargingDuration),
    EMBER_EXI_CH(targetStateOfCharge, UNSIGNED_INTEGER, 255, targetStateOfCharge),
    EMBER_EXI_CH(timeChargeIsNeeded, INTEGER, 255, timeChargeIsNeeded),
    EMBER_EXI_CH(timeChargingStatusPEV, INTEGER, 255, timeChargingStatusPEV),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPowerConfiguration // index 1261
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PowerConfiguration, 0, 0, 65535, 12, 77),
    EMBER_EXI_CH(batteryInstallTime, INTEGER, 0, batteryInstallTime_option),
    EMBER_EXI_CH(lowChargeThreshold, INTEGER, 1, lowChargeThreshold_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPowerStatus // index 1273
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PowerStatus, 1, 0, 1441, 33, 80),
    EMBER_EXI_CH(batteryStatus, UNSIGNED_INTEGER, 255, batteryStatus),
    EMBER_EXI_CH(changedTime, INTEGER, 255, changedTime),
    EMBER_EXI_CH(currentPowerSource, UNSIGNED_INTEGER, 255, currentPowerSource),
    EMBER_EXI_CH(estimatedChargeRemaining, UNSIGNED_INTEGER, 0, estimatedChargeRemaining_option),
    EMBER_EXI_CH(estimatedTimeRemaining, INTEGER, 1, estimatedTimeRemaining_option),
    EMBER_EXI_SUBSTRUCT_OPTION(PEVInfo, 0, 1, PEVInfo, EmberExiGeneratedPEVInfo, emberExiPEVInfoStructDataIndex),
    EMBER_EXI_CH(sessionTimeOnBattery, INTEGER, 2, sessionTimeOnBattery_option),
    EMBER_EXI_CH(totalTimeOnBattery, INTEGER, 3, totalTimeOnBattery_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPowerStatusLink // index 1306
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PowerStatusLink, 1, 0, 1021, 6, 81),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPrepaymentListLink // index 1312
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PrepaymentListLink, 2, 0, 1045, 6, 82),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedPriceResponseCfgListLink // index 1318
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_PriceResponseCfgListLink, 2, 0, 1045, 6, 83),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRPLInstance // index 1324
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RPLInstance, 1, 0, 1441, 39, 86),
    EMBER_EXI_CH(DODAGid, UNSIGNED_INTEGER, 255, DODAGid),
    EMBER_EXI_CH(DODAGroot, BOOLEAN, 255, DODAGroot),
    EMBER_EXI_CH(flags, UNSIGNED_INTEGER, 255, flags),
    EMBER_EXI_CH(groundedFlag, BOOLEAN, 255, groundedFlag),
    EMBER_EXI_CH(MOP, UNSIGNED_INTEGER, 255, MOP),
    EMBER_EXI_CH(PRF, UNSIGNED_INTEGER, 255, PRF),
    EMBER_EXI_CH(rank, UNSIGNED_INTEGER, 255, rank),
    EMBER_EXI_CH(RPLInstanceID, UNSIGNED_INTEGER, 255, RPLInstanceID),
    EMBER_EXI_SUBSTRUCT_OPTION(RPLSourceRoutesListLink, 0, 1, RPLSourceRoutesListLink, EmberExiGeneratedRPLSourceRoutesListLink, emberExiRPLSourceRoutesListLinkStructDataIndex),
    EMBER_EXI_CH(versionNumber, UNSIGNED_INTEGER, 255, versionNumber),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRPLInstanceList // index 1363
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RPLInstanceList, 3, 0, 1030, 12, 87),
    EMBER_EXI_SUBSTRUCT_ARRAY(RPLInstance, 0, 255, RPLInstance, EmberExiGeneratedRPLInstance, emberExiRPLInstanceStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRPLInstanceListLink // index 1375
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RPLInstanceListLink, 2, 0, 1045, 6, 88),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRPLSourceRoutes // index 1381
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RPLSourceRoutes, 1, 0, 1441, 12, 89),
    EMBER_EXI_CH(DestAddress, BINARY, 255, DestAddress),
    EMBER_EXI_CH(SourceRoute, BINARY, 255, SourceRoute),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRPLSourceRoutesList // index 1393
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RPLSourceRoutesList, 3, 0, 1030, 12, 90),
    EMBER_EXI_SUBSTRUCT_ARRAY(RPLSourceRoutes, 0, 255, RPLSourceRoutes, EmberExiGeneratedRPLSourceRoutes, emberExiRPLSourceRoutesStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRPLSourceRoutesListLink // index 1405
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RPLSourceRoutesListLink, 2, 0, 1045, 6, 91),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRandomizableEvent // index 1411
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RandomizableEvent, 4, 6, 550, 12, 92),
    EMBER_EXI_CH(randomizeDuration, INTEGER, 3, randomizeDuration_option),
    EMBER_EXI_CH(randomizeStart, INTEGER, 4, randomizeStart_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRealEnergy // index 1423
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RealEnergy, 0, 0, 65535, 12, 93),
    EMBER_EXI_CH(multiplier, INTEGER, 255, multiplier),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRegistrationLink // index 1435
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RegistrationLink, 1, 0, 1021, 6, 94),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedResource // index 1441
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Resource, 0, 0, 65535, 9, 95),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRespondableResource // index 1450
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RespondableResource, 0, 0, 1441, 15, 96),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
    EMBER_EXI_AT_STRING(replyTo, STRING, 0, replyTo_option),
    EMBER_EXI_AT(responseRequired, BINARY, 0, responseRequired_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedRespondableSubscribableIdentifiedObject // index 1465
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_RespondableSubscribableIdentifiedObject, 0, 0, 1450, 27, 97),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
    EMBER_EXI_AT_STRING(replyTo, STRING, 0, replyTo_option),
    EMBER_EXI_AT(responseRequired, BINARY, 0, responseRequired_option),
    EMBER_EXI_AT(subscribable, UNSIGNED_INTEGER, 1, subscribable_option),
    EMBER_EXI_CH(mRID, BINARY, 255, mRID),
    EMBER_EXI_CH_STRING(description, STRING, 0, description_option),
    EMBER_EXI_CH(version, UNSIGNED_INTEGER, 2, version_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedResponse // index 1492
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Response, 1, 0, 1441, 18, 98),
    EMBER_EXI_CH(createdDateTime, INTEGER, 0, createdDateTime_option),
    EMBER_EXI_CH(endDeviceLFDI, BINARY, 255, endDeviceLFDI),
    EMBER_EXI_CH(status, UNSIGNED_INTEGER, 1, status_option),
    EMBER_EXI_CH(subject, BINARY, 255, subject),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedResponseSetListLink // index 1510
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_ResponseSetListLink, 2, 0, 1045, 6, 99),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSelfDevice // index 1516
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SelfDevice, 2, 11, 1, 6, 101),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSelfDeviceLink // index 1522
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SelfDeviceLink, 1, 0, 1021, 6, 102),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSetPoint // index 1528
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SetPoint, 0, 0, 65535, 12, 103),
    EMBER_EXI_CH(coolingSetpoint, INTEGER, 0, coolingSetpoint_option),
    EMBER_EXI_CH(heatingSetpoint, INTEGER, 1, heatingSetpoint_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscribableIdentifiedObject // index 1540
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SubscribableIdentifiedObject, 2, 0, 1573, 15, 104),
    EMBER_EXI_CH(mRID, BINARY, 255, mRID),
    EMBER_EXI_CH_STRING(description, STRING, 0, description_option),
    EMBER_EXI_CH(version, UNSIGNED_INTEGER, 1, version_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscribableList // index 1555
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SubscribableList, 0, 0, 1573, 18, 105),
    EMBER_EXI_AT(all, UNSIGNED_INTEGER, 255, all),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
    EMBER_EXI_AT(results, UNSIGNED_INTEGER, 255, results),
    EMBER_EXI_AT(subscribable, UNSIGNED_INTEGER, 0, subscribable_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscribableResource // index 1573
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SubscribableResource, 0, 0, 1441, 12, 106),
    EMBER_EXI_AT_STRING(href, STRING, 0, href_option),
    EMBER_EXI_AT(subscribable, UNSIGNED_INTEGER, 0, subscribable_option),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscription // index 1585
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Subscription, 1, 1, 1609, 24, 107),
    EMBER_EXI_SUBSTRUCT_OPTION(Condition, 0, 1, Condition, EmberExiGeneratedCondition, emberExiConditionStructDataIndex),
    EMBER_EXI_CH(encoding, UNSIGNED_INTEGER, 255, encoding),
    EMBER_EXI_CH_STRING(level, STRING, 255, level),
    EMBER_EXI_CH(limit, UNSIGNED_INTEGER, 255, limit),
    EMBER_EXI_CH_STRING(notificationURI, STRING, 255, notificationURI),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscriptionBase // index 1609
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SubscriptionBase, 1, 0, 1441, 9, 108),
    EMBER_EXI_CH_STRING(subscribedResource, STRING, 255, subscribedResource),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscriptionList // index 1618
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SubscriptionList, 3, 0, 1030, 12, 109),
    EMBER_EXI_SUBSTRUCT_ARRAY(Subscription, 0, 255, Subscription, EmberExiGeneratedSubscription, emberExiSubscriptionStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSubscriptionListLink // index 1630
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SubscriptionListLink, 2, 0, 1045, 6, 110),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedSupportedLocaleListLink // index 1636
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_SupportedLocaleListLink, 2, 0, 1045, 6, 111),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTargetReduction // index 1642
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TargetReduction, 0, 0, 65535, 12, 112),
    EMBER_EXI_CH(type, UNSIGNED_INTEGER, 255, type),
    EMBER_EXI_CH(value, UNSIGNED_INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTariffProfileListLink // index 1654
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TariffProfileListLink, 2, 0, 1045, 6, 113),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTemperature // index 1660
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Temperature, 0, 0, 65535, 15, 114),
    EMBER_EXI_CH(multiplier, INTEGER, 255, multiplier),
    EMBER_EXI_CH(subject, UNSIGNED_INTEGER, 255, subject),
    EMBER_EXI_CH(value, INTEGER, 255, value),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTextMessage // index 1675
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TextMessage, 4, 6, 550, 15, 115),
    EMBER_EXI_CH_STRING(originator, STRING, 0, originator_option),
    EMBER_EXI_CH(priority, UNSIGNED_INTEGER, 255, priority),
    EMBER_EXI_CH_STRING(textMessage, STRING, 255, textMessage),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTextMessageList // index 1690
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TextMessageList, 4, 0, 1555, 12, 116),
    EMBER_EXI_SUBSTRUCT_ARRAY(TextMessage, 0, 255, TextMessage, EmberExiGeneratedTextMessage, emberExiTextMessageStructDataIndex),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTextMessageListLink // index 1702
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TextMessageListLink, 2, 0, 1045, 6, 117),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTextResponse // index 1708
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TextResponse, 1, 4, 1492, 6, 118),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTime // index 1714
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_Time, 1, 0, 1441, 27, 119),
    EMBER_EXI_CH(currentTime, INTEGER, 255, currentTime),
    EMBER_EXI_CH(dstEndTime, INTEGER, 255, dstEndTime),
    EMBER_EXI_CH(dstOffset, INTEGER, 255, dstOffset),
    EMBER_EXI_CH(dstStartTime, INTEGER, 255, dstStartTime),
    EMBER_EXI_CH(localTime, INTEGER, 0, localTime_option),
    EMBER_EXI_CH(quality, UNSIGNED_INTEGER, 255, quality),
    EMBER_EXI_CH(tzOffset, INTEGER, 255, tzOffset),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTimeConfiguration // index 1741
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TimeConfiguration, 0, 0, 65535, 18, 120),
    EMBER_EXI_CH(dstEndRule, BINARY, 255, dstEndRule),
    EMBER_EXI_CH(dstOffset, INTEGER, 255, dstOffset),
    EMBER_EXI_CH(dstStartRule, BINARY, 255, dstStartRule),
    EMBER_EXI_CH(tzOffset, INTEGER, 255, tzOffset),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedTimeLink // index 1759
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_TimeLink, 1, 0, 1021, 6, 121),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedUsagePointListLink // index 1765
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_UsagePointListLink, 2, 0, 1045, 6, 125),
#undef EMBER_EXI_STRUCT

#define EMBER_EXI_STRUCT EmberExiGeneratedloWPAN // index 1771
    EMBER_EXI_FIELD_START(EMBER_EXI_QNAME_loWPAN, 0, 0, 65535, 21, 127),
    EMBER_EXI_CH(octetsRx, INTEGER, 0, octetsRx_option),
    EMBER_EXI_CH(octetsTx, INTEGER, 1, octetsTx_option),
    EMBER_EXI_CH(packetsRx, INTEGER, 255, packetsRx),
    EMBER_EXI_CH(packetsTx, INTEGER, 255, packetsTx),
    EMBER_EXI_CH(rxFragError, INTEGER, 255, rxFragError),
#undef EMBER_EXI_STRUCT

    EMBER_EXI_QNAME_NONE // terminator

};



void emberExiPrintStructAbstractDevice(EmberExiGeneratedAbstractDevice *data)
{
  emExiPrintStruct(emberExiAbstractDeviceStructData,
                   (int8u *) data,
                   0,
                   "AbstractDevice",
                   emberExiQnames);
}


void emberExiToXmlStructAbstractDevice(EmberExiGeneratedAbstractDevice *data) {
  EXI_DEBUG1("Start to XML: AbstractDevice\n");
  emberExiPrintfLine("<AbstractDevice");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
    if ( data->ConfigurationLink_option != NULL )
      emberExiToXmlStructConfigurationLink((data->ConfigurationLink_option));
    if ( data->DERListLink_option != NULL )
      emberExiToXmlStructDERListLink((data->DERListLink_option));
    if ( data->DeviceInformationLink_option != NULL )
      emberExiToXmlStructDeviceInformationLink((data->DeviceInformationLink_option));
    if ( data->DeviceStatusLink_option != NULL )
      emberExiToXmlStructDeviceStatusLink((data->DeviceStatusLink_option));
    if ( data->FileStatusLink_option != NULL )
      emberExiToXmlStructFileStatusLink((data->FileStatusLink_option));
    if ( data->IPInterfaceListLink_option != NULL )
      emberExiToXmlStructIPInterfaceListLink((data->IPInterfaceListLink_option));
    if ( data->LoadShedAvailabilityLink_option != NULL )
      emberExiToXmlStructLoadShedAvailabilityLink((data->LoadShedAvailabilityLink_option));
  emberExiPrintfLine("  <loadShedDeviceCategory>");
  { int16u i;
    for ( i=0; i<data->loadShedDeviceCategory_option.length; i++ )
      emberExiPrintfLine("%2x", data->loadShedDeviceCategory_option.bytes[i]);
  }
  emberExiPrintfLine("</loadShedDeviceCategory>");
    if ( data->LogEventListLink_option != NULL )
      emberExiToXmlStructLogEventListLink((data->LogEventListLink_option));
    if ( data->PowerStatusLink_option != NULL )
      emberExiToXmlStructPowerStatusLink((data->PowerStatusLink_option));
  emberExiPrintfLine("  <sFDI>%d</sFDI>", data->sFDI);
  emberExiPrintfLine("</AbstractDevice>");
  EXI_DEBUG1("End to XML: AbstractDevice\n");
}




void emberExiPrintStructActiveEndDeviceControlListLink(EmberExiGeneratedActiveEndDeviceControlListLink *data)
{
  emExiPrintStruct(emberExiActiveEndDeviceControlListLinkStructData,
                   (int8u *) data,
                   0,
                   "ActiveEndDeviceControlListLink",
                   emberExiQnames);
}


void emberExiToXmlStructActiveEndDeviceControlListLink(EmberExiGeneratedActiveEndDeviceControlListLink *data) {
  EXI_DEBUG1("Start to XML: ActiveEndDeviceControlListLink\n");
  emberExiPrintfLine("<ActiveEndDeviceControlListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ActiveEndDeviceControlListLink>");
  EXI_DEBUG1("End to XML: ActiveEndDeviceControlListLink\n");
}




void emberExiPrintStructActivePower(EmberExiGeneratedActivePower *data)
{
  emExiPrintStruct(emberExiActivePowerStructData,
                   (int8u *) data,
                   0,
                   "ActivePower",
                   emberExiQnames);
}


void emberExiToXmlStructActivePower(EmberExiGeneratedActivePower *data) {
  EXI_DEBUG1("Start to XML: ActivePower\n");
  emberExiPrintfLine("<ActivePower");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <multiplier>%d</multiplier>", data->multiplier);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</ActivePower>");
  EXI_DEBUG1("End to XML: ActivePower\n");
}




void emberExiPrintStructActiveTextMessageListLink(EmberExiGeneratedActiveTextMessageListLink *data)
{
  emExiPrintStruct(emberExiActiveTextMessageListLinkStructData,
                   (int8u *) data,
                   0,
                   "ActiveTextMessageListLink",
                   emberExiQnames);
}


void emberExiToXmlStructActiveTextMessageListLink(EmberExiGeneratedActiveTextMessageListLink *data) {
  EXI_DEBUG1("Start to XML: ActiveTextMessageListLink\n");
  emberExiPrintfLine("<ActiveTextMessageListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ActiveTextMessageListLink>");
  EXI_DEBUG1("End to XML: ActiveTextMessageListLink\n");
}




void emberExiPrintStructApplianceLoadReduction(EmberExiGeneratedApplianceLoadReduction *data)
{
  emExiPrintStruct(emberExiApplianceLoadReductionStructData,
                   (int8u *) data,
                   0,
                   "ApplianceLoadReduction",
                   emberExiQnames);
}


void emberExiToXmlStructApplianceLoadReduction(EmberExiGeneratedApplianceLoadReduction *data) {
  EXI_DEBUG1("Start to XML: ApplianceLoadReduction\n");
  emberExiPrintfLine("<ApplianceLoadReduction");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <type>%d</type>", data->type);
  emberExiPrintfLine("</ApplianceLoadReduction>");
  EXI_DEBUG1("End to XML: ApplianceLoadReduction\n");
}




void emberExiPrintStructAppliedTargetReduction(EmberExiGeneratedAppliedTargetReduction *data)
{
  emExiPrintStruct(emberExiAppliedTargetReductionStructData,
                   (int8u *) data,
                   0,
                   "AppliedTargetReduction",
                   emberExiQnames);
}


void emberExiToXmlStructAppliedTargetReduction(EmberExiGeneratedAppliedTargetReduction *data) {
  EXI_DEBUG1("Start to XML: AppliedTargetReduction\n");
  emberExiPrintfLine("<AppliedTargetReduction");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <type>%d</type>", data->type);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</AppliedTargetReduction>");
  EXI_DEBUG1("End to XML: AppliedTargetReduction\n");
}




void emberExiPrintStructCondition(EmberExiGeneratedCondition *data)
{
  emExiPrintStruct(emberExiConditionStructData,
                   (int8u *) data,
                   0,
                   "Condition",
                   emberExiQnames);
}


void emberExiToXmlStructCondition(EmberExiGeneratedCondition *data) {
  EXI_DEBUG1("Start to XML: Condition\n");
  emberExiPrintfLine("<Condition");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <attributeIdentifier>%d</attributeIdentifier>", data->attributeIdentifier);
  emberExiPrintfLine("  <lowerThreshold>%d</lowerThreshold>", data->lowerThreshold);
  emberExiPrintfLine("  <upperThreshold>%d</upperThreshold>", data->upperThreshold);
  emberExiPrintfLine("</Condition>");
  EXI_DEBUG1("End to XML: Condition\n");
}




void emberExiPrintStructConfiguration(EmberExiGeneratedConfiguration *data)
{
  emExiPrintStruct(emberExiConfigurationStructData,
                   (int8u *) data,
                   0,
                   "Configuration",
                   emberExiQnames);
}


void emberExiToXmlStructConfiguration(EmberExiGeneratedConfiguration *data) {
  EXI_DEBUG1("Start to XML: Configuration\n");
  emberExiPrintfLine("<Configuration");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <currentLocale>%s</currentLocale>", data->currentLocale);
    if ( data->PowerConfiguration_option != NULL )
      emberExiToXmlStructPowerConfiguration((data->PowerConfiguration_option));
    if ( data->PriceResponseCfgListLink_option != NULL )
      emberExiToXmlStructPriceResponseCfgListLink((data->PriceResponseCfgListLink_option));
    if ( data->TimeConfiguration_option != NULL )
      emberExiToXmlStructTimeConfiguration((data->TimeConfiguration_option));
  emberExiPrintfLine("  <userDeviceName>%s</userDeviceName>", data->userDeviceName);
  emberExiPrintfLine("</Configuration>");
  EXI_DEBUG1("End to XML: Configuration\n");
}




void emberExiPrintStructConfigurationLink(EmberExiGeneratedConfigurationLink *data)
{
  emExiPrintStruct(emberExiConfigurationLinkStructData,
                   (int8u *) data,
                   0,
                   "ConfigurationLink",
                   emberExiQnames);
}


void emberExiToXmlStructConfigurationLink(EmberExiGeneratedConfigurationLink *data) {
  EXI_DEBUG1("Start to XML: ConfigurationLink\n");
  emberExiPrintfLine("<ConfigurationLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ConfigurationLink>");
  EXI_DEBUG1("End to XML: ConfigurationLink\n");
}




void emberExiPrintStructCustomerAccountListLink(EmberExiGeneratedCustomerAccountListLink *data)
{
  emExiPrintStruct(emberExiCustomerAccountListLinkStructData,
                   (int8u *) data,
                   0,
                   "CustomerAccountListLink",
                   emberExiQnames);
}


void emberExiToXmlStructCustomerAccountListLink(EmberExiGeneratedCustomerAccountListLink *data) {
  EXI_DEBUG1("Start to XML: CustomerAccountListLink\n");
  emberExiPrintfLine("<CustomerAccountListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</CustomerAccountListLink>");
  EXI_DEBUG1("End to XML: CustomerAccountListLink\n");
}




void emberExiPrintStructDERListLink(EmberExiGeneratedDERListLink *data)
{
  emExiPrintStruct(emberExiDERListLinkStructData,
                   (int8u *) data,
                   0,
                   "DERListLink",
                   emberExiQnames);
}


void emberExiToXmlStructDERListLink(EmberExiGeneratedDERListLink *data) {
  EXI_DEBUG1("Start to XML: DERListLink\n");
  emberExiPrintfLine("<DERListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DERListLink>");
  EXI_DEBUG1("End to XML: DERListLink\n");
}




void emberExiPrintStructDERProgramListLink(EmberExiGeneratedDERProgramListLink *data)
{
  emExiPrintStruct(emberExiDERProgramListLinkStructData,
                   (int8u *) data,
                   0,
                   "DERProgramListLink",
                   emberExiQnames);
}


void emberExiToXmlStructDERProgramListLink(EmberExiGeneratedDERProgramListLink *data) {
  EXI_DEBUG1("Start to XML: DERProgramListLink\n");
  emberExiPrintfLine("<DERProgramListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DERProgramListLink>");
  EXI_DEBUG1("End to XML: DERProgramListLink\n");
}




void emberExiPrintStructDRLCCapabilities(EmberExiGeneratedDRLCCapabilities *data)
{
  emExiPrintStruct(emberExiDRLCCapabilitiesStructData,
                   (int8u *) data,
                   0,
                   "DRLCCapabilities",
                   emberExiQnames);
}


void emberExiToXmlStructDRLCCapabilities(EmberExiGeneratedDRLCCapabilities *data) {
  EXI_DEBUG1("Start to XML: DRLCCapabilities\n");
  emberExiPrintfLine("<DRLCCapabilities");
  emberExiPrintfLine(">");
    if ( data->averageEnergy != NULL )
      emberExiToXmlStructRealEnergy((data->averageEnergy));
    if ( data->maxDemand != NULL )
      emberExiToXmlStructActivePower((data->maxDemand));
  emberExiPrintfLine("  <optionsImplemented>");
  { int16u i;
    for ( i=0; i<data->optionsImplemented.length; i++ )
      emberExiPrintfLine("%2x", data->optionsImplemented.bytes[i]);
  }
  emberExiPrintfLine("</optionsImplemented>");
  emberExiPrintfLine("</DRLCCapabilities>");
  EXI_DEBUG1("End to XML: DRLCCapabilities\n");
}




void emberExiPrintStructDateTimeInterval(EmberExiGeneratedDateTimeInterval *data)
{
  emExiPrintStruct(emberExiDateTimeIntervalStructData,
                   (int8u *) data,
                   0,
                   "DateTimeInterval",
                   emberExiQnames);
}


void emberExiToXmlStructDateTimeInterval(EmberExiGeneratedDateTimeInterval *data) {
  EXI_DEBUG1("Start to XML: DateTimeInterval\n");
  emberExiPrintfLine("<DateTimeInterval");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <duration>%d</duration>", data->duration);
  emberExiPrintfLine("  <start>%d</start>", data->start);
  emberExiPrintfLine("</DateTimeInterval>");
  EXI_DEBUG1("End to XML: DateTimeInterval\n");
}




void emberExiPrintStructDemandResponseProgram(EmberExiGeneratedDemandResponseProgram *data)
{
  emExiPrintStruct(emberExiDemandResponseProgramStructData,
                   (int8u *) data,
                   0,
                   "DemandResponseProgram",
                   emberExiQnames);
}


void emberExiToXmlStructDemandResponseProgram(EmberExiGeneratedDemandResponseProgram *data) {
  EXI_DEBUG1("Start to XML: DemandResponseProgram\n");
  emberExiPrintfLine("<DemandResponseProgram");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
    if ( data->ActiveEndDeviceControlListLink_option != NULL )
      emberExiToXmlStructActiveEndDeviceControlListLink((data->ActiveEndDeviceControlListLink_option));
  emberExiPrintfLine("  <availabilityUpdatePercentChangeThreshold>%d</availabilityUpdatePercentChangeThreshold>", data->availabilityUpdatePercentChangeThreshold_option);
    if ( data->availabilityUpdatePowerChangeThreshold_option != NULL )
      emberExiToXmlStructActivePower((data->availabilityUpdatePowerChangeThreshold_option));
    if ( data->EndDeviceControlListLink_option != NULL )
      emberExiToXmlStructEndDeviceControlListLink((data->EndDeviceControlListLink_option));
  emberExiPrintfLine("  <primacy>%d</primacy>", data->primacy);
  emberExiPrintfLine("</DemandResponseProgram>");
  EXI_DEBUG1("End to XML: DemandResponseProgram\n");
}




void emberExiPrintStructDemandResponseProgramList(EmberExiGeneratedDemandResponseProgramList *data)
{
  emExiPrintStruct(emberExiDemandResponseProgramListStructData,
                   (int8u *) data,
                   0,
                   "DemandResponseProgramList",
                   emberExiQnames);
}


void emberExiToXmlStructDemandResponseProgramList(EmberExiGeneratedDemandResponseProgramList *data) {
  EXI_DEBUG1("Start to XML: DemandResponseProgramList\n");
  emberExiPrintfLine("<DemandResponseProgramList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->DemandResponseProgram_count; i++ )
    if ( data->DemandResponseProgram_array != NULL )
      emberExiToXmlStructDemandResponseProgram(&(data->DemandResponseProgram_array[i]));
  }
  emberExiPrintfLine("</DemandResponseProgramList>");
  EXI_DEBUG1("End to XML: DemandResponseProgramList\n");
}




void emberExiPrintStructDemandResponseProgramListLink(EmberExiGeneratedDemandResponseProgramListLink *data)
{
  emExiPrintStruct(emberExiDemandResponseProgramListLinkStructData,
                   (int8u *) data,
                   0,
                   "DemandResponseProgramListLink",
                   emberExiQnames);
}


void emberExiToXmlStructDemandResponseProgramListLink(EmberExiGeneratedDemandResponseProgramListLink *data) {
  EXI_DEBUG1("Start to XML: DemandResponseProgramListLink\n");
  emberExiPrintfLine("<DemandResponseProgramListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DemandResponseProgramListLink>");
  EXI_DEBUG1("End to XML: DemandResponseProgramListLink\n");
}




void emberExiPrintStructDeviceCapability(EmberExiGeneratedDeviceCapability *data)
{
  emExiPrintStruct(emberExiDeviceCapabilityStructData,
                   (int8u *) data,
                   0,
                   "DeviceCapability",
                   emberExiQnames);
}


void emberExiToXmlStructDeviceCapability(EmberExiGeneratedDeviceCapability *data) {
  EXI_DEBUG1("Start to XML: DeviceCapability\n");
  emberExiPrintfLine("<DeviceCapability");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
    if ( data->CustomerAccountListLink_option != NULL )
      emberExiToXmlStructCustomerAccountListLink((data->CustomerAccountListLink_option));
    if ( data->DemandResponseProgramListLink_option != NULL )
      emberExiToXmlStructDemandResponseProgramListLink((data->DemandResponseProgramListLink_option));
    if ( data->DERProgramListLink_option != NULL )
      emberExiToXmlStructDERProgramListLink((data->DERProgramListLink_option));
    if ( data->FileListLink_option != NULL )
      emberExiToXmlStructFileListLink((data->FileListLink_option));
    if ( data->MessagingProgramListLink_option != NULL )
      emberExiToXmlStructMessagingProgramListLink((data->MessagingProgramListLink_option));
    if ( data->PrepaymentListLink_option != NULL )
      emberExiToXmlStructPrepaymentListLink((data->PrepaymentListLink_option));
    if ( data->ResponseSetListLink_option != NULL )
      emberExiToXmlStructResponseSetListLink((data->ResponseSetListLink_option));
    if ( data->TariffProfileListLink_option != NULL )
      emberExiToXmlStructTariffProfileListLink((data->TariffProfileListLink_option));
    if ( data->TimeLink_option != NULL )
      emberExiToXmlStructTimeLink((data->TimeLink_option));
    if ( data->UsagePointListLink_option != NULL )
      emberExiToXmlStructUsagePointListLink((data->UsagePointListLink_option));
    if ( data->EndDeviceListLink_option != NULL )
      emberExiToXmlStructEndDeviceListLink((data->EndDeviceListLink_option));
    if ( data->MirrorUsagePointListLink_option != NULL )
      emberExiToXmlStructMirrorUsagePointListLink((data->MirrorUsagePointListLink_option));
    if ( data->SelfDeviceLink_option != NULL )
      emberExiToXmlStructSelfDeviceLink((data->SelfDeviceLink_option));
  emberExiPrintfLine("</DeviceCapability>");
  EXI_DEBUG1("End to XML: DeviceCapability\n");
}




void emberExiPrintStructDeviceInformation(EmberExiGeneratedDeviceInformation *data)
{
  emExiPrintStruct(emberExiDeviceInformationStructData,
                   (int8u *) data,
                   0,
                   "DeviceInformation",
                   emberExiQnames);
}


void emberExiToXmlStructDeviceInformation(EmberExiGeneratedDeviceInformation *data) {
  EXI_DEBUG1("Start to XML: DeviceInformation\n");
  emberExiPrintfLine("<DeviceInformation");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
    if ( data->DRLCCapabilities_option != NULL )
      emberExiToXmlStructDRLCCapabilities((data->DRLCCapabilities_option));
  emberExiPrintfLine("  <functionsImplemented>");
  { int16u i;
    for ( i=0; i<data->functionsImplemented_option.length; i++ )
      emberExiPrintfLine("%2x", data->functionsImplemented_option.bytes[i]);
  }
  emberExiPrintfLine("</functionsImplemented>");
  emberExiPrintfLine("  <lFDI>");
  { int16u i;
    for ( i=0; i<data->lFDI.length; i++ )
      emberExiPrintfLine("%2x", data->lFDI.bytes[i]);
  }
  emberExiPrintfLine("</lFDI>");
  emberExiPrintfLine("  <mfDate>%d</mfDate>", data->mfDate);
  emberExiPrintfLine("  <mfHwVer>%s</mfHwVer>", data->mfHwVer);
  emberExiPrintfLine("  <mfID>%d</mfID>", data->mfID);
  emberExiPrintfLine("  <mfInfo>%s</mfInfo>", data->mfInfo_option);
  emberExiPrintfLine("  <mfModel>%s</mfModel>", data->mfModel);
  emberExiPrintfLine("  <mfSerNum>%s</mfSerNum>", data->mfSerNum);
  emberExiPrintfLine("  <primaryPower>%d</primaryPower>", data->primaryPower);
  emberExiPrintfLine("  <secondaryPower>%d</secondaryPower>", data->secondaryPower);
    if ( data->SupportedLocaleListLink_option != NULL )
      emberExiToXmlStructSupportedLocaleListLink((data->SupportedLocaleListLink_option));
  emberExiPrintfLine("  <swActTime>%d</swActTime>", data->swActTime);
  emberExiPrintfLine("  <swVer>%s</swVer>", data->swVer);
  emberExiPrintfLine("</DeviceInformation>");
  EXI_DEBUG1("End to XML: DeviceInformation\n");
}




void emberExiPrintStructDeviceInformationLink(EmberExiGeneratedDeviceInformationLink *data)
{
  emExiPrintStruct(emberExiDeviceInformationLinkStructData,
                   (int8u *) data,
                   0,
                   "DeviceInformationLink",
                   emberExiQnames);
}


void emberExiToXmlStructDeviceInformationLink(EmberExiGeneratedDeviceInformationLink *data) {
  EXI_DEBUG1("Start to XML: DeviceInformationLink\n");
  emberExiPrintfLine("<DeviceInformationLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DeviceInformationLink>");
  EXI_DEBUG1("End to XML: DeviceInformationLink\n");
}




void emberExiPrintStructDeviceStatus(EmberExiGeneratedDeviceStatus *data)
{
  emExiPrintStruct(emberExiDeviceStatusStructData,
                   (int8u *) data,
                   0,
                   "DeviceStatus",
                   emberExiQnames);
}


void emberExiToXmlStructDeviceStatus(EmberExiGeneratedDeviceStatus *data) {
  EXI_DEBUG1("Start to XML: DeviceStatus\n");
  emberExiPrintfLine("<DeviceStatus");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <changedTime>%d</changedTime>", data->changedTime);
  emberExiPrintfLine("  <onCount>%d</onCount>", data->onCount_option);
  emberExiPrintfLine("  <opState>%d</opState>", data->opState_option);
  emberExiPrintfLine("  <opTime>%d</opTime>", data->opTime_option);
  { int16u i;
    for ( i=0; i<data->Temperature_count; i++ )
    if ( data->Temperature_array != NULL )
      emberExiToXmlStructTemperature(&(data->Temperature_array[i]));
  }
    if ( data->TimeLink_option != NULL )
      emberExiToXmlStructTimeLink((data->TimeLink_option));
  emberExiPrintfLine("</DeviceStatus>");
  EXI_DEBUG1("End to XML: DeviceStatus\n");
}




void emberExiPrintStructDeviceStatusLink(EmberExiGeneratedDeviceStatusLink *data)
{
  emExiPrintStruct(emberExiDeviceStatusLinkStructData,
                   (int8u *) data,
                   0,
                   "DeviceStatusLink",
                   emberExiQnames);
}


void emberExiToXmlStructDeviceStatusLink(EmberExiGeneratedDeviceStatusLink *data) {
  EXI_DEBUG1("Start to XML: DeviceStatusLink\n");
  emberExiPrintfLine("<DeviceStatusLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</DeviceStatusLink>");
  EXI_DEBUG1("End to XML: DeviceStatusLink\n");
}




void emberExiPrintStructDrResponse(EmberExiGeneratedDrResponse *data)
{
  emExiPrintStruct(emberExiDrResponseStructData,
                   (int8u *) data,
                   0,
                   "DrResponse",
                   emberExiQnames);
}


void emberExiToXmlStructDrResponse(EmberExiGeneratedDrResponse *data) {
  EXI_DEBUG1("Start to XML: DrResponse\n");
  emberExiPrintfLine("<DrResponse");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  emberExiPrintfLine("  <endDeviceLFDI>");
  { int16u i;
    for ( i=0; i<data->endDeviceLFDI.length; i++ )
      emberExiPrintfLine("%2x", data->endDeviceLFDI.bytes[i]);
  }
  emberExiPrintfLine("</endDeviceLFDI>");
  emberExiPrintfLine("  <status>%d</status>", data->status_option);
  emberExiPrintfLine("  <subject>");
  { int16u i;
    for ( i=0; i<data->subject.length; i++ )
      emberExiPrintfLine("%2x", data->subject.bytes[i]);
  }
  emberExiPrintfLine("</subject>");
    if ( data->ApplianceLoadReduction_option != NULL )
      emberExiToXmlStructApplianceLoadReduction((data->ApplianceLoadReduction_option));
    if ( data->AppliedTargetReduction_option != NULL )
      emberExiToXmlStructAppliedTargetReduction((data->AppliedTargetReduction_option));
    if ( data->DutyCycle_option != NULL )
      emberExiToXmlStructDutyCycle((data->DutyCycle_option));
    if ( data->Offset_option != NULL )
      emberExiToXmlStructOffset((data->Offset_option));
  emberExiPrintfLine("  <overrideDuration>%d</overrideDuration>", data->overrideDuration_option);
    if ( data->SetPoint_option != NULL )
      emberExiToXmlStructSetPoint((data->SetPoint_option));
  emberExiPrintfLine("</DrResponse>");
  EXI_DEBUG1("End to XML: DrResponse\n");
}




void emberExiPrintStructDutyCycle(EmberExiGeneratedDutyCycle *data)
{
  emExiPrintStruct(emberExiDutyCycleStructData,
                   (int8u *) data,
                   0,
                   "DutyCycle",
                   emberExiQnames);
}


void emberExiToXmlStructDutyCycle(EmberExiGeneratedDutyCycle *data) {
  EXI_DEBUG1("Start to XML: DutyCycle\n");
  emberExiPrintfLine("<DutyCycle");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <normalValue>%d</normalValue>", data->normalValue);
  emberExiPrintfLine("</DutyCycle>");
  EXI_DEBUG1("End to XML: DutyCycle\n");
}




void emberExiPrintStructEndDevice(EmberExiGeneratedEndDevice *data)
{
  emExiPrintStruct(emberExiEndDeviceStructData,
                   (int8u *) data,
                   0,
                   "EndDevice",
                   emberExiQnames);
}


void emberExiToXmlStructEndDevice(EmberExiGeneratedEndDevice *data) {
  EXI_DEBUG1("Start to XML: EndDevice\n");
  emberExiPrintfLine("<EndDevice");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
    if ( data->ConfigurationLink_option != NULL )
      emberExiToXmlStructConfigurationLink((data->ConfigurationLink_option));
    if ( data->DERListLink_option != NULL )
      emberExiToXmlStructDERListLink((data->DERListLink_option));
    if ( data->DeviceInformationLink_option != NULL )
      emberExiToXmlStructDeviceInformationLink((data->DeviceInformationLink_option));
    if ( data->DeviceStatusLink_option != NULL )
      emberExiToXmlStructDeviceStatusLink((data->DeviceStatusLink_option));
    if ( data->FileStatusLink_option != NULL )
      emberExiToXmlStructFileStatusLink((data->FileStatusLink_option));
    if ( data->IPInterfaceListLink_option != NULL )
      emberExiToXmlStructIPInterfaceListLink((data->IPInterfaceListLink_option));
    if ( data->LoadShedAvailabilityLink_option != NULL )
      emberExiToXmlStructLoadShedAvailabilityLink((data->LoadShedAvailabilityLink_option));
  emberExiPrintfLine("  <loadShedDeviceCategory>");
  { int16u i;
    for ( i=0; i<data->loadShedDeviceCategory_option.length; i++ )
      emberExiPrintfLine("%2x", data->loadShedDeviceCategory_option.bytes[i]);
  }
  emberExiPrintfLine("</loadShedDeviceCategory>");
    if ( data->LogEventListLink_option != NULL )
      emberExiToXmlStructLogEventListLink((data->LogEventListLink_option));
    if ( data->PowerStatusLink_option != NULL )
      emberExiToXmlStructPowerStatusLink((data->PowerStatusLink_option));
  emberExiPrintfLine("  <sFDI>%d</sFDI>", data->sFDI);
    if ( data->FlowReservationRequestListLink_option != NULL )
      emberExiToXmlStructFlowReservationRequestListLink((data->FlowReservationRequestListLink_option));
    if ( data->FlowReservationResponseListLink_option != NULL )
      emberExiToXmlStructFlowReservationResponseListLink((data->FlowReservationResponseListLink_option));
    if ( data->FunctionSetAssignmentsListLink_option != NULL )
      emberExiToXmlStructFunctionSetAssignmentsListLink((data->FunctionSetAssignmentsListLink_option));
    if ( data->RegistrationLink_option != NULL )
      emberExiToXmlStructRegistrationLink((data->RegistrationLink_option));
    if ( data->SubscriptionListLink_option != NULL )
      emberExiToXmlStructSubscriptionListLink((data->SubscriptionListLink_option));
  emberExiPrintfLine("</EndDevice>");
  EXI_DEBUG1("End to XML: EndDevice\n");
}




void emberExiPrintStructEndDeviceControl(EmberExiGeneratedEndDeviceControl *data)
{
  emExiPrintStruct(emberExiEndDeviceControlStructData,
                   (int8u *) data,
                   0,
                   "EndDeviceControl",
                   emberExiQnames);
}


void emberExiToXmlStructEndDeviceControl(EmberExiGeneratedEndDeviceControl *data) {
  EXI_DEBUG1("Start to XML: EndDeviceControl\n");
  emberExiPrintfLine("<EndDeviceControl");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      emberExiToXmlStructEventStatus((data->EventStatus));
    if ( data->interval != NULL )
      emberExiToXmlStructDateTimeInterval((data->interval));
  emberExiPrintfLine("  <randomizeDuration>%d</randomizeDuration>", data->randomizeDuration_option);
  emberExiPrintfLine("  <randomizeStart>%d</randomizeStart>", data->randomizeStart_option);
    if ( data->ApplianceLoadReduction_option != NULL )
      emberExiToXmlStructApplianceLoadReduction((data->ApplianceLoadReduction_option));
  emberExiPrintfLine("  <deviceCategory>");
  { int16u i;
    for ( i=0; i<data->deviceCategory.length; i++ )
      emberExiPrintfLine("%2x", data->deviceCategory.bytes[i]);
  }
  emberExiPrintfLine("</deviceCategory>");
  emberExiPrintfLine("  <drProgramMandatory>%d</drProgramMandatory>", data->drProgramMandatory);
    if ( data->DutyCycle_option != NULL )
      emberExiToXmlStructDutyCycle((data->DutyCycle_option));
  emberExiPrintfLine("  <loadShiftForward>%d</loadShiftForward>", data->loadShiftForward);
    if ( data->Offset_option != NULL )
      emberExiToXmlStructOffset((data->Offset_option));
  emberExiPrintfLine("  <overrideDuration>%d</overrideDuration>", data->overrideDuration_option);
    if ( data->SetPoint_option != NULL )
      emberExiToXmlStructSetPoint((data->SetPoint_option));
    if ( data->TargetReduction_option != NULL )
      emberExiToXmlStructTargetReduction((data->TargetReduction_option));
  emberExiPrintfLine("</EndDeviceControl>");
  EXI_DEBUG1("End to XML: EndDeviceControl\n");
}




void emberExiPrintStructEndDeviceControlList(EmberExiGeneratedEndDeviceControlList *data)
{
  emExiPrintStruct(emberExiEndDeviceControlListStructData,
                   (int8u *) data,
                   0,
                   "EndDeviceControlList",
                   emberExiQnames);
}


void emberExiToXmlStructEndDeviceControlList(EmberExiGeneratedEndDeviceControlList *data) {
  EXI_DEBUG1("Start to XML: EndDeviceControlList\n");
  emberExiPrintfLine("<EndDeviceControlList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->EndDeviceControl_count; i++ )
    if ( data->EndDeviceControl_array != NULL )
      emberExiToXmlStructEndDeviceControl(&(data->EndDeviceControl_array[i]));
  }
  emberExiPrintfLine("</EndDeviceControlList>");
  EXI_DEBUG1("End to XML: EndDeviceControlList\n");
}




void emberExiPrintStructEndDeviceControlListLink(EmberExiGeneratedEndDeviceControlListLink *data)
{
  emExiPrintStruct(emberExiEndDeviceControlListLinkStructData,
                   (int8u *) data,
                   0,
                   "EndDeviceControlListLink",
                   emberExiQnames);
}


void emberExiToXmlStructEndDeviceControlListLink(EmberExiGeneratedEndDeviceControlListLink *data) {
  EXI_DEBUG1("Start to XML: EndDeviceControlListLink\n");
  emberExiPrintfLine("<EndDeviceControlListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</EndDeviceControlListLink>");
  EXI_DEBUG1("End to XML: EndDeviceControlListLink\n");
}




void emberExiPrintStructEndDeviceList(EmberExiGeneratedEndDeviceList *data)
{
  emExiPrintStruct(emberExiEndDeviceListStructData,
                   (int8u *) data,
                   0,
                   "EndDeviceList",
                   emberExiQnames);
}


void emberExiToXmlStructEndDeviceList(EmberExiGeneratedEndDeviceList *data) {
  EXI_DEBUG1("Start to XML: EndDeviceList\n");
  emberExiPrintfLine("<EndDeviceList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->EndDevice_count; i++ )
    if ( data->EndDevice_array != NULL )
      emberExiToXmlStructEndDevice(&(data->EndDevice_array[i]));
  }
  emberExiPrintfLine("</EndDeviceList>");
  EXI_DEBUG1("End to XML: EndDeviceList\n");
}




void emberExiPrintStructEndDeviceListLink(EmberExiGeneratedEndDeviceListLink *data)
{
  emExiPrintStruct(emberExiEndDeviceListLinkStructData,
                   (int8u *) data,
                   0,
                   "EndDeviceListLink",
                   emberExiQnames);
}


void emberExiToXmlStructEndDeviceListLink(EmberExiGeneratedEndDeviceListLink *data) {
  EXI_DEBUG1("Start to XML: EndDeviceListLink\n");
  emberExiPrintfLine("<EndDeviceListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</EndDeviceListLink>");
  EXI_DEBUG1("End to XML: EndDeviceListLink\n");
}




void emberExiPrintStructEvent(EmberExiGeneratedEvent *data)
{
  emExiPrintStruct(emberExiEventStructData,
                   (int8u *) data,
                   0,
                   "Event",
                   emberExiQnames);
}


void emberExiToXmlStructEvent(EmberExiGeneratedEvent *data) {
  EXI_DEBUG1("Start to XML: Event\n");
  emberExiPrintfLine("<Event");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      emberExiToXmlStructEventStatus((data->EventStatus));
    if ( data->interval != NULL )
      emberExiToXmlStructDateTimeInterval((data->interval));
  emberExiPrintfLine("</Event>");
  EXI_DEBUG1("End to XML: Event\n");
}




void emberExiPrintStructEventStatus(EmberExiGeneratedEventStatus *data)
{
  emExiPrintStruct(emberExiEventStatusStructData,
                   (int8u *) data,
                   0,
                   "EventStatus",
                   emberExiQnames);
}


void emberExiToXmlStructEventStatus(EmberExiGeneratedEventStatus *data) {
  EXI_DEBUG1("Start to XML: EventStatus\n");
  emberExiPrintfLine("<EventStatus");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <currentStatus>%d</currentStatus>", data->currentStatus);
  emberExiPrintfLine("  <dateTime>%d</dateTime>", data->dateTime);
  emberExiPrintfLine("  <potentiallySuperseded>%d</potentiallySuperseded>", data->potentiallySuperseded);
  emberExiPrintfLine("  <potentiallySupersededTime>%d</potentiallySupersededTime>", data->potentiallySupersededTime_option);
  emberExiPrintfLine("  <reason>%s</reason>", data->reason_option);
  emberExiPrintfLine("</EventStatus>");
  EXI_DEBUG1("End to XML: EventStatus\n");
}




void emberExiPrintStructFile(EmberExiGeneratedFile *data)
{
  emExiPrintStruct(emberExiFileStructData,
                   (int8u *) data,
                   0,
                   "File",
                   emberExiQnames);
}


void emberExiToXmlStructFile(EmberExiGeneratedFile *data) {
  EXI_DEBUG1("Start to XML: File\n");
  emberExiPrintfLine("<File");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <activateTime>%d</activateTime>", data->activateTime_option);
  emberExiPrintfLine("  <fileURI>%s</fileURI>", data->fileURI);
  emberExiPrintfLine("  <lFDI>");
  { int16u i;
    for ( i=0; i<data->lFDI_option.length; i++ )
      emberExiPrintfLine("%2x", data->lFDI_option.bytes[i]);
  }
  emberExiPrintfLine("</lFDI>");
  emberExiPrintfLine("  <mfHwVer>%s</mfHwVer>", data->mfHwVer_option);
  emberExiPrintfLine("  <mfID>%d</mfID>", data->mfID);
  emberExiPrintfLine("  <mfModel>%s</mfModel>", data->mfModel);
  emberExiPrintfLine("  <mfSerNum>%s</mfSerNum>", data->mfSerNum_option);
  emberExiPrintfLine("  <mfVer>%s</mfVer>", data->mfVer);
  emberExiPrintfLine("  <size>%d</size>", data->size);
  emberExiPrintfLine("  <type>");
  { int16u i;
    for ( i=0; i<data->type.length; i++ )
      emberExiPrintfLine("%2x", data->type.bytes[i]);
  }
  emberExiPrintfLine("</type>");
  emberExiPrintfLine("</File>");
  EXI_DEBUG1("End to XML: File\n");
}




void emberExiPrintStructFileList(EmberExiGeneratedFileList *data)
{
  emExiPrintStruct(emberExiFileListStructData,
                   (int8u *) data,
                   0,
                   "FileList",
                   emberExiQnames);
}


void emberExiToXmlStructFileList(EmberExiGeneratedFileList *data) {
  EXI_DEBUG1("Start to XML: FileList\n");
  emberExiPrintfLine("<FileList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->File_count; i++ )
    if ( data->File_array != NULL )
      emberExiToXmlStructFile(&(data->File_array[i]));
  }
  emberExiPrintfLine("</FileList>");
  EXI_DEBUG1("End to XML: FileList\n");
}




void emberExiPrintStructFileListLink(EmberExiGeneratedFileListLink *data)
{
  emExiPrintStruct(emberExiFileListLinkStructData,
                   (int8u *) data,
                   0,
                   "FileListLink",
                   emberExiQnames);
}


void emberExiToXmlStructFileListLink(EmberExiGeneratedFileListLink *data) {
  EXI_DEBUG1("Start to XML: FileListLink\n");
  emberExiPrintfLine("<FileListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</FileListLink>");
  EXI_DEBUG1("End to XML: FileListLink\n");
}




void emberExiPrintStructFileStatusLink(EmberExiGeneratedFileStatusLink *data)
{
  emExiPrintStruct(emberExiFileStatusLinkStructData,
                   (int8u *) data,
                   0,
                   "FileStatusLink",
                   emberExiQnames);
}


void emberExiToXmlStructFileStatusLink(EmberExiGeneratedFileStatusLink *data) {
  EXI_DEBUG1("Start to XML: FileStatusLink\n");
  emberExiPrintfLine("<FileStatusLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</FileStatusLink>");
  EXI_DEBUG1("End to XML: FileStatusLink\n");
}




void emberExiPrintStructFlowReservationRequestListLink(EmberExiGeneratedFlowReservationRequestListLink *data)
{
  emExiPrintStruct(emberExiFlowReservationRequestListLinkStructData,
                   (int8u *) data,
                   0,
                   "FlowReservationRequestListLink",
                   emberExiQnames);
}


void emberExiToXmlStructFlowReservationRequestListLink(EmberExiGeneratedFlowReservationRequestListLink *data) {
  EXI_DEBUG1("Start to XML: FlowReservationRequestListLink\n");
  emberExiPrintfLine("<FlowReservationRequestListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</FlowReservationRequestListLink>");
  EXI_DEBUG1("End to XML: FlowReservationRequestListLink\n");
}




void emberExiPrintStructFlowReservationResponseListLink(EmberExiGeneratedFlowReservationResponseListLink *data)
{
  emExiPrintStruct(emberExiFlowReservationResponseListLinkStructData,
                   (int8u *) data,
                   0,
                   "FlowReservationResponseListLink",
                   emberExiQnames);
}


void emberExiToXmlStructFlowReservationResponseListLink(EmberExiGeneratedFlowReservationResponseListLink *data) {
  EXI_DEBUG1("Start to XML: FlowReservationResponseListLink\n");
  emberExiPrintfLine("<FlowReservationResponseListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</FlowReservationResponseListLink>");
  EXI_DEBUG1("End to XML: FlowReservationResponseListLink\n");
}




void emberExiPrintStructFunctionSetAssignments(EmberExiGeneratedFunctionSetAssignments *data)
{
  emExiPrintStruct(emberExiFunctionSetAssignmentsStructData,
                   (int8u *) data,
                   0,
                   "FunctionSetAssignments",
                   emberExiQnames);
}


void emberExiToXmlStructFunctionSetAssignments(EmberExiGeneratedFunctionSetAssignments *data) {
  EXI_DEBUG1("Start to XML: FunctionSetAssignments\n");
  emberExiPrintfLine("<FunctionSetAssignments");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
    if ( data->CustomerAccountListLink_option != NULL )
      emberExiToXmlStructCustomerAccountListLink((data->CustomerAccountListLink_option));
    if ( data->DemandResponseProgramListLink_option != NULL )
      emberExiToXmlStructDemandResponseProgramListLink((data->DemandResponseProgramListLink_option));
    if ( data->DERProgramListLink_option != NULL )
      emberExiToXmlStructDERProgramListLink((data->DERProgramListLink_option));
    if ( data->FileListLink_option != NULL )
      emberExiToXmlStructFileListLink((data->FileListLink_option));
    if ( data->MessagingProgramListLink_option != NULL )
      emberExiToXmlStructMessagingProgramListLink((data->MessagingProgramListLink_option));
    if ( data->PrepaymentListLink_option != NULL )
      emberExiToXmlStructPrepaymentListLink((data->PrepaymentListLink_option));
    if ( data->ResponseSetListLink_option != NULL )
      emberExiToXmlStructResponseSetListLink((data->ResponseSetListLink_option));
    if ( data->TariffProfileListLink_option != NULL )
      emberExiToXmlStructTariffProfileListLink((data->TariffProfileListLink_option));
    if ( data->TimeLink_option != NULL )
      emberExiToXmlStructTimeLink((data->TimeLink_option));
    if ( data->UsagePointListLink_option != NULL )
      emberExiToXmlStructUsagePointListLink((data->UsagePointListLink_option));
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("</FunctionSetAssignments>");
  EXI_DEBUG1("End to XML: FunctionSetAssignments\n");
}




void emberExiPrintStructFunctionSetAssignmentsBase(EmberExiGeneratedFunctionSetAssignmentsBase *data)
{
  emExiPrintStruct(emberExiFunctionSetAssignmentsBaseStructData,
                   (int8u *) data,
                   0,
                   "FunctionSetAssignmentsBase",
                   emberExiQnames);
}


void emberExiToXmlStructFunctionSetAssignmentsBase(EmberExiGeneratedFunctionSetAssignmentsBase *data) {
  EXI_DEBUG1("Start to XML: FunctionSetAssignmentsBase\n");
  emberExiPrintfLine("<FunctionSetAssignmentsBase");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
    if ( data->CustomerAccountListLink_option != NULL )
      emberExiToXmlStructCustomerAccountListLink((data->CustomerAccountListLink_option));
    if ( data->DemandResponseProgramListLink_option != NULL )
      emberExiToXmlStructDemandResponseProgramListLink((data->DemandResponseProgramListLink_option));
    if ( data->DERProgramListLink_option != NULL )
      emberExiToXmlStructDERProgramListLink((data->DERProgramListLink_option));
    if ( data->FileListLink_option != NULL )
      emberExiToXmlStructFileListLink((data->FileListLink_option));
    if ( data->MessagingProgramListLink_option != NULL )
      emberExiToXmlStructMessagingProgramListLink((data->MessagingProgramListLink_option));
    if ( data->PrepaymentListLink_option != NULL )
      emberExiToXmlStructPrepaymentListLink((data->PrepaymentListLink_option));
    if ( data->ResponseSetListLink_option != NULL )
      emberExiToXmlStructResponseSetListLink((data->ResponseSetListLink_option));
    if ( data->TariffProfileListLink_option != NULL )
      emberExiToXmlStructTariffProfileListLink((data->TariffProfileListLink_option));
    if ( data->TimeLink_option != NULL )
      emberExiToXmlStructTimeLink((data->TimeLink_option));
    if ( data->UsagePointListLink_option != NULL )
      emberExiToXmlStructUsagePointListLink((data->UsagePointListLink_option));
  emberExiPrintfLine("</FunctionSetAssignmentsBase>");
  EXI_DEBUG1("End to XML: FunctionSetAssignmentsBase\n");
}




void emberExiPrintStructFunctionSetAssignmentsList(EmberExiGeneratedFunctionSetAssignmentsList *data)
{
  emExiPrintStruct(emberExiFunctionSetAssignmentsListStructData,
                   (int8u *) data,
                   0,
                   "FunctionSetAssignmentsList",
                   emberExiQnames);
}


void emberExiToXmlStructFunctionSetAssignmentsList(EmberExiGeneratedFunctionSetAssignmentsList *data) {
  EXI_DEBUG1("Start to XML: FunctionSetAssignmentsList\n");
  emberExiPrintfLine("<FunctionSetAssignmentsList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->FunctionSetAssignments_count; i++ )
    if ( data->FunctionSetAssignments_array != NULL )
      emberExiToXmlStructFunctionSetAssignments(&(data->FunctionSetAssignments_array[i]));
  }
  emberExiPrintfLine("</FunctionSetAssignmentsList>");
  EXI_DEBUG1("End to XML: FunctionSetAssignmentsList\n");
}




void emberExiPrintStructFunctionSetAssignmentsListLink(EmberExiGeneratedFunctionSetAssignmentsListLink *data)
{
  emExiPrintStruct(emberExiFunctionSetAssignmentsListLinkStructData,
                   (int8u *) data,
                   0,
                   "FunctionSetAssignmentsListLink",
                   emberExiQnames);
}


void emberExiToXmlStructFunctionSetAssignmentsListLink(EmberExiGeneratedFunctionSetAssignmentsListLink *data) {
  EXI_DEBUG1("Start to XML: FunctionSetAssignmentsListLink\n");
  emberExiPrintfLine("<FunctionSetAssignmentsListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</FunctionSetAssignmentsListLink>");
  EXI_DEBUG1("End to XML: FunctionSetAssignmentsListLink\n");
}




void emberExiPrintStructIEEE_802_15_4(EmberExiGeneratedIEEE_802_15_4 *data)
{
  emExiPrintStruct(emberExiIEEE_802_15_4StructData,
                   (int8u *) data,
                   0,
                   "IEEE_802_15_4",
                   emberExiQnames);
}


void emberExiToXmlStructIEEE_802_15_4(EmberExiGeneratedIEEE_802_15_4 *data) {
  EXI_DEBUG1("Start to XML: IEEE_802_15_4\n");
  emberExiPrintfLine("<IEEE_802_15_4");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <capabilityInfo>");
  { int16u i;
    for ( i=0; i<data->capabilityInfo.length; i++ )
      emberExiPrintfLine("%2x", data->capabilityInfo.bytes[i]);
  }
  emberExiPrintfLine("</capabilityInfo>");
    if ( data->NeighborListLink_option != NULL )
      emberExiToXmlStructNeighborListLink((data->NeighborListLink_option));
  emberExiPrintfLine("  <shortAddress>%d</shortAddress>", data->shortAddress);
  emberExiPrintfLine("</IEEE_802_15_4>");
  EXI_DEBUG1("End to XML: IEEE_802_15_4\n");
}




void emberExiPrintStructIPAddr(EmberExiGeneratedIPAddr *data)
{
  emExiPrintStruct(emberExiIPAddrStructData,
                   (int8u *) data,
                   0,
                   "IPAddr",
                   emberExiQnames);
}


void emberExiToXmlStructIPAddr(EmberExiGeneratedIPAddr *data) {
  EXI_DEBUG1("Start to XML: IPAddr\n");
  emberExiPrintfLine("<IPAddr");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <address>");
  { int16u i;
    for ( i=0; i<data->address.length; i++ )
      emberExiPrintfLine("%2x", data->address.bytes[i]);
  }
  emberExiPrintfLine("</address>");
    if ( data->RPLInstanceListLink_option != NULL )
      emberExiToXmlStructRPLInstanceListLink((data->RPLInstanceListLink_option));
  emberExiPrintfLine("</IPAddr>");
  EXI_DEBUG1("End to XML: IPAddr\n");
}




void emberExiPrintStructIPAddrList(EmberExiGeneratedIPAddrList *data)
{
  emExiPrintStruct(emberExiIPAddrListStructData,
                   (int8u *) data,
                   0,
                   "IPAddrList",
                   emberExiQnames);
}


void emberExiToXmlStructIPAddrList(EmberExiGeneratedIPAddrList *data) {
  EXI_DEBUG1("Start to XML: IPAddrList\n");
  emberExiPrintfLine("<IPAddrList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->IPAddr_count; i++ )
    if ( data->IPAddr_array != NULL )
      emberExiToXmlStructIPAddr(&(data->IPAddr_array[i]));
  }
  emberExiPrintfLine("</IPAddrList>");
  EXI_DEBUG1("End to XML: IPAddrList\n");
}




void emberExiPrintStructIPAddrListLink(EmberExiGeneratedIPAddrListLink *data)
{
  emExiPrintStruct(emberExiIPAddrListLinkStructData,
                   (int8u *) data,
                   0,
                   "IPAddrListLink",
                   emberExiQnames);
}


void emberExiToXmlStructIPAddrListLink(EmberExiGeneratedIPAddrListLink *data) {
  EXI_DEBUG1("Start to XML: IPAddrListLink\n");
  emberExiPrintfLine("<IPAddrListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</IPAddrListLink>");
  EXI_DEBUG1("End to XML: IPAddrListLink\n");
}




void emberExiPrintStructIPInterface(EmberExiGeneratedIPInterface *data)
{
  emExiPrintStruct(emberExiIPInterfaceStructData,
                   (int8u *) data,
                   0,
                   "IPInterface",
                   emberExiQnames);
}


void emberExiToXmlStructIPInterface(EmberExiGeneratedIPInterface *data) {
  EXI_DEBUG1("Start to XML: IPInterface\n");
  emberExiPrintfLine("<IPInterface");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <ifDescr>%s</ifDescr>", data->ifDescr_option);
  emberExiPrintfLine("  <ifHighSpeed>%d</ifHighSpeed>", data->ifHighSpeed_option);
  emberExiPrintfLine("  <ifInBroadcastPkts>%d</ifInBroadcastPkts>", data->ifInBroadcastPkts_option);
  emberExiPrintfLine("  <ifIndex>%d</ifIndex>", data->ifIndex_option);
  emberExiPrintfLine("  <ifInDiscards>%d</ifInDiscards>", data->ifInDiscards_option);
  emberExiPrintfLine("  <ifInErrors>%d</ifInErrors>", data->ifInErrors_option);
  emberExiPrintfLine("  <ifInMulticastPkts>%d</ifInMulticastPkts>", data->ifInMulticastPkts_option);
  emberExiPrintfLine("  <ifInOctets>%d</ifInOctets>", data->ifInOctets_option);
  emberExiPrintfLine("  <ifInUcastPkts>%d</ifInUcastPkts>", data->ifInUcastPkts_option);
  emberExiPrintfLine("  <ifInUnknownProtos>%d</ifInUnknownProtos>", data->ifInUnknownProtos_option);
  emberExiPrintfLine("  <ifMtu>%d</ifMtu>", data->ifMtu_option);
  emberExiPrintfLine("  <ifName>%s</ifName>", data->ifName_option);
  emberExiPrintfLine("  <ifOperStatus>%d</ifOperStatus>", data->ifOperStatus_option);
  emberExiPrintfLine("  <ifOutBroadcastPkts>%d</ifOutBroadcastPkts>", data->ifOutBroadcastPkts_option);
  emberExiPrintfLine("  <ifOutDiscards>%d</ifOutDiscards>", data->ifOutDiscards_option);
  emberExiPrintfLine("  <ifOutErrors>%d</ifOutErrors>", data->ifOutErrors_option);
  emberExiPrintfLine("  <ifOutMulticastPkts>%d</ifOutMulticastPkts>", data->ifOutMulticastPkts_option);
  emberExiPrintfLine("  <ifOutOctets>%d</ifOutOctets>", data->ifOutOctets_option);
  emberExiPrintfLine("  <ifOutUcastPkts>%d</ifOutUcastPkts>", data->ifOutUcastPkts_option);
  emberExiPrintfLine("  <ifPromiscuousMode>%d</ifPromiscuousMode>", data->ifPromiscuousMode_option);
  emberExiPrintfLine("  <ifSpeed>%d</ifSpeed>", data->ifSpeed_option);
  emberExiPrintfLine("  <ifType>%d</ifType>", data->ifType_option);
    if ( data->IPAddrListLink_option != NULL )
      emberExiToXmlStructIPAddrListLink((data->IPAddrListLink_option));
  emberExiPrintfLine("  <lastResetTime>%d</lastResetTime>", data->lastResetTime_option);
  emberExiPrintfLine("  <lastUpdatedTime>%d</lastUpdatedTime>", data->lastUpdatedTime_option);
    if ( data->LLInterfaceListLink_option != NULL )
      emberExiToXmlStructLLInterfaceListLink((data->LLInterfaceListLink_option));
  emberExiPrintfLine("</IPInterface>");
  EXI_DEBUG1("End to XML: IPInterface\n");
}




void emberExiPrintStructIPInterfaceList(EmberExiGeneratedIPInterfaceList *data)
{
  emExiPrintStruct(emberExiIPInterfaceListStructData,
                   (int8u *) data,
                   0,
                   "IPInterfaceList",
                   emberExiQnames);
}


void emberExiToXmlStructIPInterfaceList(EmberExiGeneratedIPInterfaceList *data) {
  EXI_DEBUG1("Start to XML: IPInterfaceList\n");
  emberExiPrintfLine("<IPInterfaceList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->IPInterface_count; i++ )
    if ( data->IPInterface_array != NULL )
      emberExiToXmlStructIPInterface(&(data->IPInterface_array[i]));
  }
  emberExiPrintfLine("</IPInterfaceList>");
  EXI_DEBUG1("End to XML: IPInterfaceList\n");
}




void emberExiPrintStructIPInterfaceListLink(EmberExiGeneratedIPInterfaceListLink *data)
{
  emExiPrintStruct(emberExiIPInterfaceListLinkStructData,
                   (int8u *) data,
                   0,
                   "IPInterfaceListLink",
                   emberExiQnames);
}


void emberExiToXmlStructIPInterfaceListLink(EmberExiGeneratedIPInterfaceListLink *data) {
  EXI_DEBUG1("Start to XML: IPInterfaceListLink\n");
  emberExiPrintfLine("<IPInterfaceListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</IPInterfaceListLink>");
  EXI_DEBUG1("End to XML: IPInterfaceListLink\n");
}




void emberExiPrintStructIdentifiedObject(EmberExiGeneratedIdentifiedObject *data)
{
  emExiPrintStruct(emberExiIdentifiedObjectStructData,
                   (int8u *) data,
                   0,
                   "IdentifiedObject",
                   emberExiQnames);
}


void emberExiToXmlStructIdentifiedObject(EmberExiGeneratedIdentifiedObject *data) {
  EXI_DEBUG1("Start to XML: IdentifiedObject\n");
  emberExiPrintfLine("<IdentifiedObject");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("</IdentifiedObject>");
  EXI_DEBUG1("End to XML: IdentifiedObject\n");
}




void emberExiPrintStructLLInterface(EmberExiGeneratedLLInterface *data)
{
  emExiPrintStruct(emberExiLLInterfaceStructData,
                   (int8u *) data,
                   0,
                   "LLInterface",
                   emberExiQnames);
}


void emberExiToXmlStructLLInterface(EmberExiGeneratedLLInterface *data) {
  EXI_DEBUG1("Start to XML: LLInterface\n");
  emberExiPrintfLine("<LLInterface");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <CRCerrors>%d</CRCerrors>", data->CRCerrors);
  emberExiPrintfLine("  <EUI64>");
  { int16u i;
    for ( i=0; i<data->EUI64.length; i++ )
      emberExiPrintfLine("%2x", data->EUI64.bytes[i]);
  }
  emberExiPrintfLine("</EUI64>");
    if ( data->IEEE_802_15_4_option != NULL )
      emberExiToXmlStructIEEE_802_15_4((data->IEEE_802_15_4_option));
  emberExiPrintfLine("  <linkLayerType>%d</linkLayerType>", data->linkLayerType);
  emberExiPrintfLine("  <LLAckNotRx>%d</LLAckNotRx>", data->LLAckNotRx_option);
  emberExiPrintfLine("  <LLCSMAFail>%d</LLCSMAFail>", data->LLCSMAFail_option);
  emberExiPrintfLine("  <LLFramesDropRx>%d</LLFramesDropRx>", data->LLFramesDropRx_option);
  emberExiPrintfLine("  <LLFramesDropTx>%d</LLFramesDropTx>", data->LLFramesDropTx_option);
  emberExiPrintfLine("  <LLFramesRx>%d</LLFramesRx>", data->LLFramesRx_option);
  emberExiPrintfLine("  <LLFramesTx>%d</LLFramesTx>", data->LLFramesTx_option);
  emberExiPrintfLine("  <LLMediaAccessFail>%d</LLMediaAccessFail>", data->LLMediaAccessFail_option);
  emberExiPrintfLine("  <LLOctetsRx>%d</LLOctetsRx>", data->LLOctetsRx_option);
  emberExiPrintfLine("  <LLOctetsTx>%d</LLOctetsTx>", data->LLOctetsTx_option);
  emberExiPrintfLine("  <LLRetryCount>%d</LLRetryCount>", data->LLRetryCount_option);
  emberExiPrintfLine("  <LLSecurityErrorRx>%d</LLSecurityErrorRx>", data->LLSecurityErrorRx_option);
    if ( data->loWPAN_option != NULL )
      emberExiToXmlStructloWPAN((data->loWPAN_option));
  emberExiPrintfLine("</LLInterface>");
  EXI_DEBUG1("End to XML: LLInterface\n");
}




void emberExiPrintStructLLInterfaceList(EmberExiGeneratedLLInterfaceList *data)
{
  emExiPrintStruct(emberExiLLInterfaceListStructData,
                   (int8u *) data,
                   0,
                   "LLInterfaceList",
                   emberExiQnames);
}


void emberExiToXmlStructLLInterfaceList(EmberExiGeneratedLLInterfaceList *data) {
  EXI_DEBUG1("Start to XML: LLInterfaceList\n");
  emberExiPrintfLine("<LLInterfaceList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->LLInterface_count; i++ )
    if ( data->LLInterface_array != NULL )
      emberExiToXmlStructLLInterface(&(data->LLInterface_array[i]));
  }
  emberExiPrintfLine("</LLInterfaceList>");
  EXI_DEBUG1("End to XML: LLInterfaceList\n");
}




void emberExiPrintStructLLInterfaceListLink(EmberExiGeneratedLLInterfaceListLink *data)
{
  emExiPrintStruct(emberExiLLInterfaceListLinkStructData,
                   (int8u *) data,
                   0,
                   "LLInterfaceListLink",
                   emberExiQnames);
}


void emberExiToXmlStructLLInterfaceListLink(EmberExiGeneratedLLInterfaceListLink *data) {
  EXI_DEBUG1("Start to XML: LLInterfaceListLink\n");
  emberExiPrintfLine("<LLInterfaceListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</LLInterfaceListLink>");
  EXI_DEBUG1("End to XML: LLInterfaceListLink\n");
}




void emberExiPrintStructLink(EmberExiGeneratedLink *data)
{
  emExiPrintStruct(emberExiLinkStructData,
                   (int8u *) data,
                   0,
                   "Link",
                   emberExiQnames);
}


void emberExiToXmlStructLink(EmberExiGeneratedLink *data) {
  EXI_DEBUG1("Start to XML: Link\n");
  emberExiPrintfLine("<Link");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</Link>");
  EXI_DEBUG1("End to XML: Link\n");
}




void emberExiPrintStructList(EmberExiGeneratedList *data)
{
  emExiPrintStruct(emberExiListStructData,
                   (int8u *) data,
                   0,
                   "List",
                   emberExiQnames);
}


void emberExiToXmlStructList(EmberExiGeneratedList *data) {
  EXI_DEBUG1("Start to XML: List\n");
  emberExiPrintfLine("<List");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</List>");
  EXI_DEBUG1("End to XML: List\n");
}




void emberExiPrintStructListLink(EmberExiGeneratedListLink *data)
{
  emExiPrintStruct(emberExiListLinkStructData,
                   (int8u *) data,
                   0,
                   "ListLink",
                   emberExiQnames);
}


void emberExiToXmlStructListLink(EmberExiGeneratedListLink *data) {
  EXI_DEBUG1("Start to XML: ListLink\n");
  emberExiPrintfLine("<ListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ListLink>");
  EXI_DEBUG1("End to XML: ListLink\n");
}




void emberExiPrintStructLoadShedAvailabilityLink(EmberExiGeneratedLoadShedAvailabilityLink *data)
{
  emExiPrintStruct(emberExiLoadShedAvailabilityLinkStructData,
                   (int8u *) data,
                   0,
                   "LoadShedAvailabilityLink",
                   emberExiQnames);
}


void emberExiToXmlStructLoadShedAvailabilityLink(EmberExiGeneratedLoadShedAvailabilityLink *data) {
  EXI_DEBUG1("Start to XML: LoadShedAvailabilityLink\n");
  emberExiPrintfLine("<LoadShedAvailabilityLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</LoadShedAvailabilityLink>");
  EXI_DEBUG1("End to XML: LoadShedAvailabilityLink\n");
}




void emberExiPrintStructLogEvent(EmberExiGeneratedLogEvent *data)
{
  emExiPrintStruct(emberExiLogEventStructData,
                   (int8u *) data,
                   0,
                   "LogEvent",
                   emberExiQnames);
}


void emberExiToXmlStructLogEvent(EmberExiGeneratedLogEvent *data) {
  EXI_DEBUG1("Start to XML: LogEvent\n");
  emberExiPrintfLine("<LogEvent");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <createdDateTime>%d</createdDateTime>", data->createdDateTime);
  emberExiPrintfLine("  <extendedData>%d</extendedData>", data->extendedData_option);
  emberExiPrintfLine("  <functionSet>%d</functionSet>", data->functionSet);
  emberExiPrintfLine("  <logEventCode>%d</logEventCode>", data->logEventCode);
  emberExiPrintfLine("  <logEventID>%d</logEventID>", data->logEventID);
  emberExiPrintfLine("  <logEventPEN>%d</logEventPEN>", data->logEventPEN);
  emberExiPrintfLine("  <profileID>%d</profileID>", data->profileID);
  emberExiPrintfLine("</LogEvent>");
  EXI_DEBUG1("End to XML: LogEvent\n");
}




void emberExiPrintStructLogEventList(EmberExiGeneratedLogEventList *data)
{
  emExiPrintStruct(emberExiLogEventListStructData,
                   (int8u *) data,
                   0,
                   "LogEventList",
                   emberExiQnames);
}


void emberExiToXmlStructLogEventList(EmberExiGeneratedLogEventList *data) {
  EXI_DEBUG1("Start to XML: LogEventList\n");
  emberExiPrintfLine("<LogEventList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->LogEvent_count; i++ )
    if ( data->LogEvent_array != NULL )
      emberExiToXmlStructLogEvent(&(data->LogEvent_array[i]));
  }
  emberExiPrintfLine("</LogEventList>");
  EXI_DEBUG1("End to XML: LogEventList\n");
}




void emberExiPrintStructLogEventListLink(EmberExiGeneratedLogEventListLink *data)
{
  emExiPrintStruct(emberExiLogEventListLinkStructData,
                   (int8u *) data,
                   0,
                   "LogEventListLink",
                   emberExiQnames);
}


void emberExiToXmlStructLogEventListLink(EmberExiGeneratedLogEventListLink *data) {
  EXI_DEBUG1("Start to XML: LogEventListLink\n");
  emberExiPrintfLine("<LogEventListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</LogEventListLink>");
  EXI_DEBUG1("End to XML: LogEventListLink\n");
}




void emberExiPrintStructMessagingProgram(EmberExiGeneratedMessagingProgram *data)
{
  emExiPrintStruct(emberExiMessagingProgramStructData,
                   (int8u *) data,
                   0,
                   "MessagingProgram",
                   emberExiQnames);
}


void emberExiToXmlStructMessagingProgram(EmberExiGeneratedMessagingProgram *data) {
  EXI_DEBUG1("Start to XML: MessagingProgram\n");
  emberExiPrintfLine("<MessagingProgram");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
    if ( data->ActiveTextMessageListLink_option != NULL )
      emberExiToXmlStructActiveTextMessageListLink((data->ActiveTextMessageListLink_option));
  emberExiPrintfLine("  <locale>%s</locale>", data->locale);
  emberExiPrintfLine("  <primacy>%d</primacy>", data->primacy);
    if ( data->TextMessageListLink_option != NULL )
      emberExiToXmlStructTextMessageListLink((data->TextMessageListLink_option));
  emberExiPrintfLine("</MessagingProgram>");
  EXI_DEBUG1("End to XML: MessagingProgram\n");
}




void emberExiPrintStructMessagingProgramList(EmberExiGeneratedMessagingProgramList *data)
{
  emExiPrintStruct(emberExiMessagingProgramListStructData,
                   (int8u *) data,
                   0,
                   "MessagingProgramList",
                   emberExiQnames);
}


void emberExiToXmlStructMessagingProgramList(EmberExiGeneratedMessagingProgramList *data) {
  EXI_DEBUG1("Start to XML: MessagingProgramList\n");
  emberExiPrintfLine("<MessagingProgramList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->MessagingProgram_count; i++ )
    if ( data->MessagingProgram_array != NULL )
      emberExiToXmlStructMessagingProgram(&(data->MessagingProgram_array[i]));
  }
  emberExiPrintfLine("</MessagingProgramList>");
  EXI_DEBUG1("End to XML: MessagingProgramList\n");
}




void emberExiPrintStructMessagingProgramListLink(EmberExiGeneratedMessagingProgramListLink *data)
{
  emExiPrintStruct(emberExiMessagingProgramListLinkStructData,
                   (int8u *) data,
                   0,
                   "MessagingProgramListLink",
                   emberExiQnames);
}


void emberExiToXmlStructMessagingProgramListLink(EmberExiGeneratedMessagingProgramListLink *data) {
  EXI_DEBUG1("Start to XML: MessagingProgramListLink\n");
  emberExiPrintfLine("<MessagingProgramListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</MessagingProgramListLink>");
  EXI_DEBUG1("End to XML: MessagingProgramListLink\n");
}




void emberExiPrintStructMirrorUsagePointListLink(EmberExiGeneratedMirrorUsagePointListLink *data)
{
  emExiPrintStruct(emberExiMirrorUsagePointListLinkStructData,
                   (int8u *) data,
                   0,
                   "MirrorUsagePointListLink",
                   emberExiQnames);
}


void emberExiToXmlStructMirrorUsagePointListLink(EmberExiGeneratedMirrorUsagePointListLink *data) {
  EXI_DEBUG1("Start to XML: MirrorUsagePointListLink\n");
  emberExiPrintfLine("<MirrorUsagePointListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</MirrorUsagePointListLink>");
  EXI_DEBUG1("End to XML: MirrorUsagePointListLink\n");
}




void emberExiPrintStructNeighbor(EmberExiGeneratedNeighbor *data)
{
  emExiPrintStruct(emberExiNeighborStructData,
                   (int8u *) data,
                   0,
                   "Neighbor",
                   emberExiQnames);
}


void emberExiToXmlStructNeighbor(EmberExiGeneratedNeighbor *data) {
  EXI_DEBUG1("Start to XML: Neighbor\n");
  emberExiPrintfLine("<Neighbor");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <isChild>%d</isChild>", data->isChild);
  emberExiPrintfLine("  <linkQuality>%d</linkQuality>", data->linkQuality);
  emberExiPrintfLine("  <shortAddress>%d</shortAddress>", data->shortAddress);
  emberExiPrintfLine("</Neighbor>");
  EXI_DEBUG1("End to XML: Neighbor\n");
}




void emberExiPrintStructNeighborList(EmberExiGeneratedNeighborList *data)
{
  emExiPrintStruct(emberExiNeighborListStructData,
                   (int8u *) data,
                   0,
                   "NeighborList",
                   emberExiQnames);
}


void emberExiToXmlStructNeighborList(EmberExiGeneratedNeighborList *data) {
  EXI_DEBUG1("Start to XML: NeighborList\n");
  emberExiPrintfLine("<NeighborList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->Neighbor_count; i++ )
    if ( data->Neighbor_array != NULL )
      emberExiToXmlStructNeighbor(&(data->Neighbor_array[i]));
  }
  emberExiPrintfLine("</NeighborList>");
  EXI_DEBUG1("End to XML: NeighborList\n");
}




void emberExiPrintStructNeighborListLink(EmberExiGeneratedNeighborListLink *data)
{
  emExiPrintStruct(emberExiNeighborListLinkStructData,
                   (int8u *) data,
                   0,
                   "NeighborListLink",
                   emberExiQnames);
}


void emberExiToXmlStructNeighborListLink(EmberExiGeneratedNeighborListLink *data) {
  EXI_DEBUG1("Start to XML: NeighborListLink\n");
  emberExiPrintfLine("<NeighborListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</NeighborListLink>");
  EXI_DEBUG1("End to XML: NeighborListLink\n");
}




void emberExiPrintStructNotification(EmberExiGeneratedNotification *data)
{
  emExiPrintStruct(emberExiNotificationStructData,
                   (int8u *) data,
                   0,
                   "Notification",
                   emberExiQnames);
}


void emberExiToXmlStructNotification(EmberExiGeneratedNotification *data) {
  EXI_DEBUG1("Start to XML: Notification\n");
  emberExiPrintfLine("<Notification");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <subscribedResource>%s</subscribedResource>", data->subscribedResource);
  emberExiPrintfLine("  <newResourceURI>%s</newResourceURI>", data->newResourceURI_option);
    if ( data->Resource_option != NULL )
      emberExiToXmlStructResource((data->Resource_option));
  emberExiPrintfLine("  <status>%d</status>", data->status);
  emberExiPrintfLine("  <subscriptionURI>%s</subscriptionURI>", data->subscriptionURI);
  emberExiPrintfLine("</Notification>");
  EXI_DEBUG1("End to XML: Notification\n");
}




void emberExiPrintStructOffset(EmberExiGeneratedOffset *data)
{
  emExiPrintStruct(emberExiOffsetStructData,
                   (int8u *) data,
                   0,
                   "Offset",
                   emberExiQnames);
}


void emberExiToXmlStructOffset(EmberExiGeneratedOffset *data) {
  EXI_DEBUG1("Start to XML: Offset\n");
  emberExiPrintfLine("<Offset");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <coolingOffset>%d</coolingOffset>", data->coolingOffset_option);
  emberExiPrintfLine("  <heatingOffset>%d</heatingOffset>", data->heatingOffset_option);
  emberExiPrintfLine("  <loadAdjustmentPercentageOffset>%d</loadAdjustmentPercentageOffset>", data->loadAdjustmentPercentageOffset_option);
  emberExiPrintfLine("</Offset>");
  EXI_DEBUG1("End to XML: Offset\n");
}




void emberExiPrintStructPEVInfo(EmberExiGeneratedPEVInfo *data)
{
  emExiPrintStruct(emberExiPEVInfoStructData,
                   (int8u *) data,
                   0,
                   "PEVInfo",
                   emberExiQnames);
}


void emberExiToXmlStructPEVInfo(EmberExiGeneratedPEVInfo *data) {
  EXI_DEBUG1("Start to XML: PEVInfo\n");
  emberExiPrintfLine("<PEVInfo");
  emberExiPrintfLine(">");
    if ( data->chargingPowerNow != NULL )
      emberExiToXmlStructActivePower((data->chargingPowerNow));
    if ( data->energyRequestNow != NULL )
      emberExiToXmlStructRealEnergy((data->energyRequestNow));
    if ( data->maxForwardPower != NULL )
      emberExiToXmlStructActivePower((data->maxForwardPower));
  emberExiPrintfLine("  <minimumChargingDuration>%d</minimumChargingDuration>", data->minimumChargingDuration);
  emberExiPrintfLine("  <targetStateOfCharge>%d</targetStateOfCharge>", data->targetStateOfCharge);
  emberExiPrintfLine("  <timeChargeIsNeeded>%d</timeChargeIsNeeded>", data->timeChargeIsNeeded);
  emberExiPrintfLine("  <timeChargingStatusPEV>%d</timeChargingStatusPEV>", data->timeChargingStatusPEV);
  emberExiPrintfLine("</PEVInfo>");
  EXI_DEBUG1("End to XML: PEVInfo\n");
}




void emberExiPrintStructPowerConfiguration(EmberExiGeneratedPowerConfiguration *data)
{
  emExiPrintStruct(emberExiPowerConfigurationStructData,
                   (int8u *) data,
                   0,
                   "PowerConfiguration",
                   emberExiQnames);
}


void emberExiToXmlStructPowerConfiguration(EmberExiGeneratedPowerConfiguration *data) {
  EXI_DEBUG1("Start to XML: PowerConfiguration\n");
  emberExiPrintfLine("<PowerConfiguration");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <batteryInstallTime>%d</batteryInstallTime>", data->batteryInstallTime_option);
  emberExiPrintfLine("  <lowChargeThreshold>%d</lowChargeThreshold>", data->lowChargeThreshold_option);
  emberExiPrintfLine("</PowerConfiguration>");
  EXI_DEBUG1("End to XML: PowerConfiguration\n");
}




void emberExiPrintStructPowerStatus(EmberExiGeneratedPowerStatus *data)
{
  emExiPrintStruct(emberExiPowerStatusStructData,
                   (int8u *) data,
                   0,
                   "PowerStatus",
                   emberExiQnames);
}


void emberExiToXmlStructPowerStatus(EmberExiGeneratedPowerStatus *data) {
  EXI_DEBUG1("Start to XML: PowerStatus\n");
  emberExiPrintfLine("<PowerStatus");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <batteryStatus>%d</batteryStatus>", data->batteryStatus);
  emberExiPrintfLine("  <changedTime>%d</changedTime>", data->changedTime);
  emberExiPrintfLine("  <currentPowerSource>%d</currentPowerSource>", data->currentPowerSource);
  emberExiPrintfLine("  <estimatedChargeRemaining>%d</estimatedChargeRemaining>", data->estimatedChargeRemaining_option);
  emberExiPrintfLine("  <estimatedTimeRemaining>%d</estimatedTimeRemaining>", data->estimatedTimeRemaining_option);
    if ( data->PEVInfo_option != NULL )
      emberExiToXmlStructPEVInfo((data->PEVInfo_option));
  emberExiPrintfLine("  <sessionTimeOnBattery>%d</sessionTimeOnBattery>", data->sessionTimeOnBattery_option);
  emberExiPrintfLine("  <totalTimeOnBattery>%d</totalTimeOnBattery>", data->totalTimeOnBattery_option);
  emberExiPrintfLine("</PowerStatus>");
  EXI_DEBUG1("End to XML: PowerStatus\n");
}




void emberExiPrintStructPowerStatusLink(EmberExiGeneratedPowerStatusLink *data)
{
  emExiPrintStruct(emberExiPowerStatusLinkStructData,
                   (int8u *) data,
                   0,
                   "PowerStatusLink",
                   emberExiQnames);
}


void emberExiToXmlStructPowerStatusLink(EmberExiGeneratedPowerStatusLink *data) {
  EXI_DEBUG1("Start to XML: PowerStatusLink\n");
  emberExiPrintfLine("<PowerStatusLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</PowerStatusLink>");
  EXI_DEBUG1("End to XML: PowerStatusLink\n");
}




void emberExiPrintStructPrepaymentListLink(EmberExiGeneratedPrepaymentListLink *data)
{
  emExiPrintStruct(emberExiPrepaymentListLinkStructData,
                   (int8u *) data,
                   0,
                   "PrepaymentListLink",
                   emberExiQnames);
}


void emberExiToXmlStructPrepaymentListLink(EmberExiGeneratedPrepaymentListLink *data) {
  EXI_DEBUG1("Start to XML: PrepaymentListLink\n");
  emberExiPrintfLine("<PrepaymentListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</PrepaymentListLink>");
  EXI_DEBUG1("End to XML: PrepaymentListLink\n");
}




void emberExiPrintStructPriceResponseCfgListLink(EmberExiGeneratedPriceResponseCfgListLink *data)
{
  emExiPrintStruct(emberExiPriceResponseCfgListLinkStructData,
                   (int8u *) data,
                   0,
                   "PriceResponseCfgListLink",
                   emberExiQnames);
}


void emberExiToXmlStructPriceResponseCfgListLink(EmberExiGeneratedPriceResponseCfgListLink *data) {
  EXI_DEBUG1("Start to XML: PriceResponseCfgListLink\n");
  emberExiPrintfLine("<PriceResponseCfgListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</PriceResponseCfgListLink>");
  EXI_DEBUG1("End to XML: PriceResponseCfgListLink\n");
}




void emberExiPrintStructRPLInstance(EmberExiGeneratedRPLInstance *data)
{
  emExiPrintStruct(emberExiRPLInstanceStructData,
                   (int8u *) data,
                   0,
                   "RPLInstance",
                   emberExiQnames);
}


void emberExiToXmlStructRPLInstance(EmberExiGeneratedRPLInstance *data) {
  EXI_DEBUG1("Start to XML: RPLInstance\n");
  emberExiPrintfLine("<RPLInstance");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <DODAGid>%d</DODAGid>", data->DODAGid);
  emberExiPrintfLine("  <DODAGroot>%d</DODAGroot>", data->DODAGroot);
  emberExiPrintfLine("  <flags>%d</flags>", data->flags);
  emberExiPrintfLine("  <groundedFlag>%d</groundedFlag>", data->groundedFlag);
  emberExiPrintfLine("  <MOP>%d</MOP>", data->MOP);
  emberExiPrintfLine("  <PRF>%d</PRF>", data->PRF);
  emberExiPrintfLine("  <rank>%d</rank>", data->rank);
  emberExiPrintfLine("  <RPLInstanceID>%d</RPLInstanceID>", data->RPLInstanceID);
    if ( data->RPLSourceRoutesListLink_option != NULL )
      emberExiToXmlStructRPLSourceRoutesListLink((data->RPLSourceRoutesListLink_option));
  emberExiPrintfLine("  <versionNumber>%d</versionNumber>", data->versionNumber);
  emberExiPrintfLine("</RPLInstance>");
  EXI_DEBUG1("End to XML: RPLInstance\n");
}




void emberExiPrintStructRPLInstanceList(EmberExiGeneratedRPLInstanceList *data)
{
  emExiPrintStruct(emberExiRPLInstanceListStructData,
                   (int8u *) data,
                   0,
                   "RPLInstanceList",
                   emberExiQnames);
}


void emberExiToXmlStructRPLInstanceList(EmberExiGeneratedRPLInstanceList *data) {
  EXI_DEBUG1("Start to XML: RPLInstanceList\n");
  emberExiPrintfLine("<RPLInstanceList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->RPLInstance_count; i++ )
    if ( data->RPLInstance_array != NULL )
      emberExiToXmlStructRPLInstance(&(data->RPLInstance_array[i]));
  }
  emberExiPrintfLine("</RPLInstanceList>");
  EXI_DEBUG1("End to XML: RPLInstanceList\n");
}




void emberExiPrintStructRPLInstanceListLink(EmberExiGeneratedRPLInstanceListLink *data)
{
  emExiPrintStruct(emberExiRPLInstanceListLinkStructData,
                   (int8u *) data,
                   0,
                   "RPLInstanceListLink",
                   emberExiQnames);
}


void emberExiToXmlStructRPLInstanceListLink(EmberExiGeneratedRPLInstanceListLink *data) {
  EXI_DEBUG1("Start to XML: RPLInstanceListLink\n");
  emberExiPrintfLine("<RPLInstanceListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</RPLInstanceListLink>");
  EXI_DEBUG1("End to XML: RPLInstanceListLink\n");
}




void emberExiPrintStructRPLSourceRoutes(EmberExiGeneratedRPLSourceRoutes *data)
{
  emExiPrintStruct(emberExiRPLSourceRoutesStructData,
                   (int8u *) data,
                   0,
                   "RPLSourceRoutes",
                   emberExiQnames);
}


void emberExiToXmlStructRPLSourceRoutes(EmberExiGeneratedRPLSourceRoutes *data) {
  EXI_DEBUG1("Start to XML: RPLSourceRoutes\n");
  emberExiPrintfLine("<RPLSourceRoutes");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <DestAddress>");
  { int16u i;
    for ( i=0; i<data->DestAddress.length; i++ )
      emberExiPrintfLine("%2x", data->DestAddress.bytes[i]);
  }
  emberExiPrintfLine("</DestAddress>");
  emberExiPrintfLine("  <SourceRoute>");
  { int16u i;
    for ( i=0; i<data->SourceRoute.length; i++ )
      emberExiPrintfLine("%2x", data->SourceRoute.bytes[i]);
  }
  emberExiPrintfLine("</SourceRoute>");
  emberExiPrintfLine("</RPLSourceRoutes>");
  EXI_DEBUG1("End to XML: RPLSourceRoutes\n");
}




void emberExiPrintStructRPLSourceRoutesList(EmberExiGeneratedRPLSourceRoutesList *data)
{
  emExiPrintStruct(emberExiRPLSourceRoutesListStructData,
                   (int8u *) data,
                   0,
                   "RPLSourceRoutesList",
                   emberExiQnames);
}


void emberExiToXmlStructRPLSourceRoutesList(EmberExiGeneratedRPLSourceRoutesList *data) {
  EXI_DEBUG1("Start to XML: RPLSourceRoutesList\n");
  emberExiPrintfLine("<RPLSourceRoutesList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->RPLSourceRoutes_count; i++ )
    if ( data->RPLSourceRoutes_array != NULL )
      emberExiToXmlStructRPLSourceRoutes(&(data->RPLSourceRoutes_array[i]));
  }
  emberExiPrintfLine("</RPLSourceRoutesList>");
  EXI_DEBUG1("End to XML: RPLSourceRoutesList\n");
}




void emberExiPrintStructRPLSourceRoutesListLink(EmberExiGeneratedRPLSourceRoutesListLink *data)
{
  emExiPrintStruct(emberExiRPLSourceRoutesListLinkStructData,
                   (int8u *) data,
                   0,
                   "RPLSourceRoutesListLink",
                   emberExiQnames);
}


void emberExiToXmlStructRPLSourceRoutesListLink(EmberExiGeneratedRPLSourceRoutesListLink *data) {
  EXI_DEBUG1("Start to XML: RPLSourceRoutesListLink\n");
  emberExiPrintfLine("<RPLSourceRoutesListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</RPLSourceRoutesListLink>");
  EXI_DEBUG1("End to XML: RPLSourceRoutesListLink\n");
}




void emberExiPrintStructRandomizableEvent(EmberExiGeneratedRandomizableEvent *data)
{
  emExiPrintStruct(emberExiRandomizableEventStructData,
                   (int8u *) data,
                   0,
                   "RandomizableEvent",
                   emberExiQnames);
}


void emberExiToXmlStructRandomizableEvent(EmberExiGeneratedRandomizableEvent *data) {
  EXI_DEBUG1("Start to XML: RandomizableEvent\n");
  emberExiPrintfLine("<RandomizableEvent");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      emberExiToXmlStructEventStatus((data->EventStatus));
    if ( data->interval != NULL )
      emberExiToXmlStructDateTimeInterval((data->interval));
  emberExiPrintfLine("  <randomizeDuration>%d</randomizeDuration>", data->randomizeDuration_option);
  emberExiPrintfLine("  <randomizeStart>%d</randomizeStart>", data->randomizeStart_option);
  emberExiPrintfLine("</RandomizableEvent>");
  EXI_DEBUG1("End to XML: RandomizableEvent\n");
}




void emberExiPrintStructRealEnergy(EmberExiGeneratedRealEnergy *data)
{
  emExiPrintStruct(emberExiRealEnergyStructData,
                   (int8u *) data,
                   0,
                   "RealEnergy",
                   emberExiQnames);
}


void emberExiToXmlStructRealEnergy(EmberExiGeneratedRealEnergy *data) {
  EXI_DEBUG1("Start to XML: RealEnergy\n");
  emberExiPrintfLine("<RealEnergy");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <multiplier>%d</multiplier>", data->multiplier);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</RealEnergy>");
  EXI_DEBUG1("End to XML: RealEnergy\n");
}




void emberExiPrintStructRegistrationLink(EmberExiGeneratedRegistrationLink *data)
{
  emExiPrintStruct(emberExiRegistrationLinkStructData,
                   (int8u *) data,
                   0,
                   "RegistrationLink",
                   emberExiQnames);
}


void emberExiToXmlStructRegistrationLink(EmberExiGeneratedRegistrationLink *data) {
  EXI_DEBUG1("Start to XML: RegistrationLink\n");
  emberExiPrintfLine("<RegistrationLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</RegistrationLink>");
  EXI_DEBUG1("End to XML: RegistrationLink\n");
}




void emberExiPrintStructResource(EmberExiGeneratedResource *data)
{
  emExiPrintStruct(emberExiResourceStructData,
                   (int8u *) data,
                   0,
                   "Resource",
                   emberExiQnames);
}


void emberExiToXmlStructResource(EmberExiGeneratedResource *data) {
  EXI_DEBUG1("Start to XML: Resource\n");
  emberExiPrintfLine("<Resource");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</Resource>");
  EXI_DEBUG1("End to XML: Resource\n");
}




void emberExiPrintStructRespondableResource(EmberExiGeneratedRespondableResource *data)
{
  emExiPrintStruct(emberExiRespondableResourceStructData,
                   (int8u *) data,
                   0,
                   "RespondableResource",
                   emberExiQnames);
}


void emberExiToXmlStructRespondableResource(EmberExiGeneratedRespondableResource *data) {
  EXI_DEBUG1("Start to XML: RespondableResource\n");
  emberExiPrintfLine("<RespondableResource");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine(">");
  emberExiPrintfLine("</RespondableResource>");
  EXI_DEBUG1("End to XML: RespondableResource\n");
}




void emberExiPrintStructRespondableSubscribableIdentifiedObject(EmberExiGeneratedRespondableSubscribableIdentifiedObject *data)
{
  emExiPrintStruct(emberExiRespondableSubscribableIdentifiedObjectStructData,
                   (int8u *) data,
                   0,
                   "RespondableSubscribableIdentifiedObject",
                   emberExiQnames);
}


void emberExiToXmlStructRespondableSubscribableIdentifiedObject(EmberExiGeneratedRespondableSubscribableIdentifiedObject *data) {
  EXI_DEBUG1("Start to XML: RespondableSubscribableIdentifiedObject\n");
  emberExiPrintfLine("<RespondableSubscribableIdentifiedObject");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("</RespondableSubscribableIdentifiedObject>");
  EXI_DEBUG1("End to XML: RespondableSubscribableIdentifiedObject\n");
}




void emberExiPrintStructResponse(EmberExiGeneratedResponse *data)
{
  emExiPrintStruct(emberExiResponseStructData,
                   (int8u *) data,
                   0,
                   "Response",
                   emberExiQnames);
}


void emberExiToXmlStructResponse(EmberExiGeneratedResponse *data) {
  EXI_DEBUG1("Start to XML: Response\n");
  emberExiPrintfLine("<Response");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  emberExiPrintfLine("  <endDeviceLFDI>");
  { int16u i;
    for ( i=0; i<data->endDeviceLFDI.length; i++ )
      emberExiPrintfLine("%2x", data->endDeviceLFDI.bytes[i]);
  }
  emberExiPrintfLine("</endDeviceLFDI>");
  emberExiPrintfLine("  <status>%d</status>", data->status_option);
  emberExiPrintfLine("  <subject>");
  { int16u i;
    for ( i=0; i<data->subject.length; i++ )
      emberExiPrintfLine("%2x", data->subject.bytes[i]);
  }
  emberExiPrintfLine("</subject>");
  emberExiPrintfLine("</Response>");
  EXI_DEBUG1("End to XML: Response\n");
}




void emberExiPrintStructResponseSetListLink(EmberExiGeneratedResponseSetListLink *data)
{
  emExiPrintStruct(emberExiResponseSetListLinkStructData,
                   (int8u *) data,
                   0,
                   "ResponseSetListLink",
                   emberExiQnames);
}


void emberExiToXmlStructResponseSetListLink(EmberExiGeneratedResponseSetListLink *data) {
  EXI_DEBUG1("Start to XML: ResponseSetListLink\n");
  emberExiPrintfLine("<ResponseSetListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</ResponseSetListLink>");
  EXI_DEBUG1("End to XML: ResponseSetListLink\n");
}




void emberExiPrintStructSelfDevice(EmberExiGeneratedSelfDevice *data)
{
  emExiPrintStruct(emberExiSelfDeviceStructData,
                   (int8u *) data,
                   0,
                   "SelfDevice",
                   emberExiQnames);
}


void emberExiToXmlStructSelfDevice(EmberExiGeneratedSelfDevice *data) {
  EXI_DEBUG1("Start to XML: SelfDevice\n");
  emberExiPrintfLine("<SelfDevice");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
    if ( data->ConfigurationLink_option != NULL )
      emberExiToXmlStructConfigurationLink((data->ConfigurationLink_option));
    if ( data->DERListLink_option != NULL )
      emberExiToXmlStructDERListLink((data->DERListLink_option));
    if ( data->DeviceInformationLink_option != NULL )
      emberExiToXmlStructDeviceInformationLink((data->DeviceInformationLink_option));
    if ( data->DeviceStatusLink_option != NULL )
      emberExiToXmlStructDeviceStatusLink((data->DeviceStatusLink_option));
    if ( data->FileStatusLink_option != NULL )
      emberExiToXmlStructFileStatusLink((data->FileStatusLink_option));
    if ( data->IPInterfaceListLink_option != NULL )
      emberExiToXmlStructIPInterfaceListLink((data->IPInterfaceListLink_option));
    if ( data->LoadShedAvailabilityLink_option != NULL )
      emberExiToXmlStructLoadShedAvailabilityLink((data->LoadShedAvailabilityLink_option));
  emberExiPrintfLine("  <loadShedDeviceCategory>");
  { int16u i;
    for ( i=0; i<data->loadShedDeviceCategory_option.length; i++ )
      emberExiPrintfLine("%2x", data->loadShedDeviceCategory_option.bytes[i]);
  }
  emberExiPrintfLine("</loadShedDeviceCategory>");
    if ( data->LogEventListLink_option != NULL )
      emberExiToXmlStructLogEventListLink((data->LogEventListLink_option));
    if ( data->PowerStatusLink_option != NULL )
      emberExiToXmlStructPowerStatusLink((data->PowerStatusLink_option));
  emberExiPrintfLine("  <sFDI>%d</sFDI>", data->sFDI);
  emberExiPrintfLine("</SelfDevice>");
  EXI_DEBUG1("End to XML: SelfDevice\n");
}




void emberExiPrintStructSelfDeviceLink(EmberExiGeneratedSelfDeviceLink *data)
{
  emExiPrintStruct(emberExiSelfDeviceLinkStructData,
                   (int8u *) data,
                   0,
                   "SelfDeviceLink",
                   emberExiQnames);
}


void emberExiToXmlStructSelfDeviceLink(EmberExiGeneratedSelfDeviceLink *data) {
  EXI_DEBUG1("Start to XML: SelfDeviceLink\n");
  emberExiPrintfLine("<SelfDeviceLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</SelfDeviceLink>");
  EXI_DEBUG1("End to XML: SelfDeviceLink\n");
}




void emberExiPrintStructSetPoint(EmberExiGeneratedSetPoint *data)
{
  emExiPrintStruct(emberExiSetPointStructData,
                   (int8u *) data,
                   0,
                   "SetPoint",
                   emberExiQnames);
}


void emberExiToXmlStructSetPoint(EmberExiGeneratedSetPoint *data) {
  EXI_DEBUG1("Start to XML: SetPoint\n");
  emberExiPrintfLine("<SetPoint");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <coolingSetpoint>%d</coolingSetpoint>", data->coolingSetpoint_option);
  emberExiPrintfLine("  <heatingSetpoint>%d</heatingSetpoint>", data->heatingSetpoint_option);
  emberExiPrintfLine("</SetPoint>");
  EXI_DEBUG1("End to XML: SetPoint\n");
}




void emberExiPrintStructSubscribableIdentifiedObject(EmberExiGeneratedSubscribableIdentifiedObject *data)
{
  emExiPrintStruct(emberExiSubscribableIdentifiedObjectStructData,
                   (int8u *) data,
                   0,
                   "SubscribableIdentifiedObject",
                   emberExiQnames);
}


void emberExiToXmlStructSubscribableIdentifiedObject(EmberExiGeneratedSubscribableIdentifiedObject *data) {
  EXI_DEBUG1("Start to XML: SubscribableIdentifiedObject\n");
  emberExiPrintfLine("<SubscribableIdentifiedObject");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("</SubscribableIdentifiedObject>");
  EXI_DEBUG1("End to XML: SubscribableIdentifiedObject\n");
}




void emberExiPrintStructSubscribableList(EmberExiGeneratedSubscribableList *data)
{
  emExiPrintStruct(emberExiSubscribableListStructData,
                   (int8u *) data,
                   0,
                   "SubscribableList",
                   emberExiQnames);
}


void emberExiToXmlStructSubscribableList(EmberExiGeneratedSubscribableList *data) {
  EXI_DEBUG1("Start to XML: SubscribableList\n");
  emberExiPrintfLine("<SubscribableList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</SubscribableList>");
  EXI_DEBUG1("End to XML: SubscribableList\n");
}




void emberExiPrintStructSubscribableResource(EmberExiGeneratedSubscribableResource *data)
{
  emExiPrintStruct(emberExiSubscribableResourceStructData,
                   (int8u *) data,
                   0,
                   "SubscribableResource",
                   emberExiQnames);
}


void emberExiToXmlStructSubscribableResource(EmberExiGeneratedSubscribableResource *data) {
  EXI_DEBUG1("Start to XML: SubscribableResource\n");
  emberExiPrintfLine("<SubscribableResource");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</SubscribableResource>");
  EXI_DEBUG1("End to XML: SubscribableResource\n");
}




void emberExiPrintStructSubscription(EmberExiGeneratedSubscription *data)
{
  emExiPrintStruct(emberExiSubscriptionStructData,
                   (int8u *) data,
                   0,
                   "Subscription",
                   emberExiQnames);
}


void emberExiToXmlStructSubscription(EmberExiGeneratedSubscription *data) {
  EXI_DEBUG1("Start to XML: Subscription\n");
  emberExiPrintfLine("<Subscription");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <subscribedResource>%s</subscribedResource>", data->subscribedResource);
    if ( data->Condition_option != NULL )
      emberExiToXmlStructCondition((data->Condition_option));
  emberExiPrintfLine("  <encoding>%d</encoding>", data->encoding);
  emberExiPrintfLine("  <level>%s</level>", data->level);
  emberExiPrintfLine("  <limit>%d</limit>", data->limit);
  emberExiPrintfLine("  <notificationURI>%s</notificationURI>", data->notificationURI);
  emberExiPrintfLine("</Subscription>");
  EXI_DEBUG1("End to XML: Subscription\n");
}




void emberExiPrintStructSubscriptionBase(EmberExiGeneratedSubscriptionBase *data)
{
  emExiPrintStruct(emberExiSubscriptionBaseStructData,
                   (int8u *) data,
                   0,
                   "SubscriptionBase",
                   emberExiQnames);
}


void emberExiToXmlStructSubscriptionBase(EmberExiGeneratedSubscriptionBase *data) {
  EXI_DEBUG1("Start to XML: SubscriptionBase\n");
  emberExiPrintfLine("<SubscriptionBase");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <subscribedResource>%s</subscribedResource>", data->subscribedResource);
  emberExiPrintfLine("</SubscriptionBase>");
  EXI_DEBUG1("End to XML: SubscriptionBase\n");
}




void emberExiPrintStructSubscriptionList(EmberExiGeneratedSubscriptionList *data)
{
  emExiPrintStruct(emberExiSubscriptionListStructData,
                   (int8u *) data,
                   0,
                   "SubscriptionList",
                   emberExiQnames);
}


void emberExiToXmlStructSubscriptionList(EmberExiGeneratedSubscriptionList *data) {
  EXI_DEBUG1("Start to XML: SubscriptionList\n");
  emberExiPrintfLine("<SubscriptionList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->Subscription_count; i++ )
    if ( data->Subscription_array != NULL )
      emberExiToXmlStructSubscription(&(data->Subscription_array[i]));
  }
  emberExiPrintfLine("</SubscriptionList>");
  EXI_DEBUG1("End to XML: SubscriptionList\n");
}




void emberExiPrintStructSubscriptionListLink(EmberExiGeneratedSubscriptionListLink *data)
{
  emExiPrintStruct(emberExiSubscriptionListLinkStructData,
                   (int8u *) data,
                   0,
                   "SubscriptionListLink",
                   emberExiQnames);
}


void emberExiToXmlStructSubscriptionListLink(EmberExiGeneratedSubscriptionListLink *data) {
  EXI_DEBUG1("Start to XML: SubscriptionListLink\n");
  emberExiPrintfLine("<SubscriptionListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</SubscriptionListLink>");
  EXI_DEBUG1("End to XML: SubscriptionListLink\n");
}




void emberExiPrintStructSupportedLocaleListLink(EmberExiGeneratedSupportedLocaleListLink *data)
{
  emExiPrintStruct(emberExiSupportedLocaleListLinkStructData,
                   (int8u *) data,
                   0,
                   "SupportedLocaleListLink",
                   emberExiQnames);
}


void emberExiToXmlStructSupportedLocaleListLink(EmberExiGeneratedSupportedLocaleListLink *data) {
  EXI_DEBUG1("Start to XML: SupportedLocaleListLink\n");
  emberExiPrintfLine("<SupportedLocaleListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</SupportedLocaleListLink>");
  EXI_DEBUG1("End to XML: SupportedLocaleListLink\n");
}




void emberExiPrintStructTargetReduction(EmberExiGeneratedTargetReduction *data)
{
  emExiPrintStruct(emberExiTargetReductionStructData,
                   (int8u *) data,
                   0,
                   "TargetReduction",
                   emberExiQnames);
}


void emberExiToXmlStructTargetReduction(EmberExiGeneratedTargetReduction *data) {
  EXI_DEBUG1("Start to XML: TargetReduction\n");
  emberExiPrintfLine("<TargetReduction");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <type>%d</type>", data->type);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</TargetReduction>");
  EXI_DEBUG1("End to XML: TargetReduction\n");
}




void emberExiPrintStructTariffProfileListLink(EmberExiGeneratedTariffProfileListLink *data)
{
  emExiPrintStruct(emberExiTariffProfileListLinkStructData,
                   (int8u *) data,
                   0,
                   "TariffProfileListLink",
                   emberExiQnames);
}


void emberExiToXmlStructTariffProfileListLink(EmberExiGeneratedTariffProfileListLink *data) {
  EXI_DEBUG1("Start to XML: TariffProfileListLink\n");
  emberExiPrintfLine("<TariffProfileListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</TariffProfileListLink>");
  EXI_DEBUG1("End to XML: TariffProfileListLink\n");
}




void emberExiPrintStructTemperature(EmberExiGeneratedTemperature *data)
{
  emExiPrintStruct(emberExiTemperatureStructData,
                   (int8u *) data,
                   0,
                   "Temperature",
                   emberExiQnames);
}


void emberExiToXmlStructTemperature(EmberExiGeneratedTemperature *data) {
  EXI_DEBUG1("Start to XML: Temperature\n");
  emberExiPrintfLine("<Temperature");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <multiplier>%d</multiplier>", data->multiplier);
  emberExiPrintfLine("  <subject>%d</subject>", data->subject);
  emberExiPrintfLine("  <value>%d</value>", data->value);
  emberExiPrintfLine("</Temperature>");
  EXI_DEBUG1("End to XML: Temperature\n");
}




void emberExiPrintStructTextMessage(EmberExiGeneratedTextMessage *data)
{
  emExiPrintStruct(emberExiTextMessageStructData,
                   (int8u *) data,
                   0,
                   "TextMessage",
                   emberExiQnames);
}


void emberExiToXmlStructTextMessage(EmberExiGeneratedTextMessage *data) {
  EXI_DEBUG1("Start to XML: TextMessage\n");
  emberExiPrintfLine("<TextMessage");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  replyTo=\"%s\"", data->replyTo_option);
  emberExiPrintfLine("responseRequired=\"");
  { int16u i;
    for ( i=0; i<data->responseRequired_option.length; i++ )
    emberExiPrintfLine("%2x", data->responseRequired_option.bytes[i]); }
  emberExiPrintfLine("\"");
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <mRID>");
  { int16u i;
    for ( i=0; i<data->mRID.length; i++ )
      emberExiPrintfLine("%2x", data->mRID.bytes[i]);
  }
  emberExiPrintfLine("</mRID>");
  emberExiPrintfLine("  <description>%s</description>", data->description_option);
  emberExiPrintfLine("  <version>%d</version>", data->version_option);
  emberExiPrintfLine("  <creationTime>%d</creationTime>", data->creationTime);
    if ( data->EventStatus != NULL )
      emberExiToXmlStructEventStatus((data->EventStatus));
    if ( data->interval != NULL )
      emberExiToXmlStructDateTimeInterval((data->interval));
  emberExiPrintfLine("  <originator>%s</originator>", data->originator_option);
  emberExiPrintfLine("  <priority>%d</priority>", data->priority);
  emberExiPrintfLine("  <textMessage>%s</textMessage>", data->textMessage);
  emberExiPrintfLine("</TextMessage>");
  EXI_DEBUG1("End to XML: TextMessage\n");
}




void emberExiPrintStructTextMessageList(EmberExiGeneratedTextMessageList *data)
{
  emExiPrintStruct(emberExiTextMessageListStructData,
                   (int8u *) data,
                   0,
                   "TextMessageList",
                   emberExiQnames);
}


void emberExiToXmlStructTextMessageList(EmberExiGeneratedTextMessageList *data) {
  EXI_DEBUG1("Start to XML: TextMessageList\n");
  emberExiPrintfLine("<TextMessageList");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine("  results=\"%d\"", data->results);
  emberExiPrintfLine("  subscribable=\"%d\"", data->subscribable_option);
  emberExiPrintfLine(">");
  { int16u i;
    for ( i=0; i<data->TextMessage_count; i++ )
    if ( data->TextMessage_array != NULL )
      emberExiToXmlStructTextMessage(&(data->TextMessage_array[i]));
  }
  emberExiPrintfLine("</TextMessageList>");
  EXI_DEBUG1("End to XML: TextMessageList\n");
}




void emberExiPrintStructTextMessageListLink(EmberExiGeneratedTextMessageListLink *data)
{
  emExiPrintStruct(emberExiTextMessageListLinkStructData,
                   (int8u *) data,
                   0,
                   "TextMessageListLink",
                   emberExiQnames);
}


void emberExiToXmlStructTextMessageListLink(EmberExiGeneratedTextMessageListLink *data) {
  EXI_DEBUG1("Start to XML: TextMessageListLink\n");
  emberExiPrintfLine("<TextMessageListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</TextMessageListLink>");
  EXI_DEBUG1("End to XML: TextMessageListLink\n");
}




void emberExiPrintStructTextResponse(EmberExiGeneratedTextResponse *data)
{
  emExiPrintStruct(emberExiTextResponseStructData,
                   (int8u *) data,
                   0,
                   "TextResponse",
                   emberExiQnames);
}


void emberExiToXmlStructTextResponse(EmberExiGeneratedTextResponse *data) {
  EXI_DEBUG1("Start to XML: TextResponse\n");
  emberExiPrintfLine("<TextResponse");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <createdDateTime>%d</createdDateTime>", data->createdDateTime_option);
  emberExiPrintfLine("  <endDeviceLFDI>");
  { int16u i;
    for ( i=0; i<data->endDeviceLFDI.length; i++ )
      emberExiPrintfLine("%2x", data->endDeviceLFDI.bytes[i]);
  }
  emberExiPrintfLine("</endDeviceLFDI>");
  emberExiPrintfLine("  <status>%d</status>", data->status_option);
  emberExiPrintfLine("  <subject>");
  { int16u i;
    for ( i=0; i<data->subject.length; i++ )
      emberExiPrintfLine("%2x", data->subject.bytes[i]);
  }
  emberExiPrintfLine("</subject>");
  emberExiPrintfLine("</TextResponse>");
  EXI_DEBUG1("End to XML: TextResponse\n");
}




void emberExiPrintStructTime(EmberExiGeneratedTime *data)
{
  emExiPrintStruct(emberExiTimeStructData,
                   (int8u *) data,
                   0,
                   "Time",
                   emberExiQnames);
}


void emberExiToXmlStructTime(EmberExiGeneratedTime *data) {
  EXI_DEBUG1("Start to XML: Time\n");
  emberExiPrintfLine("<Time");
  emberExiPrintfLine("  href=\"%s\"", data->href_option);
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <currentTime>%d</currentTime>", data->currentTime);
  emberExiPrintfLine("  <dstEndTime>%d</dstEndTime>", data->dstEndTime);
  emberExiPrintfLine("  <dstOffset>%d</dstOffset>", data->dstOffset);
  emberExiPrintfLine("  <dstStartTime>%d</dstStartTime>", data->dstStartTime);
  emberExiPrintfLine("  <localTime>%d</localTime>", data->localTime_option);
  emberExiPrintfLine("  <quality>%d</quality>", data->quality);
  emberExiPrintfLine("  <tzOffset>%d</tzOffset>", data->tzOffset);
  emberExiPrintfLine("</Time>");
  EXI_DEBUG1("End to XML: Time\n");
}




void emberExiPrintStructTimeConfiguration(EmberExiGeneratedTimeConfiguration *data)
{
  emExiPrintStruct(emberExiTimeConfigurationStructData,
                   (int8u *) data,
                   0,
                   "TimeConfiguration",
                   emberExiQnames);
}


void emberExiToXmlStructTimeConfiguration(EmberExiGeneratedTimeConfiguration *data) {
  EXI_DEBUG1("Start to XML: TimeConfiguration\n");
  emberExiPrintfLine("<TimeConfiguration");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <dstEndRule>");
  { int16u i;
    for ( i=0; i<data->dstEndRule.length; i++ )
      emberExiPrintfLine("%2x", data->dstEndRule.bytes[i]);
  }
  emberExiPrintfLine("</dstEndRule>");
  emberExiPrintfLine("  <dstOffset>%d</dstOffset>", data->dstOffset);
  emberExiPrintfLine("  <dstStartRule>");
  { int16u i;
    for ( i=0; i<data->dstStartRule.length; i++ )
      emberExiPrintfLine("%2x", data->dstStartRule.bytes[i]);
  }
  emberExiPrintfLine("</dstStartRule>");
  emberExiPrintfLine("  <tzOffset>%d</tzOffset>", data->tzOffset);
  emberExiPrintfLine("</TimeConfiguration>");
  EXI_DEBUG1("End to XML: TimeConfiguration\n");
}




void emberExiPrintStructTimeLink(EmberExiGeneratedTimeLink *data)
{
  emExiPrintStruct(emberExiTimeLinkStructData,
                   (int8u *) data,
                   0,
                   "TimeLink",
                   emberExiQnames);
}


void emberExiToXmlStructTimeLink(EmberExiGeneratedTimeLink *data) {
  EXI_DEBUG1("Start to XML: TimeLink\n");
  emberExiPrintfLine("<TimeLink");
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</TimeLink>");
  EXI_DEBUG1("End to XML: TimeLink\n");
}




void emberExiPrintStructUsagePointListLink(EmberExiGeneratedUsagePointListLink *data)
{
  emExiPrintStruct(emberExiUsagePointListLinkStructData,
                   (int8u *) data,
                   0,
                   "UsagePointListLink",
                   emberExiQnames);
}


void emberExiToXmlStructUsagePointListLink(EmberExiGeneratedUsagePointListLink *data) {
  EXI_DEBUG1("Start to XML: UsagePointListLink\n");
  emberExiPrintfLine("<UsagePointListLink");
  emberExiPrintfLine("  all=\"%d\"", data->all);
  emberExiPrintfLine("  href=\"%s\"", data->href);
  emberExiPrintfLine(">");
  emberExiPrintfLine("</UsagePointListLink>");
  EXI_DEBUG1("End to XML: UsagePointListLink\n");
}




void emberExiPrintStructloWPAN(EmberExiGeneratedloWPAN *data)
{
  emExiPrintStruct(emberExiloWPANStructData,
                   (int8u *) data,
                   0,
                   "loWPAN",
                   emberExiQnames);
}


void emberExiToXmlStructloWPAN(EmberExiGeneratedloWPAN *data) {
  EXI_DEBUG1("Start to XML: loWPAN\n");
  emberExiPrintfLine("<loWPAN");
  emberExiPrintfLine(">");
  emberExiPrintfLine("  <octetsRx>%d</octetsRx>", data->octetsRx_option);
  emberExiPrintfLine("  <octetsTx>%d</octetsTx>", data->octetsTx_option);
  emberExiPrintfLine("  <packetsRx>%d</packetsRx>", data->packetsRx);
  emberExiPrintfLine("  <packetsTx>%d</packetsTx>", data->packetsTx);
  emberExiPrintfLine("  <rxFragError>%d</rxFragError>", data->rxFragError);
  emberExiPrintfLine("</loWPAN>");
  EXI_DEBUG1("End to XML: loWPAN\n");
}



// number -> string map for printing
const char * const emberExiQnames[] = {
  NULL,        // 0 is the null qname
  "AbstractDevice",
  UNUSED_QNAME, // AbstractFlowReservation
  UNUSED_QNAME, // AccountBalance
  UNUSED_QNAME, // AccountBalanceLink
  UNUSED_QNAME, // AccountingUnit
  "AccumulationBehaviourType",
  UNUSED_QNAME, // ActiveBillingPeriodListLink
  UNUSED_QNAME, // ActiveCreditRegisterListLink
  UNUSED_QNAME, // ActiveDERControlListLink
  "ActiveEndDeviceControlListLink",
  UNUSED_QNAME, // ActiveFlowReservationListLink
  "ActivePower",
  UNUSED_QNAME, // ActiveProjectionReadingListLink
  UNUSED_QNAME, // ActiveSupplyInterruptionOverrideListLink
  UNUSED_QNAME, // ActiveTargetReadingListLink
  "ActiveTextMessageListLink",
  UNUSED_QNAME, // ActiveTimeTariffIntervalListLink
  UNUSED_QNAME, // AmpereHour
  UNUSED_QNAME, // ApparentPower
  "ApplianceLoadReduction",
  "ApplianceLoadReductionType",
  "AppliedTargetReduction",
  UNUSED_QNAME, // AssociatedDERProgramListLink
  UNUSED_QNAME, // AssociatedUsagePointLink
  UNUSED_QNAME, // BillingMeterReadingBase
  UNUSED_QNAME, // BillingPeriod
  UNUSED_QNAME, // BillingPeriodList
  UNUSED_QNAME, // BillingPeriodListLink
  UNUSED_QNAME, // BillingReading
  UNUSED_QNAME, // BillingReadingList
  UNUSED_QNAME, // BillingReadingListLink
  UNUSED_QNAME, // BillingReadingSet
  UNUSED_QNAME, // BillingReadingSetList
  UNUSED_QNAME, // BillingReadingSetListLink
  "CRCerrors",
  UNUSED_QNAME, // Charge
  "ChargeKind",
  "CommodityType",
  "Condition",
  "Configuration",
  "ConfigurationLink",
  UNUSED_QNAME, // ConnectStatusType
  "ConsumptionBlockType",
  UNUSED_QNAME, // ConsumptionTariffInterval
  UNUSED_QNAME, // ConsumptionTariffIntervalList
  UNUSED_QNAME, // ConsumptionTariffIntervalListLink
  "CostKindType",
  UNUSED_QNAME, // CreditRegister
  UNUSED_QNAME, // CreditRegisterList
  UNUSED_QNAME, // CreditRegisterListLink
  "CreditStatusType",
  UNUSED_QNAME, // CreditTypeChange
  "CreditTypeType",
  "CurrencyCode",
  UNUSED_QNAME, // CurrentDERProgramLink
  UNUSED_QNAME, // CurrentRMS
  UNUSED_QNAME, // CurveData
  UNUSED_QNAME, // CurvePairType
  UNUSED_QNAME, // CustomerAccount
  UNUSED_QNAME, // CustomerAccountLink
  UNUSED_QNAME, // CustomerAccountList
  "CustomerAccountListLink",
  UNUSED_QNAME, // CustomerAgreement
  UNUSED_QNAME, // CustomerAgreementList
  UNUSED_QNAME, // CustomerAgreementListLink
  UNUSED_QNAME, // DER
  UNUSED_QNAME, // DERAvailability
  UNUSED_QNAME, // DERAvailabilityLink
  UNUSED_QNAME, // DERCapability
  UNUSED_QNAME, // DERCapabilityLink
  UNUSED_QNAME, // DERControl
  UNUSED_QNAME, // DERControlBase
  UNUSED_QNAME, // DERControlList
  UNUSED_QNAME, // DERControlListLink
  "DERControlType",
  UNUSED_QNAME, // DERCurve
  UNUSED_QNAME, // DERCurveLink
  UNUSED_QNAME, // DERCurveList
  UNUSED_QNAME, // DERCurveListLink
  "DERCurveType",
  UNUSED_QNAME, // DERLink
  UNUSED_QNAME, // DERList
  "DERListLink",
  UNUSED_QNAME, // DERProgram
  UNUSED_QNAME, // DERProgramLink
  UNUSED_QNAME, // DERProgramList
  "DERProgramListLink",
  UNUSED_QNAME, // DERSettings
  UNUSED_QNAME, // DERSettingsLink
  UNUSED_QNAME, // DERStatus
  UNUSED_QNAME, // DERStatusLink
  "DERType",
  "DERUnitRefType",
  "DODAGid",
  "DODAGroot",
  "DRLCCapabilities",
  "DataQualifierType",
  "DateTimeInterval",
  UNUSED_QNAME, // DefaultDERControl
  UNUSED_QNAME, // DefaultDERControlLink
  "DemandResponseProgram",
  UNUSED_QNAME, // DemandResponseProgramLink
  "DemandResponseProgramList",
  "DemandResponseProgramListLink",
  "DestAddress",
  "DeviceCapability",
  UNUSED_QNAME, // DeviceCapabilityLink
  "DeviceCategoryType",
  "DeviceInformation",
  "DeviceInformationLink",
  "DeviceStatus",
  "DeviceStatusLink",
  "DrResponse",
  "DstRuleType",
  "DutyCycle",
  "EUI64",
  "EndDevice",
  "EndDeviceControl",
  "EndDeviceControlList",
  "EndDeviceControlListLink",
  UNUSED_QNAME, // EndDeviceLink
  "EndDeviceList",
  "EndDeviceListLink",
  UNUSED_QNAME, // EnvironmentalCost
  UNUSED_QNAME, // Error
  "Event",
  "EventStatus",
  "File",
  UNUSED_QNAME, // FileLink
  "FileList",
  "FileListLink",
  UNUSED_QNAME, // FileStatus
  "FileStatusLink",
  UNUSED_QNAME, // FixedPointType
  UNUSED_QNAME, // FixedPowerFactor
  UNUSED_QNAME, // FixedVAr
  "FlowDirectionType",
  UNUSED_QNAME, // FlowReservationRequest
  UNUSED_QNAME, // FlowReservationRequestList
  "FlowReservationRequestListLink",
  UNUSED_QNAME, // FlowReservationResponse
  UNUSED_QNAME, // FlowReservationResponseList
  "FlowReservationResponseListLink",
  "FunctionSetAssignments",
  "FunctionSetAssignmentsBase",
  "FunctionSetAssignmentsList",
  "FunctionSetAssignmentsListLink",
  "HexBinary128",
  "HexBinary16",
  "HexBinary160",
  "HexBinary32",
  "HexBinary48",
  "HexBinary64",
  "HexBinary8",
  UNUSED_QNAME, // HistoricalReading
  UNUSED_QNAME, // HistoricalReadingList
  UNUSED_QNAME, // HistoricalReadingListLink
  "IEEE_802_15_4",
  "IPAddr",
  "IPAddrList",
  "IPAddrListLink",
  "IPInterface",
  "IPInterfaceList",
  "IPInterfaceListLink",
  "IdentifiedObject",
  "Int16",
  "Int32",
  "Int48",
  "Int64",
  "Int8",
  UNUSED_QNAME, // InverterStatusType
  "KindType",
  "LLAckNotRx",
  "LLCSMAFail",
  "LLFramesDropRx",
  "LLFramesDropTx",
  "LLFramesRx",
  "LLFramesTx",
  "LLInterface",
  "LLInterfaceList",
  "LLInterfaceListLink",
  "LLMediaAccessFail",
  "LLOctetsRx",
  "LLOctetsTx",
  "LLRetryCount",
  "LLSecurityErrorRx",
  "Link",
  "List",
  "ListLink",
  UNUSED_QNAME, // LoadShedAvailability
  "LoadShedAvailabilityLink",
  UNUSED_QNAME, // LocalControlModeStatusType
  "LocaleType",
  "LogEvent",
  "LogEventList",
  "LogEventListLink",
  "MOP",
  UNUSED_QNAME, // ManufacturerStatusType
  "MessagingProgram",
  "MessagingProgramList",
  "MessagingProgramListLink",
  UNUSED_QNAME, // MeterReading
  UNUSED_QNAME, // MeterReadingBase
  UNUSED_QNAME, // MeterReadingLink
  UNUSED_QNAME, // MeterReadingList
  UNUSED_QNAME, // MeterReadingListLink
  UNUSED_QNAME, // MirrorMeterReading
  UNUSED_QNAME, // MirrorMeterReadingList
  UNUSED_QNAME, // MirrorReadingSet
  UNUSED_QNAME, // MirrorUsagePoint
  UNUSED_QNAME, // MirrorUsagePointList
  "MirrorUsagePointListLink",
  "Neighbor",
  "NeighborList",
  "NeighborListLink",
  "Notification",
  UNUSED_QNAME, // NotificationList
  UNUSED_QNAME, // NotificationListLink
  "Offset",
  "OneHourRangeType",
  UNUSED_QNAME, // OperationalModeStatusType
  "PENType",
  "PEVInfo",
  "PINType",
  "PRF",
  "PerCent",
  "PhaseCode",
  "PowerConfiguration",
  "PowerOfTenMultiplierType",
  "PowerSourceType",
  "PowerStatus",
  "PowerStatusLink",
  "PrepayModeType",
  UNUSED_QNAME, // PrepayOperationStatus
  UNUSED_QNAME, // PrepayOperationStatusLink
  UNUSED_QNAME, // Prepayment
  UNUSED_QNAME, // PrepaymentLink
  UNUSED_QNAME, // PrepaymentList
  "PrepaymentListLink",
  UNUSED_QNAME, // PriceResponse
  UNUSED_QNAME, // PriceResponseCfg
  UNUSED_QNAME, // PriceResponseCfgList
  "PriceResponseCfgListLink",
  "PrimacyType",
  "PriorityType",
  UNUSED_QNAME, // ProjectionReading
  UNUSED_QNAME, // ProjectionReadingList
  UNUSED_QNAME, // ProjectionReadingListLink
  "RPLInstance",
  "RPLInstanceID",
  "RPLInstanceList",
  "RPLInstanceListLink",
  "RPLSourceRoutes",
  "RPLSourceRoutesList",
  "RPLSourceRoutesListLink",
  "RandomizableEvent",
  UNUSED_QNAME, // RateComponent
  UNUSED_QNAME, // RateComponentLink
  UNUSED_QNAME, // RateComponentList
  UNUSED_QNAME, // RateComponentListLink
  UNUSED_QNAME, // ReactivePower
  UNUSED_QNAME, // Reading
  UNUSED_QNAME, // ReadingBase
  UNUSED_QNAME, // ReadingLink
  UNUSED_QNAME, // ReadingList
  UNUSED_QNAME, // ReadingListLink
  UNUSED_QNAME, // ReadingSet
  UNUSED_QNAME, // ReadingSetBase
  UNUSED_QNAME, // ReadingSetList
  UNUSED_QNAME, // ReadingSetListLink
  UNUSED_QNAME, // ReadingType
  UNUSED_QNAME, // ReadingTypeLink
  "RealEnergy",
  UNUSED_QNAME, // Registration
  "RegistrationLink",
  "ReservationStatusType",
  "Resource",
  UNUSED_QNAME, // RespondableIdentifiedObject
  "RespondableResource",
  "RespondableSubscribableIdentifiedObject",
  "Response",
  UNUSED_QNAME, // ResponseList
  UNUSED_QNAME, // ResponseListLink
  UNUSED_QNAME, // ResponseSet
  UNUSED_QNAME, // ResponseSetList
  "ResponseSetListLink",
  "RoleFlagsType",
  "SFDIType",
  "SelfDevice",
  "SelfDeviceLink",
  UNUSED_QNAME, // ServiceChange
  "ServiceKind",
  "ServiceStatusType",
  UNUSED_QNAME, // ServiceSupplier
  UNUSED_QNAME, // ServiceSupplierLink
  UNUSED_QNAME, // ServiceSupplierList
  "SetPoint",
  "SignedPerCent",
  "SourceRoute",
  UNUSED_QNAME, // StateOfChargeStatusType
  UNUSED_QNAME, // StorageModeStatusType
  "String16",
  "String192",
  "String20",
  "String32",
  "String42",
  "String6",
  "SubscribableIdentifiedObject",
  "SubscribableList",
  "SubscribableResource",
  "SubscribableType",
  "Subscription",
  "SubscriptionBase",
  "SubscriptionList",
  "SubscriptionListLink",
  UNUSED_QNAME, // SupplyInterruptionOverride
  UNUSED_QNAME, // SupplyInterruptionOverrideList
  UNUSED_QNAME, // SupplyInterruptionOverrideListLink
  UNUSED_QNAME, // SupportedLocale
  UNUSED_QNAME, // SupportedLocaleList
  "SupportedLocaleListLink",
  "TOUType",
  UNUSED_QNAME, // TargetReading
  UNUSED_QNAME, // TargetReadingList
  UNUSED_QNAME, // TargetReadingListLink
  "TargetReduction",
  UNUSED_QNAME, // TariffProfile
  UNUSED_QNAME, // TariffProfileLink
  UNUSED_QNAME, // TariffProfileList
  "TariffProfileListLink",
  "Temperature",
  "TextMessage",
  "TextMessageList",
  "TextMessageListLink",
  "TextResponse",
  "Time",
  "TimeConfiguration",
  "TimeLink",
  "TimeOffsetType",
  UNUSED_QNAME, // TimeTariffInterval
  UNUSED_QNAME, // TimeTariffIntervalList
  UNUSED_QNAME, // TimeTariffIntervalListLink
  "TimeType",
  "UInt16",
  "UInt32",
  "UInt40",
  "UInt48",
  "UInt64",
  "UInt8",
  "UnitType",
  UNUSED_QNAME, // UnitValueType
  "UomType",
  UNUSED_QNAME, // UsagePoint
  UNUSED_QNAME, // UsagePointBase
  UNUSED_QNAME, // UsagePointLink
  UNUSED_QNAME, // UsagePointList
  "UsagePointListLink",
  "VersionType",
  UNUSED_QNAME, // VoltageRMS
  UNUSED_QNAME, // WattHour
  "accumulationBehaviour",
  "activateTime",
  "address",
  "amount",
  "attributeIdentifier",
  "availabilityDuration",
  "availabilityUpdatePercentChangeThreshold",
  "availabilityUpdatePowerChangeThreshold",
  "availableCredit",
  "averageEnergy",
  "batteryInstallTime",
  "batteryStatus",
  "billLastPeriod",
  "billToDate",
  "calorificValue",
  "capabilityInfo",
  "changedTime",
  "chargingPowerNow",
  "commodity",
  "consumeThreshold",
  "consumptionBlock",
  "conversionFactor",
  "coolingOffset",
  "coolingSetpoint",
  "costKind",
  "costLevel",
  "createdDateTime",
  "creationTime",
  "creditAmount",
  "creditExpiryLevel",
  "creditStatus",
  "creditType",
  "creditTypeChange",
  "creditTypeInUse",
  "currency",
  "currentLocale",
  "currentPowerSource",
  "currentStatus",
  "currentTime",
  "curveType",
  "customerAccount",
  "customerName",
  "dataQualifier",
  "dateTime",
  "dateTimeRegistered",
  "description",
  "deviceCategory",
  "deviceLFDI",
  "displacement",
  "drProgramMandatory",
  "dstEndRule",
  "dstEndTime",
  "dstOffset",
  "dstStartRule",
  "dstStartTime",
  "duration",
  "durationRequested",
  "effectiveTime",
  "email",
  "emergencyCredit",
  "emergencyCreditStatus",
  "encoding",
  "endDeviceLFDI",
  "energyAvailable",
  "energyRequestNow",
  "energyRequested",
  "energyUnit",
  "estimatedChargeRemaining",
  "estimatedTimeRemaining",
  "excitation",
  "extendedData",
  "fileURI",
  "flags",
  "flowDirection",
  "flowRateEndLimit",
  "flowRateStartLimit",
  "functionSet",
  "functionsImplemented",
  "genConnectStatus",
  "groundedFlag",
  "heatingOffset",
  "heatingSetpoint",
  "ifDescr",
  "ifHighSpeed",
  "ifInBroadcastPkts",
  "ifInDiscards",
  "ifInErrors",
  "ifInMulticastPkts",
  "ifInOctets",
  "ifInUcastPkts",
  "ifInUnknownProtos",
  "ifIndex",
  "ifMtu",
  "ifName",
  "ifOperStatus",
  "ifOutBroadcastPkts",
  "ifOutDiscards",
  "ifOutErrors",
  "ifOutMulticastPkts",
  "ifOutOctets",
  "ifOutUcastPkts",
  "ifPromiscuousMode",
  "ifSpeed",
  "ifType",
  "interval",
  "intervalLength",
  "inverterStatus",
  "isChild",
  "kind",
  "lFDI",
  "lastResetTime",
  "lastUpdateTime",
  "lastUpdatedTime",
  "level",
  "limit",
  "linkLayerType",
  "linkQuality",
  "loWPAN",
  "loadAdjustmentPercentageOffset",
  "loadPercent",
  "loadShedDeviceCategory",
  "loadShiftForward",
  "localControlModeStatus",
  "localID",
  "localTime",
  "locale",
  "logEventCode",
  "logEventID",
  "logEventPEN",
  "lowChargeThreshold",
  "lowCreditWarningLevel",
  "lowEmergencyCreditWarningLevel",
  "lowerLimit",
  "lowerThreshold",
  "mRID",
  "mRIDType",
  "manufacturerStatus",
  "maxChargeDuration",
  "maxDemand",
  "maxForwardPower",
  "maxNumberOfIntervals",
  "maxReductionThreshold",
  "maxRetryDuration",
  "mfDate",
  "mfHwVer",
  "mfID",
  "mfInfo",
  "mfModel",
  "mfSerNum",
  "mfVer",
  "minimumChargingDuration",
  "modesSupported",
  "monetaryUnit",
  "multiplier",
  "newResourceURI",
  "newStatus",
  "newType",
  "nextRequestAttempt",
  "nextUpdateTime",
  "normalValue",
  "notificationURI",
  "numCostLevels",
  "numberOfConsumptionBlocks",
  "numberOfTouTiers",
  "octetsRx",
  "octetsTx",
  "onCount",
  "opModFixedFlow",
  "opModFixedPF",
  "opModFixedVAr",
  "opModFixedW",
  "opModFreqWatt",
  "opModHVRT",
  "opModLVRT",
  "opModVoltVAr",
  "opModVoltWatt",
  "opModWattPF",
  "opState",
  "opTime",
  "operationalModeStatus",
  "optionsImplemented",
  "originator",
  "overrideDuration",
  "pIN",
  "packetsRx",
  "packetsTx",
  "phase",
  "phone",
  "potentiallySuperseded",
  "potentiallySupersededTime",
  "powerAvailable",
  "powerOfTenMultiplier",
  "powerRequested",
  "prepayMode",
  "price",
  "pricePowerOfTenMultiplier",
  "primacy",
  "primaryPower",
  "priority",
  "profileID",
  "providerID",
  "quality",
  "qualityFlags",
  "rampDecTms",
  "rampIncTms",
  "rampPT1Tms",
  "rampTms",
  "randomizeDuration",
  "randomizeStart",
  "rank",
  "rateCode",
  "readingTime",
  "reason",
  "reasonCode",
  "refType",
  "request503Count",
  "requestFailCount",
  "reservationStatus",
  "reserveChargePercent",
  "reservePercent",
  "roleFlags",
  "rtgA",
  "rtgAh",
  "rtgMaxChargeRate",
  "rtgMaxDischargeRate",
  "rtgMinPF",
  "rtgMinPFUnder",
  "rtgVA",
  "rtgVAr",
  "rtgVArNeg",
  "rtgW",
  "rtgWh",
  "rxFragError",
  "sFDI",
  "secondaryPower",
  "serviceAccount",
  "serviceCategoryKind",
  "serviceChange",
  "serviceLocation",
  "serviceStatus",
  "sessionTimeOnBattery",
  "setGenConnect",
  "setGradW",
  "setMaxChargeRate",
  "setMaxDischargeRate",
  "setMaxVA",
  "setMaxVAr",
  "setMaxVArNeg",
  "setMaxW",
  "setMinPF",
  "setMinPFUnder",
  "setStorConnect",
  "setVRef",
  "setVRefOfs",
  "sheddablePercent",
  "sheddablePower",
  "shortAddress",
  "size",
  "start",
  "startTime",
  "startValue",
  "statVArAvail",
  "statWAvail",
  "stateOfChargeStatus",
  "status",
  "statusTime",
  "statusTimeStamp",
  "storConnectStatus",
  "storageModeStatus",
  "subIntervalLength",
  "subject",
  "subscribedResource",
  "subscriptionURI",
  "supplyLimit",
  "swActTime",
  "swVer",
  "targetStateOfCharge",
  "textMessage",
  "tieredConsumptionBlocks",
  "timeChargeIsNeeded",
  "timeChargingStatusPEV",
  "timePeriod",
  "token",
  "totalTimeOnBattery",
  "touTier",
  "type",
  "tzOffset",
  "unit",
  "uom",
  "updatedTime",
  "upperLimit",
  "upperThreshold",
  "userDeviceName",
  "value",
  "version",
  "versionNumber",
  "web",
  "xMultiplier",
  "xvalue",
  "yMultiplier",
  "yRefType",
  "yvalue",
  "all",
  "href",
  "replyTo",
  "responseRequired",
  "results",
  "subscribable",
  NULL         // helpful terminator
};

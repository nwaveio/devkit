// This file is generated by Ember Desktop.  Please do not edit manually.
//
//

// Enclosing macro to prevent multiple inclusion
#ifndef __AF_ENDPOINT_CONFIG__
#define __AF_ENDPOINT_CONFIG__


// Fixed number of defined endpoints
#define FIXED_ENDPOINT_COUNT 1


// MinMax defaults
#define GENERATED_MIN_MAX_DEFAULTS { \
    { \
      (int8u*)0x01, \
      (int8u*)0x00, \
      (int8u*)0xFF \
    }, \
    { \
      (int8u*)0x00, \
      (int8u*)0x00, \
      (int8u*)0xFF \
    }, \
    { \
      (int8u*)0x00, \
      (int8u*)0x00, \
      (int8u*)0xFF \
    }, \
    { \
      (int8u*)0x00, \
      (int8u*)0x00, \
      (int8u*)0xFF \
    }, \
    { \
      (int8u*)0x00, \
      (int8u*)0x00, \
      (int8u*)0xFF \
    }, \
    { \
      (int8u*)0x0000, \
      (int8u*)0x0000, \
      (int8u*)0xFFFF \
    }, \
    { \
      (int8u*)0x00, \
      (int8u*)0x00, \
      (int8u*)0x80 \
    }, \
    { \
      (int8u*)0x00, \
      (int8u*)0x00, \
      (int8u*)0xFF \
    }, \
    { \
      (int8u*)0x00, \
      (int8u*)0x00, \
      (int8u*)0xFF \
    }, \
    { \
      (int8u*)0x0000, \
      (int8u*)0x0000, \
      (int8u*)0xFFF7 \
    }, \
    { \
      (int8u*)0x00, \
      (int8u*)0x00, \
      (int8u*)0x01 \
    }, \
    { \
      (int8u*)0x00, \
      (int8u*)0x00, \
      (int8u*)0x80 \
    }, \
    { \
      (int8u*)0x00, \
      (int8u*)0x00, \
      (int8u*)0x01 \
    }, \
    { \
      (int8u*)0x01, \
      (int8u*)0x00, \
      (int8u*)0x01 \
    }, \
    { \
      (int8u*)0x0000, \
      (int8u*)0x0000, \
      (int8u*)0xFFFF \
    }, \
    { \
      (int8u*)0x0000, \
      (int8u*)0x0000, \
      (int8u*)0xFFFF \
    }, \
  }


// Generated attributes
#define GENERATED_ATTRIBUTES { \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX|ATTRIBUTE_MASK_SINGLETON), { (int8u*)&(minMaxDefaults[0]) } }, /* 0 / Basic / ZCL version*/\
    { 0x0001, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX|ATTRIBUTE_MASK_SINGLETON), { (int8u*)&(minMaxDefaults[1]) } }, /* 1 / Basic / application version*/\
    { 0x0002, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX|ATTRIBUTE_MASK_SINGLETON), { (int8u*)&(minMaxDefaults[2]) } }, /* 2 / Basic / stack version*/\
    { 0x0003, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX|ATTRIBUTE_MASK_SINGLETON), { (int8u*)&(minMaxDefaults[3]) } }, /* 3 / Basic / hardware version*/\
    { 0x0004, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 33, (ATTRIBUTE_MASK_SINGLETON), { NULL } }, /* 4 / Basic / manufacturer name*/\
    { 0x0005, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 33, (ATTRIBUTE_MASK_SINGLETON), { NULL } }, /* 5 / Basic / model identifier*/\
    { 0x0006, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 17, (ATTRIBUTE_MASK_SINGLETON), { NULL } }, /* 6 / Basic / date code*/\
    { 0x0007, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX|ATTRIBUTE_MASK_SINGLETON), { (int8u*)&(minMaxDefaults[4]) } }, /* 7 / Basic / power source*/\
    { 0x4000, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 17, (ATTRIBUTE_MASK_SINGLETON), { NULL } }, /* 8 / Basic / sw build id*/\
    { 0x0000, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE|ATTRIBUTE_MASK_MIN_MAX), { (int8u*)&(minMaxDefaults[5]) } }, /* 9 / Identify / identify time*/\
    { 0x0000, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX), { (int8u*)&(minMaxDefaults[6]) } }, /* 10 / Groups / name support*/\
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX), { (int8u*)&(minMaxDefaults[7]) } }, /* 11 / Scenes / scene count*/\
    { 0x0001, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX), { (int8u*)&(minMaxDefaults[8]) } }, /* 12 / Scenes / current scene*/\
    { 0x0002, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_MIN_MAX), { (int8u*)&(minMaxDefaults[9]) } }, /* 13 / Scenes / current group*/\
    { 0x0003, ZCL_BOOLEAN_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX), { (int8u*)&(minMaxDefaults[10]) } }, /* 14 / Scenes / scene valid*/\
    { 0x0004, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX), { (int8u*)&(minMaxDefaults[11]) } }, /* 15 / Scenes / name support*/\
    { 0x0000, ZCL_BOOLEAN_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX), { (int8u*)&(minMaxDefaults[12]) } }, /* 16 / On/off / on/off*/\
    { 0x4000, ZCL_BOOLEAN_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX), { (int8u*)&(minMaxDefaults[13]) } }, /* 17 / On/off / global scene control*/\
    { 0x4001, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE|ATTRIBUTE_MASK_MIN_MAX), { (int8u*)&(minMaxDefaults[14]) } }, /* 18 / On/off / on time*/\
    { 0x4002, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE|ATTRIBUTE_MASK_MIN_MAX), { (int8u*)&(minMaxDefaults[15]) } }, /* 19 / On/off / off wait time*/\
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (int8u*)0x00 } }, /* 20 / Level Control / current level*/\
    { 0x0001, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (int8u*)0x0000 } }, /* 21 / Level Control / remaining time*/\
  }


// Cluster function static arrays
#define GENERATED_FUNCTION_ARRAYS \
const EmberAfGenericClusterFunction emberAfFuncArrayIdentifyClusterServer[] = { (EmberAfGenericClusterFunction)emberAfIdentifyClusterServerInitCallback,(EmberAfGenericClusterFunction)emberAfIdentifyClusterServerAttributeChangedCallback}; \
const EmberAfGenericClusterFunction emberAfFuncArrayGroupsClusterServer[] = { (EmberAfGenericClusterFunction)emberAfGroupsClusterServerInitCallback}; \
const EmberAfGenericClusterFunction emberAfFuncArrayScenesClusterServer[] = { (EmberAfGenericClusterFunction)emberAfScenesClusterServerInitCallback}; \
const EmberAfGenericClusterFunction emberAfFuncArrayOnOffClusterServer[] = { (EmberAfGenericClusterFunction)emberAfOnOffClusterServerInitCallback,(EmberAfGenericClusterFunction)emberAfOnOffClusterServerAttributeChangedCallback}; \
const EmberAfGenericClusterFunction emberAfFuncArrayLevelControlClusterServer[] = { (EmberAfGenericClusterFunction)emberAfLevelControlClusterServerInitCallback}; \


// Clusters defitions
#define GENERATED_CLUSTERS { \
    { 0x0000, (EmberAfAttributeMetadata*)&(generatedAttributes[0]), 9, 0, (CLUSTER_MASK_SERVER), NULL,  },    \
    { 0x0003, (EmberAfAttributeMetadata*)&(generatedAttributes[9]), 1, 2, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION| CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayIdentifyClusterServer, },    \
    { 0x0004, (EmberAfAttributeMetadata*)&(generatedAttributes[10]), 1, 1, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayGroupsClusterServer, },    \
    { 0x0005, (EmberAfAttributeMetadata*)&(generatedAttributes[11]), 5, 6, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayScenesClusterServer, },    \
    { 0x0006, (EmberAfAttributeMetadata*)&(generatedAttributes[16]), 4, 6, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION| CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayOnOffClusterServer, },    \
    { 0x0008, (EmberAfAttributeMetadata*)&(generatedAttributes[20]), 2, 3, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayLevelControlClusterServer, },    \
    { 0x1000, (EmberAfAttributeMetadata*)&(generatedAttributes[22]), 0, 0, (CLUSTER_MASK_CLIENT), NULL,  },    \
    { 0x1000, (EmberAfAttributeMetadata*)&(generatedAttributes[22]), 0, 0, (CLUSTER_MASK_SERVER), NULL,  },    \
  }


// Endpoint types
#define GENERATED_ENDPOINT_TYPES {        \
    { (EmberAfCluster*)&(generatedClusters[0]), 8, 18 }, \
  }


// Networks
#define EMBER_AF_GENERATED_NETWORKS { \
  { \
    EM_AF_NETWORK_TYPE_ZIGBEE_PRO, \
    { \
      .pro = { \
        ZA_ROUTER, \
        EMBER_AF_SECURITY_PROFILE_HA, \
      } \
    } \
  }, \
}
#define EMBER_AF_GENERATED_NETWORK_STRINGS  \
  "Primary (pro)", \


// Cluster manufacturer codes
#define GENERATED_CLUSTER_MANUFACTURER_CODES {      \
{0x00, 0x00} \
  }
#define GENERATED_CLUSTER_MANUFACTURER_CODE_COUNT 0

// Attribute manufacturer codes
#define GENERATED_ATTRIBUTE_MANUFACTURER_CODES {      \
{0x00, 0x00} \
  }
#define GENERATED_ATTRIBUTE_MANUFACTURER_CODE_COUNT 0


// Largest attribute size is needed for various buffers
#define ATTRIBUTE_LARGEST 33
// Total size of singleton attributes
#define ATTRIBUTE_SINGLETONS_SIZE 105

// Total size of attribute storage
#define ATTRIBUTE_MAX_SIZE 18

// Array of endpoints that are supported
#define FIXED_ENDPOINT_ARRAY { 1 }

// Array of profile ids
#define FIXED_PROFILE_IDS { 260 }

// Array of profile ids
#define FIXED_DEVICE_IDS { 0 }

// Array of profile ids
#define FIXED_DEVICE_VERSIONS { 2 }

// Array of endpoint types supported on each endpoint
#define FIXED_ENDPOINT_TYPES { 0 }

// Array of networks supported on each endpoint
#define FIXED_NETWORKS { 0 }


// Code used to configure the cluster event mechanism
#define EMBER_AF_GENERATED_EVENT_CODE \
  EmberEventControl emberAfIdentifyClusterServerTickCallbackControl1; \
  EmberEventControl emberAfOnOffClusterServerTickCallbackControl1; \
  EmberEventControl emberAfLevelControlClusterServerTickCallbackControl1; \
  extern EmberEventControl emberAfPluginIdentifyFeedbackProvideFeedbackEventControl; \
  extern void emberAfPluginIdentifyFeedbackProvideFeedbackEventHandler(void); \
  extern EmberEventControl emberAfPluginZllCommissioningTouchLinkEventControl; \
  extern void emberAfPluginZllCommissioningTouchLinkEventHandler(void); \
  extern EmberEventControl emberAfPluginZllCommissioningNetworkEventControl; \
  extern void emberAfPluginZllCommissioningNetworkEventHandler(void); \
  extern EmberEventControl identifyEventControl; \
  extern void identifyEventHandler(void); \
  extern EmberEventControl networkEventControl; \
  extern void networkEventHandler(void); \
  static void clusterTickWrapper(EmberEventControl *control, EmberAfTickFunction callback, int8u endpoint) \
  { \
    emberAfPushEndpointNetworkIndex(endpoint); \
    emberEventControlSetInactive(*control); \
    (*callback)(endpoint); \
    emberAfPopNetworkIndex(); \
  } \
  void emberAfIdentifyClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfIdentifyClusterServerTickCallbackControl1, emberAfIdentifyClusterServerTickCallback, 1); } \
  void emberAfOnOffClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfOnOffClusterServerTickCallbackControl1, emberAfOnOffClusterServerTickCallback, 1); } \
  void emberAfLevelControlClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfLevelControlClusterServerTickCallbackControl1, emberAfLevelControlClusterServerTickCallback, 1); } \
  EmberEventControl emberAfPluginZllIdentifyServerTriggerEffectEndpointEventControls[1]; \
  extern void emberAfPluginZllIdentifyServerTriggerEffectEndpointEventHandler(int8u endpoint); \
  void emberAfPluginZllIdentifyServerTriggerEffectEndpointEventWrapper1(void) { clusterTickWrapper(&emberAfPluginZllIdentifyServerTriggerEffectEndpointEventControls[0], emberAfPluginZllIdentifyServerTriggerEffectEndpointEventHandler, 1); } \


// EmberEventData structs used to populate the EmberEventData table
#define EMBER_AF_GENERATED_EVENTS   \
  { &emberAfIdentifyClusterServerTickCallbackControl1, emberAfIdentifyClusterServerTickCallbackWrapperFunction1 }, \
  { &emberAfOnOffClusterServerTickCallbackControl1, emberAfOnOffClusterServerTickCallbackWrapperFunction1 }, \
  { &emberAfLevelControlClusterServerTickCallbackControl1, emberAfLevelControlClusterServerTickCallbackWrapperFunction1 }, \
  { &emberAfPluginIdentifyFeedbackProvideFeedbackEventControl, emberAfPluginIdentifyFeedbackProvideFeedbackEventHandler }, \
  { &emberAfPluginZllCommissioningTouchLinkEventControl, emberAfPluginZllCommissioningTouchLinkEventHandler }, \
  { &emberAfPluginZllCommissioningNetworkEventControl, emberAfPluginZllCommissioningNetworkEventHandler }, \
  { &emberAfPluginZllIdentifyServerTriggerEffectEndpointEventControls[0], emberAfPluginZllIdentifyServerTriggerEffectEndpointEventWrapper1 }, \
  { &identifyEventControl, identifyEventHandler }, \
  { &networkEventControl, networkEventHandler }, \


#define EMBER_AF_GENERATED_EVENT_STRINGS   \
  "Identify Cluster Server EP 1",  \
  "On/off Cluster Server EP 1",  \
  "Level Control Cluster Server EP 1",  \
  "Identify Feedback Plugin ProvideFeedback",  \
  "ZLL Commissioning Plugin TouchLink",  \
  "ZLL Commissioning Plugin Network",  \
  "ZLL Identify Server Plugin TriggerEffect EP 1", \
  "identify Custom",  \
  "network Custom",  \


// The length of the event context table used to track and retrieve cluster events
#define EMBER_AF_EVENT_CONTEXT_LENGTH 3

// EmberAfEventContext structs used to populate the EmberAfEventContext table
#define EMBER_AF_GENERATED_EVENT_CONTEXT { 0x1, 0x3, FALSE, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfIdentifyClusterServerTickCallbackControl1}, \
{ 0x1, 0x6, FALSE, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfOnOffClusterServerTickCallbackControl1}, \
{ 0x1, 0x8, FALSE, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfLevelControlClusterServerTickCallbackControl1}


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_DECLARATIONS \
  void emberAfPluginInterpanInitCallback(void); \
  void emberAfPluginZllCommissioningInitCallback(void); \


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_CALLS \
  emberAfPluginInterpanInitCallback(); \
  emberAfPluginZllCommissioningInitCallback(); \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_DECLARATIONS \
  void emberAfPluginInterpanNcpInitCallback(boolean memoryAllocation); \
  void emberAfPluginZllCommissioningNcpInitCallback(boolean memoryAllocation); \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_CALLS \
  emberAfPluginInterpanNcpInitCallback(memoryAllocation); \
  emberAfPluginZllCommissioningNcpInitCallback(memoryAllocation); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_DECLARATIONS \
  void emberAfPluginZllCommissioningStackStatusCallback(EmberStatus status); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_CALLS \
  emberAfPluginZllCommissioningStackStatusCallback(status); \


// Generated data for the command discovery
#define GENERATED_COMMANDS { \
    { 0x0003, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Identify / IdentifyQueryResponse */ \
    { 0x0003, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Identify / Identify */ \
    { 0x0003, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Identify / IdentifyQuery */ \
    { 0x0003, 0x40, COMMAND_MASK_INCOMING_SERVER }, /* Identify / TriggerEffect */ \
    { 0x0004, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Groups / AddGroupResponse */ \
    { 0x0004, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Groups / AddGroup */ \
    { 0x0004, 0x01, COMMAND_MASK_OUTGOING_SERVER }, /* Groups / ViewGroupResponse */ \
    { 0x0004, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Groups / ViewGroup */ \
    { 0x0004, 0x02, COMMAND_MASK_OUTGOING_SERVER }, /* Groups / GetGroupMembershipResponse */ \
    { 0x0004, 0x02, COMMAND_MASK_INCOMING_SERVER }, /* Groups / GetGroupMembership */ \
    { 0x0004, 0x03, COMMAND_MASK_OUTGOING_SERVER }, /* Groups / RemoveGroupResponse */ \
    { 0x0004, 0x03, COMMAND_MASK_INCOMING_SERVER }, /* Groups / RemoveGroup */ \
    { 0x0004, 0x04, COMMAND_MASK_INCOMING_SERVER }, /* Groups / RemoveAllGroups */ \
    { 0x0004, 0x05, COMMAND_MASK_INCOMING_SERVER }, /* Groups / AddGroupIfIdentifying */ \
    { 0x0005, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / AddSceneResponse */ \
    { 0x0005, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / AddScene */ \
    { 0x0005, 0x01, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / ViewSceneResponse */ \
    { 0x0005, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / ViewScene */ \
    { 0x0005, 0x02, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / RemoveSceneResponse */ \
    { 0x0005, 0x02, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / RemoveScene */ \
    { 0x0005, 0x03, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / RemoveAllScenesResponse */ \
    { 0x0005, 0x03, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / RemoveAllScenes */ \
    { 0x0005, 0x04, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / StoreSceneResponse */ \
    { 0x0005, 0x04, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / StoreScene */ \
    { 0x0005, 0x05, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / RecallScene */ \
    { 0x0005, 0x06, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / GetSceneMembershipResponse */ \
    { 0x0005, 0x06, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / GetSceneMembership */ \
    { 0x0005, 0x40, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / EnhancedAddScene */ \
    { 0x0005, 0x41, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / EnhancedViewScene */ \
    { 0x0005, 0x42, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / CopyScene */ \
    { 0x0006, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* On/off / Off */ \
    { 0x0006, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* On/off / On */ \
    { 0x0006, 0x02, COMMAND_MASK_INCOMING_SERVER }, /* On/off / Toggle */ \
    { 0x0006, 0x40, COMMAND_MASK_INCOMING_SERVER }, /* On/off / OffWithEffect */ \
    { 0x0006, 0x41, COMMAND_MASK_INCOMING_SERVER }, /* On/off / OnWithRecallGlobalScene */ \
    { 0x0006, 0x42, COMMAND_MASK_INCOMING_SERVER }, /* On/off / OnWithTimedOff */ \
    { 0x0008, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Level Control / MoveToLevel */ \
    { 0x0008, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Level Control / Move */ \
    { 0x0008, 0x02, COMMAND_MASK_INCOMING_SERVER }, /* Level Control / Step */ \
    { 0x0008, 0x03, COMMAND_MASK_INCOMING_SERVER }, /* Level Control / Stop */ \
    { 0x0008, 0x04, COMMAND_MASK_INCOMING_SERVER }, /* Level Control / MoveToLevelWithOnOff */ \
    { 0x0008, 0x05, COMMAND_MASK_INCOMING_SERVER }, /* Level Control / MoveWithOnOff */ \
    { 0x0008, 0x06, COMMAND_MASK_INCOMING_SERVER }, /* Level Control / StepWithOnOff */ \
    { 0x0008, 0x07, COMMAND_MASK_INCOMING_SERVER }, /* Level Control / StopWithOnOff */ \
    { 0x1000, 0x00, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / ScanRequest */ \
    { 0x1000, 0x01, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / ScanResponse */ \
    { 0x1000, 0x02, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / DeviceInformationRequest */ \
    { 0x1000, 0x03, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / DeviceInformationResponse */ \
    { 0x1000, 0x06, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / IdentifyRequest */ \
    { 0x1000, 0x07, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / ResetToFactoryNewRequest */ \
    { 0x1000, 0x10, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / NetworkStartRequest */ \
    { 0x1000, 0x11, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / NetworkStartResponse */ \
    { 0x1000, 0x12, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / NetworkJoinRouterRequest */ \
    { 0x1000, 0x13, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / NetworkJoinRouterResponse */ \
    { 0x1000, 0x14, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / NetworkJoinEndDeviceRequest */ \
    { 0x1000, 0x15, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / NetworkJoinEndDeviceResponse */ \
    { 0x1000, 0x16, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / NetworkUpdateRequest */ \
    { 0x1000, 0x40, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / EndpointInformation */ \
    { 0x1000, 0x41, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / GetGroupIdentifiersRequest */ \
    { 0x1000, 0x41, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / GetGroupIdentifiersResponse */ \
    { 0x1000, 0x42, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / GetEndpointListRequest */ \
    { 0x1000, 0x42, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / GetEndpointListResponse */ \
  }
#define EMBER_AF_GENERATED_COMMAND_COUNT 62
#endif // __AF_ENDPOINT_CONFIG__

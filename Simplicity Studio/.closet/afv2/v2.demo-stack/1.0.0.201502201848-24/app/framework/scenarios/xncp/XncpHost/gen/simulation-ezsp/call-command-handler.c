// This file is generated by Ember Desktop.  Please do not edit manually.
//
//

// This is a set of generated functions that parse the
// the incomming message, and call appropriate command handler.



#include PLATFORM_HEADER
#ifdef EZSP_HOST
// Includes needed for ember related functions for the EZSP host
#include "stack/include/error.h"
#include "stack/include/ember-types.h"
#include "app/util/ezsp/ezsp-protocol.h"
#include "app/util/ezsp/ezsp.h"
#include "app/util/ezsp/ezsp-utils.h"
#include "app/util/ezsp/serial-interface.h"
#else
// Includes needed for ember related functions for the EM250
#include "stack/include/ember.h"
#endif // EZSP_HOST

#include "app/framework/util/util.h"
#include "af-structs.h"
#include "call-command-handler.h"
#include "command-id.h"
#include "callback.h"

static EmberAfStatus status(boolean wasHandled, boolean mfgSpecific)
{
  if (wasHandled) {
    return EMBER_ZCL_STATUS_SUCCESS;
  } else if (mfgSpecific) {
    return EMBER_ZCL_STATUS_UNSUP_MANUF_CLUSTER_COMMAND;
  } else {
    return EMBER_ZCL_STATUS_UNSUP_CLUSTER_COMMAND;
  }
}

// Main command parsing controller.
EmberAfStatus emberAfClusterSpecificCommandParse(EmberAfClusterCommand *cmd)
{
  if (cmd->direction == ZCL_DIRECTION_CLIENT_TO_SERVER
      && emberAfContainsServer(cmd->apsFrame->destinationEndpoint,
                               cmd->apsFrame->clusterId)) {
    switch (cmd->apsFrame->clusterId) {
    case ZCL_IDENTIFY_CLUSTER_ID:
      return emberAfIdentifyClusterServerCommandParse(cmd);
    case ZCL_GROUPS_CLUSTER_ID:
      return emberAfGroupsClusterServerCommandParse(cmd);
    case ZCL_SCENES_CLUSTER_ID:
      return emberAfScenesClusterServerCommandParse(cmd);
    case ZCL_ON_OFF_CLUSTER_ID:
      return emberAfOnOffClusterServerCommandParse(cmd);
    case ZCL_LEVEL_CONTROL_CLUSTER_ID:
      return emberAfLevelControlClusterServerCommandParse(cmd);
    }
  }
  return status(FALSE, cmd->mfgSpecific);
}

// Cluster: Identify, server
EmberAfStatus emberAfIdentifyClusterServerCommandParse(EmberAfClusterCommand *cmd)
{
  boolean wasHandled = FALSE;
  if (!cmd->mfgSpecific) {
    switch (cmd->commandId) {
    case ZCL_IDENTIFY_COMMAND_ID:
      {
        int16u payloadOffset = cmd->payloadStartIndex;
        int16u identifyTime;  // Ver.: always
        // Command is fixed length: 2
        if (cmd->bufLen < payloadOffset + 2) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        identifyTime = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfIdentifyClusterIdentifyCallback(identifyTime);
        break;
      }
    case ZCL_IDENTIFY_QUERY_COMMAND_ID:
      {
        // Command is fixed length: 0
        wasHandled = emberAfIdentifyClusterIdentifyQueryCallback();
        break;
      }
    }
  }
  return status(wasHandled, cmd->mfgSpecific);
}

// Cluster: Groups, server
EmberAfStatus emberAfGroupsClusterServerCommandParse(EmberAfClusterCommand *cmd)
{
  boolean wasHandled = FALSE;
  if (!cmd->mfgSpecific) {
    switch (cmd->commandId) {
    case ZCL_ADD_GROUP_COMMAND_ID:
      {
        int16u payloadOffset = cmd->payloadStartIndex;
        int16u groupId;  // Ver.: always
        int8u* groupName;  // Ver.: always
        // Command is not a fixed length
        if (cmd->bufLen < payloadOffset + 2) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        groupId = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 2;
        if (cmd->bufLen < payloadOffset + emberAfStringLength(cmd->buffer + payloadOffset) + 1) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        groupName = emberAfGetString(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfGroupsClusterAddGroupCallback(groupId,
                                                          groupName);
        break;
      }
    case ZCL_VIEW_GROUP_COMMAND_ID:
      {
        int16u payloadOffset = cmd->payloadStartIndex;
        int16u groupId;  // Ver.: always
        // Command is fixed length: 2
        if (cmd->bufLen < payloadOffset + 2) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        groupId = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfGroupsClusterViewGroupCallback(groupId);
        break;
      }
    case ZCL_GET_GROUP_MEMBERSHIP_COMMAND_ID:
      {
        int16u payloadOffset = cmd->payloadStartIndex;
        int8u groupCount;  // Ver.: always
        int8u* groupList;  // Ver.: always
        // Command is fixed length: 1
        if (cmd->bufLen < payloadOffset + 1) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        groupCount = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1;
        groupList = cmd->buffer + payloadOffset;
        wasHandled = emberAfGroupsClusterGetGroupMembershipCallback(groupCount,
                                                                    groupList);
        break;
      }
    case ZCL_REMOVE_GROUP_COMMAND_ID:
      {
        int16u payloadOffset = cmd->payloadStartIndex;
        int16u groupId;  // Ver.: always
        // Command is fixed length: 2
        if (cmd->bufLen < payloadOffset + 2) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        groupId = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfGroupsClusterRemoveGroupCallback(groupId);
        break;
      }
    case ZCL_REMOVE_ALL_GROUPS_COMMAND_ID:
      {
        // Command is fixed length: 0
        wasHandled = emberAfGroupsClusterRemoveAllGroupsCallback();
        break;
      }
    case ZCL_ADD_GROUP_IF_IDENTIFYING_COMMAND_ID:
      {
        int16u payloadOffset = cmd->payloadStartIndex;
        int16u groupId;  // Ver.: always
        int8u* groupName;  // Ver.: always
        // Command is not a fixed length
        if (cmd->bufLen < payloadOffset + 2) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        groupId = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 2;
        if (cmd->bufLen < payloadOffset + emberAfStringLength(cmd->buffer + payloadOffset) + 1) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        groupName = emberAfGetString(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfGroupsClusterAddGroupIfIdentifyingCallback(groupId,
                                                                       groupName);
        break;
      }
    }
  }
  return status(wasHandled, cmd->mfgSpecific);
}

// Cluster: Scenes, server
EmberAfStatus emberAfScenesClusterServerCommandParse(EmberAfClusterCommand *cmd)
{
  boolean wasHandled = FALSE;
  if (!cmd->mfgSpecific) {
    switch (cmd->commandId) {
    case ZCL_ADD_SCENE_COMMAND_ID:
      {
        int16u payloadOffset = cmd->payloadStartIndex;
        int16u groupId;  // Ver.: always
        int8u sceneId;  // Ver.: always
        int16u transitionTime;  // Ver.: always
        int8u* sceneName;  // Ver.: always
        int8u* extensionFieldSets;  // Ver.: always
        // Command is not a fixed length
        if (cmd->bufLen < payloadOffset + 2) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        groupId = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 2;
        if (cmd->bufLen < payloadOffset + 1) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        sceneId = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1;
        if (cmd->bufLen < payloadOffset + 2) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        transitionTime = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 2;
        if (cmd->bufLen < payloadOffset + emberAfStringLength(cmd->buffer + payloadOffset) + 1) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        sceneName = emberAfGetString(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += emberAfStringLength(cmd->buffer + payloadOffset) + 1;
        extensionFieldSets = cmd->buffer + payloadOffset;
        wasHandled = emberAfScenesClusterAddSceneCallback(groupId,
                                                          sceneId,
                                                          transitionTime,
                                                          sceneName,
                                                          extensionFieldSets);
        break;
      }
    case ZCL_VIEW_SCENE_COMMAND_ID:
      {
        int16u payloadOffset = cmd->payloadStartIndex;
        int16u groupId;  // Ver.: always
        int8u sceneId;  // Ver.: always
        // Command is fixed length: 3
        if (cmd->bufLen < payloadOffset + 3) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        groupId = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 2;
        sceneId = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfScenesClusterViewSceneCallback(groupId,
                                                           sceneId);
        break;
      }
    case ZCL_REMOVE_SCENE_COMMAND_ID:
      {
        int16u payloadOffset = cmd->payloadStartIndex;
        int16u groupId;  // Ver.: always
        int8u sceneId;  // Ver.: always
        // Command is fixed length: 3
        if (cmd->bufLen < payloadOffset + 3) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        groupId = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 2;
        sceneId = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfScenesClusterRemoveSceneCallback(groupId,
                                                             sceneId);
        break;
      }
    case ZCL_REMOVE_ALL_SCENES_COMMAND_ID:
      {
        int16u payloadOffset = cmd->payloadStartIndex;
        int16u groupId;  // Ver.: always
        // Command is fixed length: 2
        if (cmd->bufLen < payloadOffset + 2) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        groupId = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfScenesClusterRemoveAllScenesCallback(groupId);
        break;
      }
    case ZCL_STORE_SCENE_COMMAND_ID:
      {
        int16u payloadOffset = cmd->payloadStartIndex;
        int16u groupId;  // Ver.: always
        int8u sceneId;  // Ver.: always
        // Command is fixed length: 3
        if (cmd->bufLen < payloadOffset + 3) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        groupId = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 2;
        sceneId = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfScenesClusterStoreSceneCallback(groupId,
                                                            sceneId);
        break;
      }
    case ZCL_RECALL_SCENE_COMMAND_ID:
      {
        int16u payloadOffset = cmd->payloadStartIndex;
        int16u groupId;  // Ver.: always
        int8u sceneId;  // Ver.: always
        // Command is fixed length: 3
        if (cmd->bufLen < payloadOffset + 3) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        groupId = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 2;
        sceneId = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfScenesClusterRecallSceneCallback(groupId,
                                                             sceneId);
        break;
      }
    case ZCL_GET_SCENE_MEMBERSHIP_COMMAND_ID:
      {
        int16u payloadOffset = cmd->payloadStartIndex;
        int16u groupId;  // Ver.: always
        // Command is fixed length: 2
        if (cmd->bufLen < payloadOffset + 2) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        groupId = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfScenesClusterGetSceneMembershipCallback(groupId);
        break;
      }
    }
  }
  return status(wasHandled, cmd->mfgSpecific);
}

// Cluster: On/off, server
EmberAfStatus emberAfOnOffClusterServerCommandParse(EmberAfClusterCommand *cmd)
{
  boolean wasHandled = FALSE;
  if (!cmd->mfgSpecific) {
    switch (cmd->commandId) {
    case ZCL_OFF_COMMAND_ID:
      {
        // Command is fixed length: 0
        wasHandled = emberAfOnOffClusterOffCallback();
        break;
      }
    case ZCL_ON_COMMAND_ID:
      {
        // Command is fixed length: 0
        wasHandled = emberAfOnOffClusterOnCallback();
        break;
      }
    case ZCL_TOGGLE_COMMAND_ID:
      {
        // Command is fixed length: 0
        wasHandled = emberAfOnOffClusterToggleCallback();
        break;
      }
    }
  }
  return status(wasHandled, cmd->mfgSpecific);
}

// Cluster: Level Control, server
EmberAfStatus emberAfLevelControlClusterServerCommandParse(EmberAfClusterCommand *cmd)
{
  boolean wasHandled = FALSE;
  if (!cmd->mfgSpecific) {
    switch (cmd->commandId) {
    case ZCL_MOVE_TO_LEVEL_COMMAND_ID:
      {
        int16u payloadOffset = cmd->payloadStartIndex;
        int8u level;  // Ver.: always
        int16u transitionTime;  // Ver.: always
        // Command is fixed length: 3
        if (cmd->bufLen < payloadOffset + 3) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        level = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1;
        transitionTime = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfLevelControlClusterMoveToLevelCallback(level,
                                                                   transitionTime);
        break;
      }
    case ZCL_MOVE_COMMAND_ID:
      {
        int16u payloadOffset = cmd->payloadStartIndex;
        int8u moveMode;  // Ver.: always
        int8u rate;  // Ver.: always
        // Command is fixed length: 2
        if (cmd->bufLen < payloadOffset + 2) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        moveMode = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1;
        rate = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfLevelControlClusterMoveCallback(moveMode,
                                                            rate);
        break;
      }
    case ZCL_STEP_COMMAND_ID:
      {
        int16u payloadOffset = cmd->payloadStartIndex;
        int8u stepMode;  // Ver.: always
        int8u stepSize;  // Ver.: always
        int16u transitionTime;  // Ver.: always
        // Command is fixed length: 4
        if (cmd->bufLen < payloadOffset + 4) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        stepMode = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1;
        stepSize = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1;
        transitionTime = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfLevelControlClusterStepCallback(stepMode,
                                                            stepSize,
                                                            transitionTime);
        break;
      }
    case ZCL_STOP_COMMAND_ID:
      {
        // Command is fixed length: 0
        wasHandled = emberAfLevelControlClusterStopCallback();
        break;
      }
    case ZCL_MOVE_TO_LEVEL_WITH_ON_OFF_COMMAND_ID:
      {
        int16u payloadOffset = cmd->payloadStartIndex;
        int8u level;  // Ver.: always
        int16u transitionTime;  // Ver.: always
        // Command is fixed length: 3
        if (cmd->bufLen < payloadOffset + 3) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        level = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1;
        transitionTime = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfLevelControlClusterMoveToLevelWithOnOffCallback(level,
                                                                            transitionTime);
        break;
      }
    case ZCL_MOVE_WITH_ON_OFF_COMMAND_ID:
      {
        int16u payloadOffset = cmd->payloadStartIndex;
        int8u moveMode;  // Ver.: always
        int8u rate;  // Ver.: always
        // Command is fixed length: 2
        if (cmd->bufLen < payloadOffset + 2) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        moveMode = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1;
        rate = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfLevelControlClusterMoveWithOnOffCallback(moveMode,
                                                                     rate);
        break;
      }
    case ZCL_STEP_WITH_ON_OFF_COMMAND_ID:
      {
        int16u payloadOffset = cmd->payloadStartIndex;
        int8u stepMode;  // Ver.: always
        int8u stepSize;  // Ver.: always
        int16u transitionTime;  // Ver.: always
        // Command is fixed length: 4
        if (cmd->bufLen < payloadOffset + 4) return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        stepMode = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1;
        stepSize = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1;
        transitionTime = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfLevelControlClusterStepWithOnOffCallback(stepMode,
                                                                     stepSize,
                                                                     transitionTime);
        break;
      }
    case ZCL_STOP_WITH_ON_OFF_COMMAND_ID:
      {
        // Command is fixed length: 0
        wasHandled = emberAfLevelControlClusterStopWithOnOffCallback();
        break;
      }
    }
  }
  return status(wasHandled, cmd->mfgSpecific);
}

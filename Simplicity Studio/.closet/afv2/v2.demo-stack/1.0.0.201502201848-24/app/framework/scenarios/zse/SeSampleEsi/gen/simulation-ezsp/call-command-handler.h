// This file is generated by Ember Desktop.  Please do not edit manually.
//
//

// Enclosing macro to prevent multiple inclusion
#ifndef __EMBER_AF_COMMAND_PARSE_HEADER__
#define __EMBER_AF_COMMAND_PARSE_HEADER__


// This is a set of generated prototype for functions that parse the
// the incomming message, and call appropriate command handler.

// Cluster: Price, server
EmberAfStatus emberAfPriceClusterServerCommandParse(EmberAfClusterCommand *cmd);

// Cluster: Messaging, server
EmberAfStatus emberAfMessagingClusterServerCommandParse(EmberAfClusterCommand *cmd);

// Cluster: Key Establishment, client
EmberAfStatus emberAfKeyEstablishmentClusterClientCommandParse(EmberAfClusterCommand *cmd);

// Cluster: Key Establishment, server
EmberAfStatus emberAfKeyEstablishmentClusterServerCommandParse(EmberAfClusterCommand *cmd);

#endif // __EMBER_AF_COMMAND_PARSE_HEADER__

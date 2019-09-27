/*
 * Copyright (C) 2018-2019
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v3.0. See the file LICENSE in the top level
 * directory for more details.
 *
 * See AUTHORS.md for complete list of NDN IOT PKG authors and contributors.
 */


/** subscribe
 * This function will register a event that periodically send an Interest to the name prefix and fetch data.
 *
 * @unsolved 1. How to decide the frequency of Interest sending?
 * @unsolved 2. How to automatically do schematized trust verification?
 *              A solution is to automatically subscribe to a topic, like /home/trust_schema, and fetch the trust schema
 *              for pkt verification
 * @unsolved 3. How to automatically apply access control, i.e., decrypt the content published
 *
 * Example: each device can subscribe to CONTROL, device's own prefix, SCHEMA, to obtain the new configuration to verify other's commands
 * each device can subscribe to AC, device's service, EKEY, to obtain the encryption key to encrypt their content published
 */
// void
// ps_subscribe_to(service, locator, action, on_new_content_callback);

/** publish
 * This function will publish data to a content repo.
 * @param name_prefix. The topic to publish.
 * @param content. The content to publish.
 *
 * @unsolved 1. How to cooperate an external repo?
 * @unsolved 2. How to automatically do packet generation? i.e.: Data name, Signing Key
 * @unsolved 3. How to automatically apply access control, i.e., Encrypt the content using proper key
 *
 * Example: temp sensor can publish to: TEMP, bedroom, READ, "37.5 c degree" to publish temp data under /home/TEMP/bedroom/READ
 * controller can publish to: AC, TEMP, EKEY, "fetch from controller for new keys" to distribute new encryption keys
 */
// void
// ps_publish_to(service, locator, action, content);

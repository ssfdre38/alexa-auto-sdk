/*
 * Copyright 2017-2020 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/*********************************************************
**********************************************************
**********************************************************

THIS FILE IS AUTOGENERATED. DO NOT EDIT

**********************************************************
**********************************************************
*********************************************************/

#ifndef SPEECHRECOGNIZER_INITIATOR_H
#define SPEECHRECOGNIZER_INITIATOR_H

#include <string>
#include <vector>

#include <unordered_map>
#include <AACE/Engine/Utils/UUID/UUID.h>
#include <nlohmann/json.hpp>

namespace aasb {
namespace message {
namespace alexa {

//Enum Definition
enum class Initiator {
    HOLD_TO_TALK,
    TAP_TO_TALK,
    WAKEWORD,
};

inline std::string toString(Initiator enumValue) {
    switch (enumValue) {
        case (Initiator::HOLD_TO_TALK):
            return "HOLD_TO_TALK";
        case (Initiator::TAP_TO_TALK):
            return "TAP_TO_TALK";
        case (Initiator::WAKEWORD):
            return "WAKEWORD";
    }
    throw std::runtime_error("invalidInitiatorType");
}

inline Initiator toInitiator(const std::string& stringValue) {
    static std::unordered_map<std::string, Initiator> map = {
        {"HOLD_TO_TALK", Initiator::HOLD_TO_TALK},
        {"TAP_TO_TALK", Initiator::TAP_TO_TALK},
        {"WAKEWORD", Initiator::WAKEWORD},
    };

    auto search = map.find(stringValue);
    if (search != map.end()) {
        return search->second;
    }
    throw std::runtime_error("invalidInitiatorType");
}

inline void to_json(nlohmann::json& j, const Initiator& c) {
    j = toString(c);
}

inline void from_json(const nlohmann::json& j, Initiator& c) {
    c = toInitiator(j);
}

}  // namespace alexa
}  // namespace message
}  // namespace aasb

#endif  // SPEECHRECOGNIZER_INITIATOR_H
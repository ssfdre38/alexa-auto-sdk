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

#ifndef AUDIOPLAYER_PLAYERACTIVITY_H
#define AUDIOPLAYER_PLAYERACTIVITY_H

#include <string>
#include <vector>

#include <unordered_map>
#include <AACE/Engine/Utils/UUID/UUID.h>
#include <nlohmann/json.hpp>

namespace aasb {
namespace message {
namespace alexa {

//Enum Definition
enum class PlayerActivity {
    IDLE,
    PLAYING,
    STOPPED,
    PAUSED,
    BUFFER_UNDERRUN,
    FINISHED,
};

inline std::string toString(PlayerActivity enumValue) {
    switch (enumValue) {
        case (PlayerActivity::IDLE):
            return "IDLE";
        case (PlayerActivity::PLAYING):
            return "PLAYING";
        case (PlayerActivity::STOPPED):
            return "STOPPED";
        case (PlayerActivity::PAUSED):
            return "PAUSED";
        case (PlayerActivity::BUFFER_UNDERRUN):
            return "BUFFER_UNDERRUN";
        case (PlayerActivity::FINISHED):
            return "FINISHED";
    }
    throw std::runtime_error("invalidPlayerActivityType");
}

inline PlayerActivity toPlayerActivity(const std::string& stringValue) {
    static std::unordered_map<std::string, PlayerActivity> map = {
        {"IDLE", PlayerActivity::IDLE},
        {"PLAYING", PlayerActivity::PLAYING},
        {"STOPPED", PlayerActivity::STOPPED},
        {"PAUSED", PlayerActivity::PAUSED},
        {"BUFFER_UNDERRUN", PlayerActivity::BUFFER_UNDERRUN},
        {"FINISHED", PlayerActivity::FINISHED},
    };

    auto search = map.find(stringValue);
    if (search != map.end()) {
        return search->second;
    }
    throw std::runtime_error("invalidPlayerActivityType");
}

inline void to_json(nlohmann::json& j, const PlayerActivity& c) {
    j = toString(c);
}

inline void from_json(const nlohmann::json& j, PlayerActivity& c) {
    c = toPlayerActivity(j);
}

}  // namespace alexa
}  // namespace message
}  // namespace aasb

#endif  // AUDIOPLAYER_PLAYERACTIVITY_H
// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.1
//   C++ generator version: 0.1.3

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Generated from:
//   Version: v3
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.3
#ifndef  GOOGLE_YOUTUBE_API_MONITOR_STREAM_INFO_H_
#define  GOOGLE_YOUTUBE_API_MONITOR_STREAM_INFO_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Settings and Info of the monitor stream.
 *
 * @ingroup DataObject
 */
class MonitorStreamInfo : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static MonitorStreamInfo* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit MonitorStreamInfo(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit MonitorStreamInfo(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~MonitorStreamInfo();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::MonitorStreamInfo</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::MonitorStreamInfo");
  }

  /**
   * Determine if the '<code>broadcastStreamDelayMs</code>' attribute was set.
   *
   * @return true if the '<code>broadcastStreamDelayMs</code>' attribute was
   * set.
   */
  bool has_broadcast_stream_delay_ms() const {
    return Storage().isMember("broadcastStreamDelayMs");
  }

  /**
   * Clears the '<code>broadcastStreamDelayMs</code>' attribute.
   */
  void clear_broadcast_stream_delay_ms() {
    MutableStorage()->removeMember("broadcastStreamDelayMs");
  }


  /**
   * Get the value of the '<code>broadcastStreamDelayMs</code>' attribute.
   */
  uint32 get_broadcast_stream_delay_ms() const {
    const Json::Value& storage = Storage("broadcastStreamDelayMs");
    return client::JsonValueToCppValueHelper<uint32 >(storage);
  }

  /**
   * Change the '<code>broadcastStreamDelayMs</code>' attribute.
   *
   * If you have set the enableMonitorStream property to true, then this
   * property determines the length of the live broadcast delay.
   *
   * @param[in] value The new value.
   */
  void set_broadcast_stream_delay_ms(uint32 value) {
    client::SetJsonValueFromCppValueHelper<uint32 >(
      value, MutableStorage("broadcastStreamDelayMs"));
  }

  /**
   * Determine if the '<code>embedHtml</code>' attribute was set.
   *
   * @return true if the '<code>embedHtml</code>' attribute was set.
   */
  bool has_embed_html() const {
    return Storage().isMember("embedHtml");
  }

  /**
   * Clears the '<code>embedHtml</code>' attribute.
   */
  void clear_embed_html() {
    MutableStorage()->removeMember("embedHtml");
  }


  /**
   * Get the value of the '<code>embedHtml</code>' attribute.
   */
  const StringPiece get_embed_html() const {
    const Json::Value& v = Storage("embedHtml");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>embedHtml</code>' attribute.
   *
   * HTML code that embeds a player that plays the monitor stream.
   *
   * @param[in] value The new value.
   */
  void set_embed_html(const StringPiece& value) {
    *MutableStorage("embedHtml") = value.data();
  }

  /**
   * Determine if the '<code>enableMonitorStream</code>' attribute was set.
   *
   * @return true if the '<code>enableMonitorStream</code>' attribute was set.
   */
  bool has_enable_monitor_stream() const {
    return Storage().isMember("enableMonitorStream");
  }

  /**
   * Clears the '<code>enableMonitorStream</code>' attribute.
   */
  void clear_enable_monitor_stream() {
    MutableStorage()->removeMember("enableMonitorStream");
  }


  /**
   * Get the value of the '<code>enableMonitorStream</code>' attribute.
   */
  bool get_enable_monitor_stream() const {
    const Json::Value& storage = Storage("enableMonitorStream");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>enableMonitorStream</code>' attribute.
   *
   * This value determines whether the monitor stream is enabled for the
   * broadcast. If the monitor stream is enabled, then YouTube will broadcast
   * the event content on a special stream intended only for the broadcaster's
   * consumption. The broadcaster can use the stream to review the event content
   * and also to identify the optimal times to insert cuepoints.
   *
   * You need to set this value to true if you intend to have a broadcast delay
   * for your event.
   *
   * Note: This property cannot be updated once the broadcast is in the testing
   * or live state.
   *
   * @param[in] value The new value.
   */
  void set_enable_monitor_stream(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("enableMonitorStream"));
  }

 private:
  void operator=(const MonitorStreamInfo&);
};  // MonitorStreamInfo
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_MONITOR_STREAM_INFO_H_

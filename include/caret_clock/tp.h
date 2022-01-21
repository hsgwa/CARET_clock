// Copyright 2022 Research Institute of Systems Planning, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.#include <memory>

// Provide fake header guard for cpplint
#undef CARET_CLOCK__TP_H_
#ifndef CARET_CLOCK__TP_H_
#define CARET_CLOCK__TP_H_

#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER ros2_caret

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "caret_clock/tp.h"

#if !defined(_TP_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _TP_H

#include <lttng/tracepoint.h>
#include <lttng/tracepoint-event.h>

TRACEPOINT_EVENT(
  TRACEPOINT_PROVIDER,
  ros_time,
  TP_ARGS(
    const uint64_t, stamp_arg
  ),
  TP_FIELDS(
    ctf_integer(const uint64_t, stamp, stamp_arg)
  )
)

#endif /* _TP_H */

#endif  // CARET_CLOCK__TP_H_

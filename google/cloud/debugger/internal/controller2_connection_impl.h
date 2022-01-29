// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/devtools/clouddebugger/v2/controller.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEBUGGER_INTERNAL_CONTROLLER2_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEBUGGER_INTERNAL_CONTROLLER2_CONNECTION_IMPL_H

#include "google/cloud/debugger/controller2_connection.h"
#include "google/cloud/debugger/controller2_connection_idempotency_policy.h"
#include "google/cloud/debugger/controller2_options.h"
#include "google/cloud/debugger/internal/controller2_retry_traits.h"
#include "google/cloud/debugger/internal/controller2_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace debugger_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class Controller2ConnectionImpl : public debugger::Controller2Connection {
 public:
  ~Controller2ConnectionImpl() override = default;

  Controller2ConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<debugger_internal::Controller2Stub> stub,
      Options const& options);

  StatusOr<google::devtools::clouddebugger::v2::RegisterDebuggeeResponse>
  RegisterDebuggee(
      google::devtools::clouddebugger::v2::RegisterDebuggeeRequest const&
          request) override;

  StatusOr<google::devtools::clouddebugger::v2::ListActiveBreakpointsResponse>
  ListActiveBreakpoints(
      google::devtools::clouddebugger::v2::ListActiveBreakpointsRequest const&
          request) override;

  StatusOr<google::devtools::clouddebugger::v2::UpdateActiveBreakpointResponse>
  UpdateActiveBreakpoint(
      google::devtools::clouddebugger::v2::UpdateActiveBreakpointRequest const&
          request) override;

 private:
  std::unique_ptr<debugger::Controller2RetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<debugger::Controller2RetryPolicyOption>()) {
      return options.get<debugger::Controller2RetryPolicyOption>()->clone();
    }
    return retry_policy_prototype_->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<debugger::Controller2BackoffPolicyOption>()) {
      return options.get<debugger::Controller2BackoffPolicyOption>()->clone();
    }
    return backoff_policy_prototype_->clone();
  }

  std::unique_ptr<debugger::Controller2ConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<debugger::Controller2ConnectionIdempotencyPolicyOption>()) {
      return options
          .get<debugger::Controller2ConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return idempotency_policy_->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<debugger_internal::Controller2Stub> stub_;
  std::unique_ptr<debugger::Controller2RetryPolicy const>
      retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<debugger::Controller2ConnectionIdempotencyPolicy>
      idempotency_policy_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace debugger_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEBUGGER_INTERNAL_CONTROLLER2_CONNECTION_IMPL_H
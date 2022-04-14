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
// source: google/cloud/dialogflow/cx/v3/deployment.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_DEPLOYMENTS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_DEPLOYMENTS_CONNECTION_IMPL_H

#include "google/cloud/dialogflow_cx/deployments_connection.h"
#include "google/cloud/dialogflow_cx/deployments_connection_idempotency_policy.h"
#include "google/cloud/dialogflow_cx/deployments_options.h"
#include "google/cloud/dialogflow_cx/internal/deployments_retry_traits.h"
#include "google/cloud/dialogflow_cx/internal/deployments_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DeploymentsConnectionImpl : public dialogflow_cx::DeploymentsConnection {
 public:
  ~DeploymentsConnectionImpl() override = default;

  DeploymentsConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<dialogflow_cx_internal::DeploymentsStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::dialogflow::cx::v3::Deployment> ListDeployments(
      google::cloud::dialogflow::cx::v3::ListDeploymentsRequest request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Deployment> GetDeployment(
      google::cloud::dialogflow::cx::v3::GetDeploymentRequest const& request)
      override;

 private:
  std::unique_ptr<dialogflow_cx::DeploymentsRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<dialogflow_cx::DeploymentsRetryPolicyOption>()) {
      return options.get<dialogflow_cx::DeploymentsRetryPolicyOption>()
          ->clone();
    }
    return options_.get<dialogflow_cx::DeploymentsRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<dialogflow_cx::DeploymentsBackoffPolicyOption>()) {
      return options.get<dialogflow_cx::DeploymentsBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<dialogflow_cx::DeploymentsBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<dialogflow_cx::DeploymentsConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            dialogflow_cx::DeploymentsConnectionIdempotencyPolicyOption>()) {
      return options
          .get<dialogflow_cx::DeploymentsConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<dialogflow_cx::DeploymentsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<dialogflow_cx_internal::DeploymentsStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_DEPLOYMENTS_CONNECTION_IMPL_H
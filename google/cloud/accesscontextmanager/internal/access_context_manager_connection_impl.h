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
// source: google/identity/accesscontextmanager/v1/access_context_manager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSCONTEXTMANAGER_INTERNAL_ACCESS_CONTEXT_MANAGER_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSCONTEXTMANAGER_INTERNAL_ACCESS_CONTEXT_MANAGER_CONNECTION_IMPL_H

#include "google/cloud/accesscontextmanager/access_context_manager_connection.h"
#include "google/cloud/accesscontextmanager/access_context_manager_connection_idempotency_policy.h"
#include "google/cloud/accesscontextmanager/access_context_manager_options.h"
#include "google/cloud/accesscontextmanager/internal/access_context_manager_retry_traits.h"
#include "google/cloud/accesscontextmanager/internal/access_context_manager_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace accesscontextmanager_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AccessContextManagerConnectionImpl
    : public accesscontextmanager::AccessContextManagerConnection {
 public:
  ~AccessContextManagerConnectionImpl() override = default;

  AccessContextManagerConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<accesscontextmanager_internal::AccessContextManagerStub>
          stub,
      Options const& options);

  StreamRange<google::identity::accesscontextmanager::v1::AccessPolicy>
  ListAccessPolicies(
      google::identity::accesscontextmanager::v1::ListAccessPoliciesRequest
          request) override;

  StatusOr<google::identity::accesscontextmanager::v1::AccessPolicy>
  GetAccessPolicy(
      google::identity::accesscontextmanager::v1::GetAccessPolicyRequest const&
          request) override;

  future<StatusOr<google::identity::accesscontextmanager::v1::AccessPolicy>>
  CreateAccessPolicy(
      google::identity::accesscontextmanager::v1::AccessPolicy const& request)
      override;

  future<StatusOr<google::identity::accesscontextmanager::v1::AccessPolicy>>
  UpdateAccessPolicy(google::identity::accesscontextmanager::v1::
                         UpdateAccessPolicyRequest const& request) override;

  future<StatusOr<google::identity::accesscontextmanager::v1::
                      AccessContextManagerOperationMetadata>>
  DeleteAccessPolicy(google::identity::accesscontextmanager::v1::
                         DeleteAccessPolicyRequest const& request) override;

  StreamRange<google::identity::accesscontextmanager::v1::AccessLevel>
  ListAccessLevels(
      google::identity::accesscontextmanager::v1::ListAccessLevelsRequest
          request) override;

  StatusOr<google::identity::accesscontextmanager::v1::AccessLevel>
  GetAccessLevel(
      google::identity::accesscontextmanager::v1::GetAccessLevelRequest const&
          request) override;

  future<StatusOr<google::identity::accesscontextmanager::v1::AccessLevel>>
  CreateAccessLevel(google::identity::accesscontextmanager::v1::
                        CreateAccessLevelRequest const& request) override;

  future<StatusOr<google::identity::accesscontextmanager::v1::AccessLevel>>
  UpdateAccessLevel(google::identity::accesscontextmanager::v1::
                        UpdateAccessLevelRequest const& request) override;

  future<StatusOr<google::identity::accesscontextmanager::v1::
                      AccessContextManagerOperationMetadata>>
  DeleteAccessLevel(google::identity::accesscontextmanager::v1::
                        DeleteAccessLevelRequest const& request) override;

  future<StatusOr<
      google::identity::accesscontextmanager::v1::ReplaceAccessLevelsResponse>>
  ReplaceAccessLevels(google::identity::accesscontextmanager::v1::
                          ReplaceAccessLevelsRequest const& request) override;

  StreamRange<google::identity::accesscontextmanager::v1::ServicePerimeter>
  ListServicePerimeters(
      google::identity::accesscontextmanager::v1::ListServicePerimetersRequest
          request) override;

  StatusOr<google::identity::accesscontextmanager::v1::ServicePerimeter>
  GetServicePerimeter(google::identity::accesscontextmanager::v1::
                          GetServicePerimeterRequest const& request) override;

  future<StatusOr<google::identity::accesscontextmanager::v1::ServicePerimeter>>
  CreateServicePerimeter(
      google::identity::accesscontextmanager::v1::
          CreateServicePerimeterRequest const& request) override;

  future<StatusOr<google::identity::accesscontextmanager::v1::ServicePerimeter>>
  UpdateServicePerimeter(
      google::identity::accesscontextmanager::v1::
          UpdateServicePerimeterRequest const& request) override;

  future<StatusOr<google::identity::accesscontextmanager::v1::
                      AccessContextManagerOperationMetadata>>
  DeleteServicePerimeter(
      google::identity::accesscontextmanager::v1::
          DeleteServicePerimeterRequest const& request) override;

  future<StatusOr<google::identity::accesscontextmanager::v1::
                      ReplaceServicePerimetersResponse>>
  ReplaceServicePerimeters(
      google::identity::accesscontextmanager::v1::
          ReplaceServicePerimetersRequest const& request) override;

  future<StatusOr<google::identity::accesscontextmanager::v1::
                      CommitServicePerimetersResponse>>
  CommitServicePerimeters(
      google::identity::accesscontextmanager::v1::
          CommitServicePerimetersRequest const& request) override;

  StreamRange<google::identity::accesscontextmanager::v1::GcpUserAccessBinding>
  ListGcpUserAccessBindings(
      google::identity::accesscontextmanager::v1::
          ListGcpUserAccessBindingsRequest request) override;

  StatusOr<google::identity::accesscontextmanager::v1::GcpUserAccessBinding>
  GetGcpUserAccessBinding(
      google::identity::accesscontextmanager::v1::
          GetGcpUserAccessBindingRequest const& request) override;

  future<StatusOr<
      google::identity::accesscontextmanager::v1::GcpUserAccessBinding>>
  CreateGcpUserAccessBinding(
      google::identity::accesscontextmanager::v1::
          CreateGcpUserAccessBindingRequest const& request) override;

  future<StatusOr<
      google::identity::accesscontextmanager::v1::GcpUserAccessBinding>>
  UpdateGcpUserAccessBinding(
      google::identity::accesscontextmanager::v1::
          UpdateGcpUserAccessBindingRequest const& request) override;

  future<StatusOr<google::identity::accesscontextmanager::v1::
                      GcpUserAccessBindingOperationMetadata>>
  DeleteGcpUserAccessBinding(
      google::identity::accesscontextmanager::v1::
          DeleteGcpUserAccessBindingRequest const& request) override;

 private:
  std::unique_ptr<accesscontextmanager::AccessContextManagerRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            accesscontextmanager::AccessContextManagerRetryPolicyOption>()) {
      return options
          .get<accesscontextmanager::AccessContextManagerRetryPolicyOption>()
          ->clone();
    }
    return retry_policy_prototype_->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            accesscontextmanager::AccessContextManagerBackoffPolicyOption>()) {
      return options
          .get<accesscontextmanager::AccessContextManagerBackoffPolicyOption>()
          ->clone();
    }
    return backoff_policy_prototype_->clone();
  }

  std::unique_ptr<
      accesscontextmanager::AccessContextManagerConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<accesscontextmanager::
                     AccessContextManagerConnectionIdempotencyPolicyOption>()) {
      return options
          .get<accesscontextmanager::
                   AccessContextManagerConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return idempotency_policy_->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<accesscontextmanager_internal::AccessContextManagerStub>
      stub_;
  std::unique_ptr<accesscontextmanager::AccessContextManagerRetryPolicy const>
      retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<
      accesscontextmanager::AccessContextManagerConnectionIdempotencyPolicy>
      idempotency_policy_;

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            accesscontextmanager::AccessContextManagerPollingPolicyOption>()) {
      return options
          .get<accesscontextmanager::AccessContextManagerPollingPolicyOption>()
          ->clone();
    }
    return polling_policy_prototype_->clone();
  }

  std::unique_ptr<PollingPolicy const> polling_policy_prototype_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accesscontextmanager_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSCONTEXTMANAGER_INTERNAL_ACCESS_CONTEXT_MANAGER_CONNECTION_IMPL_H
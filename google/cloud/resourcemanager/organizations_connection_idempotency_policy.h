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
// source: google/cloud/resourcemanager/v3/organizations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_ORGANIZATIONS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_ORGANIZATIONS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/resourcemanager/v3/organizations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class OrganizationsConnectionIdempotencyPolicy {
 public:
  virtual ~OrganizationsConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<OrganizationsConnectionIdempotencyPolicy> clone()
      const = 0;

  virtual google::cloud::Idempotency GetOrganization(
      google::cloud::resourcemanager::v3::GetOrganizationRequest const&
          request) = 0;

  virtual google::cloud::Idempotency SearchOrganizations(
      google::cloud::resourcemanager::v3::SearchOrganizationsRequest
          request) = 0;

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) = 0;

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) = 0;

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) = 0;
};

std::unique_ptr<OrganizationsConnectionIdempotencyPolicy>
MakeDefaultOrganizationsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_ORGANIZATIONS_CONNECTION_IDEMPOTENCY_POLICY_H
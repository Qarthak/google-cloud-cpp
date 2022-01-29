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
// source: google/cloud/securitycenter/v1/securitycenter_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_SECURITY_CENTER_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_SECURITY_CENTER_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/securitycenter/v1/securitycenter_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace securitycenter {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SecurityCenterConnectionIdempotencyPolicy {
 public:
  virtual ~SecurityCenterConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<SecurityCenterConnectionIdempotencyPolicy> clone()
      const = 0;

  virtual google::cloud::Idempotency BulkMuteFindings(
      google::cloud::securitycenter::v1::BulkMuteFindingsRequest const&
          request) = 0;

  virtual google::cloud::Idempotency CreateSource(
      google::cloud::securitycenter::v1::CreateSourceRequest const&
          request) = 0;

  virtual google::cloud::Idempotency CreateFinding(
      google::cloud::securitycenter::v1::CreateFindingRequest const&
          request) = 0;

  virtual google::cloud::Idempotency CreateMuteConfig(
      google::cloud::securitycenter::v1::CreateMuteConfigRequest const&
          request) = 0;

  virtual google::cloud::Idempotency CreateNotificationConfig(
      google::cloud::securitycenter::v1::CreateNotificationConfigRequest const&
          request) = 0;

  virtual google::cloud::Idempotency DeleteMuteConfig(
      google::cloud::securitycenter::v1::DeleteMuteConfigRequest const&
          request) = 0;

  virtual google::cloud::Idempotency DeleteNotificationConfig(
      google::cloud::securitycenter::v1::DeleteNotificationConfigRequest const&
          request) = 0;

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) = 0;

  virtual google::cloud::Idempotency GetMuteConfig(
      google::cloud::securitycenter::v1::GetMuteConfigRequest const&
          request) = 0;

  virtual google::cloud::Idempotency GetNotificationConfig(
      google::cloud::securitycenter::v1::GetNotificationConfigRequest const&
          request) = 0;

  virtual google::cloud::Idempotency GetOrganizationSettings(
      google::cloud::securitycenter::v1::GetOrganizationSettingsRequest const&
          request) = 0;

  virtual google::cloud::Idempotency GetSource(
      google::cloud::securitycenter::v1::GetSourceRequest const& request) = 0;

  virtual google::cloud::Idempotency GroupAssets(
      google::cloud::securitycenter::v1::GroupAssetsRequest request) = 0;

  virtual google::cloud::Idempotency GroupFindings(
      google::cloud::securitycenter::v1::GroupFindingsRequest request) = 0;

  virtual google::cloud::Idempotency ListAssets(
      google::cloud::securitycenter::v1::ListAssetsRequest request) = 0;

  virtual google::cloud::Idempotency ListFindings(
      google::cloud::securitycenter::v1::ListFindingsRequest request) = 0;

  virtual google::cloud::Idempotency ListMuteConfigs(
      google::cloud::securitycenter::v1::ListMuteConfigsRequest request) = 0;

  virtual google::cloud::Idempotency ListNotificationConfigs(
      google::cloud::securitycenter::v1::ListNotificationConfigsRequest
          request) = 0;

  virtual google::cloud::Idempotency ListSources(
      google::cloud::securitycenter::v1::ListSourcesRequest request) = 0;

  virtual google::cloud::Idempotency RunAssetDiscovery(
      google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&
          request) = 0;

  virtual google::cloud::Idempotency SetFindingState(
      google::cloud::securitycenter::v1::SetFindingStateRequest const&
          request) = 0;

  virtual google::cloud::Idempotency SetMute(
      google::cloud::securitycenter::v1::SetMuteRequest const& request) = 0;

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) = 0;

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) = 0;

  virtual google::cloud::Idempotency UpdateExternalSystem(
      google::cloud::securitycenter::v1::UpdateExternalSystemRequest const&
          request) = 0;

  virtual google::cloud::Idempotency UpdateFinding(
      google::cloud::securitycenter::v1::UpdateFindingRequest const&
          request) = 0;

  virtual google::cloud::Idempotency UpdateMuteConfig(
      google::cloud::securitycenter::v1::UpdateMuteConfigRequest const&
          request) = 0;

  virtual google::cloud::Idempotency UpdateNotificationConfig(
      google::cloud::securitycenter::v1::UpdateNotificationConfigRequest const&
          request) = 0;

  virtual google::cloud::Idempotency UpdateOrganizationSettings(
      google::cloud::securitycenter::v1::
          UpdateOrganizationSettingsRequest const& request) = 0;

  virtual google::cloud::Idempotency UpdateSource(
      google::cloud::securitycenter::v1::UpdateSourceRequest const&
          request) = 0;

  virtual google::cloud::Idempotency UpdateSecurityMarks(
      google::cloud::securitycenter::v1::UpdateSecurityMarksRequest const&
          request) = 0;
};

std::unique_ptr<SecurityCenterConnectionIdempotencyPolicy>
MakeDefaultSecurityCenterConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_SECURITY_CENTER_CONNECTION_IDEMPOTENCY_POLICY_H
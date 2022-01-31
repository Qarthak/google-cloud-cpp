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
// source: google/monitoring/v3/notification_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_NOTIFICATION_CHANNEL_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_NOTIFICATION_CHANNEL_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/monitoring/v3/notification_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace monitoring {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NotificationChannelServiceConnectionIdempotencyPolicy {
 public:
  virtual ~NotificationChannelServiceConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<NotificationChannelServiceConnectionIdempotencyPolicy>
  clone() const = 0;

  virtual google::cloud::Idempotency ListNotificationChannelDescriptors(
      google::monitoring::v3::ListNotificationChannelDescriptorsRequest
          request) = 0;

  virtual google::cloud::Idempotency GetNotificationChannelDescriptor(
      google::monitoring::v3::GetNotificationChannelDescriptorRequest const&
          request) = 0;

  virtual google::cloud::Idempotency ListNotificationChannels(
      google::monitoring::v3::ListNotificationChannelsRequest request) = 0;

  virtual google::cloud::Idempotency GetNotificationChannel(
      google::monitoring::v3::GetNotificationChannelRequest const& request) = 0;

  virtual google::cloud::Idempotency CreateNotificationChannel(
      google::monitoring::v3::CreateNotificationChannelRequest const&
          request) = 0;

  virtual google::cloud::Idempotency UpdateNotificationChannel(
      google::monitoring::v3::UpdateNotificationChannelRequest const&
          request) = 0;

  virtual google::cloud::Idempotency DeleteNotificationChannel(
      google::monitoring::v3::DeleteNotificationChannelRequest const&
          request) = 0;

  virtual google::cloud::Idempotency SendNotificationChannelVerificationCode(
      google::monitoring::v3::
          SendNotificationChannelVerificationCodeRequest const& request) = 0;

  virtual google::cloud::Idempotency GetNotificationChannelVerificationCode(
      google::monitoring::v3::
          GetNotificationChannelVerificationCodeRequest const& request) = 0;

  virtual google::cloud::Idempotency VerifyNotificationChannel(
      google::monitoring::v3::VerifyNotificationChannelRequest const&
          request) = 0;
};

std::unique_ptr<NotificationChannelServiceConnectionIdempotencyPolicy>
MakeDefaultNotificationChannelServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_NOTIFICATION_CHANNEL_CONNECTION_IDEMPOTENCY_POLICY_H
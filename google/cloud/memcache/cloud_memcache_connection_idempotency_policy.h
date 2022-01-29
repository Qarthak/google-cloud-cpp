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
// source: google/cloud/memcache/v1/cloud_memcache.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MEMCACHE_CLOUD_MEMCACHE_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MEMCACHE_CLOUD_MEMCACHE_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/memcache/v1/cloud_memcache.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace memcache {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudMemcacheConnectionIdempotencyPolicy {
 public:
  virtual ~CloudMemcacheConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<CloudMemcacheConnectionIdempotencyPolicy> clone()
      const = 0;

  virtual google::cloud::Idempotency ListInstances(
      google::cloud::memcache::v1::ListInstancesRequest request) = 0;

  virtual google::cloud::Idempotency GetInstance(
      google::cloud::memcache::v1::GetInstanceRequest const& request) = 0;

  virtual google::cloud::Idempotency CreateInstance(
      google::cloud::memcache::v1::CreateInstanceRequest const& request) = 0;

  virtual google::cloud::Idempotency UpdateInstance(
      google::cloud::memcache::v1::UpdateInstanceRequest const& request) = 0;

  virtual google::cloud::Idempotency UpdateParameters(
      google::cloud::memcache::v1::UpdateParametersRequest const& request) = 0;

  virtual google::cloud::Idempotency DeleteInstance(
      google::cloud::memcache::v1::DeleteInstanceRequest const& request) = 0;

  virtual google::cloud::Idempotency ApplyParameters(
      google::cloud::memcache::v1::ApplyParametersRequest const& request) = 0;
};

std::unique_ptr<CloudMemcacheConnectionIdempotencyPolicy>
MakeDefaultCloudMemcacheConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace memcache
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MEMCACHE_CLOUD_MEMCACHE_CONNECTION_IDEMPOTENCY_POLICY_H
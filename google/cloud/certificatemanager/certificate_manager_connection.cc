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
// source: google/cloud/certificatemanager/v1/certificate_manager.proto

#include "google/cloud/certificatemanager/certificate_manager_connection.h"
#include "google/cloud/certificatemanager/certificate_manager_options.h"
#include "google/cloud/certificatemanager/internal/certificate_manager_connection_impl.h"
#include "google/cloud/certificatemanager/internal/certificate_manager_option_defaults.h"
#include "google/cloud/certificatemanager/internal/certificate_manager_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace certificatemanager {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CertificateManagerConnection::~CertificateManagerConnection() = default;

StreamRange<google::cloud::certificatemanager::v1::Certificate>
CertificateManagerConnection::ListCertificates(
    google::cloud::certificatemanager::v1::
        ListCertificatesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::certificatemanager::v1::Certificate>>();
}

StatusOr<google::cloud::certificatemanager::v1::Certificate>
CertificateManagerConnection::GetCertificate(
    google::cloud::certificatemanager::v1::GetCertificateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::certificatemanager::v1::Certificate>>
CertificateManagerConnection::CreateCertificate(
    google::cloud::certificatemanager::v1::CreateCertificateRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::certificatemanager::v1::Certificate>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::certificatemanager::v1::Certificate>>
CertificateManagerConnection::UpdateCertificate(
    google::cloud::certificatemanager::v1::UpdateCertificateRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::certificatemanager::v1::Certificate>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
CertificateManagerConnection::DeleteCertificate(
    google::cloud::certificatemanager::v1::DeleteCertificateRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::certificatemanager::v1::CertificateMap>
CertificateManagerConnection::ListCertificateMaps(
    google::cloud::certificatemanager::v1::
        ListCertificateMapsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::certificatemanager::v1::CertificateMap>>();
}

StatusOr<google::cloud::certificatemanager::v1::CertificateMap>
CertificateManagerConnection::GetCertificateMap(
    google::cloud::certificatemanager::v1::GetCertificateMapRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::certificatemanager::v1::CertificateMap>>
CertificateManagerConnection::CreateCertificateMap(
    google::cloud::certificatemanager::v1::CreateCertificateMapRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::certificatemanager::v1::CertificateMap>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::certificatemanager::v1::CertificateMap>>
CertificateManagerConnection::UpdateCertificateMap(
    google::cloud::certificatemanager::v1::UpdateCertificateMapRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::certificatemanager::v1::CertificateMap>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
CertificateManagerConnection::DeleteCertificateMap(
    google::cloud::certificatemanager::v1::DeleteCertificateMapRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::certificatemanager::v1::CertificateMapEntry>
CertificateManagerConnection::ListCertificateMapEntries(
    google::cloud::certificatemanager::v1::
        ListCertificateMapEntriesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      google::cloud::certificatemanager::v1::CertificateMapEntry>>();
}

StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>
CertificateManagerConnection::GetCertificateMapEntry(
    google::cloud::certificatemanager::v1::
        GetCertificateMapEntryRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>>
CertificateManagerConnection::CreateCertificateMapEntry(
    google::cloud::certificatemanager::v1::
        CreateCertificateMapEntryRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>>
CertificateManagerConnection::UpdateCertificateMapEntry(
    google::cloud::certificatemanager::v1::
        UpdateCertificateMapEntryRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
CertificateManagerConnection::DeleteCertificateMapEntry(
    google::cloud::certificatemanager::v1::
        DeleteCertificateMapEntryRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::certificatemanager::v1::DnsAuthorization>
CertificateManagerConnection::ListDnsAuthorizations(
    google::cloud::certificatemanager::v1::
        ListDnsAuthorizationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::certificatemanager::v1::DnsAuthorization>>();
}

StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>
CertificateManagerConnection::GetDnsAuthorization(
    google::cloud::certificatemanager::v1::GetDnsAuthorizationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>>
CertificateManagerConnection::CreateDnsAuthorization(
    google::cloud::certificatemanager::v1::
        CreateDnsAuthorizationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>>
CertificateManagerConnection::UpdateDnsAuthorization(
    google::cloud::certificatemanager::v1::
        UpdateDnsAuthorizationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
CertificateManagerConnection::DeleteDnsAuthorization(
    google::cloud::certificatemanager::v1::
        DeleteDnsAuthorizationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::certificatemanager::v1::CertificateIssuanceConfig>
CertificateManagerConnection::ListCertificateIssuanceConfigs(
    google::cloud::certificatemanager::v1::
        ListCertificateIssuanceConfigsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      google::cloud::certificatemanager::v1::CertificateIssuanceConfig>>();
}

StatusOr<google::cloud::certificatemanager::v1::CertificateIssuanceConfig>
CertificateManagerConnection::GetCertificateIssuanceConfig(
    google::cloud::certificatemanager::v1::
        GetCertificateIssuanceConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<
    StatusOr<google::cloud::certificatemanager::v1::CertificateIssuanceConfig>>
CertificateManagerConnection::CreateCertificateIssuanceConfig(
    google::cloud::certificatemanager::v1::
        CreateCertificateIssuanceConfigRequest const&) {
  return google::cloud::make_ready_future<StatusOr<
      google::cloud::certificatemanager::v1::CertificateIssuanceConfig>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
CertificateManagerConnection::DeleteCertificateIssuanceConfig(
    google::cloud::certificatemanager::v1::
        DeleteCertificateIssuanceConfigRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<CertificateManagerConnection> MakeCertificateManagerConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 CertificateManagerPolicyOptionList>(options,
                                                                     __func__);
  options = certificatemanager_internal::CertificateManagerDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = certificatemanager_internal::CreateDefaultCertificateManagerStub(
      background->cq(), options);
  return std::make_shared<
      certificatemanager_internal::CertificateManagerConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace certificatemanager
}  // namespace cloud
}  // namespace google
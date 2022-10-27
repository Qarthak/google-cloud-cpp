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

#include "google/cloud/certificatemanager/certificate_manager_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace certificatemanager {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CertificateManagerClient::CertificateManagerClient(
    std::shared_ptr<CertificateManagerConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
CertificateManagerClient::~CertificateManagerClient() = default;

StreamRange<google::cloud::certificatemanager::v1::Certificate>
CertificateManagerClient::ListCertificates(std::string const& parent,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::ListCertificatesRequest request;
  request.set_parent(parent);
  return connection_->ListCertificates(request);
}

StreamRange<google::cloud::certificatemanager::v1::Certificate>
CertificateManagerClient::ListCertificates(
    google::cloud::certificatemanager::v1::ListCertificatesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListCertificates(std::move(request));
}

StatusOr<google::cloud::certificatemanager::v1::Certificate>
CertificateManagerClient::GetCertificate(std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::GetCertificateRequest request;
  request.set_name(name);
  return connection_->GetCertificate(request);
}

StatusOr<google::cloud::certificatemanager::v1::Certificate>
CertificateManagerClient::GetCertificate(
    google::cloud::certificatemanager::v1::GetCertificateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetCertificate(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::Certificate>>
CertificateManagerClient::CreateCertificate(
    std::string const& parent,
    google::cloud::certificatemanager::v1::Certificate const& certificate,
    std::string const& certificate_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::CreateCertificateRequest request;
  request.set_parent(parent);
  *request.mutable_certificate() = certificate;
  request.set_certificate_id(certificate_id);
  return connection_->CreateCertificate(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::Certificate>>
CertificateManagerClient::CreateCertificate(
    google::cloud::certificatemanager::v1::CreateCertificateRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateCertificate(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::Certificate>>
CertificateManagerClient::UpdateCertificate(
    google::cloud::certificatemanager::v1::Certificate const& certificate,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::UpdateCertificateRequest request;
  *request.mutable_certificate() = certificate;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateCertificate(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::Certificate>>
CertificateManagerClient::UpdateCertificate(
    google::cloud::certificatemanager::v1::UpdateCertificateRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateCertificate(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
CertificateManagerClient::DeleteCertificate(std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::DeleteCertificateRequest request;
  request.set_name(name);
  return connection_->DeleteCertificate(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
CertificateManagerClient::DeleteCertificate(
    google::cloud::certificatemanager::v1::DeleteCertificateRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteCertificate(request);
}

StreamRange<google::cloud::certificatemanager::v1::CertificateMap>
CertificateManagerClient::ListCertificateMaps(std::string const& parent,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::ListCertificateMapsRequest request;
  request.set_parent(parent);
  return connection_->ListCertificateMaps(request);
}

StreamRange<google::cloud::certificatemanager::v1::CertificateMap>
CertificateManagerClient::ListCertificateMaps(
    google::cloud::certificatemanager::v1::ListCertificateMapsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListCertificateMaps(std::move(request));
}

StatusOr<google::cloud::certificatemanager::v1::CertificateMap>
CertificateManagerClient::GetCertificateMap(std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::GetCertificateMapRequest request;
  request.set_name(name);
  return connection_->GetCertificateMap(request);
}

StatusOr<google::cloud::certificatemanager::v1::CertificateMap>
CertificateManagerClient::GetCertificateMap(
    google::cloud::certificatemanager::v1::GetCertificateMapRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetCertificateMap(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::CertificateMap>>
CertificateManagerClient::CreateCertificateMap(
    std::string const& parent,
    google::cloud::certificatemanager::v1::CertificateMap const&
        certificate_map,
    std::string const& certificate_map_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::CreateCertificateMapRequest request;
  request.set_parent(parent);
  *request.mutable_certificate_map() = certificate_map;
  request.set_certificate_map_id(certificate_map_id);
  return connection_->CreateCertificateMap(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::CertificateMap>>
CertificateManagerClient::CreateCertificateMap(
    google::cloud::certificatemanager::v1::CreateCertificateMapRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateCertificateMap(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::CertificateMap>>
CertificateManagerClient::UpdateCertificateMap(
    google::cloud::certificatemanager::v1::CertificateMap const&
        certificate_map,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::UpdateCertificateMapRequest request;
  *request.mutable_certificate_map() = certificate_map;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateCertificateMap(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::CertificateMap>>
CertificateManagerClient::UpdateCertificateMap(
    google::cloud::certificatemanager::v1::UpdateCertificateMapRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateCertificateMap(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
CertificateManagerClient::DeleteCertificateMap(std::string const& name,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::DeleteCertificateMapRequest request;
  request.set_name(name);
  return connection_->DeleteCertificateMap(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
CertificateManagerClient::DeleteCertificateMap(
    google::cloud::certificatemanager::v1::DeleteCertificateMapRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteCertificateMap(request);
}

StreamRange<google::cloud::certificatemanager::v1::CertificateMapEntry>
CertificateManagerClient::ListCertificateMapEntries(std::string const& parent,
                                                    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::ListCertificateMapEntriesRequest
      request;
  request.set_parent(parent);
  return connection_->ListCertificateMapEntries(request);
}

StreamRange<google::cloud::certificatemanager::v1::CertificateMapEntry>
CertificateManagerClient::ListCertificateMapEntries(
    google::cloud::certificatemanager::v1::ListCertificateMapEntriesRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListCertificateMapEntries(std::move(request));
}

StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>
CertificateManagerClient::GetCertificateMapEntry(std::string const& name,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::GetCertificateMapEntryRequest request;
  request.set_name(name);
  return connection_->GetCertificateMapEntry(request);
}

StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>
CertificateManagerClient::GetCertificateMapEntry(
    google::cloud::certificatemanager::v1::GetCertificateMapEntryRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetCertificateMapEntry(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>>
CertificateManagerClient::CreateCertificateMapEntry(
    std::string const& parent,
    google::cloud::certificatemanager::v1::CertificateMapEntry const&
        certificate_map_entry,
    std::string const& certificate_map_entry_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::CreateCertificateMapEntryRequest
      request;
  request.set_parent(parent);
  *request.mutable_certificate_map_entry() = certificate_map_entry;
  request.set_certificate_map_entry_id(certificate_map_entry_id);
  return connection_->CreateCertificateMapEntry(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>>
CertificateManagerClient::CreateCertificateMapEntry(
    google::cloud::certificatemanager::v1::
        CreateCertificateMapEntryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateCertificateMapEntry(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>>
CertificateManagerClient::UpdateCertificateMapEntry(
    google::cloud::certificatemanager::v1::CertificateMapEntry const&
        certificate_map_entry,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::UpdateCertificateMapEntryRequest
      request;
  *request.mutable_certificate_map_entry() = certificate_map_entry;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateCertificateMapEntry(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>>
CertificateManagerClient::UpdateCertificateMapEntry(
    google::cloud::certificatemanager::v1::
        UpdateCertificateMapEntryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateCertificateMapEntry(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
CertificateManagerClient::DeleteCertificateMapEntry(std::string const& name,
                                                    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::DeleteCertificateMapEntryRequest
      request;
  request.set_name(name);
  return connection_->DeleteCertificateMapEntry(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
CertificateManagerClient::DeleteCertificateMapEntry(
    google::cloud::certificatemanager::v1::
        DeleteCertificateMapEntryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteCertificateMapEntry(request);
}

StreamRange<google::cloud::certificatemanager::v1::DnsAuthorization>
CertificateManagerClient::ListDnsAuthorizations(std::string const& parent,
                                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::ListDnsAuthorizationsRequest request;
  request.set_parent(parent);
  return connection_->ListDnsAuthorizations(request);
}

StreamRange<google::cloud::certificatemanager::v1::DnsAuthorization>
CertificateManagerClient::ListDnsAuthorizations(
    google::cloud::certificatemanager::v1::ListDnsAuthorizationsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListDnsAuthorizations(std::move(request));
}

StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>
CertificateManagerClient::GetDnsAuthorization(std::string const& name,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::GetDnsAuthorizationRequest request;
  request.set_name(name);
  return connection_->GetDnsAuthorization(request);
}

StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>
CertificateManagerClient::GetDnsAuthorization(
    google::cloud::certificatemanager::v1::GetDnsAuthorizationRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetDnsAuthorization(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>>
CertificateManagerClient::CreateDnsAuthorization(
    std::string const& parent,
    google::cloud::certificatemanager::v1::DnsAuthorization const&
        dns_authorization,
    std::string const& dns_authorization_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::CreateDnsAuthorizationRequest request;
  request.set_parent(parent);
  *request.mutable_dns_authorization() = dns_authorization;
  request.set_dns_authorization_id(dns_authorization_id);
  return connection_->CreateDnsAuthorization(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>>
CertificateManagerClient::CreateDnsAuthorization(
    google::cloud::certificatemanager::v1::CreateDnsAuthorizationRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateDnsAuthorization(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>>
CertificateManagerClient::UpdateDnsAuthorization(
    google::cloud::certificatemanager::v1::DnsAuthorization const&
        dns_authorization,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::UpdateDnsAuthorizationRequest request;
  *request.mutable_dns_authorization() = dns_authorization;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateDnsAuthorization(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>>
CertificateManagerClient::UpdateDnsAuthorization(
    google::cloud::certificatemanager::v1::UpdateDnsAuthorizationRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateDnsAuthorization(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
CertificateManagerClient::DeleteDnsAuthorization(std::string const& name,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::DeleteDnsAuthorizationRequest request;
  request.set_name(name);
  return connection_->DeleteDnsAuthorization(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
CertificateManagerClient::DeleteDnsAuthorization(
    google::cloud::certificatemanager::v1::DeleteDnsAuthorizationRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteDnsAuthorization(request);
}

StreamRange<google::cloud::certificatemanager::v1::CertificateIssuanceConfig>
CertificateManagerClient::ListCertificateIssuanceConfigs(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::ListCertificateIssuanceConfigsRequest
      request;
  request.set_parent(parent);
  return connection_->ListCertificateIssuanceConfigs(request);
}

StreamRange<google::cloud::certificatemanager::v1::CertificateIssuanceConfig>
CertificateManagerClient::ListCertificateIssuanceConfigs(
    google::cloud::certificatemanager::v1::ListCertificateIssuanceConfigsRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListCertificateIssuanceConfigs(std::move(request));
}

StatusOr<google::cloud::certificatemanager::v1::CertificateIssuanceConfig>
CertificateManagerClient::GetCertificateIssuanceConfig(std::string const& name,
                                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::GetCertificateIssuanceConfigRequest
      request;
  request.set_name(name);
  return connection_->GetCertificateIssuanceConfig(request);
}

StatusOr<google::cloud::certificatemanager::v1::CertificateIssuanceConfig>
CertificateManagerClient::GetCertificateIssuanceConfig(
    google::cloud::certificatemanager::v1::
        GetCertificateIssuanceConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetCertificateIssuanceConfig(request);
}

future<
    StatusOr<google::cloud::certificatemanager::v1::CertificateIssuanceConfig>>
CertificateManagerClient::CreateCertificateIssuanceConfig(
    std::string const& parent,
    google::cloud::certificatemanager::v1::CertificateIssuanceConfig const&
        certificate_issuance_config,
    std::string const& certificate_issuance_config_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::CreateCertificateIssuanceConfigRequest
      request;
  request.set_parent(parent);
  *request.mutable_certificate_issuance_config() = certificate_issuance_config;
  request.set_certificate_issuance_config_id(certificate_issuance_config_id);
  return connection_->CreateCertificateIssuanceConfig(request);
}

future<
    StatusOr<google::cloud::certificatemanager::v1::CertificateIssuanceConfig>>
CertificateManagerClient::CreateCertificateIssuanceConfig(
    google::cloud::certificatemanager::v1::
        CreateCertificateIssuanceConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateCertificateIssuanceConfig(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
CertificateManagerClient::DeleteCertificateIssuanceConfig(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::certificatemanager::v1::DeleteCertificateIssuanceConfigRequest
      request;
  request.set_name(name);
  return connection_->DeleteCertificateIssuanceConfig(request);
}

future<StatusOr<google::cloud::certificatemanager::v1::OperationMetadata>>
CertificateManagerClient::DeleteCertificateIssuanceConfig(
    google::cloud::certificatemanager::v1::
        DeleteCertificateIssuanceConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteCertificateIssuanceConfig(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace certificatemanager
}  // namespace cloud
}  // namespace google
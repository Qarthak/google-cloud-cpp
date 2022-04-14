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
// source: google/cloud/dialogflow/v2/conversation_dataset.proto

#include "google/cloud/dialogflow_es/internal/conversation_datasets_option_defaults.h"
#include "google/cloud/dialogflow_es/conversation_datasets_connection.h"
#include "google/cloud/dialogflow_es/conversation_datasets_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options ConversationDatasetsDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_CONVERSATION_DATASETS_ENDPOINT", "",
      "dialogflow.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<dialogflow_es::ConversationDatasetsRetryPolicyOption>()) {
    options.set<dialogflow_es::ConversationDatasetsRetryPolicyOption>(
        dialogflow_es::ConversationDatasetsLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<dialogflow_es::ConversationDatasetsBackoffPolicyOption>()) {
    options.set<dialogflow_es::ConversationDatasetsBackoffPolicyOption>(
        ExponentialBackoffPolicy(std::chrono::seconds(1),
                                 std::chrono::minutes(5), kBackoffScaling)
            .clone());
  }
  if (!options.has<dialogflow_es::ConversationDatasetsPollingPolicyOption>()) {
    options.set<dialogflow_es::ConversationDatasetsPollingPolicyOption>(
        GenericPollingPolicy<
            dialogflow_es::ConversationDatasetsRetryPolicyOption::Type,
            dialogflow_es::ConversationDatasetsBackoffPolicyOption::Type>(
            options.get<dialogflow_es::ConversationDatasetsRetryPolicyOption>()
                ->clone(),
            options
                .get<dialogflow_es::ConversationDatasetsBackoffPolicyOption>()
                ->clone())
            .clone());
  }
  if (!options
           .has<dialogflow_es::
                    ConversationDatasetsConnectionIdempotencyPolicyOption>()) {
    options.set<
        dialogflow_es::ConversationDatasetsConnectionIdempotencyPolicyOption>(
        dialogflow_es::
            MakeDefaultConversationDatasetsConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
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
// source: google/cloud/billing/budgets/v1/budget_service.proto

#include "google/cloud/billing/budget_connection.h"
#include "google/cloud/billing/budget_options.h"
#include "google/cloud/billing/internal/budget_option_defaults.h"
#include "google/cloud/billing/internal/budget_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace billing {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BudgetServiceConnection::~BudgetServiceConnection() = default;

StatusOr<google::cloud::billing::budgets::v1::Budget>
BudgetServiceConnection::CreateBudget(
    google::cloud::billing::budgets::v1::CreateBudgetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::billing::budgets::v1::Budget>
BudgetServiceConnection::UpdateBudget(
    google::cloud::billing::budgets::v1::UpdateBudgetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::billing::budgets::v1::Budget>
BudgetServiceConnection::GetBudget(
    google::cloud::billing::budgets::v1::GetBudgetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::billing::budgets::v1::Budget>
BudgetServiceConnection::ListBudgets(
    google::cloud::billing::budgets::v1::ListBudgetsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::billing::budgets::v1::Budget>>(
      std::move(request),
      [](google::cloud::billing::budgets::v1::ListBudgetsRequest const&) {
        return StatusOr<
            google::cloud::billing::budgets::v1::ListBudgetsResponse>{};
      },
      [](google::cloud::billing::budgets::v1::ListBudgetsResponse const&) {
        return std::vector<google::cloud::billing::budgets::v1::Budget>();
      });
}

Status BudgetServiceConnection::DeleteBudget(
    google::cloud::billing::budgets::v1::DeleteBudgetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

namespace {
class BudgetServiceConnectionImpl : public BudgetServiceConnection {
 public:
  BudgetServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<billing_internal::BudgetServiceStub> stub,
      Options const& options)
      : background_(std::move(background)),
        stub_(std::move(stub)),
        retry_policy_prototype_(
            options.get<BudgetServiceRetryPolicyOption>()->clone()),
        backoff_policy_prototype_(
            options.get<BudgetServiceBackoffPolicyOption>()->clone()),
        idempotency_policy_(
            options.get<BudgetServiceConnectionIdempotencyPolicyOption>()
                ->clone()) {}

  ~BudgetServiceConnectionImpl() override = default;

  StatusOr<google::cloud::billing::budgets::v1::Budget> CreateBudget(
      google::cloud::billing::budgets::v1::CreateBudgetRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->CreateBudget(request),
        [this](grpc::ClientContext& context,
               google::cloud::billing::budgets::v1::CreateBudgetRequest const&
                   request) { return stub_->CreateBudget(context, request); },
        request, __func__);
  }

  StatusOr<google::cloud::billing::budgets::v1::Budget> UpdateBudget(
      google::cloud::billing::budgets::v1::UpdateBudgetRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->UpdateBudget(request),
        [this](grpc::ClientContext& context,
               google::cloud::billing::budgets::v1::UpdateBudgetRequest const&
                   request) { return stub_->UpdateBudget(context, request); },
        request, __func__);
  }

  StatusOr<google::cloud::billing::budgets::v1::Budget> GetBudget(
      google::cloud::billing::budgets::v1::GetBudgetRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetBudget(request),
        [this](grpc::ClientContext& context,
               google::cloud::billing::budgets::v1::GetBudgetRequest const&
                   request) { return stub_->GetBudget(context, request); },
        request, __func__);
  }

  StreamRange<google::cloud::billing::budgets::v1::Budget> ListBudgets(
      google::cloud::billing::budgets::v1::ListBudgetsRequest request)
      override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<BudgetServiceRetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListBudgets(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::billing::budgets::v1::Budget>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::cloud::billing::budgets::v1::ListBudgetsRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](
                  grpc::ClientContext& context,
                  google::cloud::billing::budgets::v1::ListBudgetsRequest const&
                      request) { return stub->ListBudgets(context, request); },
              r, function_name);
        },
        [](google::cloud::billing::budgets::v1::ListBudgetsResponse r) {
          std::vector<google::cloud::billing::budgets::v1::Budget> result(
              r.budgets().size());
          auto& messages = *r.mutable_budgets();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  Status DeleteBudget(
      google::cloud::billing::budgets::v1::DeleteBudgetRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DeleteBudget(request),
        [this](grpc::ClientContext& context,
               google::cloud::billing::budgets::v1::DeleteBudgetRequest const&
                   request) { return stub_->DeleteBudget(context, request); },
        request, __func__);
  }

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<billing_internal::BudgetServiceStub> stub_;
  std::unique_ptr<BudgetServiceRetryPolicy const> retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<BudgetServiceConnectionIdempotencyPolicy> idempotency_policy_;
};
}  // namespace

std::shared_ptr<BudgetServiceConnection> MakeBudgetServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 BudgetServicePolicyOptionList>(options,
                                                                __func__);
  options = billing_internal::BudgetServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = billing_internal::CreateDefaultBudgetServiceStub(background->cq(),
                                                               options);
  return std::make_shared<BudgetServiceConnectionImpl>(
      std::move(background), std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace billing_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<billing::BudgetServiceConnection> MakeBudgetServiceConnection(
    std::shared_ptr<BudgetServiceStub> stub, Options options) {
  options = BudgetServiceDefaultOptions(std::move(options));
  return std::make_shared<billing::BudgetServiceConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing_internal
}  // namespace cloud
}  // namespace google
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
// source: google/cloud/vision/v1/product_search_service.proto

#include "google/cloud/vision/product_search_connection.h"
#include "google/cloud/vision/internal/product_search_option_defaults.h"
#include "google/cloud/vision/internal/product_search_stub_factory.h"
#include "google/cloud/vision/product_search_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace vision {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ProductSearchConnection::~ProductSearchConnection() = default;

StatusOr<google::cloud::vision::v1::ProductSet>
ProductSearchConnection::CreateProductSet(
    google::cloud::vision::v1::CreateProductSetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::vision::v1::ProductSet>
ProductSearchConnection::ListProductSets(
    google::cloud::vision::v1::ListProductSetsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::vision::v1::ProductSet>>(
      std::move(request),
      [](google::cloud::vision::v1::ListProductSetsRequest const&) {
        return StatusOr<google::cloud::vision::v1::ListProductSetsResponse>{};
      },
      [](google::cloud::vision::v1::ListProductSetsResponse const&) {
        return std::vector<google::cloud::vision::v1::ProductSet>();
      });
}

StatusOr<google::cloud::vision::v1::ProductSet>
ProductSearchConnection::GetProductSet(
    google::cloud::vision::v1::GetProductSetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::vision::v1::ProductSet>
ProductSearchConnection::UpdateProductSet(
    google::cloud::vision::v1::UpdateProductSetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status ProductSearchConnection::DeleteProductSet(
    google::cloud::vision::v1::DeleteProductSetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::vision::v1::Product>
ProductSearchConnection::CreateProduct(
    google::cloud::vision::v1::CreateProductRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::vision::v1::Product>
ProductSearchConnection::ListProducts(
    google::cloud::vision::v1::ListProductsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::vision::v1::Product>>(
      std::move(request),
      [](google::cloud::vision::v1::ListProductsRequest const&) {
        return StatusOr<google::cloud::vision::v1::ListProductsResponse>{};
      },
      [](google::cloud::vision::v1::ListProductsResponse const&) {
        return std::vector<google::cloud::vision::v1::Product>();
      });
}

StatusOr<google::cloud::vision::v1::Product>
ProductSearchConnection::GetProduct(
    google::cloud::vision::v1::GetProductRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::vision::v1::Product>
ProductSearchConnection::UpdateProduct(
    google::cloud::vision::v1::UpdateProductRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status ProductSearchConnection::DeleteProduct(
    google::cloud::vision::v1::DeleteProductRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::vision::v1::ReferenceImage>
ProductSearchConnection::CreateReferenceImage(
    google::cloud::vision::v1::CreateReferenceImageRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status ProductSearchConnection::DeleteReferenceImage(
    google::cloud::vision::v1::DeleteReferenceImageRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::vision::v1::ReferenceImage>
ProductSearchConnection::ListReferenceImages(
    google::cloud::vision::v1::ListReferenceImagesRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::vision::v1::ReferenceImage>>(
      std::move(request),
      [](google::cloud::vision::v1::ListReferenceImagesRequest const&) {
        return StatusOr<
            google::cloud::vision::v1::ListReferenceImagesResponse>{};
      },
      [](google::cloud::vision::v1::ListReferenceImagesResponse const&) {
        return std::vector<google::cloud::vision::v1::ReferenceImage>();
      });
}

StatusOr<google::cloud::vision::v1::ReferenceImage>
ProductSearchConnection::GetReferenceImage(
    google::cloud::vision::v1::GetReferenceImageRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status ProductSearchConnection::AddProductToProductSet(
    google::cloud::vision::v1::AddProductToProductSetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status ProductSearchConnection::RemoveProductFromProductSet(
    google::cloud::vision::v1::RemoveProductFromProductSetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::vision::v1::Product>
ProductSearchConnection::ListProductsInProductSet(
    google::cloud::vision::v1::ListProductsInProductSetRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::vision::v1::Product>>(
      std::move(request),
      [](google::cloud::vision::v1::ListProductsInProductSetRequest const&) {
        return StatusOr<
            google::cloud::vision::v1::ListProductsInProductSetResponse>{};
      },
      [](google::cloud::vision::v1::ListProductsInProductSetResponse const&) {
        return std::vector<google::cloud::vision::v1::Product>();
      });
}

future<StatusOr<google::cloud::vision::v1::ImportProductSetsResponse>>
ProductSearchConnection::ImportProductSets(
    google::cloud::vision::v1::ImportProductSetsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vision::v1::ImportProductSetsResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::vision::v1::BatchOperationMetadata>>
ProductSearchConnection::PurgeProducts(
    google::cloud::vision::v1::PurgeProductsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vision::v1::BatchOperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

namespace {
class ProductSearchConnectionImpl : public ProductSearchConnection {
 public:
  ProductSearchConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<vision_internal::ProductSearchStub> stub,
      Options const& options)
      : background_(std::move(background)),
        stub_(std::move(stub)),
        retry_policy_prototype_(
            options.get<ProductSearchRetryPolicyOption>()->clone()),
        backoff_policy_prototype_(
            options.get<ProductSearchBackoffPolicyOption>()->clone()),
        polling_policy_prototype_(
            options.get<ProductSearchPollingPolicyOption>()->clone()),
        idempotency_policy_(
            options.get<ProductSearchConnectionIdempotencyPolicyOption>()
                ->clone()) {}

  ~ProductSearchConnectionImpl() override = default;

  StatusOr<google::cloud::vision::v1::ProductSet> CreateProductSet(
      google::cloud::vision::v1::CreateProductSetRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->CreateProductSet(request),
        [this](
            grpc::ClientContext& context,
            google::cloud::vision::v1::CreateProductSetRequest const& request) {
          return stub_->CreateProductSet(context, request);
        },
        request, __func__);
  }

  StreamRange<google::cloud::vision::v1::ProductSet> ListProductSets(
      google::cloud::vision::v1::ListProductSetsRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry =
        std::shared_ptr<ProductSearchRetryPolicy const>(retry_policy());
    auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
    auto idempotency = idempotency_policy()->ListProductSets(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::vision::v1::ProductSet>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::cloud::vision::v1::ListProductSetsRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::cloud::vision::v1::ListProductSetsRequest const&
                         request) {
                return stub->ListProductSets(context, request);
              },
              r, function_name);
        },
        [](google::cloud::vision::v1::ListProductSetsResponse r) {
          std::vector<google::cloud::vision::v1::ProductSet> result(
              r.product_sets().size());
          auto& messages = *r.mutable_product_sets();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::cloud::vision::v1::ProductSet> GetProductSet(
      google::cloud::vision::v1::GetProductSetRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->GetProductSet(request),
        [this](grpc::ClientContext& context,
               google::cloud::vision::v1::GetProductSetRequest const& request) {
          return stub_->GetProductSet(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::vision::v1::ProductSet> UpdateProductSet(
      google::cloud::vision::v1::UpdateProductSetRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->UpdateProductSet(request),
        [this](
            grpc::ClientContext& context,
            google::cloud::vision::v1::UpdateProductSetRequest const& request) {
          return stub_->UpdateProductSet(context, request);
        },
        request, __func__);
  }

  Status DeleteProductSet(
      google::cloud::vision::v1::DeleteProductSetRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->DeleteProductSet(request),
        [this](
            grpc::ClientContext& context,
            google::cloud::vision::v1::DeleteProductSetRequest const& request) {
          return stub_->DeleteProductSet(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::vision::v1::Product> CreateProduct(
      google::cloud::vision::v1::CreateProductRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->CreateProduct(request),
        [this](grpc::ClientContext& context,
               google::cloud::vision::v1::CreateProductRequest const& request) {
          return stub_->CreateProduct(context, request);
        },
        request, __func__);
  }

  StreamRange<google::cloud::vision::v1::Product> ListProducts(
      google::cloud::vision::v1::ListProductsRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry =
        std::shared_ptr<ProductSearchRetryPolicy const>(retry_policy());
    auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
    auto idempotency = idempotency_policy()->ListProducts(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::vision::v1::Product>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::cloud::vision::v1::ListProductsRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::cloud::vision::v1::ListProductsRequest const&
                         request) {
                return stub->ListProducts(context, request);
              },
              r, function_name);
        },
        [](google::cloud::vision::v1::ListProductsResponse r) {
          std::vector<google::cloud::vision::v1::Product> result(
              r.products().size());
          auto& messages = *r.mutable_products();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::cloud::vision::v1::Product> GetProduct(
      google::cloud::vision::v1::GetProductRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->GetProduct(request),
        [this](grpc::ClientContext& context,
               google::cloud::vision::v1::GetProductRequest const& request) {
          return stub_->GetProduct(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::vision::v1::Product> UpdateProduct(
      google::cloud::vision::v1::UpdateProductRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->UpdateProduct(request),
        [this](grpc::ClientContext& context,
               google::cloud::vision::v1::UpdateProductRequest const& request) {
          return stub_->UpdateProduct(context, request);
        },
        request, __func__);
  }

  Status DeleteProduct(
      google::cloud::vision::v1::DeleteProductRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->DeleteProduct(request),
        [this](grpc::ClientContext& context,
               google::cloud::vision::v1::DeleteProductRequest const& request) {
          return stub_->DeleteProduct(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::vision::v1::ReferenceImage> CreateReferenceImage(
      google::cloud::vision::v1::CreateReferenceImageRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->CreateReferenceImage(request),
        [this](grpc::ClientContext& context,
               google::cloud::vision::v1::CreateReferenceImageRequest const&
                   request) {
          return stub_->CreateReferenceImage(context, request);
        },
        request, __func__);
  }

  Status DeleteReferenceImage(
      google::cloud::vision::v1::DeleteReferenceImageRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->DeleteReferenceImage(request),
        [this](grpc::ClientContext& context,
               google::cloud::vision::v1::DeleteReferenceImageRequest const&
                   request) {
          return stub_->DeleteReferenceImage(context, request);
        },
        request, __func__);
  }

  StreamRange<google::cloud::vision::v1::ReferenceImage> ListReferenceImages(
      google::cloud::vision::v1::ListReferenceImagesRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry =
        std::shared_ptr<ProductSearchRetryPolicy const>(retry_policy());
    auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
    auto idempotency = idempotency_policy()->ListReferenceImages(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::vision::v1::ReferenceImage>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::cloud::vision::v1::ListReferenceImagesRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](
                  grpc::ClientContext& context,
                  google::cloud::vision::v1::ListReferenceImagesRequest const&
                      request) {
                return stub->ListReferenceImages(context, request);
              },
              r, function_name);
        },
        [](google::cloud::vision::v1::ListReferenceImagesResponse r) {
          std::vector<google::cloud::vision::v1::ReferenceImage> result(
              r.reference_images().size());
          auto& messages = *r.mutable_reference_images();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::cloud::vision::v1::ReferenceImage> GetReferenceImage(
      google::cloud::vision::v1::GetReferenceImageRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->GetReferenceImage(request),
        [this](grpc::ClientContext& context,
               google::cloud::vision::v1::GetReferenceImageRequest const&
                   request) {
          return stub_->GetReferenceImage(context, request);
        },
        request, __func__);
  }

  Status AddProductToProductSet(
      google::cloud::vision::v1::AddProductToProductSetRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->AddProductToProductSet(request),
        [this](grpc::ClientContext& context,
               google::cloud::vision::v1::AddProductToProductSetRequest const&
                   request) {
          return stub_->AddProductToProductSet(context, request);
        },
        request, __func__);
  }

  Status RemoveProductFromProductSet(
      google::cloud::vision::v1::RemoveProductFromProductSetRequest const&
          request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->RemoveProductFromProductSet(request),
        [this](
            grpc::ClientContext& context,
            google::cloud::vision::v1::RemoveProductFromProductSetRequest const&
                request) {
          return stub_->RemoveProductFromProductSet(context, request);
        },
        request, __func__);
  }

  StreamRange<google::cloud::vision::v1::Product> ListProductsInProductSet(
      google::cloud::vision::v1::ListProductsInProductSetRequest request)
      override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry =
        std::shared_ptr<ProductSearchRetryPolicy const>(retry_policy());
    auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
    auto idempotency = idempotency_policy()->ListProductsInProductSet(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::vision::v1::Product>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::cloud::vision::v1::ListProductsInProductSetRequest const&
                r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::cloud::vision::v1::
                         ListProductsInProductSetRequest const& request) {
                return stub->ListProductsInProductSet(context, request);
              },
              r, function_name);
        },
        [](google::cloud::vision::v1::ListProductsInProductSetResponse r) {
          std::vector<google::cloud::vision::v1::Product> result(
              r.products().size());
          auto& messages = *r.mutable_products();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  future<StatusOr<google::cloud::vision::v1::ImportProductSetsResponse>>
  ImportProductSets(google::cloud::vision::v1::ImportProductSetsRequest const&
                        request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::vision::v1::ImportProductSetsResponse>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::vision::v1::ImportProductSetsRequest const&
                   request) {
          return stub->AsyncImportProductSets(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultResponse<
            google::cloud::vision::v1::ImportProductSetsResponse>,
        retry_policy(), backoff_policy(),
        idempotency_policy()->ImportProductSets(request), polling_policy(),
        __func__);
  }

  future<StatusOr<google::cloud::vision::v1::BatchOperationMetadata>>
  PurgeProducts(
      google::cloud::vision::v1::PurgeProductsRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::vision::v1::BatchOperationMetadata>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::vision::v1::PurgeProductsRequest const& request) {
          return stub->AsyncPurgeProducts(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultMetadata<
            google::cloud::vision::v1::BatchOperationMetadata>,
        retry_policy(), backoff_policy(),
        idempotency_policy()->PurgeProducts(request), polling_policy(),
        __func__);
  }

 private:
  std::unique_ptr<ProductSearchRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<ProductSearchRetryPolicyOption>()) {
      return options.get<ProductSearchRetryPolicyOption>()->clone();
    }
    return retry_policy_prototype_->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<ProductSearchBackoffPolicyOption>()) {
      return options.get<ProductSearchBackoffPolicyOption>()->clone();
    }
    return backoff_policy_prototype_->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<ProductSearchPollingPolicyOption>()) {
      return options.get<ProductSearchPollingPolicyOption>()->clone();
    }
    return polling_policy_prototype_->clone();
  }

  std::unique_ptr<ProductSearchConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<ProductSearchConnectionIdempotencyPolicyOption>()) {
      return options.get<ProductSearchConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return idempotency_policy_->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<vision_internal::ProductSearchStub> stub_;
  std::unique_ptr<ProductSearchRetryPolicy const> retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<PollingPolicy const> polling_policy_prototype_;
  std::unique_ptr<ProductSearchConnectionIdempotencyPolicy> idempotency_policy_;
};
}  // namespace

std::shared_ptr<ProductSearchConnection> MakeProductSearchConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 ProductSearchPolicyOptionList>(options,
                                                                __func__);
  options = vision_internal::ProductSearchDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = vision_internal::CreateDefaultProductSearchStub(background->cq(),
                                                              options);
  return std::make_shared<ProductSearchConnectionImpl>(
      std::move(background), std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace vision_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<vision::ProductSearchConnection> MakeProductSearchConnection(
    std::shared_ptr<ProductSearchStub> stub, Options options) {
  options = ProductSearchDefaultOptions(std::move(options));
  return std::make_shared<vision::ProductSearchConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_internal
}  // namespace cloud
}  // namespace google
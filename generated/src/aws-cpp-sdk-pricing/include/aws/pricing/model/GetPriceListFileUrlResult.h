﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Pricing
{
namespace Model
{
  class GetPriceListFileUrlResult
  {
  public:
    AWS_PRICING_API GetPriceListFileUrlResult();
    AWS_PRICING_API GetPriceListFileUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRICING_API GetPriceListFileUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The URL to download your Price List file from. </p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL to download your Price List file from. </p>
     */
    inline void SetUrl(const Aws::String& value) { m_url = value; }

    /**
     * <p>The URL to download your Price List file from. </p>
     */
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }

    /**
     * <p>The URL to download your Price List file from. </p>
     */
    inline void SetUrl(const char* value) { m_url.assign(value); }

    /**
     * <p>The URL to download your Price List file from. </p>
     */
    inline GetPriceListFileUrlResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL to download your Price List file from. </p>
     */
    inline GetPriceListFileUrlResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL to download your Price List file from. </p>
     */
    inline GetPriceListFileUrlResult& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_url;
  };

} // namespace Model
} // namespace Pricing
} // namespace Aws

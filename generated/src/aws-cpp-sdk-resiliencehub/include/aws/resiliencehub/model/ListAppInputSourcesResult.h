﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/AppInputSource.h>
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
namespace ResilienceHub
{
namespace Model
{
  class ListAppInputSourcesResult
  {
  public:
    AWS_RESILIENCEHUB_API ListAppInputSourcesResult();
    AWS_RESILIENCEHUB_API ListAppInputSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAppInputSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of AWS Resilience Hub application input sources.</p>
     */
    inline const Aws::Vector<AppInputSource>& GetAppInputSources() const{ return m_appInputSources; }

    /**
     * <p>The list of AWS Resilience Hub application input sources.</p>
     */
    inline void SetAppInputSources(const Aws::Vector<AppInputSource>& value) { m_appInputSources = value; }

    /**
     * <p>The list of AWS Resilience Hub application input sources.</p>
     */
    inline void SetAppInputSources(Aws::Vector<AppInputSource>&& value) { m_appInputSources = std::move(value); }

    /**
     * <p>The list of AWS Resilience Hub application input sources.</p>
     */
    inline ListAppInputSourcesResult& WithAppInputSources(const Aws::Vector<AppInputSource>& value) { SetAppInputSources(value); return *this;}

    /**
     * <p>The list of AWS Resilience Hub application input sources.</p>
     */
    inline ListAppInputSourcesResult& WithAppInputSources(Aws::Vector<AppInputSource>&& value) { SetAppInputSources(std::move(value)); return *this;}

    /**
     * <p>The list of AWS Resilience Hub application input sources.</p>
     */
    inline ListAppInputSourcesResult& AddAppInputSources(const AppInputSource& value) { m_appInputSources.push_back(value); return *this; }

    /**
     * <p>The list of AWS Resilience Hub application input sources.</p>
     */
    inline ListAppInputSourcesResult& AddAppInputSources(AppInputSource&& value) { m_appInputSources.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAppInputSourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAppInputSourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAppInputSourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AppInputSource> m_appInputSources;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws

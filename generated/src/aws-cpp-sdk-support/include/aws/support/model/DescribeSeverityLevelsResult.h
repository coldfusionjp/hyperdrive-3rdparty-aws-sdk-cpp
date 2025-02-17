﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support/model/SeverityLevel.h>
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
namespace Support
{
namespace Model
{
  /**
   * <p>The list of severity levels returned by the <a>DescribeSeverityLevels</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeSeverityLevelsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeSeverityLevelsResult
  {
  public:
    AWS_SUPPORT_API DescribeSeverityLevelsResult();
    AWS_SUPPORT_API DescribeSeverityLevelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API DescribeSeverityLevelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The available severity levels for the support case. Available severity levels
     * are defined by your service level agreement with Amazon Web Services.</p>
     */
    inline const Aws::Vector<SeverityLevel>& GetSeverityLevels() const{ return m_severityLevels; }

    /**
     * <p>The available severity levels for the support case. Available severity levels
     * are defined by your service level agreement with Amazon Web Services.</p>
     */
    inline void SetSeverityLevels(const Aws::Vector<SeverityLevel>& value) { m_severityLevels = value; }

    /**
     * <p>The available severity levels for the support case. Available severity levels
     * are defined by your service level agreement with Amazon Web Services.</p>
     */
    inline void SetSeverityLevels(Aws::Vector<SeverityLevel>&& value) { m_severityLevels = std::move(value); }

    /**
     * <p>The available severity levels for the support case. Available severity levels
     * are defined by your service level agreement with Amazon Web Services.</p>
     */
    inline DescribeSeverityLevelsResult& WithSeverityLevels(const Aws::Vector<SeverityLevel>& value) { SetSeverityLevels(value); return *this;}

    /**
     * <p>The available severity levels for the support case. Available severity levels
     * are defined by your service level agreement with Amazon Web Services.</p>
     */
    inline DescribeSeverityLevelsResult& WithSeverityLevels(Aws::Vector<SeverityLevel>&& value) { SetSeverityLevels(std::move(value)); return *this;}

    /**
     * <p>The available severity levels for the support case. Available severity levels
     * are defined by your service level agreement with Amazon Web Services.</p>
     */
    inline DescribeSeverityLevelsResult& AddSeverityLevels(const SeverityLevel& value) { m_severityLevels.push_back(value); return *this; }

    /**
     * <p>The available severity levels for the support case. Available severity levels
     * are defined by your service level agreement with Amazon Web Services.</p>
     */
    inline DescribeSeverityLevelsResult& AddSeverityLevels(SeverityLevel&& value) { m_severityLevels.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SeverityLevel> m_severityLevels;
  };

} // namespace Model
} // namespace Support
} // namespace Aws

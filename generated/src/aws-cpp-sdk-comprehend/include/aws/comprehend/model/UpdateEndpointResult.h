﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
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
namespace Comprehend
{
namespace Model
{
  class UpdateEndpointResult
  {
  public:
    AWS_COMPREHEND_API UpdateEndpointResult();
    AWS_COMPREHEND_API UpdateEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API UpdateEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Number (ARN) of the new model.</p>
     */
    inline const Aws::String& GetDesiredModelArn() const{ return m_desiredModelArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the new model.</p>
     */
    inline void SetDesiredModelArn(const Aws::String& value) { m_desiredModelArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the new model.</p>
     */
    inline void SetDesiredModelArn(Aws::String&& value) { m_desiredModelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the new model.</p>
     */
    inline void SetDesiredModelArn(const char* value) { m_desiredModelArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the new model.</p>
     */
    inline UpdateEndpointResult& WithDesiredModelArn(const Aws::String& value) { SetDesiredModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the new model.</p>
     */
    inline UpdateEndpointResult& WithDesiredModelArn(Aws::String&& value) { SetDesiredModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the new model.</p>
     */
    inline UpdateEndpointResult& WithDesiredModelArn(const char* value) { SetDesiredModelArn(value); return *this;}

  private:

    Aws::String m_desiredModelArn;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/KeyPhrasesDetectionJobProperties.h>
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
  class ListKeyPhrasesDetectionJobsResult
  {
  public:
    AWS_COMPREHEND_API ListKeyPhrasesDetectionJobsResult();
    AWS_COMPREHEND_API ListKeyPhrasesDetectionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListKeyPhrasesDetectionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline const Aws::Vector<KeyPhrasesDetectionJobProperties>& GetKeyPhrasesDetectionJobPropertiesList() const{ return m_keyPhrasesDetectionJobPropertiesList; }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline void SetKeyPhrasesDetectionJobPropertiesList(const Aws::Vector<KeyPhrasesDetectionJobProperties>& value) { m_keyPhrasesDetectionJobPropertiesList = value; }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline void SetKeyPhrasesDetectionJobPropertiesList(Aws::Vector<KeyPhrasesDetectionJobProperties>&& value) { m_keyPhrasesDetectionJobPropertiesList = std::move(value); }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListKeyPhrasesDetectionJobsResult& WithKeyPhrasesDetectionJobPropertiesList(const Aws::Vector<KeyPhrasesDetectionJobProperties>& value) { SetKeyPhrasesDetectionJobPropertiesList(value); return *this;}

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListKeyPhrasesDetectionJobsResult& WithKeyPhrasesDetectionJobPropertiesList(Aws::Vector<KeyPhrasesDetectionJobProperties>&& value) { SetKeyPhrasesDetectionJobPropertiesList(std::move(value)); return *this;}

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListKeyPhrasesDetectionJobsResult& AddKeyPhrasesDetectionJobPropertiesList(const KeyPhrasesDetectionJobProperties& value) { m_keyPhrasesDetectionJobPropertiesList.push_back(value); return *this; }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListKeyPhrasesDetectionJobsResult& AddKeyPhrasesDetectionJobPropertiesList(KeyPhrasesDetectionJobProperties&& value) { m_keyPhrasesDetectionJobPropertiesList.push_back(std::move(value)); return *this; }


    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListKeyPhrasesDetectionJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListKeyPhrasesDetectionJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListKeyPhrasesDetectionJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<KeyPhrasesDetectionJobProperties> m_keyPhrasesDetectionJobPropertiesList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

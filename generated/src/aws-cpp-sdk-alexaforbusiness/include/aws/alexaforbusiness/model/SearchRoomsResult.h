﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/RoomData.h>
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
namespace AlexaForBusiness
{
namespace Model
{
  class SearchRoomsResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API SearchRoomsResult();
    AWS_ALEXAFORBUSINESS_API SearchRoomsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API SearchRoomsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The rooms that meet the specified set of filter criteria, in sort order.</p>
     */
    inline const Aws::Vector<RoomData>& GetRooms() const{ return m_rooms; }

    /**
     * <p>The rooms that meet the specified set of filter criteria, in sort order.</p>
     */
    inline void SetRooms(const Aws::Vector<RoomData>& value) { m_rooms = value; }

    /**
     * <p>The rooms that meet the specified set of filter criteria, in sort order.</p>
     */
    inline void SetRooms(Aws::Vector<RoomData>&& value) { m_rooms = std::move(value); }

    /**
     * <p>The rooms that meet the specified set of filter criteria, in sort order.</p>
     */
    inline SearchRoomsResult& WithRooms(const Aws::Vector<RoomData>& value) { SetRooms(value); return *this;}

    /**
     * <p>The rooms that meet the specified set of filter criteria, in sort order.</p>
     */
    inline SearchRoomsResult& WithRooms(Aws::Vector<RoomData>&& value) { SetRooms(std::move(value)); return *this;}

    /**
     * <p>The rooms that meet the specified set of filter criteria, in sort order.</p>
     */
    inline SearchRoomsResult& AddRooms(const RoomData& value) { m_rooms.push_back(value); return *this; }

    /**
     * <p>The rooms that meet the specified set of filter criteria, in sort order.</p>
     */
    inline SearchRoomsResult& AddRooms(RoomData&& value) { m_rooms.push_back(std::move(value)); return *this; }


    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline SearchRoomsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline SearchRoomsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline SearchRoomsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The total number of rooms returned.</p>
     */
    inline int GetTotalCount() const{ return m_totalCount; }

    /**
     * <p>The total number of rooms returned.</p>
     */
    inline void SetTotalCount(int value) { m_totalCount = value; }

    /**
     * <p>The total number of rooms returned.</p>
     */
    inline SearchRoomsResult& WithTotalCount(int value) { SetTotalCount(value); return *this;}

  private:

    Aws::Vector<RoomData> m_rooms;

    Aws::String m_nextToken;

    int m_totalCount;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws

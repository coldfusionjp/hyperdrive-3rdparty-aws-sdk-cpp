﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ListAppVersionResourceMappingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAppVersionResourceMappingsResult::ListAppVersionResourceMappingsResult()
{
}

ListAppVersionResourceMappingsResult::ListAppVersionResourceMappingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAppVersionResourceMappingsResult& ListAppVersionResourceMappingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("resourceMappings"))
  {
    Aws::Utils::Array<JsonView> resourceMappingsJsonList = jsonValue.GetArray("resourceMappings");
    for(unsigned resourceMappingsIndex = 0; resourceMappingsIndex < resourceMappingsJsonList.GetLength(); ++resourceMappingsIndex)
    {
      m_resourceMappings.push_back(resourceMappingsJsonList[resourceMappingsIndex].AsObject());
    }
  }



  return *this;
}

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ListAppInputSourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAppInputSourcesResult::ListAppInputSourcesResult()
{
}

ListAppInputSourcesResult::ListAppInputSourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAppInputSourcesResult& ListAppInputSourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("appInputSources"))
  {
    Aws::Utils::Array<JsonView> appInputSourcesJsonList = jsonValue.GetArray("appInputSources");
    for(unsigned appInputSourcesIndex = 0; appInputSourcesIndex < appInputSourcesJsonList.GetLength(); ++appInputSourcesIndex)
    {
      m_appInputSources.push_back(appInputSourcesJsonList[appInputSourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}

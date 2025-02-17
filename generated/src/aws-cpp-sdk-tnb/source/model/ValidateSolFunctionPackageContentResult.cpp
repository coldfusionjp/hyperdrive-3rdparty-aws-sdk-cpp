﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/ValidateSolFunctionPackageContentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ValidateSolFunctionPackageContentResult::ValidateSolFunctionPackageContentResult()
{
}

ValidateSolFunctionPackageContentResult::ValidateSolFunctionPackageContentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ValidateSolFunctionPackageContentResult& ValidateSolFunctionPackageContentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");

  }

  if(jsonValue.ValueExists("vnfProductName"))
  {
    m_vnfProductName = jsonValue.GetString("vnfProductName");

  }

  if(jsonValue.ValueExists("vnfProvider"))
  {
    m_vnfProvider = jsonValue.GetString("vnfProvider");

  }

  if(jsonValue.ValueExists("vnfdId"))
  {
    m_vnfdId = jsonValue.GetString("vnfdId");

  }

  if(jsonValue.ValueExists("vnfdVersion"))
  {
    m_vnfdVersion = jsonValue.GetString("vnfdVersion");

  }



  return *this;
}

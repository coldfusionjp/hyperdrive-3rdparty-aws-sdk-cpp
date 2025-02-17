﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/UpdateSolFunctionPackageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateSolFunctionPackageResult::UpdateSolFunctionPackageResult() : 
    m_operationalState(OperationalState::NOT_SET)
{
}

UpdateSolFunctionPackageResult::UpdateSolFunctionPackageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_operationalState(OperationalState::NOT_SET)
{
  *this = result;
}

UpdateSolFunctionPackageResult& UpdateSolFunctionPackageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("operationalState"))
  {
    m_operationalState = OperationalStateMapper::GetOperationalStateForName(jsonValue.GetString("operationalState"));

  }



  return *this;
}

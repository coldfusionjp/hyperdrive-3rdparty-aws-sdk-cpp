﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/CreateMembershipRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMembershipRequest::CreateMembershipRequest() : 
    m_collaborationIdentifierHasBeenSet(false),
    m_queryLogStatus(MembershipQueryLogStatus::NOT_SET),
    m_queryLogStatusHasBeenSet(false)
{
}

Aws::String CreateMembershipRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_collaborationIdentifierHasBeenSet)
  {
   payload.WithString("collaborationIdentifier", m_collaborationIdentifier);

  }

  if(m_queryLogStatusHasBeenSet)
  {
   payload.WithString("queryLogStatus", MembershipQueryLogStatusMapper::GetNameForMembershipQueryLogStatus(m_queryLogStatus));
  }

  return payload.View().WriteReadable();
}





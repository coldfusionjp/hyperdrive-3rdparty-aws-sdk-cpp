﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/eks/model/UpdateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace UpdateStatusMapper
      {

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");
        static const int Successful_HASH = HashingUtils::HashString("Successful");


        UpdateStatus GetUpdateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return UpdateStatus::InProgress;
          }
          else if (hashCode == Failed_HASH)
          {
            return UpdateStatus::Failed;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return UpdateStatus::Cancelled;
          }
          else if (hashCode == Successful_HASH)
          {
            return UpdateStatus::Successful;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateStatus>(hashCode);
          }

          return UpdateStatus::NOT_SET;
        }

        Aws::String GetNameForUpdateStatus(UpdateStatus enumValue)
        {
          switch(enumValue)
          {
          case UpdateStatus::InProgress:
            return "InProgress";
          case UpdateStatus::Failed:
            return "Failed";
          case UpdateStatus::Cancelled:
            return "Cancelled";
          case UpdateStatus::Successful:
            return "Successful";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace UpdateStatusMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws

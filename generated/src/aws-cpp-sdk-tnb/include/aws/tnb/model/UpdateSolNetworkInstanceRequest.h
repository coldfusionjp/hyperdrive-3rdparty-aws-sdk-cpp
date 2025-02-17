﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/TnbRequest.h>
#include <aws/tnb/model/UpdateSolNetworkModify.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/UpdateSolNetworkType.h>
#include <utility>

namespace Aws
{
namespace tnb
{
namespace Model
{

  /**
   */
  class UpdateSolNetworkInstanceRequest : public TnbRequest
  {
  public:
    AWS_TNB_API UpdateSolNetworkInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSolNetworkInstance"; }

    AWS_TNB_API Aws::String SerializePayload() const override;


    /**
     * <p>Identifies the network function information parameters and/or the
     * configurable properties of the network function to be modified.</p>
     */
    inline const UpdateSolNetworkModify& GetModifyVnfInfoData() const{ return m_modifyVnfInfoData; }

    /**
     * <p>Identifies the network function information parameters and/or the
     * configurable properties of the network function to be modified.</p>
     */
    inline bool ModifyVnfInfoDataHasBeenSet() const { return m_modifyVnfInfoDataHasBeenSet; }

    /**
     * <p>Identifies the network function information parameters and/or the
     * configurable properties of the network function to be modified.</p>
     */
    inline void SetModifyVnfInfoData(const UpdateSolNetworkModify& value) { m_modifyVnfInfoDataHasBeenSet = true; m_modifyVnfInfoData = value; }

    /**
     * <p>Identifies the network function information parameters and/or the
     * configurable properties of the network function to be modified.</p>
     */
    inline void SetModifyVnfInfoData(UpdateSolNetworkModify&& value) { m_modifyVnfInfoDataHasBeenSet = true; m_modifyVnfInfoData = std::move(value); }

    /**
     * <p>Identifies the network function information parameters and/or the
     * configurable properties of the network function to be modified.</p>
     */
    inline UpdateSolNetworkInstanceRequest& WithModifyVnfInfoData(const UpdateSolNetworkModify& value) { SetModifyVnfInfoData(value); return *this;}

    /**
     * <p>Identifies the network function information parameters and/or the
     * configurable properties of the network function to be modified.</p>
     */
    inline UpdateSolNetworkInstanceRequest& WithModifyVnfInfoData(UpdateSolNetworkModify&& value) { SetModifyVnfInfoData(std::move(value)); return *this;}


    /**
     * <p>ID of the network instance.</p>
     */
    inline const Aws::String& GetNsInstanceId() const{ return m_nsInstanceId; }

    /**
     * <p>ID of the network instance.</p>
     */
    inline bool NsInstanceIdHasBeenSet() const { return m_nsInstanceIdHasBeenSet; }

    /**
     * <p>ID of the network instance.</p>
     */
    inline void SetNsInstanceId(const Aws::String& value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId = value; }

    /**
     * <p>ID of the network instance.</p>
     */
    inline void SetNsInstanceId(Aws::String&& value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId = std::move(value); }

    /**
     * <p>ID of the network instance.</p>
     */
    inline void SetNsInstanceId(const char* value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId.assign(value); }

    /**
     * <p>ID of the network instance.</p>
     */
    inline UpdateSolNetworkInstanceRequest& WithNsInstanceId(const Aws::String& value) { SetNsInstanceId(value); return *this;}

    /**
     * <p>ID of the network instance.</p>
     */
    inline UpdateSolNetworkInstanceRequest& WithNsInstanceId(Aws::String&& value) { SetNsInstanceId(std::move(value)); return *this;}

    /**
     * <p>ID of the network instance.</p>
     */
    inline UpdateSolNetworkInstanceRequest& WithNsInstanceId(const char* value) { SetNsInstanceId(value); return *this;}


    /**
     * <p>The type of update.</p>
     */
    inline const UpdateSolNetworkType& GetUpdateType() const{ return m_updateType; }

    /**
     * <p>The type of update.</p>
     */
    inline bool UpdateTypeHasBeenSet() const { return m_updateTypeHasBeenSet; }

    /**
     * <p>The type of update.</p>
     */
    inline void SetUpdateType(const UpdateSolNetworkType& value) { m_updateTypeHasBeenSet = true; m_updateType = value; }

    /**
     * <p>The type of update.</p>
     */
    inline void SetUpdateType(UpdateSolNetworkType&& value) { m_updateTypeHasBeenSet = true; m_updateType = std::move(value); }

    /**
     * <p>The type of update.</p>
     */
    inline UpdateSolNetworkInstanceRequest& WithUpdateType(const UpdateSolNetworkType& value) { SetUpdateType(value); return *this;}

    /**
     * <p>The type of update.</p>
     */
    inline UpdateSolNetworkInstanceRequest& WithUpdateType(UpdateSolNetworkType&& value) { SetUpdateType(std::move(value)); return *this;}

  private:

    UpdateSolNetworkModify m_modifyVnfInfoData;
    bool m_modifyVnfInfoDataHasBeenSet = false;

    Aws::String m_nsInstanceId;
    bool m_nsInstanceIdHasBeenSet = false;

    UpdateSolNetworkType m_updateType;
    bool m_updateTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws

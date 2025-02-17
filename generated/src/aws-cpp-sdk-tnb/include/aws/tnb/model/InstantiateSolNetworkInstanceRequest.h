﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/TnbRequest.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace tnb
{
namespace Model
{

  /**
   */
  class InstantiateSolNetworkInstanceRequest : public TnbRequest
  {
  public:
    AWS_TNB_API InstantiateSolNetworkInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InstantiateSolNetworkInstance"; }

    AWS_TNB_API Aws::String SerializePayload() const override;

    AWS_TNB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Provides values for the configurable properties.</p>
     */
    inline Aws::Utils::DocumentView GetAdditionalParamsForNs() const{ return m_additionalParamsForNs; }

    /**
     * <p>Provides values for the configurable properties.</p>
     */
    inline bool AdditionalParamsForNsHasBeenSet() const { return m_additionalParamsForNsHasBeenSet; }

    /**
     * <p>Provides values for the configurable properties.</p>
     */
    inline void SetAdditionalParamsForNs(const Aws::Utils::Document& value) { m_additionalParamsForNsHasBeenSet = true; m_additionalParamsForNs = value; }

    /**
     * <p>Provides values for the configurable properties.</p>
     */
    inline void SetAdditionalParamsForNs(Aws::Utils::Document&& value) { m_additionalParamsForNsHasBeenSet = true; m_additionalParamsForNs = std::move(value); }

    /**
     * <p>Provides values for the configurable properties.</p>
     */
    inline InstantiateSolNetworkInstanceRequest& WithAdditionalParamsForNs(const Aws::Utils::Document& value) { SetAdditionalParamsForNs(value); return *this;}

    /**
     * <p>Provides values for the configurable properties.</p>
     */
    inline InstantiateSolNetworkInstanceRequest& WithAdditionalParamsForNs(Aws::Utils::Document&& value) { SetAdditionalParamsForNs(std::move(value)); return *this;}


    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline InstantiateSolNetworkInstanceRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


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
    inline InstantiateSolNetworkInstanceRequest& WithNsInstanceId(const Aws::String& value) { SetNsInstanceId(value); return *this;}

    /**
     * <p>ID of the network instance.</p>
     */
    inline InstantiateSolNetworkInstanceRequest& WithNsInstanceId(Aws::String&& value) { SetNsInstanceId(std::move(value)); return *this;}

    /**
     * <p>ID of the network instance.</p>
     */
    inline InstantiateSolNetworkInstanceRequest& WithNsInstanceId(const char* value) { SetNsInstanceId(value); return *this;}

  private:

    Aws::Utils::Document m_additionalParamsForNs;
    bool m_additionalParamsForNsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_nsInstanceId;
    bool m_nsInstanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/InstanceFleetResizingSpecifications.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{

  /**
   * <p>Configuration parameters for an instance fleet modification request.</p>
   *  <p>The instance fleet configuration is available only in Amazon EMR
   * versions 4.8.0 and later, excluding 5.0.x versions.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceFleetModifyConfig">AWS
   * API Reference</a></p>
   */
  class InstanceFleetModifyConfig
  {
  public:
    AWS_EMR_API InstanceFleetModifyConfig();
    AWS_EMR_API InstanceFleetModifyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceFleetModifyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the instance fleet.</p>
     */
    inline const Aws::String& GetInstanceFleetId() const{ return m_instanceFleetId; }

    /**
     * <p>A unique identifier for the instance fleet.</p>
     */
    inline bool InstanceFleetIdHasBeenSet() const { return m_instanceFleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the instance fleet.</p>
     */
    inline void SetInstanceFleetId(const Aws::String& value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId = value; }

    /**
     * <p>A unique identifier for the instance fleet.</p>
     */
    inline void SetInstanceFleetId(Aws::String&& value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId = std::move(value); }

    /**
     * <p>A unique identifier for the instance fleet.</p>
     */
    inline void SetInstanceFleetId(const char* value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId.assign(value); }

    /**
     * <p>A unique identifier for the instance fleet.</p>
     */
    inline InstanceFleetModifyConfig& WithInstanceFleetId(const Aws::String& value) { SetInstanceFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the instance fleet.</p>
     */
    inline InstanceFleetModifyConfig& WithInstanceFleetId(Aws::String&& value) { SetInstanceFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the instance fleet.</p>
     */
    inline InstanceFleetModifyConfig& WithInstanceFleetId(const char* value) { SetInstanceFleetId(value); return *this;}


    /**
     * <p>The target capacity of On-Demand units for the instance fleet. For more
     * information see <a>InstanceFleetConfig$TargetOnDemandCapacity</a>.</p>
     */
    inline int GetTargetOnDemandCapacity() const{ return m_targetOnDemandCapacity; }

    /**
     * <p>The target capacity of On-Demand units for the instance fleet. For more
     * information see <a>InstanceFleetConfig$TargetOnDemandCapacity</a>.</p>
     */
    inline bool TargetOnDemandCapacityHasBeenSet() const { return m_targetOnDemandCapacityHasBeenSet; }

    /**
     * <p>The target capacity of On-Demand units for the instance fleet. For more
     * information see <a>InstanceFleetConfig$TargetOnDemandCapacity</a>.</p>
     */
    inline void SetTargetOnDemandCapacity(int value) { m_targetOnDemandCapacityHasBeenSet = true; m_targetOnDemandCapacity = value; }

    /**
     * <p>The target capacity of On-Demand units for the instance fleet. For more
     * information see <a>InstanceFleetConfig$TargetOnDemandCapacity</a>.</p>
     */
    inline InstanceFleetModifyConfig& WithTargetOnDemandCapacity(int value) { SetTargetOnDemandCapacity(value); return *this;}


    /**
     * <p>The target capacity of Spot units for the instance fleet. For more
     * information, see <a>InstanceFleetConfig$TargetSpotCapacity</a>.</p>
     */
    inline int GetTargetSpotCapacity() const{ return m_targetSpotCapacity; }

    /**
     * <p>The target capacity of Spot units for the instance fleet. For more
     * information, see <a>InstanceFleetConfig$TargetSpotCapacity</a>.</p>
     */
    inline bool TargetSpotCapacityHasBeenSet() const { return m_targetSpotCapacityHasBeenSet; }

    /**
     * <p>The target capacity of Spot units for the instance fleet. For more
     * information, see <a>InstanceFleetConfig$TargetSpotCapacity</a>.</p>
     */
    inline void SetTargetSpotCapacity(int value) { m_targetSpotCapacityHasBeenSet = true; m_targetSpotCapacity = value; }

    /**
     * <p>The target capacity of Spot units for the instance fleet. For more
     * information, see <a>InstanceFleetConfig$TargetSpotCapacity</a>.</p>
     */
    inline InstanceFleetModifyConfig& WithTargetSpotCapacity(int value) { SetTargetSpotCapacity(value); return *this;}


    /**
     * <p>The resize specification for the instance fleet.</p>
     */
    inline const InstanceFleetResizingSpecifications& GetResizeSpecifications() const{ return m_resizeSpecifications; }

    /**
     * <p>The resize specification for the instance fleet.</p>
     */
    inline bool ResizeSpecificationsHasBeenSet() const { return m_resizeSpecificationsHasBeenSet; }

    /**
     * <p>The resize specification for the instance fleet.</p>
     */
    inline void SetResizeSpecifications(const InstanceFleetResizingSpecifications& value) { m_resizeSpecificationsHasBeenSet = true; m_resizeSpecifications = value; }

    /**
     * <p>The resize specification for the instance fleet.</p>
     */
    inline void SetResizeSpecifications(InstanceFleetResizingSpecifications&& value) { m_resizeSpecificationsHasBeenSet = true; m_resizeSpecifications = std::move(value); }

    /**
     * <p>The resize specification for the instance fleet.</p>
     */
    inline InstanceFleetModifyConfig& WithResizeSpecifications(const InstanceFleetResizingSpecifications& value) { SetResizeSpecifications(value); return *this;}

    /**
     * <p>The resize specification for the instance fleet.</p>
     */
    inline InstanceFleetModifyConfig& WithResizeSpecifications(InstanceFleetResizingSpecifications&& value) { SetResizeSpecifications(std::move(value)); return *this;}

  private:

    Aws::String m_instanceFleetId;
    bool m_instanceFleetIdHasBeenSet = false;

    int m_targetOnDemandCapacity;
    bool m_targetOnDemandCapacityHasBeenSet = false;

    int m_targetSpotCapacity;
    bool m_targetSpotCapacityHasBeenSet = false;

    InstanceFleetResizingSpecifications m_resizeSpecifications;
    bool m_resizeSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws

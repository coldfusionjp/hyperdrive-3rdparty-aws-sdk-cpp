﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>Details for a Docker volume mount point that's used in a job's container
   * properties. This parameter maps to <code>Volumes</code> in the <a
   * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.19/#create-a-container">Create
   * a container</a> section of the <i>Docker Remote API</i> and the
   * <code>--volume</code> option to docker run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/MountPoint">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API MountPoint
  {
  public:
    MountPoint();
    MountPoint(Aws::Utils::Json::JsonView jsonValue);
    MountPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path on the container where the host volume is mounted.</p>
     */
    inline const Aws::String& GetContainerPath() const{ return m_containerPath; }

    /**
     * <p>The path on the container where the host volume is mounted.</p>
     */
    inline bool ContainerPathHasBeenSet() const { return m_containerPathHasBeenSet; }

    /**
     * <p>The path on the container where the host volume is mounted.</p>
     */
    inline void SetContainerPath(const Aws::String& value) { m_containerPathHasBeenSet = true; m_containerPath = value; }

    /**
     * <p>The path on the container where the host volume is mounted.</p>
     */
    inline void SetContainerPath(Aws::String&& value) { m_containerPathHasBeenSet = true; m_containerPath = std::move(value); }

    /**
     * <p>The path on the container where the host volume is mounted.</p>
     */
    inline void SetContainerPath(const char* value) { m_containerPathHasBeenSet = true; m_containerPath.assign(value); }

    /**
     * <p>The path on the container where the host volume is mounted.</p>
     */
    inline MountPoint& WithContainerPath(const Aws::String& value) { SetContainerPath(value); return *this;}

    /**
     * <p>The path on the container where the host volume is mounted.</p>
     */
    inline MountPoint& WithContainerPath(Aws::String&& value) { SetContainerPath(std::move(value)); return *this;}

    /**
     * <p>The path on the container where the host volume is mounted.</p>
     */
    inline MountPoint& WithContainerPath(const char* value) { SetContainerPath(value); return *this;}


    /**
     * <p>If this value is <code>true</code>, the container has read-only access to the
     * volume. Otherwise, the container can write to the volume. The default value is
     * <code>false</code>.</p>
     */
    inline bool GetReadOnly() const{ return m_readOnly; }

    /**
     * <p>If this value is <code>true</code>, the container has read-only access to the
     * volume. Otherwise, the container can write to the volume. The default value is
     * <code>false</code>.</p>
     */
    inline bool ReadOnlyHasBeenSet() const { return m_readOnlyHasBeenSet; }

    /**
     * <p>If this value is <code>true</code>, the container has read-only access to the
     * volume. Otherwise, the container can write to the volume. The default value is
     * <code>false</code>.</p>
     */
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }

    /**
     * <p>If this value is <code>true</code>, the container has read-only access to the
     * volume. Otherwise, the container can write to the volume. The default value is
     * <code>false</code>.</p>
     */
    inline MountPoint& WithReadOnly(bool value) { SetReadOnly(value); return *this;}


    /**
     * <p>The name of the volume to mount.</p>
     */
    inline const Aws::String& GetSourceVolume() const{ return m_sourceVolume; }

    /**
     * <p>The name of the volume to mount.</p>
     */
    inline bool SourceVolumeHasBeenSet() const { return m_sourceVolumeHasBeenSet; }

    /**
     * <p>The name of the volume to mount.</p>
     */
    inline void SetSourceVolume(const Aws::String& value) { m_sourceVolumeHasBeenSet = true; m_sourceVolume = value; }

    /**
     * <p>The name of the volume to mount.</p>
     */
    inline void SetSourceVolume(Aws::String&& value) { m_sourceVolumeHasBeenSet = true; m_sourceVolume = std::move(value); }

    /**
     * <p>The name of the volume to mount.</p>
     */
    inline void SetSourceVolume(const char* value) { m_sourceVolumeHasBeenSet = true; m_sourceVolume.assign(value); }

    /**
     * <p>The name of the volume to mount.</p>
     */
    inline MountPoint& WithSourceVolume(const Aws::String& value) { SetSourceVolume(value); return *this;}

    /**
     * <p>The name of the volume to mount.</p>
     */
    inline MountPoint& WithSourceVolume(Aws::String&& value) { SetSourceVolume(std::move(value)); return *this;}

    /**
     * <p>The name of the volume to mount.</p>
     */
    inline MountPoint& WithSourceVolume(const char* value) { SetSourceVolume(value); return *this;}

  private:

    Aws::String m_containerPath;
    bool m_containerPathHasBeenSet = false;

    bool m_readOnly;
    bool m_readOnlyHasBeenSet = false;

    Aws::String m_sourceVolume;
    bool m_sourceVolumeHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws

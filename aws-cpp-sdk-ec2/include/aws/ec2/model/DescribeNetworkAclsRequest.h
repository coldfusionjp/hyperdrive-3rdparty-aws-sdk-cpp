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

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Filter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeNetworkAcls.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkAclsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeNetworkAclsRequest : public EC2Request
  {
  public:
    DescribeNetworkAclsRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNetworkAcls"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>association.association-id</code> - The ID of an association ID for the
     * ACL.</p> </li> <li> <p> <code>association.network-acl-id</code> - The ID of the
     * network ACL involved in the association.</p> </li> <li> <p>
     * <code>association.subnet-id</code> - The ID of the subnet involved in the
     * association.</p> </li> <li> <p> <code>default</code> - Indicates whether the ACL
     * is the default network ACL for the VPC.</p> </li> <li> <p>
     * <code>entry.cidr</code> - The IPv4 CIDR range specified in the entry.</p> </li>
     * <li> <p> <code>entry.egress</code> - Indicates whether the entry applies to
     * egress traffic.</p> </li> <li> <p> <code>entry.icmp.code</code> - The ICMP code
     * specified in the entry, if any.</p> </li> <li> <p> <code>entry.icmp.type</code>
     * - The ICMP type specified in the entry, if any.</p> </li> <li> <p>
     * <code>entry.ipv6-cidr</code> - The IPv6 CIDR range specified in the entry.</p>
     * </li> <li> <p> <code>entry.port-range.from</code> - The start of the port range
     * specified in the entry. </p> </li> <li> <p> <code>entry.port-range.to</code> -
     * The end of the port range specified in the entry. </p> </li> <li> <p>
     * <code>entry.protocol</code> - The protocol specified in the entry
     * (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a protocol
     * number).</p> </li> <li> <p> <code>entry.rule-action</code> - Allows or denies
     * the matching traffic (<code>allow</code> | <code>deny</code>).</p> </li> <li>
     * <p> <code>entry.rule-number</code> - The number of an entry (in other words,
     * rule) in the ACL's set of entries.</p> </li> <li> <p>
     * <code>network-acl-id</code> - The ID of the network ACL.</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. Use this filter to find all resources assigned a tag
     * with a specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the network ACL.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>association.association-id</code> - The ID of an association ID for the
     * ACL.</p> </li> <li> <p> <code>association.network-acl-id</code> - The ID of the
     * network ACL involved in the association.</p> </li> <li> <p>
     * <code>association.subnet-id</code> - The ID of the subnet involved in the
     * association.</p> </li> <li> <p> <code>default</code> - Indicates whether the ACL
     * is the default network ACL for the VPC.</p> </li> <li> <p>
     * <code>entry.cidr</code> - The IPv4 CIDR range specified in the entry.</p> </li>
     * <li> <p> <code>entry.egress</code> - Indicates whether the entry applies to
     * egress traffic.</p> </li> <li> <p> <code>entry.icmp.code</code> - The ICMP code
     * specified in the entry, if any.</p> </li> <li> <p> <code>entry.icmp.type</code>
     * - The ICMP type specified in the entry, if any.</p> </li> <li> <p>
     * <code>entry.ipv6-cidr</code> - The IPv6 CIDR range specified in the entry.</p>
     * </li> <li> <p> <code>entry.port-range.from</code> - The start of the port range
     * specified in the entry. </p> </li> <li> <p> <code>entry.port-range.to</code> -
     * The end of the port range specified in the entry. </p> </li> <li> <p>
     * <code>entry.protocol</code> - The protocol specified in the entry
     * (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a protocol
     * number).</p> </li> <li> <p> <code>entry.rule-action</code> - Allows or denies
     * the matching traffic (<code>allow</code> | <code>deny</code>).</p> </li> <li>
     * <p> <code>entry.rule-number</code> - The number of an entry (in other words,
     * rule) in the ACL's set of entries.</p> </li> <li> <p>
     * <code>network-acl-id</code> - The ID of the network ACL.</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. Use this filter to find all resources assigned a tag
     * with a specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the network ACL.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>association.association-id</code> - The ID of an association ID for the
     * ACL.</p> </li> <li> <p> <code>association.network-acl-id</code> - The ID of the
     * network ACL involved in the association.</p> </li> <li> <p>
     * <code>association.subnet-id</code> - The ID of the subnet involved in the
     * association.</p> </li> <li> <p> <code>default</code> - Indicates whether the ACL
     * is the default network ACL for the VPC.</p> </li> <li> <p>
     * <code>entry.cidr</code> - The IPv4 CIDR range specified in the entry.</p> </li>
     * <li> <p> <code>entry.egress</code> - Indicates whether the entry applies to
     * egress traffic.</p> </li> <li> <p> <code>entry.icmp.code</code> - The ICMP code
     * specified in the entry, if any.</p> </li> <li> <p> <code>entry.icmp.type</code>
     * - The ICMP type specified in the entry, if any.</p> </li> <li> <p>
     * <code>entry.ipv6-cidr</code> - The IPv6 CIDR range specified in the entry.</p>
     * </li> <li> <p> <code>entry.port-range.from</code> - The start of the port range
     * specified in the entry. </p> </li> <li> <p> <code>entry.port-range.to</code> -
     * The end of the port range specified in the entry. </p> </li> <li> <p>
     * <code>entry.protocol</code> - The protocol specified in the entry
     * (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a protocol
     * number).</p> </li> <li> <p> <code>entry.rule-action</code> - Allows or denies
     * the matching traffic (<code>allow</code> | <code>deny</code>).</p> </li> <li>
     * <p> <code>entry.rule-number</code> - The number of an entry (in other words,
     * rule) in the ACL's set of entries.</p> </li> <li> <p>
     * <code>network-acl-id</code> - The ID of the network ACL.</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. Use this filter to find all resources assigned a tag
     * with a specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the network ACL.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>association.association-id</code> - The ID of an association ID for the
     * ACL.</p> </li> <li> <p> <code>association.network-acl-id</code> - The ID of the
     * network ACL involved in the association.</p> </li> <li> <p>
     * <code>association.subnet-id</code> - The ID of the subnet involved in the
     * association.</p> </li> <li> <p> <code>default</code> - Indicates whether the ACL
     * is the default network ACL for the VPC.</p> </li> <li> <p>
     * <code>entry.cidr</code> - The IPv4 CIDR range specified in the entry.</p> </li>
     * <li> <p> <code>entry.egress</code> - Indicates whether the entry applies to
     * egress traffic.</p> </li> <li> <p> <code>entry.icmp.code</code> - The ICMP code
     * specified in the entry, if any.</p> </li> <li> <p> <code>entry.icmp.type</code>
     * - The ICMP type specified in the entry, if any.</p> </li> <li> <p>
     * <code>entry.ipv6-cidr</code> - The IPv6 CIDR range specified in the entry.</p>
     * </li> <li> <p> <code>entry.port-range.from</code> - The start of the port range
     * specified in the entry. </p> </li> <li> <p> <code>entry.port-range.to</code> -
     * The end of the port range specified in the entry. </p> </li> <li> <p>
     * <code>entry.protocol</code> - The protocol specified in the entry
     * (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a protocol
     * number).</p> </li> <li> <p> <code>entry.rule-action</code> - Allows or denies
     * the matching traffic (<code>allow</code> | <code>deny</code>).</p> </li> <li>
     * <p> <code>entry.rule-number</code> - The number of an entry (in other words,
     * rule) in the ACL's set of entries.</p> </li> <li> <p>
     * <code>network-acl-id</code> - The ID of the network ACL.</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. Use this filter to find all resources assigned a tag
     * with a specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the network ACL.</p> </li> </ul>
     */
    inline DescribeNetworkAclsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>association.association-id</code> - The ID of an association ID for the
     * ACL.</p> </li> <li> <p> <code>association.network-acl-id</code> - The ID of the
     * network ACL involved in the association.</p> </li> <li> <p>
     * <code>association.subnet-id</code> - The ID of the subnet involved in the
     * association.</p> </li> <li> <p> <code>default</code> - Indicates whether the ACL
     * is the default network ACL for the VPC.</p> </li> <li> <p>
     * <code>entry.cidr</code> - The IPv4 CIDR range specified in the entry.</p> </li>
     * <li> <p> <code>entry.egress</code> - Indicates whether the entry applies to
     * egress traffic.</p> </li> <li> <p> <code>entry.icmp.code</code> - The ICMP code
     * specified in the entry, if any.</p> </li> <li> <p> <code>entry.icmp.type</code>
     * - The ICMP type specified in the entry, if any.</p> </li> <li> <p>
     * <code>entry.ipv6-cidr</code> - The IPv6 CIDR range specified in the entry.</p>
     * </li> <li> <p> <code>entry.port-range.from</code> - The start of the port range
     * specified in the entry. </p> </li> <li> <p> <code>entry.port-range.to</code> -
     * The end of the port range specified in the entry. </p> </li> <li> <p>
     * <code>entry.protocol</code> - The protocol specified in the entry
     * (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a protocol
     * number).</p> </li> <li> <p> <code>entry.rule-action</code> - Allows or denies
     * the matching traffic (<code>allow</code> | <code>deny</code>).</p> </li> <li>
     * <p> <code>entry.rule-number</code> - The number of an entry (in other words,
     * rule) in the ACL's set of entries.</p> </li> <li> <p>
     * <code>network-acl-id</code> - The ID of the network ACL.</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. Use this filter to find all resources assigned a tag
     * with a specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the network ACL.</p> </li> </ul>
     */
    inline DescribeNetworkAclsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>association.association-id</code> - The ID of an association ID for the
     * ACL.</p> </li> <li> <p> <code>association.network-acl-id</code> - The ID of the
     * network ACL involved in the association.</p> </li> <li> <p>
     * <code>association.subnet-id</code> - The ID of the subnet involved in the
     * association.</p> </li> <li> <p> <code>default</code> - Indicates whether the ACL
     * is the default network ACL for the VPC.</p> </li> <li> <p>
     * <code>entry.cidr</code> - The IPv4 CIDR range specified in the entry.</p> </li>
     * <li> <p> <code>entry.egress</code> - Indicates whether the entry applies to
     * egress traffic.</p> </li> <li> <p> <code>entry.icmp.code</code> - The ICMP code
     * specified in the entry, if any.</p> </li> <li> <p> <code>entry.icmp.type</code>
     * - The ICMP type specified in the entry, if any.</p> </li> <li> <p>
     * <code>entry.ipv6-cidr</code> - The IPv6 CIDR range specified in the entry.</p>
     * </li> <li> <p> <code>entry.port-range.from</code> - The start of the port range
     * specified in the entry. </p> </li> <li> <p> <code>entry.port-range.to</code> -
     * The end of the port range specified in the entry. </p> </li> <li> <p>
     * <code>entry.protocol</code> - The protocol specified in the entry
     * (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a protocol
     * number).</p> </li> <li> <p> <code>entry.rule-action</code> - Allows or denies
     * the matching traffic (<code>allow</code> | <code>deny</code>).</p> </li> <li>
     * <p> <code>entry.rule-number</code> - The number of an entry (in other words,
     * rule) in the ACL's set of entries.</p> </li> <li> <p>
     * <code>network-acl-id</code> - The ID of the network ACL.</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. Use this filter to find all resources assigned a tag
     * with a specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the network ACL.</p> </li> </ul>
     */
    inline DescribeNetworkAclsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>association.association-id</code> - The ID of an association ID for the
     * ACL.</p> </li> <li> <p> <code>association.network-acl-id</code> - The ID of the
     * network ACL involved in the association.</p> </li> <li> <p>
     * <code>association.subnet-id</code> - The ID of the subnet involved in the
     * association.</p> </li> <li> <p> <code>default</code> - Indicates whether the ACL
     * is the default network ACL for the VPC.</p> </li> <li> <p>
     * <code>entry.cidr</code> - The IPv4 CIDR range specified in the entry.</p> </li>
     * <li> <p> <code>entry.egress</code> - Indicates whether the entry applies to
     * egress traffic.</p> </li> <li> <p> <code>entry.icmp.code</code> - The ICMP code
     * specified in the entry, if any.</p> </li> <li> <p> <code>entry.icmp.type</code>
     * - The ICMP type specified in the entry, if any.</p> </li> <li> <p>
     * <code>entry.ipv6-cidr</code> - The IPv6 CIDR range specified in the entry.</p>
     * </li> <li> <p> <code>entry.port-range.from</code> - The start of the port range
     * specified in the entry. </p> </li> <li> <p> <code>entry.port-range.to</code> -
     * The end of the port range specified in the entry. </p> </li> <li> <p>
     * <code>entry.protocol</code> - The protocol specified in the entry
     * (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a protocol
     * number).</p> </li> <li> <p> <code>entry.rule-action</code> - Allows or denies
     * the matching traffic (<code>allow</code> | <code>deny</code>).</p> </li> <li>
     * <p> <code>entry.rule-number</code> - The number of an entry (in other words,
     * rule) in the ACL's set of entries.</p> </li> <li> <p>
     * <code>network-acl-id</code> - The ID of the network ACL.</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. Use this filter to find all resources assigned a tag
     * with a specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>vpc-id</code> - The ID of the VPC for the network ACL.</p> </li> </ul>
     */
    inline DescribeNetworkAclsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeNetworkAclsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>One or more network ACL IDs.</p> <p>Default: Describes all your network
     * ACLs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkAclIds() const{ return m_networkAclIds; }

    /**
     * <p>One or more network ACL IDs.</p> <p>Default: Describes all your network
     * ACLs.</p>
     */
    inline void SetNetworkAclIds(const Aws::Vector<Aws::String>& value) { m_networkAclIdsHasBeenSet = true; m_networkAclIds = value; }

    /**
     * <p>One or more network ACL IDs.</p> <p>Default: Describes all your network
     * ACLs.</p>
     */
    inline void SetNetworkAclIds(Aws::Vector<Aws::String>&& value) { m_networkAclIdsHasBeenSet = true; m_networkAclIds = std::move(value); }

    /**
     * <p>One or more network ACL IDs.</p> <p>Default: Describes all your network
     * ACLs.</p>
     */
    inline DescribeNetworkAclsRequest& WithNetworkAclIds(const Aws::Vector<Aws::String>& value) { SetNetworkAclIds(value); return *this;}

    /**
     * <p>One or more network ACL IDs.</p> <p>Default: Describes all your network
     * ACLs.</p>
     */
    inline DescribeNetworkAclsRequest& WithNetworkAclIds(Aws::Vector<Aws::String>&& value) { SetNetworkAclIds(std::move(value)); return *this;}

    /**
     * <p>One or more network ACL IDs.</p> <p>Default: Describes all your network
     * ACLs.</p>
     */
    inline DescribeNetworkAclsRequest& AddNetworkAclIds(const Aws::String& value) { m_networkAclIdsHasBeenSet = true; m_networkAclIds.push_back(value); return *this; }

    /**
     * <p>One or more network ACL IDs.</p> <p>Default: Describes all your network
     * ACLs.</p>
     */
    inline DescribeNetworkAclsRequest& AddNetworkAclIds(Aws::String&& value) { m_networkAclIdsHasBeenSet = true; m_networkAclIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more network ACL IDs.</p> <p>Default: Describes all your network
     * ACLs.</p>
     */
    inline DescribeNetworkAclsRequest& AddNetworkAclIds(const char* value) { m_networkAclIdsHasBeenSet = true; m_networkAclIds.push_back(value); return *this; }

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<Aws::String> m_networkAclIds;
    bool m_networkAclIdsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

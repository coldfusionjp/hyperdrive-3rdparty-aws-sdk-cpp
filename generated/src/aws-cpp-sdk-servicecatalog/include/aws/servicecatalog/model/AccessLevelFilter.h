﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/AccessLevelFilterKey.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>The access level to use to filter results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AccessLevelFilter">AWS
   * API Reference</a></p>
   */
  class AccessLevelFilter
  {
  public:
    AWS_SERVICECATALOG_API AccessLevelFilter();
    AWS_SERVICECATALOG_API AccessLevelFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API AccessLevelFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The access level.</p> <ul> <li> <p> <code>Account</code> - Filter results
     * based on the account.</p> </li> <li> <p> <code>Role</code> - Filter results
     * based on the federated role of the specified user.</p> </li> <li> <p>
     * <code>User</code> - Filter results based on the specified user.</p> </li> </ul>
     */
    inline const AccessLevelFilterKey& GetKey() const{ return m_key; }

    /**
     * <p>The access level.</p> <ul> <li> <p> <code>Account</code> - Filter results
     * based on the account.</p> </li> <li> <p> <code>Role</code> - Filter results
     * based on the federated role of the specified user.</p> </li> <li> <p>
     * <code>User</code> - Filter results based on the specified user.</p> </li> </ul>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The access level.</p> <ul> <li> <p> <code>Account</code> - Filter results
     * based on the account.</p> </li> <li> <p> <code>Role</code> - Filter results
     * based on the federated role of the specified user.</p> </li> <li> <p>
     * <code>User</code> - Filter results based on the specified user.</p> </li> </ul>
     */
    inline void SetKey(const AccessLevelFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The access level.</p> <ul> <li> <p> <code>Account</code> - Filter results
     * based on the account.</p> </li> <li> <p> <code>Role</code> - Filter results
     * based on the federated role of the specified user.</p> </li> <li> <p>
     * <code>User</code> - Filter results based on the specified user.</p> </li> </ul>
     */
    inline void SetKey(AccessLevelFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The access level.</p> <ul> <li> <p> <code>Account</code> - Filter results
     * based on the account.</p> </li> <li> <p> <code>Role</code> - Filter results
     * based on the federated role of the specified user.</p> </li> <li> <p>
     * <code>User</code> - Filter results based on the specified user.</p> </li> </ul>
     */
    inline AccessLevelFilter& WithKey(const AccessLevelFilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>The access level.</p> <ul> <li> <p> <code>Account</code> - Filter results
     * based on the account.</p> </li> <li> <p> <code>Role</code> - Filter results
     * based on the federated role of the specified user.</p> </li> <li> <p>
     * <code>User</code> - Filter results based on the specified user.</p> </li> </ul>
     */
    inline AccessLevelFilter& WithKey(AccessLevelFilterKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>The user to which the access level applies. The only supported value is
     * <code>Self</code>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The user to which the access level applies. The only supported value is
     * <code>Self</code>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The user to which the access level applies. The only supported value is
     * <code>Self</code>.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The user to which the access level applies. The only supported value is
     * <code>Self</code>.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The user to which the access level applies. The only supported value is
     * <code>Self</code>.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The user to which the access level applies. The only supported value is
     * <code>Self</code>.</p>
     */
    inline AccessLevelFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The user to which the access level applies. The only supported value is
     * <code>Self</code>.</p>
     */
    inline AccessLevelFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The user to which the access level applies. The only supported value is
     * <code>Self</code>.</p>
     */
    inline AccessLevelFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    AccessLevelFilterKey m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws

/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticache/model/SourceType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int cache_cluster_HASH = HashingUtils::HashString("cache-cluster");
static const int cache_parameter_group_HASH = HashingUtils::HashString("cache-parameter-group");
static const int cache_security_group_HASH = HashingUtils::HashString("cache-security-group");
static const int cache_subnet_group_HASH = HashingUtils::HashString("cache-subnet-group");

namespace Aws
{
namespace ElastiCache
{
namespace Model
{
namespace SourceTypeMapper
{
SourceType GetSourceTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == cache_cluster_HASH)
  {
    return SourceType::cache_cluster;
  }
  else if (hashCode == cache_parameter_group_HASH)
  {
    return SourceType::cache_parameter_group;
  }
  else if (hashCode == cache_security_group_HASH)
  {
    return SourceType::cache_security_group;
  }
  else if (hashCode == cache_subnet_group_HASH)
  {
    return SourceType::cache_subnet_group;
  }

  return SourceType::NOT_SET;
}

Aws::String GetNameForSourceType(SourceType value)
{
  switch(value)
  {
  case SourceType::cache_cluster:
    return "cache-cluster";
  case SourceType::cache_parameter_group:
    return "cache-parameter-group";
  case SourceType::cache_security_group:
    return "cache-security-group";
  case SourceType::cache_subnet_group:
    return "cache-subnet-group";
  default:
    return "";
  }
}

} // namespace SourceTypeMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws

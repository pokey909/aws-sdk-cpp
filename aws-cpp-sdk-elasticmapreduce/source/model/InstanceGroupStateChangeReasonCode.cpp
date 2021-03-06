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
#include <aws/elasticmapreduce/model/InstanceGroupStateChangeReasonCode.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
static const int VALIDATION_ERROR_HASH = HashingUtils::HashString("VALIDATION_ERROR");
static const int INSTANCE_FAILURE_HASH = HashingUtils::HashString("INSTANCE_FAILURE");
static const int CLUSTER_TERMINATED_HASH = HashingUtils::HashString("CLUSTER_TERMINATED");

namespace Aws
{
namespace EMR
{
namespace Model
{
namespace InstanceGroupStateChangeReasonCodeMapper
{
InstanceGroupStateChangeReasonCode GetInstanceGroupStateChangeReasonCodeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == INTERNAL_ERROR_HASH)
  {
    return InstanceGroupStateChangeReasonCode::INTERNAL_ERROR;
  }
  else if (hashCode == VALIDATION_ERROR_HASH)
  {
    return InstanceGroupStateChangeReasonCode::VALIDATION_ERROR;
  }
  else if (hashCode == INSTANCE_FAILURE_HASH)
  {
    return InstanceGroupStateChangeReasonCode::INSTANCE_FAILURE;
  }
  else if (hashCode == CLUSTER_TERMINATED_HASH)
  {
    return InstanceGroupStateChangeReasonCode::CLUSTER_TERMINATED;
  }

  return InstanceGroupStateChangeReasonCode::NOT_SET;
}

Aws::String GetNameForInstanceGroupStateChangeReasonCode(InstanceGroupStateChangeReasonCode value)
{
  switch(value)
  {
  case InstanceGroupStateChangeReasonCode::INTERNAL_ERROR:
    return "INTERNAL_ERROR";
  case InstanceGroupStateChangeReasonCode::VALIDATION_ERROR:
    return "VALIDATION_ERROR";
  case InstanceGroupStateChangeReasonCode::INSTANCE_FAILURE:
    return "INSTANCE_FAILURE";
  case InstanceGroupStateChangeReasonCode::CLUSTER_TERMINATED:
    return "CLUSTER_TERMINATED";
  default:
    return "";
  }
}

} // namespace InstanceGroupStateChangeReasonCodeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws

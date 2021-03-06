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
#include <aws/codedeploy/model/RegisterOnPremisesInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterOnPremisesInstanceRequest::RegisterOnPremisesInstanceRequest() : 
    m_instanceNameHasBeenSet(false),
    m_iamUserArnHasBeenSet(false)
{
}

Aws::String RegisterOnPremisesInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceNameHasBeenSet)
  {
   payload.WithString("instanceName", m_instanceName);

  }

  if(m_iamUserArnHasBeenSet)
  {
   payload.WithString("iamUserArn", m_iamUserArn);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterOnPremisesInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.RegisterOnPremisesInstance"));
  return std::move(headers);

}




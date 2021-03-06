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
#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/Projection.h>
#include <aws/dynamodb/model/KeySchemaElement.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{
  /*
    <p>Represents the properties of a local secondary index.</p>
  */
  class AWS_DYNAMODB_API LocalSecondaryIndex
  {
  public:
    LocalSecondaryIndex();
    LocalSecondaryIndex(const Aws::Utils::Json::JsonValue& jsonValue);
    LocalSecondaryIndex& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     <p>The name of the local secondary index. The name must be unique among all other indexes on this table.</p>
    */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /*
     <p>The name of the local secondary index. The name must be unique among all other indexes on this table.</p>
    */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /*
     <p>The name of the local secondary index. The name must be unique among all other indexes on this table.</p>
    */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /*
     <p>The name of the local secondary index. The name must be unique among all other indexes on this table.</p>
    */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /*
     <p>The name of the local secondary index. The name must be unique among all other indexes on this table.</p>
    */
    inline LocalSecondaryIndex& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /*
     <p>The name of the local secondary index. The name must be unique among all other indexes on this table.</p>
    */
    inline LocalSecondaryIndex& WithIndexName(Aws::String&& value) { SetIndexName(value); return *this;}

    /*
     <p>The name of the local secondary index. The name must be unique among all other indexes on this table.</p>
    */
    inline LocalSecondaryIndex& WithIndexName(const char* value) { SetIndexName(value); return *this;}

    /*
     <p>The complete key schema for the local secondary index, consisting of one or more pairs of attribute names and key types (<code>HASH</code> or <code>RANGE</code>).</p>
    */
    inline const Aws::Vector<KeySchemaElement>& GetKeySchema() const{ return m_keySchema; }

    /*
     <p>The complete key schema for the local secondary index, consisting of one or more pairs of attribute names and key types (<code>HASH</code> or <code>RANGE</code>).</p>
    */
    inline void SetKeySchema(const Aws::Vector<KeySchemaElement>& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }

    /*
     <p>The complete key schema for the local secondary index, consisting of one or more pairs of attribute names and key types (<code>HASH</code> or <code>RANGE</code>).</p>
    */
    inline void SetKeySchema(Aws::Vector<KeySchemaElement>&& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }

    /*
     <p>The complete key schema for the local secondary index, consisting of one or more pairs of attribute names and key types (<code>HASH</code> or <code>RANGE</code>).</p>
    */
    inline LocalSecondaryIndex& WithKeySchema(const Aws::Vector<KeySchemaElement>& value) { SetKeySchema(value); return *this;}

    /*
     <p>The complete key schema for the local secondary index, consisting of one or more pairs of attribute names and key types (<code>HASH</code> or <code>RANGE</code>).</p>
    */
    inline LocalSecondaryIndex& WithKeySchema(Aws::Vector<KeySchemaElement>&& value) { SetKeySchema(value); return *this;}

    /*
     <p>The complete key schema for the local secondary index, consisting of one or more pairs of attribute names and key types (<code>HASH</code> or <code>RANGE</code>).</p>
    */
    inline LocalSecondaryIndex& AddKeySchema(const KeySchemaElement& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }

    /*
     <p>The complete key schema for the local secondary index, consisting of one or more pairs of attribute names and key types (<code>HASH</code> or <code>RANGE</code>).</p>
    */
    inline LocalSecondaryIndex& AddKeySchema(KeySchemaElement&& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }

    
    inline const Projection& GetProjection() const{ return m_projection; }

    
    inline void SetProjection(const Projection& value) { m_projectionHasBeenSet = true; m_projection = value; }

    
    inline void SetProjection(Projection&& value) { m_projectionHasBeenSet = true; m_projection = value; }

    
    inline LocalSecondaryIndex& WithProjection(const Projection& value) { SetProjection(value); return *this;}

    
    inline LocalSecondaryIndex& WithProjection(Projection&& value) { SetProjection(value); return *this;}

  private:
    Aws::String m_indexName;
    bool m_indexNameHasBeenSet;
    Aws::Vector<KeySchemaElement> m_keySchema;
    bool m_keySchemaHasBeenSet;
    Projection m_projection;
    bool m_projectionHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws

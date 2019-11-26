/*
 * Copyright 2017-2019 Baidu Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "utils/json_reader.h"
#include "raw_material.h"

namespace openrasp
{
namespace data
{
class ZvalMaterial : public RawMaterial
{
public:
    virtual bool is_valid() const = 0;
    virtual void fill_json_with_params(JsonReader &j) const = 0;
};
} // namespace data

} // namespace openrasp
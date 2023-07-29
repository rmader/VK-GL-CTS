#ifndef _VKTSYNCHRONIZATIONOPERATIONTESTDATA_HPP
#define _VKTSYNCHRONIZATIONOPERATIONTESTDATA_HPP
/*------------------------------------------------------------------------
 * Vulkan Conformance Tests
 * ------------------------
 *
 * Copyright (c) 2016 The Khronos Group Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *//*!
 * \file
 * \brief Synchronization operation static data
 *//*--------------------------------------------------------------------*/

#include "tcuDefs.hpp"
#include "vkDefs.hpp"
#include "tcuVector.hpp"
#include "vktSynchronizationOperation.hpp"

namespace vkt
{
namespace synchronization
{

static const OperationName s_writeOps[] = {
    OPERATION_NAME_WRITE_FILL_BUFFER,
    OPERATION_NAME_WRITE_UPDATE_BUFFER,
    OPERATION_NAME_WRITE_COPY_BUFFER,
    OPERATION_NAME_WRITE_COPY_BUFFER_TO_IMAGE,
    OPERATION_NAME_WRITE_COPY_IMAGE_TO_BUFFER,
    OPERATION_NAME_WRITE_COPY_IMAGE,
    OPERATION_NAME_WRITE_BLIT_IMAGE,
    OPERATION_NAME_WRITE_SSBO_VERTEX,
    OPERATION_NAME_WRITE_SSBO_TESSELLATION_CONTROL,
    OPERATION_NAME_WRITE_SSBO_TESSELLATION_EVALUATION,
    OPERATION_NAME_WRITE_SSBO_GEOMETRY,
    OPERATION_NAME_WRITE_SSBO_FRAGMENT,
    OPERATION_NAME_WRITE_SSBO_COMPUTE,
    OPERATION_NAME_WRITE_SSBO_COMPUTE_INDIRECT,
    OPERATION_NAME_WRITE_IMAGE_VERTEX,
    OPERATION_NAME_WRITE_IMAGE_TESSELLATION_CONTROL,
    OPERATION_NAME_WRITE_IMAGE_TESSELLATION_EVALUATION,
    OPERATION_NAME_WRITE_IMAGE_GEOMETRY,
    OPERATION_NAME_WRITE_IMAGE_FRAGMENT,
    OPERATION_NAME_WRITE_IMAGE_COMPUTE,
    OPERATION_NAME_WRITE_IMAGE_COMPUTE_INDIRECT,
    OPERATION_NAME_WRITE_IMAGE_COMPUTE_MULTISAMPLE,
    OPERATION_NAME_WRITE_CLEAR_COLOR_IMAGE,
    OPERATION_NAME_WRITE_CLEAR_DEPTH_STENCIL_IMAGE,
    OPERATION_NAME_WRITE_DRAW,
    OPERATION_NAME_WRITE_DRAW_INDEXED,
    OPERATION_NAME_WRITE_DRAW_INDIRECT,
    OPERATION_NAME_WRITE_DRAW_INDEXED_INDIRECT,
    OPERATION_NAME_WRITE_CLEAR_ATTACHMENTS,
    OPERATION_NAME_WRITE_INDIRECT_BUFFER_DRAW,
    OPERATION_NAME_WRITE_INDIRECT_BUFFER_DRAW_INDEXED,
    OPERATION_NAME_WRITE_INDIRECT_BUFFER_DISPATCH,
    OPERATION_NAME_WRITE_UPDATE_INDEX_BUFFER,
};

static const OperationName s_readOps[] = {
    OPERATION_NAME_READ_COPY_BUFFER,
    OPERATION_NAME_READ_COPY_BUFFER_TO_IMAGE,
    OPERATION_NAME_READ_COPY_IMAGE_TO_BUFFER,
    OPERATION_NAME_READ_COPY_IMAGE,
    OPERATION_NAME_READ_BLIT_IMAGE,
    OPERATION_NAME_READ_RESOLVE_IMAGE,
    OPERATION_NAME_READ_UBO_VERTEX,
    OPERATION_NAME_READ_UBO_TESSELLATION_CONTROL,
    OPERATION_NAME_READ_UBO_TESSELLATION_EVALUATION,
    OPERATION_NAME_READ_UBO_GEOMETRY,
    OPERATION_NAME_READ_UBO_FRAGMENT,
    OPERATION_NAME_READ_UBO_COMPUTE,
    OPERATION_NAME_READ_UBO_COMPUTE_INDIRECT,
    OPERATION_NAME_READ_SSBO_VERTEX,
    OPERATION_NAME_READ_SSBO_TESSELLATION_CONTROL,
    OPERATION_NAME_READ_SSBO_TESSELLATION_EVALUATION,
    OPERATION_NAME_READ_SSBO_GEOMETRY,
    OPERATION_NAME_READ_SSBO_FRAGMENT,
    OPERATION_NAME_READ_SSBO_COMPUTE,
    OPERATION_NAME_READ_SSBO_COMPUTE_INDIRECT,
    OPERATION_NAME_READ_IMAGE_VERTEX,
    OPERATION_NAME_READ_IMAGE_TESSELLATION_CONTROL,
    OPERATION_NAME_READ_IMAGE_TESSELLATION_EVALUATION,
    OPERATION_NAME_READ_IMAGE_GEOMETRY,
    OPERATION_NAME_READ_IMAGE_FRAGMENT,
    OPERATION_NAME_READ_IMAGE_COMPUTE,
    OPERATION_NAME_READ_IMAGE_COMPUTE_INDIRECT,
    OPERATION_NAME_READ_INDIRECT_BUFFER_DRAW,
    OPERATION_NAME_READ_INDIRECT_BUFFER_DRAW_INDEXED,
    OPERATION_NAME_READ_INDIRECT_BUFFER_DISPATCH,
    OPERATION_NAME_READ_VERTEX_INPUT,
    OPERATION_NAME_READ_INDEX_INPUT,
};

static const OperationName s_copyOps[] = {
    OPERATION_NAME_COPY_BUFFER,
    OPERATION_NAME_COPY_IMAGE,
    OPERATION_NAME_BLIT_IMAGE,
    OPERATION_NAME_COPY_SSBO_VERTEX,
    OPERATION_NAME_COPY_SSBO_TESSELLATION_CONTROL,
    OPERATION_NAME_COPY_SSBO_TESSELLATION_EVALUATION,
    OPERATION_NAME_COPY_SSBO_GEOMETRY,
    OPERATION_NAME_COPY_SSBO_FRAGMENT,
    OPERATION_NAME_COPY_SSBO_COMPUTE,
    OPERATION_NAME_COPY_SSBO_COMPUTE_INDIRECT,
    OPERATION_NAME_COPY_IMAGE_VERTEX,
    OPERATION_NAME_COPY_IMAGE_TESSELLATION_CONTROL,
    OPERATION_NAME_COPY_IMAGE_TESSELLATION_EVALUATION,
    OPERATION_NAME_COPY_IMAGE_GEOMETRY,
    OPERATION_NAME_COPY_IMAGE_FRAGMENT,
    OPERATION_NAME_COPY_IMAGE_COMPUTE,
    OPERATION_NAME_COPY_IMAGE_COMPUTE_INDIRECT,
};

} // namespace synchronization
} // namespace vkt

#endif // _VKTSYNCHRONIZATIONOPERATIONTESTDATA_HPP

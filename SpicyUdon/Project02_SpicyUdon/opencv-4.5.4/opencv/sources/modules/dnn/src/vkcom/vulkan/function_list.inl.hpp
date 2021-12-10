#ifndef VK_ENTRY
#define VK_ENTRY(func)
#endif

#ifndef VK_GLOBAL_LEVEL_FUNC
#define VK_GLOBAL_LEVEL_FUNC(func)
#endif

#ifndef VK_GLOBAL_LEVEL_FUNC_MANDATORY
#define VK_GLOBAL_LEVEL_FUNC_MANDATORY(func)
#endif

#ifndef VK_FUNC
#define VK_FUNC(func)
#endif

#ifndef VK_FUNC_MANDATORY
#define VK_FUNC_MANDATORY(func)
#endif

VK_ENTRY(vkGetInstanceProcAddr)
VK_GLOBAL_LEVEL_FUNC(vkEnumerateInstanceVersion)
VK_GLOBAL_LEVEL_FUNC_MANDATORY(vkEnumerateInstanceExtensionProperties)
VK_GLOBAL_LEVEL_FUNC_MANDATORY(vkEnumerateInstanceLayerProperties)
VK_GLOBAL_LEVEL_FUNC_MANDATORY(vkCreateInstance)
VK_FUNC_MANDATORY(vkDestroyInstance)
VK_FUNC_MANDATORY(vkEnumeratePhysicalDevices)
VK_FUNC_MANDATORY(vkGetPhysicalDeviceQueueFamilyProperties)
VK_FUNC(vkGetPhysicalDeviceFeatures)
VK_FUNC(vkGetPhysicalDeviceFormatProperties)
VK_FUNC(vkGetPhysicalDeviceImageFormatProperties)
VK_FUNC(vkGetPhysicalDeviceProperties)
VK_FUNC(vkGetPhysicalDeviceMemoryProperties)
VK_FUNC(vkGetDeviceProcAddr)
VK_FUNC(vkCreateDevice)
VK_FUNC(vkDestroyDevice)
VK_FUNC(vkEnumerateDeviceExtensionProperties)
VK_FUNC(vkEnumerateDeviceLayerProperties)
VK_FUNC(vkGetDeviceQueue)
VK_FUNC(vkQueueSubmit)
VK_FUNC(vkQueueWaitIdle)
VK_FUNC(vkDeviceWaitIdle)
VK_FUNC(vkAllocateMemory)
VK_FUNC(vkFreeMemory)
VK_FUNC(vkMapMemory)
VK_FUNC(vkUnmapMemory)
VK_FUNC(vkFlushMappedMemoryRanges)
VK_FUNC(vkInvalidateMappedMemoryRanges)
VK_FUNC(vkGetDeviceMemoryCommitment)
VK_FUNC(vkBindBufferMemory)
VK_FUNC(vkBindImageMemory)
VK_FUNC(vkGetBufferMemoryRequirements)
VK_FUNC(vkGetImageMemoryRequirements)
VK_FUNC(vkGetImageSparseMemoryRequirements)
VK_FUNC(vkGetPhysicalDeviceSparseImageFormatProperties)
VK_FUNC(vkQueueBindSparse)
VK_FUNC(vkCreateFence)
VK_FUNC(vkDestroyFence)
VK_FUNC(vkResetFences)
VK_FUNC(vkGetFenceStatus)
VK_FUNC(vkWaitForFences)
VK_FUNC(vkCreateSemaphore)
VK_FUNC(vkDestroySemaphore)
VK_FUNC(vkCreateEvent)
VK_FUNC(vkDestroyEvent)
VK_FUNC(vkGetEventStatus)
VK_FUNC(vkSetEvent)
VK_FUNC(vkResetEvent)
VK_FUNC(vkCreateQueryPool)
VK_FUNC(vkDestroyQueryPool)
VK_FUNC(vkGetQueryPoolResults)
VK_FUNC(vkCreateBuffer)
VK_FUNC(vkDestroyBuffer)
VK_FUNC(vkCreateBufferView)
VK_FUNC(vkDestroyBufferView)
VK_FUNC(vkCreateImage)
VK_FUNC(vkDestroyImage)
VK_FUNC(vkGetImageSubresourceLayout)
VK_FUNC(vkCreateImageView)
VK_FUNC(vkDestroyImageView)
VK_FUNC(vkCreateShaderModule)
VK_FUNC(vkDestroyShaderModule)
VK_FUNC(vkCreatePipelineCache)
VK_FUNC(vkDestroyPipelineCache)
VK_FUNC(vkGetPipelineCacheData)
VK_FUNC(vkMergePipelineCaches)
VK_FUNC(vkCreateGraphicsPipelines)
VK_FUNC(vkCreateComputePipelines)
VK_FUNC(vkDestroyPipeline)
VK_FUNC(vkCreatePipelineLayout)
VK_FUNC(vkDestroyPipelineLayout)
VK_FUNC(vkCreateSampler)
VK_FUNC(vkDestroySampler)
VK_FUNC(vkCreateDescriptorSetLayout)
VK_FUNC(vkDestroyDescriptorSetLayout)
VK_FUNC(vkCreateDescriptorPool)
VK_FUNC(vkDestroyDescriptorPool)
VK_FUNC(vkResetDescriptorPool)
VK_FUNC(vkAllocateDescriptorSets)
VK_FUNC(vkFreeDescriptorSets)
VK_FUNC(vkUpdateDescriptorSets)
VK_FUNC(vkCreateFramebuffer)
VK_FUNC(vkDestroyFramebuffer)
VK_FUNC(vkCreateRenderPass)
VK_FUNC(vkDestroyRenderPass)
VK_FUNC(vkGetRenderAreaGranularity)
VK_FUNC(vkCreateCommandPool)
VK_FUNC(vkDestroyCommandPool)
VK_FUNC(vkResetCommandPool)
VK_FUNC(vkAllocateCommandBuffers)
VK_FUNC(vkFreeCommandBuffers)
VK_FUNC(vkBeginCommandBuffer)
VK_FUNC(vkEndCommandBuffer)
VK_FUNC(vkResetCommandBuffer)
VK_FUNC(vkCmdBindPipeline)
VK_FUNC(vkCmdSetViewport)
VK_FUNC(vkCmdSetScissor)
VK_FUNC(vkCmdSetLineWidth)
VK_FUNC(vkCmdSetDepthBias)
VK_FUNC(vkCmdSetBlendConstants)
VK_FUNC(vkCmdSetDepthBounds)
VK_FUNC(vkCmdSetStencilCompareMask)
VK_FUNC(vkCmdSetStencilWriteMask)
VK_FUNC(vkCmdSetStencilReference)
VK_FUNC(vkCmdBindDescriptorSets)
VK_FUNC(vkCmdBindIndexBuffer)
VK_FUNC(vkCmdBindVertexBuffers)
VK_FUNC(vkCmdDraw)
VK_FUNC(vkCmdDrawIndexed)
VK_FUNC(vkCmdDrawIndirect)
VK_FUNC(vkCmdDrawIndexedIndirect)
VK_FUNC(vkCmdDispatch)
VK_FUNC(vkCmdDispatchIndirect)
VK_FUNC(vkCmdCopyBuffer)
VK_FUNC(vkCmdCopyImage)
VK_FUNC(vkCmdBlitImage)
VK_FUNC(vkCmdCopyBufferToImage)
VK_FUNC(vkCmdCopyImageToBuffer)
VK_FUNC(vkCmdUpdateBuffer)
VK_FUNC(vkCmdFillBuffer)
VK_FUNC(vkCmdClearColorImage)
VK_FUNC(vkCmdClearDepthStencilImage)
VK_FUNC(vkCmdClearAttachments)
VK_FUNC(vkCmdResolveImage)
VK_FUNC(vkCmdSetEvent)
VK_FUNC(vkCmdResetEvent)
VK_FUNC(vkCmdWaitEvents)
VK_FUNC(vkCmdPipelineBarrier)
VK_FUNC(vkCmdBeginQuery)
VK_FUNC(vkCmdEndQuery)
VK_FUNC(vkCmdResetQueryPool)
VK_FUNC(vkCmdWriteTimestamp)
VK_FUNC(vkCmdCopyQueryPoolResults)
VK_FUNC(vkCmdPushConstants)
VK_FUNC(vkCmdBeginRenderPass)
VK_FUNC(vkCmdNextSubpass)
VK_FUNC(vkCmdEndRenderPass)
VK_FUNC(vkCmdExecuteCommands)
VK_FUNC(vkBindBufferMemory2)
VK_FUNC(vkBindImageMemory2)
VK_FUNC(vkGetDeviceGroupPeerMemoryFeatures)
VK_FUNC(vkCmdSetDeviceMask)
VK_FUNC(vkCmdDispatchBase)
VK_FUNC(vkEnumeratePhysicalDeviceGroups)
VK_FUNC(vkGetImageMemoryRequirements2)
VK_FUNC(vkGetBufferMemoryRequirements2)
VK_FUNC(vkGetImageSparseMemoryRequirements2)
VK_FUNC(vkGetPhysicalDeviceFeatures2)
VK_FUNC(vkGetPhysicalDeviceProperties2)
VK_FUNC(vkGetPhysicalDeviceFormatProperties2)
VK_FUNC(vkGetPhysicalDeviceImageFormatProperties2)
VK_FUNC(vkGetPhysicalDeviceQueueFamilyProperties2)
VK_FUNC(vkGetPhysicalDeviceMemoryProperties2)
VK_FUNC(vkGetPhysicalDeviceSparseImageFormatProperties2)
VK_FUNC(vkTrimCommandPool)
VK_FUNC(vkGetDeviceQueue2)
VK_FUNC(vkCreateSamplerYcbcrConversion)
VK_FUNC(vkDestroySamplerYcbcrConversion)
VK_FUNC(vkCreateDescriptorUpdateTemplate)
VK_FUNC(vkDestroyDescriptorUpdateTemplate)
VK_FUNC(vkUpdateDescriptorSetWithTemplate)
VK_FUNC(vkGetPhysicalDeviceExternalBufferProperties)
VK_FUNC(vkGetPhysicalDeviceExternalFenceProperties)
VK_FUNC(vkGetPhysicalDeviceExternalSemaphoreProperties)
VK_FUNC(vkGetDescriptorSetLayoutSupport)
VK_FUNC(vkDestroySurfaceKHR)
VK_FUNC(vkGetPhysicalDeviceSurfaceSupportKHR)
VK_FUNC(vkGetPhysicalDeviceSurfaceCapabilitiesKHR)
VK_FUNC(vkGetPhysicalDeviceSurfaceFormatsKHR)
VK_FUNC(vkGetPhysicalDeviceSurfacePresentModesKHR)
VK_FUNC(vkCreateSwapchainKHR)
VK_FUNC(vkDestroySwapchainKHR)
VK_FUNC(vkGetSwapchainImagesKHR)
VK_FUNC(vkAcquireNextImageKHR)
VK_FUNC(vkQueuePresentKHR)
VK_FUNC(vkGetDeviceGroupPresentCapabilitiesKHR)
VK_FUNC(vkGetDeviceGroupSurfacePresentModesKHR)
VK_FUNC(vkGetPhysicalDevicePresentRectanglesKHR)
VK_FUNC(vkAcquireNextImage2KHR)
VK_FUNC(vkGetPhysicalDeviceDisplayPropertiesKHR)
VK_FUNC(vkGetPhysicalDeviceDisplayPlanePropertiesKHR)
VK_FUNC(vkGetDisplayPlaneSupportedDisplaysKHR)
VK_FUNC(vkGetDisplayModePropertiesKHR)
VK_FUNC(vkCreateDisplayModeKHR)
VK_FUNC(vkGetDisplayPlaneCapabilitiesKHR)
VK_FUNC(vkCreateDisplayPlaneSurfaceKHR)
VK_FUNC(vkCreateSharedSwapchainsKHR)
VK_FUNC(vkGetPhysicalDeviceFeatures2KHR)
VK_FUNC(vkGetPhysicalDeviceProperties2KHR)
VK_FUNC(vkGetPhysicalDeviceFormatProperties2KHR)
VK_FUNC(vkGetPhysicalDeviceImageFormatProperties2KHR)
VK_FUNC(vkGetPhysicalDeviceQueueFamilyProperties2KHR)
VK_FUNC(vkGetPhysicalDeviceMemoryProperties2KHR)
VK_FUNC(vkGetPhysicalDeviceSparseImageFormatProperties2KHR)
VK_FUNC(vkGetDeviceGroupPeerMemoryFeaturesKHR)
VK_FUNC(vkCmdSetDeviceMaskKHR)
VK_FUNC(vkCmdDispatchBaseKHR)
VK_FUNC(vkTrimCommandPoolKHR)
VK_FUNC(vkEnumeratePhysicalDeviceGroupsKHR)
VK_FUNC(vkGetPhysicalDeviceExternalBufferPropertiesKHR)
VK_FUNC(vkGetMemoryFdKHR)
VK_FUNC(vkGetMemoryFdPropertiesKHR)
VK_FUNC(vkGetPhysicalDeviceExternalSemaphorePropertiesKHR)
VK_FUNC(vkImportSemaphoreFdKHR)
VK_FUNC(vkGetSemaphoreFdKHR)
VK_FUNC(vkCmdPushDescriptorSetKHR)
VK_FUNC(vkCmdPushDescriptorSetWithTemplateKHR)
VK_FUNC(vkCreateDescriptorUpdateTemplateKHR)
VK_FUNC(vkDestroyDescriptorUpdateTemplateKHR)
VK_FUNC(vkUpdateDescriptorSetWithTemplateKHR)
VK_FUNC(vkGetSwapchainStatusKHR)
VK_FUNC(vkGetPhysicalDeviceExternalFencePropertiesKHR)
VK_FUNC(vkImportFenceFdKHR)
VK_FUNC(vkGetFenceFdKHR)
VK_FUNC(vkGetPhysicalDeviceSurfaceCapabilities2KHR)
VK_FUNC(vkGetPhysicalDeviceSurfaceFormats2KHR)
VK_FUNC(vkGetImageMemoryRequirements2KHR)
VK_FUNC(vkGetBufferMemoryRequirements2KHR)
VK_FUNC(vkGetImageSparseMemoryRequirements2KHR)
VK_FUNC(vkCreateSamplerYcbcrConversionKHR)
VK_FUNC(vkDestroySamplerYcbcrConversionKHR)
VK_FUNC(vkBindBufferMemory2KHR)
VK_FUNC(vkBindImageMemory2KHR)
VK_FUNC(vkGetDescriptorSetLayoutSupportKHR)
VK_FUNC(vkCreateDebugReportCallbackEXT)
VK_FUNC(vkDestroyDebugReportCallbackEXT)
VK_FUNC(vkDebugReportMessageEXT)
VK_FUNC(vkDebugMarkerSetObjectTagEXT)
VK_FUNC(vkDebugMarkerSetObjectNameEXT)
VK_FUNC(vkCmdDebugMarkerBeginEXT)
VK_FUNC(vkCmdDebugMarkerEndEXT)
VK_FUNC(vkCmdDebugMarkerInsertEXT)
VK_FUNC(vkCmdDrawIndirectCountAMD)
VK_FUNC(vkCmdDrawIndexedIndirectCountAMD)
VK_FUNC(vkGetShaderInfoAMD)
VK_FUNC(vkGetPhysicalDeviceExternalImageFormatPropertiesNV)
VK_FUNC(vkCmdSetViewportWScalingNV)
VK_FUNC(vkReleaseDisplayEXT)
VK_FUNC(vkGetPhysicalDeviceSurfaceCapabilities2EXT)
VK_FUNC(vkDisplayPowerControlEXT)
VK_FUNC(vkRegisterDeviceEventEXT)
VK_FUNC(vkRegisterDisplayEventEXT)
VK_FUNC(vkGetSwapchainCounterEXT)
VK_FUNC(vkGetRefreshCycleDurationGOOGLE)
VK_FUNC(vkGetPastPresentationTimingGOOGLE)
VK_FUNC(vkCmdSetDiscardRectangleEXT)
VK_FUNC(vkSetHdrMetadataEXT)
VK_FUNC(vkSetDebugUtilsObjectNameEXT)
VK_FUNC(vkSetDebugUtilsObjectTagEXT)
VK_FUNC(vkQueueBeginDebugUtilsLabelEXT)
VK_FUNC(vkQueueEndDebugUtilsLabelEXT)
VK_FUNC(vkQueueInsertDebugUtilsLabelEXT)
VK_FUNC(vkCmdBeginDebugUtilsLabelEXT)
VK_FUNC(vkCmdEndDebugUtilsLabelEXT)
VK_FUNC(vkCmdInsertDebugUtilsLabelEXT)
VK_FUNC(vkCreateDebugUtilsMessengerEXT)
VK_FUNC(vkDestroyDebugUtilsMessengerEXT)
VK_FUNC(vkSubmitDebugUtilsMessageEXT)
VK_FUNC(vkCmdSetSampleLocationsEXT)
VK_FUNC(vkGetPhysicalDeviceMultisamplePropertiesEXT)
VK_FUNC(vkCreateValidationCacheEXT)
VK_FUNC(vkDestroyValidationCacheEXT)
VK_FUNC(vkMergeValidationCachesEXT)
VK_FUNC(vkGetValidationCacheDataEXT)
VK_FUNC(vkGetMemoryHostPointerPropertiesEXT)
VK_FUNC(vkCmdWriteBufferMarkerAMD)

#undef VK_ENTRY
#undef VK_GLOBAL_LEVEL_FUNC
#undef VK_GLOBAL_LEVEL_FUNC_MANDATORY
#undef VK_FUNC
#undef VK_FUNC_MANDATORY

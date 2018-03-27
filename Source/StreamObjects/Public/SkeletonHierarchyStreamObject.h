﻿// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ModelStreamObject.h"

// FBModelSkeleton and FBModelRoot wrapper
class FSkeletonHierarchyStreamObject : public FModelStreamObject
{
public:
	FSkeletonHierarchyStreamObject(const FBModel* ModelPointer, const TSharedPtr<ILiveLinkProvider> StreamProvider);

	// Override Refresh to only add Skeletal Children to the stream Hierarchy
	void Refresh() override;
	
	// Use ModelStreamObject's UpdateSubjectFrame
};
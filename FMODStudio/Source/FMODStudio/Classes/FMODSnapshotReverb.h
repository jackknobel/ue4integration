// Copyright (c), Firelight Technologies Pty, Ltd. 2012-2017.

#pragma once

#include "Runtime/Launch/Resources/Version.h"
#include "Sound/ReverbEffect.h"
#include "FMODSnapshotReverb.generated.h"
/**1
 * FMOD Event Asset.
 */
UCLASS()
class FMODSTUDIO_API UFMODSnapshotReverb : public UReverbEffect
{
	GENERATED_BODY()

public:
	/** The unique Guid, which matches the one exported from FMOD Studio */
	UPROPERTY()
	FGuid AssetGuid;

	/** Whether to show in the content window */
	UPROPERTY()
	bool bShowAsAsset;

	/** Force this to be an asset */
	virtual bool IsAsset() const override { return bShowAsAsset; }

protected:
#if ENGINE_MINOR_VERSION > 14
	#if WITH_EDITORONLY_DATA
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	#endif // EDITORONLY_DATA
#endif // ENGINE_MINOR_VERSION
};



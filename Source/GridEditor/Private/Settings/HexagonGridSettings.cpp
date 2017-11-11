#include "HexagonGridSettings.h"
#include "Materials/MaterialInterface.h"
#include "Materials/MaterialInstance.h"
#include "ConstructorHelpers.h"

UHexagonGridSettings::UHexagonGridSettings()
{
	bShowGrids = false;
	bGridSnap = false;

	GridSize = 100.f;

	static ConstructorHelpers::FObjectFinder<UMaterialInstance> DecalMat(TEXT("/Grid/Materials/Hexagon/Mat_HexagonGrid_Normal.Mat_HexagonGrid_Normal"));
	DecalMaterial = DecalMat.Object;
}

UHexagonGridSettings::~UHexagonGridSettings()
{
}

void UHexagonGridSettings::SetParent(FEdModeGridEditor* GridEditorMode)
{
	ParentMode = GridEditorMode;
}

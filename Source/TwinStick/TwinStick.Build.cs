using UnrealBuildTool;

public class TwinStick : ModuleRules {
    public TwinStick(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimationBudgetAllocator",
            "AnimationSharing",
            "AuthaerWidgetComponentPlugin",
            "BinkMediaPlayer",
            "CommonInput",
            "CommonLoadingScreen",
            "CommonUI",
            "Core",
            "CoreUObject",
            "DcxVehicle",
            "DeveloperSettings",
            "Engine",
            "FMODStudio",
            "GameplayTags",
            "GameplayTasks",
            "GeometryCache",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "NavigationSystem",
            "Niagara",
            "Paper2D",
            "PhysXVehicles",
            "PrefabricatorRuntime",
            "ProceduralMeshComponent",
            "SignificanceManager",
            "SlateCore",
            "SolsticeMinimap",
            "UMG",
        });
    }
}

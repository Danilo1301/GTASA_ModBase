#pragma once

#include "pch.h"

class Mod {
public:
    static unsigned int m_TimePassed;
    static bool m_Enabled;
    static bool m_DevModeEnabled;

    static void Update(int dt);
    static void Init();
    static void CleoInit();

    static void RequestModelsToLoad();
    static void LoadRequestedModels(std::function<void()> callback);
    static void AddModelToLoad(int modelId);
    static bool CheckModelsLoaded();

    /**
      *   \brief Calculate probability
      *
      *   Description
      *   
      *   \param chance Float from 0.0 to 1.0
      *   \return Bool
      **/
    static bool CalculateProbability(float chance);
    
    static CVector GetCarPositionWithOffset(int hVehicle, CVector offset);
    static CVector GetCarPosition(int hVehicle);
    static CVector GetPedPositionWithOffset(int hPed, CVector offset);
    static CVector GetPedPosition(int hPed);
    static int GetPlayerActor();
    static double DistanceFromPed(int hPed, CVector position);
    static bool IsActorAliveAndDefined(int hPed);
    static int GetVehiclePedIsUsing(int hPed);

    static void ToggleMod(bool enabled);
    static void ShowCredits();
};
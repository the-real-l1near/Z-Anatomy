using Unity.Services.Core;
using UnityEngine;

public class UnityAnalytics : MonoBehaviour
{
    async void Start()
    {
        try
        {
            await UnityServices.InitializeAsync();
        }
        catch (System.Exception e)
        {
            Debug.LogError(e);
        }
    }
}
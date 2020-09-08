
// stdafx.cpp : source file that includes just the standard includes
// APIExample.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
#include "CConfig.h"
wchar_t commonGroupDoc[INFO_LEN]		= { 0 };
wchar_t commonDocumentWebsite[INFO_LEN] = { 0 };
wchar_t commonFAQWebsite[INFO_LEN]		= { 0 };
wchar_t commonRegisterWebsite[INFO_LEN] = { 0 };
wchar_t commonDemoWebsite[INFO_LEN]		= { 0 };
wchar_t commonBasicScene[INFO_LEN]		= { 0 };
wchar_t commonAdvanceScene[INFO_LEN]	= { 0 };
//agora enum
wchar_t agoraRoleBroadcaster[INFO_LEN] = { 0 };
wchar_t agoraRoleAudience[INFO_LEN]    = { 0 };
//common ctrl
wchar_t commonCtrlChannel[INFO_LEN]      = { 0 };
wchar_t commonCtrlJoinChannel[INFO_LEN]  = { 0 };
wchar_t commonCtrlLeaveChannel[INFO_LEN] = { 0 };
wchar_t commonCtrlClientRole[INFO_LEN]   = { 0 };
//scene list
wchar_t basicLiveBroadcasting[INFO_LEN] = { 0 };
wchar_t advancedRtmpInject[INFO_LEN]    = { 0 };
wchar_t advancedRtmpStreaming[INFO_LEN] = { 0 };
wchar_t advancedVideoMetadata[INFO_LEN] = { 0 };
wchar_t advancedCustomEncrypt[INFO_LEN] = { 0 };
wchar_t advancedMediaEncrypt[INFO_LEN] = { 0 };

wchar_t advancedScreenCap[INFO_LEN]					= { 0 };
wchar_t advancedBeauty[INFO_LEN]					= { 0 };
wchar_t advancedBeautyAudio[INFO_LEN]				= { 0 };
wchar_t advancedVideoProfile[INFO_LEN]				= { 0 };
wchar_t advancedAudioProfile[INFO_LEN]				= { 0 };
wchar_t advancedAudioMixing[INFO_LEN]				= { 0 };
wchar_t advancedCustomVideoCapture[INFO_LEN]		= { 0 };
wchar_t advancedMediaIOCustomVideoCapture[INFO_LEN] = { 0 };

wchar_t advancedOriginalVideo[INFO_LEN]				= { 0 };
wchar_t advancedMediaAudioCapture[INFO_LEN]			= { 0 };
wchar_t advancedCustomAudioCapture[INFO_LEN]		= { 0 };
wchar_t advancedOriginalAudio[INFO_LEN]				= { 0 };
wchar_t advancedMediaPlayer[INFO_LEN]				= { 0 };
wchar_t advancedAudioEffect[INFO_LEN]				= { 0 };

//live broadcasting
wchar_t liveCtrlPersons[INFO_LEN] = { 0 };

//rtmp streaming
wchar_t rtmpStreamingCtrlPublishUrl[INFO_LEN]	= { 0 };
wchar_t rtmpStreamingCtrlTransCoding[INFO_LEN]	= { 0 };
wchar_t rtmpStreamingCtrlAdd[INFO_LEN]			= { 0 };
wchar_t rtmpStreamingCtrlRemove[INFO_LEN]		= { 0 };
wchar_t rtmpStreamingCtrlRemoveAll[INFO_LEN]	= { 0 };
wchar_t agoraRtmpStateIdle[INFO_LEN]			= { 0 };
wchar_t agoraRtmpStateConnecting[INFO_LEN]		= { 0 };
wchar_t agoraRtmpStateRunning[INFO_LEN]			= { 0 };
wchar_t agoraRtmpStateRunningSuccess[INFO_LEN]	= { 0 };
wchar_t agoraRtmpStateRecovering[INFO_LEN]		= { 0 };
wchar_t agoraRtmpStateInvalidArg[INFO_LEN]		= { 0 };
wchar_t agoraRtmpStateEncrypted[INFO_LEN]		= { 0 };
wchar_t agoraRtmpStateConnTimeout[INFO_LEN]		= { 0 };
wchar_t agoraRtmpStateInrealErr[INFO_LEN]		= { 0 };
wchar_t agoraRtmpStateServerErr[INFO_LEN]		= { 0 };
wchar_t agoraRtmpStateTooOften[INFO_LEN]		= { 0 };
wchar_t agoraRtmpStateReachLimit[INFO_LEN]		= { 0 };
wchar_t agoraRtmpStateNotAuth[INFO_LEN]			= { 0 };
wchar_t agoraRtmpStateNotFound[INFO_LEN]		= { 0 };
wchar_t agoraRtmpStateNotSupported[INFO_LEN]	= { 0 };

//rtmp Inject
wchar_t rtmpInjectCtrlUrl[INFO_LEN]    = { 0 };
wchar_t rtmpInjectCtrlInject[INFO_LEN] = { 0 };
wchar_t rtmpInjectCtrlRemove[INFO_LEN] = { 0 };

wchar_t agoraInjectStartSucc[INFO_LEN] = { 0 };
wchar_t agoraInjectExist[INFO_LEN]     = { 0 };
wchar_t agoraInjectStartUnAuth[INFO_LEN]  = { 0 };
wchar_t agoraInjectStartTimeout[INFO_LEN] = { 0 };
wchar_t agoraInjectStartFailed[INFO_LEN]  = { 0 };
wchar_t agoraInjectStopSuccess[INFO_LEN]  = { 0 };
wchar_t agoraInjectNotFound[INFO_LEN]     = { 0 };
wchar_t agoraInjectStopUnAuth[INFO_LEN]   = { 0 };
wchar_t agoraInjectStopTimeout[INFO_LEN]  = { 0 };
wchar_t agoraInjectStopFailed[INFO_LEN]   = { 0 };
wchar_t agoraInjectBroken[INFO_LEN]       = { 0 };
//video SEI
wchar_t videoSEIInformation[INFO_LEN]	= { 0 };
wchar_t metadataCtrlSendSEI[INFO_LEN]	= { 0 };
wchar_t metadataCtrlBtnSend[INFO_LEN]	= { 0 };
wchar_t metadataCtrlBtnClear[INFO_LEN]	= { 0 };

//beauty
wchar_t beautyCtrlLighteningContrastLevel[INFO_LEN] = { 0 };
wchar_t beautyCtrlLightening[INFO_LEN]				= { 0 };
wchar_t beautyCtrlSmoothness[INFO_LEN]				= { 0 };
wchar_t beautyCtrlRedness[INFO_LEN]					= { 0 };
wchar_t beautyCtrlEnable[INFO_LEN]					= { 0 };

//beauty audio
wchar_t beautyAudioCtrlSetAudioChange[INFO_LEN]		= { 0 };
wchar_t beautyAudioCtrlUnSetAudioChange[INFO_LEN]	= { 0 };
wchar_t beautyAudioCtrlChange[INFO_LEN]				= { 0 };
wchar_t beautyAudioCtrlPreSet[INFO_LEN]				= { 0 };

//set video profile
wchar_t videoProfileCtrlWidth[INFO_LEN]					= { 0 };
wchar_t videoProfileCtrlHeight[INFO_LEN]				= { 0 };
wchar_t videoProfileCtrlFPS[INFO_LEN]					= { 0 };
wchar_t videoProfileCtrlBitrate[INFO_LEN]				= { 0 };
wchar_t videoProfileCtrldegradationPreference[INFO_LEN] = { 0 };
wchar_t videoProfileCtrlSetVideoProfile[INFO_LEN]		= { 0 };
wchar_t videoProfileCtrlUnSetVideoProfile[INFO_LEN]		= { 0 };

//set audio profile
wchar_t audioProfileCtrlProfile[INFO_LEN]			= { 0 };
wchar_t audioProfileCtrlScenario[INFO_LEN]			= { 0 };
wchar_t audioProfileCtrlSetAudioProfile[INFO_LEN]	= { 0 };
wchar_t audioProfileCtrlUnSetAudioProfile[INFO_LEN] = { 0 };

//audio mixing
wchar_t audioMixingCtrlMixingPath[INFO_LEN]			= { 0 };
wchar_t audioMixingCtrlRepeatTimes[INFO_LEN]		= { 0 };
wchar_t audioMixingCtrlSetAudioMixing[INFO_LEN]		= { 0 };
wchar_t audioMixingCtrlUnSetAudioMixing[INFO_LEN]	= { 0 };
wchar_t audioMixingCtrlOnlyLocal[INFO_LEN]			= { 0 };
wchar_t audioMixingCtrlReplaceMicroPhone[INFO_LEN]	= { 0 };

//audio effect
extern wchar_t AudioEffectCtrlEffectPath[INFO_LEN]		= { 0 };
extern wchar_t AudioEffectCtrlEffect[INFO_LEN]			= { 0 };
extern wchar_t AudioEffectCtrlLoops[INFO_LEN]			= { 0 };
extern wchar_t AudioEffectCtrlGain[INFO_LEN]			= { 0 };
extern wchar_t AudioEffectCtrlPitch[INFO_LEN]			= { 0 };
extern wchar_t AudioEffectCtrlPan[INFO_LEN]				= { 0 };
extern wchar_t AudioEffectCtrlPublish[INFO_LEN]			= { 0 };
extern wchar_t AudioEffectCtrlAddEffect[INFO_LEN]		= { 0 };
extern wchar_t AudioEffectCtrlRemoveEffect[INFO_LEN]	= { 0 };
extern wchar_t AudioEffectCtrlPreLoad[INFO_LEN]			= { 0 };
extern wchar_t AudioEffectCtrlUnPreload[INFO_LEN]		= { 0 };
extern wchar_t AudioEffectCtrlPauseEffect[INFO_LEN]		= { 0 };
extern wchar_t AudioEffectCtrlPlayEffect[INFO_LEN]		= { 0 };
extern wchar_t AudioEffectCtrlPauseAllEffect[INFO_LEN]	= { 0 };
extern wchar_t AudioEffectCtrlResumeEffect[INFO_LEN]	= { 0 };
extern wchar_t AudioEffectCtrlResumeAllEffect[INFO_LEN] = { 0 };
extern wchar_t AudioEffectCtrlStopAllEffect[INFO_LEN]	= { 0 };
extern wchar_t AudioEffectCtrlStopEffect[INFO_LEN]		= { 0 };

//screen share
wchar_t screenShareCtrlScreenCap[INFO_LEN]				= { 0 };
wchar_t screenShareCtrlStartCap[INFO_LEN]				= { 0 };
wchar_t screenShareCtrlEndCap[INFO_LEN]					= { 0 };
wchar_t screenShareCtrlScreen[INFO_LEN]					= { 0 };
wchar_t screenShareCtrlShareSCreen[INFO_LEN]			= { 0 };
wchar_t screenShareCtrlStopShare[INFO_LEN]				= { 0 };
wchar_t screenShareCtrlGeneralSettings[INFO_LEN]		= { 0 };
wchar_t screenShareCtrlFPS[INFO_LEN]					= { 0 };
wchar_t screenShareCtrlBitrate[INFO_LEN]				= { 0 };
wchar_t screenShareCtrlShareCursor[INFO_LEN]			= { 0 };
wchar_t screenShareCtrlUpdateCaptureParam[INFO_LEN]		= { 0 };
wchar_t screenShareCtrlWindowFocus[INFO_LEN] = { 0 };
wchar_t screenShareCtrlExcludeWindowList[INFO_LEN] = { 0 };



wchar_t screenCtrlRectInfo[INFO_LEN]					= { 0 };
wchar_t virtualScreenCtrlRectInfo[INFO_LEN]				= { 0 };
wchar_t screenCtrlCustomRectInfo[INFO_LEN]				= { 0 };

//custom video capture
wchar_t customVideoCaptureCtrlCaptureVideoDevice[INFO_LEN]		= { 0 };
wchar_t customVideoCaptureCtrlSetExternlCapture[INFO_LEN]		= { 0 };
wchar_t customVideoCaptureCtrlCancelExternlCapture[INFO_LEN]	= { 0 };

//original video process
wchar_t OriginalVideoCtrlProc[INFO_LEN]			= { 0 };
wchar_t OriginalVideoCtrlSetProc[INFO_LEN]		= { 0 };
wchar_t OriginalVideoCtrlUnSetProc[INFO_LEN]	= { 0 };

//custom audio capture
wchar_t customAudioCaptureCtrlCaptureAudioDeivce[INFO_LEN]			= { 0 };
wchar_t customAudioCaptureCtrlSetExternlCapture[INFO_LEN]			= { 0 };
wchar_t customAudioCaptureCtrlCancelExternlCapture[INFO_LEN]		= { 0 };
extern wchar_t customAudioCaptureCtrlSetAudioRender[INFO_LEN]		= { 0 };
extern wchar_t customAudioCaptureCtrlCancelAudioRender[INFO_LEN]	= { 0 };


//original audio process
wchar_t OriginalAudioCtrlProc[INFO_LEN]			= { 0 };
wchar_t OriginalAudioCtrlSetProc[INFO_LEN]		= { 0 };
wchar_t OriginalAudioCtrlUnSetProc[INFO_LEN]	= { 0 };

//media encrypt
wchar_t mediaEncryptCtrlMode[INFO_LEN]			= { 0 };
wchar_t mediaEncryptCtrlSecret[INFO_LEN]		= { 0 };
wchar_t mediaEncryptCtrlSetEncrypt[INFO_LEN]	= { 0 };
//custom encrypt	
wchar_t customEncryptCtrlEncrypt[INFO_LEN]			= { 0 };
wchar_t customEncryptCtrlSetEncrypt[INFO_LEN]		= { 0 };
wchar_t customEncryptCtrlCancelEncrypt[INFO_LEN]	= { 0 };


//media player
wchar_t mediaPlayerCtrlVideoSource[INFO_LEN]	= { 0 };
wchar_t mediaPlayerCtrlOpen[INFO_LEN]			= { 0 };
wchar_t mediaPlayerCtrlClose[INFO_LEN]			= { 0 };
wchar_t mediaPlayerCtrlPause[INFO_LEN]			= { 0 };
wchar_t mediaPlayerCtrlPlay[INFO_LEN]			= { 0 };
wchar_t mediaPlayerCtrlAttachPlayer[INFO_LEN]	= { 0 };
wchar_t mediaPlayerCtrlDettachPlayer[INFO_LEN]	= { 0 };
wchar_t mediaPlayerCtrlPublishVideo[INFO_LEN]	= { 0 };
wchar_t mediaPlayerCtrlUnPublishVideo[INFO_LEN] = { 0 };
wchar_t mediaPlayerCtrlPublishAudio[INFO_LEN]	= { 0 };
wchar_t mediaPlayerCtrlUnPublishAudio[INFO_LEN] = { 0 };




std::string cs2utf8(CString str)
{
    char szBuf[2 * MAX_PATH] = { 0 };
    WideCharToMultiByte(CP_UTF8, 0, str.GetBuffer(0), str.GetLength(), szBuf, 2 * MAX_PATH, NULL, NULL);
    return szBuf;
}

CString utf82cs(std::string utf8)
{
    TCHAR szBuf[2 * MAX_PATH] = { 0 };
    MultiByteToWideChar(CP_UTF8, 0, utf8.c_str(), 2 * MAX_PATH, szBuf, 2 * MAX_PATH);
    return szBuf;
}

CString getCurrentTime()
{
    SYSTEMTIME st = { 0 };
    GetLocalTime(&st);
    CString strTime;
    strTime.Format(_T("%02d:%02d:%02d %02d"), st.wHour, st.wHour, st.wMinute, st.wMilliseconds);
    return strTime;
}

void InitKeyInfomation()
{
    //common
    _tcscpy_s(commonGroupDoc, INFO_LEN, Str(_T("Common.Group.Doc")));
    _tcscpy_s(commonDocumentWebsite, INFO_LEN, Str(_T("Common.Document.Website")));
    _tcscpy_s(commonFAQWebsite, INFO_LEN, Str(_T("Common.FAQ.Website")));
    _tcscpy_s(commonRegisterWebsite, INFO_LEN, Str(_T("Common.Register.Website")));
    _tcscpy_s(commonDemoWebsite, INFO_LEN, Str(_T("Common.Demo.Website")));
    _tcscpy_s(commonBasicScene, INFO_LEN, Str(_T("Common.Basic.Scene")));
    _tcscpy_s(commonAdvanceScene, INFO_LEN, Str(_T("Common.Advanced.Scene")));

    _tcscpy_s(commonCtrlChannel, INFO_LEN, Str(_T("Common.Ctrl.ChannelName")));
    _tcscpy_s(commonCtrlJoinChannel, INFO_LEN, Str(_T("Common.Ctrl.JoinChannel")));
    _tcscpy_s(commonCtrlLeaveChannel, INFO_LEN, Str(_T("Common.Ctrl.LeaveChannel")));
    _tcscpy_s(commonCtrlClientRole, INFO_LEN, Str(_T("Common.Ctrl.ClientRole")));
    _tcscpy_s(liveCtrlPersons, INFO_LEN, Str(_T("LiveBroadcasting.Ctrl.Persons")));

    //basic scene list
    _tcscpy_s(basicLiveBroadcasting, INFO_LEN, Str(_T("Basic.LiveBroadcasting")));
    //advanced  scene list
    _tcscpy_s(advancedRtmpInject, INFO_LEN, Str(_T("Advanced.RtmpInject")));
    _tcscpy_s(advancedRtmpStreaming, INFO_LEN, Str(_T("Advanced.RtmpStreaming")));
    _tcscpy_s(advancedVideoMetadata, INFO_LEN, Str(_T("Advanced.Metadata")));
	
	_tcscpy_s(advancedMediaEncrypt, INFO_LEN, Str(_T("Advanced.MediaEncrypt")));
	_tcscpy_s(advancedCustomEncrypt, INFO_LEN, Str(_T("Advanced.CustomEncrypt")));

    _tcscpy_s(advancedScreenCap, INFO_LEN, Str(_T("Advanced.ScreenCap")));
	_tcscpy_s(advancedBeauty, INFO_LEN, Str(_T("Advanced.Beauty")));
	_tcscpy_s(advancedBeautyAudio, INFO_LEN, Str(_T("Advanced.BeautyAudio")));
	_tcscpy_s(advancedVideoProfile, INFO_LEN, Str(_T("Advanced.VideoProfile")));

	_tcscpy_s(advancedAudioProfile, INFO_LEN, Str(_T("Advanced.AudioProfile")));
	_tcscpy_s(advancedAudioMixing, INFO_LEN, Str(_T("Advanced.AudioMixing")));

	
	_tcscpy_s(advancedMediaIOCustomVideoCapture, INFO_LEN, Str(_T("Advanced.MediaIOVideoCapture")));

    _tcscpy_s(advancedCustomVideoCapture, INFO_LEN, Str(_T("Advanced.CustomVideoCapture")));
	_tcscpy_s(advancedOriginalVideo, INFO_LEN, Str(_T("Advanced.OriginalVideo")));

    _tcscpy_s(advancedCustomAudioCapture, INFO_LEN, Str(_T("Advanced.CustomAudioCapture")));
	_tcscpy_s(advancedOriginalAudio, INFO_LEN, Str(_T("Advanced.OriginalAudio")));
	_tcscpy_s(advancedMediaPlayer, INFO_LEN, Str(_T("Advanced.MediaPlayer")));
	_tcscpy_s(advancedAudioEffect, INFO_LEN, Str(_T("Advanced.AudioEffect")));


    //agora
    _tcscpy_s(agoraRoleBroadcaster, INFO_LEN, Str(_T("Agora.ClientRole.Broadcaster")));
    _tcscpy_s(agoraRoleAudience, INFO_LEN, Str(_T("Agora.ClientRole.Audienc")));


   //rtmp streaming
    _tcscpy_s(rtmpStreamingCtrlPublishUrl, INFO_LEN, Str(_T("RtmpStreaming.Ctrl.PublishUrl")));
    _tcscpy_s(rtmpStreamingCtrlAdd, INFO_LEN, Str(_T("RtmpStreaming.Ctrl.Add")));
    _tcscpy_s(rtmpStreamingCtrlRemove, INFO_LEN, Str(_T("RtmpStreaming.Ctrl.Remove")));
	_tcscpy_s(rtmpStreamingCtrlTransCoding, INFO_LEN, Str(_T("RtmpStreaming.Ctrl.TransCoding")));
    _tcscpy_s(rtmpStreamingCtrlRemoveAll, INFO_LEN, Str(_T("RtmpStreaming.Ctrl.RemoveAll")));
     //rtmp inject
    _tcscpy_s(rtmpInjectCtrlUrl, INFO_LEN, Str(_T("RtmpInject.Ctrl.Url")));
    _tcscpy_s(rtmpInjectCtrlInject, INFO_LEN, Str(_T("RtmpInject.Ctrl.Inject")));
    _tcscpy_s(rtmpInjectCtrlRemove, INFO_LEN, Str(_T("RtmpInject.Ctrl.Remove")));
    //rtmp state changed
    _tcscpy_s(agoraRtmpStateIdle, INFO_LEN, Str(_T("Agora.RtmpStateChange.IDLE")));
    _tcscpy_s(agoraRtmpStateConnecting, INFO_LEN, Str(_T("Agora.RtmpStateChange.Connecting")));
    _tcscpy_s(agoraRtmpStateRunning, INFO_LEN, Str(_T("Agora.RtmpStateChange.Running")));
    _tcscpy_s(agoraRtmpStateRunningSuccess, INFO_LEN, Str(_T("Agora.RtmpStateChange.Running.Success")));
    _tcscpy_s(agoraRtmpStateRecovering, INFO_LEN, Str(_T("Agora.RtmpStateChange.Recovering")));
    _tcscpy_s(agoraRtmpStateInvalidArg, INFO_LEN, Str(_T("Agora.RtmpStateChange.InvalidArg")));
    _tcscpy_s(agoraRtmpStateEncrypted, INFO_LEN, Str(_T("Agora.RtmpStateChange.Encrypted")));
    _tcscpy_s(agoraRtmpStateConnTimeout, INFO_LEN, Str(_T("Agora.RtmpStateChange.ConnTimeout")));
    _tcscpy_s(agoraRtmpStateInrealErr, INFO_LEN, Str(_T("Agora.RtmpStateChange.InrealErr")));
    _tcscpy_s(agoraRtmpStateServerErr, INFO_LEN, Str(_T("Agora.RtmpStateChange.ServerErr")));
    _tcscpy_s(agoraRtmpStateTooOften, INFO_LEN, Str(_T("Agora.RtmpStateChange.TooOften")));
    _tcscpy_s(agoraRtmpStateReachLimit, INFO_LEN, Str(_T("Agora.RtmpStateChange.ReachLimit")));
    _tcscpy_s(agoraRtmpStateNotAuth, INFO_LEN, Str(_T("Agora.RtmpStateChange.NotAuth")));
    _tcscpy_s(agoraRtmpStateNotFound, INFO_LEN, Str(_T("Agora.RtmpStateChange.NotFound")));
    _tcscpy_s(agoraRtmpStateNotSupported, INFO_LEN, Str(_T("Agora.RtmpStateChange.NotSupported")));

    //inject status
    _tcscpy_s(agoraInjectStartSucc, INFO_LEN, Str(_T("Agora.InjectStatus.StartSuccess")));
    _tcscpy_s(agoraInjectExist, INFO_LEN, Str(_T("Agora.InjectStatus.Exist")));
    _tcscpy_s(agoraInjectStartUnAuth, INFO_LEN, Str(_T("Agora.InjectStatus.StartUnAuth")));
    _tcscpy_s(agoraInjectStartTimeout, INFO_LEN, Str(_T("Agora.InjectStatus.StartTimeout")));
    _tcscpy_s(agoraInjectStartFailed, INFO_LEN, Str(_T("Agora.InjectStatus.StartFailed")));
    _tcscpy_s(agoraInjectStopSuccess, INFO_LEN, Str(_T("Agora.InjectStatus.StopSuccess")));
    _tcscpy_s(agoraInjectNotFound, INFO_LEN, Str(_T("Agora.InjectStatus.NotFound")));
    _tcscpy_s(agoraInjectStopUnAuth, INFO_LEN, Str(_T("Agora.InjectStatus.StopUnAuth")));
    _tcscpy_s(agoraInjectStopTimeout, INFO_LEN, Str(_T("Agora.InjectStatus.StopTimeout")));
    _tcscpy_s(agoraInjectStopFailed, INFO_LEN, Str(_T("Agora.InjectStatus.StopFailed")));
    _tcscpy_s(agoraInjectBroken, INFO_LEN, Str(_T("Agora.InjectStatus.Broken")));
   
  
    _tcscpy_s(videoSEIInformation, INFO_LEN, Str(_T("MetaData.Info")));
    _tcscpy_s(metadataCtrlSendSEI, INFO_LEN, Str(_T("MetaData.Ctrl.SendSEI")));
    _tcscpy_s(metadataCtrlBtnSend, INFO_LEN, Str(_T("MetaData.Ctrl.Send")));
    _tcscpy_s(metadataCtrlBtnClear, INFO_LEN, Str(_T("MetaData.Ctrl.Clear")));


    //screen share
    _tcscpy_s(screenShareCtrlScreenCap, INFO_LEN, Str(_T("ScreenShare.Ctrl.ScreenCap")));
    _tcscpy_s(screenShareCtrlStartCap, INFO_LEN, Str(_T("ScreenShare.Ctrl.StartCap")));
    _tcscpy_s(screenShareCtrlEndCap, INFO_LEN, Str(_T("ScreenShare.Ctrl.EndCap")));
	_tcscpy_s(screenShareCtrlScreen, INFO_LEN, Str(_T("ScreenShare.Ctrl.Screen")));
	_tcscpy_s(screenShareCtrlShareSCreen, INFO_LEN, Str(_T("ScreenShare.Ctrl.ShareSCreen")));
	_tcscpy_s(screenShareCtrlStopShare, INFO_LEN, Str(_T("ScreenShare.Ctrl.StopShare")));
	_tcscpy_s(screenShareCtrlGeneralSettings, INFO_LEN, Str(_T("ScreenShare.Ctrl.GeneralSettings")));
	_tcscpy_s(screenShareCtrlFPS, INFO_LEN, Str(_T("ScreenShare.Ctrl.FPS")));
	_tcscpy_s(screenShareCtrlBitrate, INFO_LEN, Str(_T("ScreenShare.Ctrl.Bitrate")));
	_tcscpy_s(screenShareCtrlShareCursor, INFO_LEN, Str(_T("ScreenShare.Ctrl.ShareCursor")));
	_tcscpy_s(screenShareCtrlUpdateCaptureParam, INFO_LEN, Str(_T("ScreenShare.Ctrl.UpdateCaptureParam")));
	_tcscpy_s(screenShareCtrlWindowFocus, INFO_LEN, Str(_T("ScreenShare.Ctrl.WindowFocus")));
	_tcscpy_s(screenShareCtrlExcludeWindowList, INFO_LEN, Str(_T("ScreenShare.Ctrl.ExcludeWindowList")));

    _tcscpy_s(screenCtrlRectInfo, INFO_LEN, Str(_T("Share.Ctrl.Screen.RectInfo")));
    _tcscpy_s(virtualScreenCtrlRectInfo, INFO_LEN, Str(_T("Share.Ctrl.VirtualScreen.RectInfo")));
    _tcscpy_s(screenCtrlCustomRectInfo, INFO_LEN, Str(_T("Share.Ctrl.Screen.CustomInfo")));

	//beauty
	_tcscpy_s(beautyCtrlLighteningContrastLevel, INFO_LEN, Str(_T("Beauty.Ctrl.LighteningContrastLevel")));
	_tcscpy_s(beautyCtrlLightening, INFO_LEN, Str(_T("Beauty.Ctrl.Lightening")));
	_tcscpy_s(beautyCtrlRedness, INFO_LEN, Str(_T("Beauty.Ctrl.Redness")));
	_tcscpy_s(beautyCtrlSmoothness, INFO_LEN, Str(_T("Beauty.Ctrl.Smoothness")));
	_tcscpy_s(beautyCtrlEnable, INFO_LEN, Str(_T("Beauty.Ctrl.Enable")));


	//beauty audio
	_tcscpy_s(beautyAudioCtrlChange, INFO_LEN, Str(_T("BeautyAudio.Ctrl.Change")));
	_tcscpy_s(beautyAudioCtrlSetAudioChange, INFO_LEN, Str(_T("BeautyAudio.Ctrl.SetAudioChange")));
	_tcscpy_s(beautyAudioCtrlUnSetAudioChange, INFO_LEN, Str(_T("BeautyAudio.Ctrl.UnSetAudioChange")));
	_tcscpy_s(beautyAudioCtrlPreSet, INFO_LEN, Str(_T("BeautyAudio.Ctrl.ReverbPreSet")));

	


	//video profile
	_tcscpy_s(videoProfileCtrldegradationPreference, INFO_LEN, Str(_T("VideoProfile.Ctrl.DegradationPreference")));
	_tcscpy_s(videoProfileCtrlFPS, INFO_LEN, Str(_T("VideoProfile.Ctrl.FPS")));
	_tcscpy_s(videoProfileCtrlHeight, INFO_LEN, Str(_T("VideoProfile.Ctrl.Height")));
	_tcscpy_s(videoProfileCtrlWidth, INFO_LEN, Str(_T("VideoProfile.Ctrl.Width")));
	_tcscpy_s(videoProfileCtrlBitrate, INFO_LEN, Str(_T("VideoProfile.Ctrl.Bitrate")));
	_tcscpy_s(videoProfileCtrlUnSetVideoProfile, INFO_LEN, Str(_T("VideoProfile.Ctrl.UnSetVideoProfile")));
	_tcscpy_s(videoProfileCtrlSetVideoProfile, INFO_LEN, Str(_T("VideoProfile.Ctrl.SetVideoProfile")));

	//audio profile
	_tcscpy_s(audioProfileCtrlSetAudioProfile, INFO_LEN, Str(_T("AudioProfile.Ctrl.SetAudioProfile")));
	_tcscpy_s(audioProfileCtrlProfile, INFO_LEN, Str(_T("AudioProfile.Ctrl.Profile")));
	_tcscpy_s(audioProfileCtrlScenario, INFO_LEN, Str(_T("AudioProfile.Ctrl.Scenario")));
	_tcscpy_s(audioProfileCtrlUnSetAudioProfile, INFO_LEN, Str(_T("AudioProfile.Ctrl.UnSetAudioProfile")));

	//audio mixing
	_tcscpy_s(audioMixingCtrlMixingPath, INFO_LEN, Str(_T("AudioMixing.Ctrl.MixingPath")));
	_tcscpy_s(audioMixingCtrlOnlyLocal, INFO_LEN, Str(_T("AudioMixing.Ctrl.OnlyLocal")));
	_tcscpy_s(audioMixingCtrlSetAudioMixing, INFO_LEN, Str(_T("AudioMixing.Ctrl.SetAudioMixing")));
	_tcscpy_s(audioMixingCtrlRepeatTimes, INFO_LEN, Str(_T("AudioMixing.Ctrl.RepeatTimes")));
	_tcscpy_s(audioMixingCtrlUnSetAudioMixing, INFO_LEN, Str(_T("AudioMixing.Ctrl.UnSetAudioMixing")));
	_tcscpy_s(audioMixingCtrlReplaceMicroPhone, INFO_LEN, Str(_T("AudioMixing.Ctrl.ReplaceMicroPhone")));

	//audio effect
	_tcscpy_s(AudioEffectCtrlEffectPath, INFO_LEN, Str(_T("AudioEffect.Ctrl.EffectPath")));
	_tcscpy_s(AudioEffectCtrlEffect, INFO_LEN, Str(_T("AudioEffect.Ctrl.Effect")));
	_tcscpy_s(AudioEffectCtrlLoops, INFO_LEN, Str(_T("AudioEffect.Ctrl.Loops")));
	_tcscpy_s(AudioEffectCtrlGain, INFO_LEN, Str(_T("AudioEffect.Ctrl.Gain")));
	_tcscpy_s(AudioEffectCtrlPitch, INFO_LEN, Str(_T("AudioEffect.Ctrl.Pitch")));
	_tcscpy_s(AudioEffectCtrlPan, INFO_LEN, Str(_T("AudioEffect.Ctrl.Pan")));
	_tcscpy_s(AudioEffectCtrlPublish, INFO_LEN, Str(_T("AudioEffect.Ctrl.Publish")));
	_tcscpy_s(AudioEffectCtrlAddEffect, INFO_LEN, Str(_T("AudioEffect.Ctrl.AddEffect")));
	_tcscpy_s(AudioEffectCtrlRemoveEffect, INFO_LEN, Str(_T("AudioEffect.Ctrl.RemoveEffect")));
	_tcscpy_s(AudioEffectCtrlPreLoad, INFO_LEN, Str(_T("AudioEffect.Ctrl.PreLoad")));
	_tcscpy_s(AudioEffectCtrlUnPreload, INFO_LEN, Str(_T("AudioEffect.Ctrl.UnPreload")));
	_tcscpy_s(AudioEffectCtrlPauseEffect, INFO_LEN, Str(_T("AudioEffect.Ctrl.PauseEffect")));
	_tcscpy_s(AudioEffectCtrlPlayEffect, INFO_LEN, Str(_T("AudioEffect.Ctrl.PlayEffect")));
	_tcscpy_s(AudioEffectCtrlPauseAllEffect, INFO_LEN, Str(_T("AudioEffect.Ctrl.PauseAllEffect")));
	_tcscpy_s(AudioEffectCtrlResumeEffect, INFO_LEN, Str(_T("AudioEffect.Ctrl.ResumeEffect")));
	_tcscpy_s(AudioEffectCtrlResumeAllEffect, INFO_LEN, Str(_T("AudioEffect.Ctrl.ResumeAllEffect")));
	_tcscpy_s(AudioEffectCtrlStopAllEffect, INFO_LEN, Str(_T("AudioEffect.Ctrl.StopAllEffect")));
	_tcscpy_s(AudioEffectCtrlStopEffect, INFO_LEN, Str(_T("AudioEffect.Ctrl.StopEffect")));


    //custom video capture
    _tcscpy_s(customVideoCaptureCtrlCaptureVideoDevice, INFO_LEN, Str(_T("CustomVideoCapture.Ctrl.CaptureVideo")));
    _tcscpy_s(customVideoCaptureCtrlSetExternlCapture, INFO_LEN, Str(_T("CustomVideoCapture.Ctrl.SetExternlCap")));
    _tcscpy_s(customVideoCaptureCtrlCancelExternlCapture, INFO_LEN, Str(_T("CustomVideoCapture.Ctrl.CancelExternlCap")));

	//original video process
	_tcscpy_s(OriginalVideoCtrlProc, INFO_LEN, Str(_T("OriginalVideo.Ctrl.Proc")));
	_tcscpy_s(OriginalVideoCtrlSetProc, INFO_LEN, Str(_T("OriginalVideo.Ctrl.SetProc")));
	_tcscpy_s(OriginalVideoCtrlUnSetProc, INFO_LEN, Str(_T("OriginalVideo.Ctrl.UnSetProc")));

    //custom audio capture
    _tcscpy_s(customAudioCaptureCtrlCaptureAudioDeivce, INFO_LEN, Str(_T("CustomAudioCapture.Ctrl.CaptureAudio")));
    _tcscpy_s(customAudioCaptureCtrlSetExternlCapture, INFO_LEN, Str(_T("CustomAudioCapture.Ctrl.SetExternlCap")));
    _tcscpy_s(customAudioCaptureCtrlCancelExternlCapture, INFO_LEN, Str(_T("CustomAudioCapture.Ctrl.CancelExternlCap")));
	_tcscpy_s(customAudioCaptureCtrlSetAudioRender, INFO_LEN, Str(_T("CustomAudioCapture.Ctrl.SetAudioRender")));
	_tcscpy_s(customAudioCaptureCtrlCancelAudioRender, INFO_LEN, Str(_T("CustomAudioCapture.Ctrl.CancelAudioRender")));


	//original video process
	_tcscpy_s(OriginalAudioCtrlProc, INFO_LEN, Str(_T("OriginalVideo.Ctrl.Proc")));
	_tcscpy_s(OriginalAudioCtrlSetProc, INFO_LEN, Str(_T("OriginalVideo.Ctrl.SetProc")));
	_tcscpy_s(OriginalAudioCtrlUnSetProc, INFO_LEN, Str(_T("OriginalVideo.Ctrl.UnSetProc")));

	//custom encrypt
	_tcscpy_s(customEncryptCtrlEncrypt, INFO_LEN, Str(_T("CustomEncrypt.Ctrl.Encrypt")));
	_tcscpy_s(customEncryptCtrlSetEncrypt, INFO_LEN, Str(_T("CustomEncrypt.Ctrl.SetEncrypt")));
	_tcscpy_s(customEncryptCtrlCancelEncrypt, INFO_LEN, Str(_T("CustomEncrypt.Ctrl.CancelEncrypt")));
	
	//custom encrypt
	_tcscpy_s(mediaEncryptCtrlMode, INFO_LEN, Str(_T("mediaEncrypt.Ctrl.Mode")));
	_tcscpy_s(mediaEncryptCtrlSecret, INFO_LEN, Str(_T("mediaEncrypt.Ctrl.Secret")));
	_tcscpy_s(mediaEncryptCtrlSetEncrypt, INFO_LEN, Str(_T("mediaEncrypt.Ctrl.SetEncrypt")));

	//media player
	_tcscpy_s(mediaPlayerCtrlVideoSource, INFO_LEN, Str(_T("mediaPlayer.Ctrl.VideoSource")));
	_tcscpy_s(mediaPlayerCtrlOpen, INFO_LEN, Str(_T("mediaPlayer.Ctrl.Open")));
	_tcscpy_s(mediaPlayerCtrlClose, INFO_LEN, Str(_T("mediaPlayer.Ctrl.Close")));
	_tcscpy_s(mediaPlayerCtrlPause, INFO_LEN, Str(_T("mediaPlayer.Ctrl.Pause")));
	_tcscpy_s(mediaPlayerCtrlPlay, INFO_LEN, Str(_T("mediaPlayer.Ctrl.Play")));
	_tcscpy_s(mediaPlayerCtrlAttachPlayer, INFO_LEN, Str(_T("mediaPlayer.Ctrl.AttachPlayer")));
	_tcscpy_s(mediaPlayerCtrlDettachPlayer, INFO_LEN, Str(_T("mediaPlayer.Ctrl.DettachPlayer")));
	_tcscpy_s(mediaPlayerCtrlPublishVideo, INFO_LEN, Str(_T("mediaPlayer.Ctrl.PublishVideo")));
	_tcscpy_s(mediaPlayerCtrlUnPublishVideo, INFO_LEN, Str(_T("mediaPlayer.Ctrl.UnPublishVideo")));
	_tcscpy_s(mediaPlayerCtrlPublishAudio, INFO_LEN, Str(_T("mediaPlayer.Ctrl.PublishAudio")));
	_tcscpy_s(mediaPlayerCtrlUnPublishAudio, INFO_LEN, Str(_T("mediaPlayer.Ctrl.UnPublishAudio")));

	/*   
 
   
    _tcscpy_s(, INFO_LEN, Str(_T("")));

 _tcscpy_s(, INFO_LEN, Str(_T("")));
    _tcscpy_s(, INFO_LEN, Str(_T("")));
    _tcscpy_s(, INFO_LEN, Str(_T("")));
    _tcscpy_s(, INFO_LEN, Str(_T("")));
    _tcscpy_s(, INFO_LEN, Str(_T("")));
    _tcscpy_s(, INFO_LEN, Str(_T("")));
    _tcscpy_s(, INFO_LEN, Str(_T("")));
    _tcscpy_s(, INFO_LEN, Str(_T("")));
    _tcscpy_s(, INFO_LEN, Str(_T("")));
    _tcscpy_s(, INFO_LEN, Str(_T("")));
    _tcscpy_s(, INFO_LEN, Str(_T("")));
    _tcscpy_s(, INFO_LEN, Str(_T("")));
*/
}

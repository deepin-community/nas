/* $NCDId: @(#)nas-def.cpp,v 1.2 1996/05/08 17:04:24 greg Exp $ */
/* $Id: audio-def.cpp 106 2002-07-21 01:40:34Z jon $ */
LIBRARY AUDIO
VERSION 2.2
EXPORTS
#if !defined(__CYGWIN__)
 AuDefaultErrorHandler_p = AuDefaultErrorHandler CONSTANT
 AuDefaultIOErrorHandler_p = AuDefaultIOErrorHandler CONSTANT
 AuMonitorFormat_p = AuMonitorFormat CONSTANT
 AuMonitorRate_p = AuMonitorRate CONSTANT
 AuSoundFileChunkSize_p = AuSoundFileChunkSize CONSTANT
 AuSoundPortDuration_p = AuSoundPortDuration CONSTANT
 AuSoundPortHighWaterMark_p = AuSoundPortHighWaterMark CONSTANT
 AuSoundPortLowWaterMark_p = AuSoundPortLowWaterMark CONSTANT
 AuSoundRestartHardwarePauses_p = AuSoundRestartHardwarePauses CONSTANT
 SoundNumFileFormats_p = SoundNumFileFormats CONSTANT
#else
 AuDefaultErrorHandler
 AuDefaultIOErrorHandler
 AuMonitorFormat
 AuMonitorRate
 AuSoundFileChunkSize
 AuSoundPortDuration
 AuSoundPortHighWaterMark
 AuSoundPortLowWaterMark
 AuSoundRestartHardwarePauses
 SoundNumFileFormats
#endif
 AiffCloseFile
 AiffFlushFile
 AiffOpenFileForReading
 AiffOpenFileForWriting
 AiffReadFile
 AiffRewindFile
 AiffSeekFile
 AiffTellFile
 AiffWriteFile
 AuCloseServer
 AuConvertDataToShort
 AuConvertShortToData
 AuCreateBucket
 AuCreateFlow
 AuDefineToFormat
 AuDestroyBucket
 AuDestroyFlow
 AuDispatchEvent
 AuFlush
 AuFormatToDefine
 AuFormatToString
 AuFree
 AuFreeBucketAttributes
 AuFreeDeviceAttributes
 AuFreeElementStates
 AuFreeElements
 AuGetBucketAttributes
 AuGetCloseDownMode
 AuGetDeviceAttributes
 AuGetElementStates
 AuGetElements
 AuGetErrorDatabaseText
 AuGetErrorText
 AuGetScratchFlow
 AuGetScratchFlowFromBucket
 AuGetScratchFlowToBucket
 AuGetServerTime
 AuHandleEvents
 AuIDOfEvent
 AuKillClient
 AuListBuckets
 AuListDevices
 AuLookupEventHandler
 AuMonitorDevice
 AuNextEvent
 AuOpenServer
 AuPauseFlow
 AuReadElement
 AuRegisterEventEnqHandler
 AuRegisterEventHandler
 AuRegisterSyncHandler
 AuReleaseScratchFlow
 AuRequeueEvent
 AuScanEvents
 AuScanForTypedEvent
 AuServerName
 AuSetCloseDownMode
 AuSetDeviceAttributes
 AuSetElementParameters
 AuSetElementStates
 AuSetElements
 AuSetErrorHandler
 AuSetIOErrorHandler
 AuSoundCreateBucketFromData
 AuSoundCreateBucketFromFile
 AuSoundCreateDataFromBucket
 AuSoundCreateFileFromBucket
 AuSoundPlay
 AuSoundPlayFromBucket
 AuSoundPlayFromData
 AuSoundPlayFromFile
 AuSoundPlaySynchronousFromFile
 AuSoundRecord
 AuSoundRecordToBucket
 AuSoundRecordToData
 AuSoundRecordToDataLength
 AuSoundRecordToFile
 AuSoundRecordToFileN
 AuStartFlow
 AuStopFlow
 AuStringToFormat
 AuStringToWaveForm
 AuSync
 AuUnregisterEventEnqHandler
 AuUnregisterEventHandler
 AuUnregisterSyncHandler
 AuWaveFormToString
 AuWriteElement
 AuXtAppAddAudioHandler
 AuXtAppRemoveAudioHandler
 AuXtHandleAudioEvents
 FileCommentFromFilename
 FileReadL
 FileReadS
 FileSwapL
 FileSwapS
 FileWriteL
 FileWriteS
 SndCloseFile
 SndFlushFile
 SndOpenFileForReading
 SndOpenFileForWriting
 SndReadFile
 SndRewindFile
 SndSeekFile
 SndTellFile
 SndWriteFile
 SoundAbbrevToFileFormat
 SoundCloseFile
 SoundCreate
 SoundFlushFile
 SoundFileFormatString
 SoundFileFormatToAbbrev
 SoundFileFormatToString
 SoundFileFormatToSuffixes 
 SoundOpenFileForReading
 SoundOpenFileForWriting
 SoundReadFile
 SoundRewindFile
 SoundSeekFile
 SoundStringToFileFormat
 SoundTellFile
 SoundValidDataFormat
 SoundWriteFile
 SvxCloseFile
 SvxFlushFile
 SvxOpenFileForReading
 SvxOpenFileForWriting
 SvxReadFile
 SvxRewindFile
 SvxSeekFile
 SvxTellFile
 SvxWriteFile
 VocCloseFile
 VocFlushFile
 VocOpenFileForReading
 VocOpenFileForWriting
 VocReadFile
 VocRewindFile
 VocSeekFile
 VocTellFile
 VocWriteFile
 WaveCloseFile
 WaveFlushFile
 WaveOpenFileForReading
 WaveOpenFileForWriting
 WaveReadFile
 WaveRewindFile
 WaveSeekFile
 WaveTellFile
 WaveWriteFile
 _AuAddToBucketCache
 _AuAllocID
 _AuAllocScratch
 _AuAsyncErrorHandler
 _AuConnectServer
 _AuDefaultError
 _AuDefaultIOError
 _AuDefaultWireError
 _AuDisconnectServer
 _AuDoDeqAsyncHandler
 _AuDoSyncHandle
 _AuEatData
 _AuError
 _AuEventsQueued
 _AuFlush
 _AuForceRoundTrip
 _AuFreeBucketCache
 _AuFreeExtData
 _AuFreeQ
 _AuFreeServerStructure
 _AuGetAsyncReply
 _AuGetHostname
 _AuIOError
 _AuLookupBucketInCache
 _AuPrintDefaultError
 _AuRead
 _AuReadEvents
 _AuReadPad
 _AuReadV
 _AuRemoveFromBucketCache
 _AuReply
 _AuSend
 _AuSendClientPrefix
 _AuSetLastRequestRead
 _AuUnknownNativeEvent
 _AuUnknownWireEvent
 _AuWireToEvent
 _AuWriteElement
 _AuWriteV

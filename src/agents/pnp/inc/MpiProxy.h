// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef MPIPROXY_H
#define MPIPROXY_H

#define MPI_CALL_MESSAGE_LENGTH 256

#ifdef __cplusplus
extern "C"
{
#endif

MPI_HANDLE CallMpiOpen(const char* clientName, const unsigned int maxPayloadSizeBytes);
void CallMpiClose(MPI_HANDLE clientSession);
int CallMpiSet(const char* componentName, const char* propertyName, const MPI_JSON_STRING payload, const int payloadSizeBytes);
int CallMpiGet(const char* componentName, const char* propertyName, MPI_JSON_STRING* payload, int* payloadSizeBytes);
int CallMpiSetDesired(const char* clientName, const MPI_JSON_STRING payload, const int payloadSizeBytes);
int CallMpiGetReported(const char* clientName, const unsigned int maxPayloadSizeBytes, MPI_JSON_STRING* payload, int* payloadSizeBytes);
void CallMpiFree(MPI_JSON_STRING payload);
void CallMpiDoWork(void);
void CallMpiInitialize(void);
void CallMpiShutdown(void);

#ifdef __cplusplus
}
#endif

#endif // MPIPROXY_H

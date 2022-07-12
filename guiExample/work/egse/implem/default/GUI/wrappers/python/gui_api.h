#ifndef __HEADER_egse_H__
#define __HEADER_egse_H__

typedef unsigned char byte;

int OpenMsgQueueForReading(char *queueName);
void CloseMsgQueue(int queue_id);
int GetMsgQueueBufferSize(int queue_id);
int RetrieveMessageFromQueue(int queue_id, int maxSize, byte *pBuf);
int SendTC_SetTargetPitch(void *p_pitch);

#endif

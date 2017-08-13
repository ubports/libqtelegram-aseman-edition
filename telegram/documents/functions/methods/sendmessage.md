# Messages.sendMessage

## Function:

TelegramCore::messagesSendMessage

## Schema:

```c++
messages.sendMessage#fc55e6b5 flags:# peer:InputPeer reply_to_msg_id:flags.0?int message:string random_id:long reply_markup:flags.2?ReplyMarkup = messages.SentMessage;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|replyToMsgId|qint32||
|message|QString||
|randomId|qint64||
|replyMarkup|[ReplyMarkup](../../types/replymarkup.md)||
|callBack|Callback&lt;[MessagesSentMessage](../../types/messagessentmessage.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesSentMessage](../../types/messagessentmessage.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
sendMessageAnswer(qint64 msgId, const MessagesSentMessage & result)
```
```c++
sendMessageError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onSendMessageAnswer(qint64 msgId, const MessagesSentMessage & result)
```
```c++
onSendMessageError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_SEND_MESSAGE_CALLBACK

## Examples:

```c++
tg->sendMessage(peer, reply_to_msg_id, message, random_id, reply_markup, [=](TG_SEND_MESSAGE_CALLBACK){
    ...
}, 30000);
```

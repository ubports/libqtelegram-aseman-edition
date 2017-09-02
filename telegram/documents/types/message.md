# Message

## Types

* [typeMessageEmpty](#messagetypemessageempty)
* [typeMessage](#messagetypemessage)
* [typeMessageService](#messagetypemessageservice)

## Message::typeMessageEmpty

#### Schema:

```c++
messageEmpty#83e5de54 id:int = Message;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|

## Message::typeMessage

#### Schema:

```c++
message#2bebfa86 flags:# id:int from_id:int to_id:Peer fwd_from_id:flags.2?int fwd_date:flags.2?int reply_to_msg_id:flags.3?int date:int message:string media:flags.9?MessageMedia reply_markup:flags.6?ReplyMarkup entities:flags.7?Vector<MessageEntity> = Message;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|fromId|qint32|
|toId|[Peer](peer.md)|
|fwdFromId|qint32|
|fwdDate|qint32|
|replyToMsgId|qint32|
|date|qint32|
|message|QString|
|media|[MessageMedia](messagemedia.md)|
|replyMarkup|[ReplyMarkup](replymarkup.md)|
|entities|QList&lt;[MessageEntity](messageentity.md)&gt;|

## Message::typeMessageService

#### Schema:

```c++
messageService#1d86f70e flags:int id:int from_id:int to_id:Peer date:int action:MessageAction = Message;
```

#### Parameters:

|Name|Type|
|----|----|
|flags|qint32|
|id|qint32|
|fromId|qint32|
|toId|[Peer](peer.md)|
|date|qint32|
|action|[MessageAction](messageaction.md)|


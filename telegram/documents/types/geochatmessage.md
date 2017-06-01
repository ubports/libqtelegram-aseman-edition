# GeoChatMessage

## Types

* [typeGeoChatMessageEmpty](#geochatmessagetypegeochatmessageempty)
* [typeGeoChatMessage](#geochatmessagetypegeochatmessage)
* [typeGeoChatMessageService](#geochatmessagetypegeochatmessageservice)

## GeoChatMessage::typeGeoChatMessageEmpty

#### Schema:

```c++
geoChatMessageEmpty#60311a9b chat_id:int id:int = GeoChatMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|chatId|qint32|
|id|qint32|

## GeoChatMessage::typeGeoChatMessage

#### Schema:

```c++
geoChatMessage#4505f8e1 chat_id:int id:int from_id:int date:int message:string media:MessageMedia = GeoChatMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|chatId|qint32|
|id|qint32|
|fromId|qint32|
|date|qint32|
|message|QString|
|media|[MessageMedia](messagemedia.md)|

## GeoChatMessage::typeGeoChatMessageService

#### Schema:

```c++
geoChatMessageService#d34fa24e chat_id:int id:int from_id:int date:int action:MessageAction = GeoChatMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|chatId|qint32|
|id|qint32|
|fromId|qint32|
|date|qint32|
|action|[MessageAction](messageaction.md)|


# Chat

## Types

* [typeChatEmpty](#chattypechatempty)
* [typeChat](#chattypechat)
* [typeChatForbidden](#chattypechatforbidden)
* [typeGeoChat](#chattypegeochat)

## Chat::typeChatEmpty

#### Schema:

```c++
chatEmpty#9ba2d800 id:int = Chat;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|

## Chat::typeChat

#### Schema:

```c++
chat#6e9c9bc7 id:int title:string photo:ChatPhoto participants_count:int date:int left:Bool version:int = Chat;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|title|QString|
|photo|[ChatPhoto](chatphoto.md)|
|participantsCount|qint32|
|date|qint32|
|left|bool|
|version|qint32|

## Chat::typeChatForbidden

#### Schema:

```c++
chatForbidden#fb0ccc41 id:int title:string date:int = Chat;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|title|QString|
|date|qint32|

## Chat::typeGeoChat

#### Schema:

```c++
geoChat#75eaea5a id:int access_hash:long title:string address:string venue:string geo:GeoPoint photo:ChatPhoto participants_count:int date:int checked_in:Bool version:int = Chat;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|accessHash|qint64|
|title|QString|
|address|QString|
|venue|QString|
|geo|[GeoPoint](geopoint.md)|
|photo|[ChatPhoto](chatphoto.md)|
|participantsCount|qint32|
|date|qint32|
|checkedIn|bool|
|version|qint32|


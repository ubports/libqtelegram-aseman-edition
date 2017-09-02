# MessagesAllStickers

## Types

* [typeMessagesAllStickersNotModified](#messagesallstickerstypemessagesallstickersnotmodified)
* [typeMessagesAllStickers](#messagesallstickerstypemessagesallstickers)

## MessagesAllStickers::typeMessagesAllStickersNotModified

#### Schema:

```c++
messages.allStickersNotModified#e86602c3 = messages.AllStickers;
```

#### Parameters:


## MessagesAllStickers::typeMessagesAllStickers

#### Schema:

```c++
messages.allStickers#d51dafdb hash:string sets:Vector<StickerSet> = messages.AllStickers;
```

#### Parameters:

|Name|Type|
|----|----|
|hash|QString|
|sets|QList&lt;[StickerSet](stickerset.md)&gt;|


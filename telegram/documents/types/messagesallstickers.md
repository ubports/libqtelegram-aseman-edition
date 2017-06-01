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
messages.allStickers#5ce352ec hash:string packs:Vector<StickerPack> sets:Vector<StickerSet> documents:Vector<Document> = messages.AllStickers;
```

#### Parameters:

|Name|Type|
|----|----|
|hash|QString|
|packs|QList&lt;[StickerPack](stickerpack.md)&gt;|
|sets|QList&lt;[StickerSet](stickerset.md)&gt;|
|documents|QList&lt;[Document](document.md)&gt;|


# Video

## Types

* [typeVideoEmpty](#videotypevideoempty)
* [typeVideo](#videotypevideo)

## Video::typeVideoEmpty

#### Schema:

```c++
videoEmpty#c10658a8 id:long = Video;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|

## Video::typeVideo

#### Schema:

```c++
video#ee9f4a4d id:long access_hash:long user_id:int date:int duration:int size:int thumb:PhotoSize dc_id:int w:int h:int = Video;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|accessHash|qint64|
|userId|qint32|
|date|qint32|
|duration|qint32|
|size|qint32|
|thumb|[PhotoSize](photosize.md)|
|dcId|qint32|
|w|qint32|
|h|qint32|


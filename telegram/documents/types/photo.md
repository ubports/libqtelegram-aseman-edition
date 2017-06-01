# Photo

## Types

* [typePhotoEmpty](#phototypephotoempty)
* [typePhoto](#phototypephoto)

## Photo::typePhotoEmpty

#### Schema:

```c++
photoEmpty#2331b22d id:long = Photo;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|

## Photo::typePhoto

#### Schema:

```c++
photo#c3838076 id:long access_hash:long user_id:int date:int geo:GeoPoint sizes:Vector<PhotoSize> = Photo;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint64|
|accessHash|qint64|
|userId|qint32|
|date|qint32|
|geo|[GeoPoint](geopoint.md)|
|sizes|QList&lt;[PhotoSize](photosize.md)&gt;|


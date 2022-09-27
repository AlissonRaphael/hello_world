class Video {
  public readonly url: string

  constructor (url: string, public readonly codec: string) {
    this.url = url
  }
}

const video = new Video('https://www.video.com/video', 'mp4')
// video.codec = 'mkv' --> error TS2540: Cannot assign to 'codec' because it is a read-only property.

const fn = () => {
    console.log("callbacks")
}

const callback = (params) => {
    console.log(params)
    fn()
}

const loadScript = (src, callback) => {
    let sc = document.createElement('script')
    sc.src = src
    sc.onload = () => {
        callback("kamran")
    }
    document.head.append(sc)
}

loadScript("https://cdn.jsdelivr.net/npm/animejs@3.2.1/lib/anime.min.js", callback);
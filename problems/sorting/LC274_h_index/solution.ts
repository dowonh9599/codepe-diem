function hIndex(citations: number[]) {
  citations.sort((a, b) => a - b)
  let h = citations.length

  for (const c of citations) {
    if (c >= h) {
      return h
    } else {
      if (h === 1 && c != 0) {
        return 1
      }
      h--;
    }
  }
  return h
}

function LC274Main() {
  const citations = [3,0,6,1,5];
  console.log(hIndex(citations))
}

LC274Main()
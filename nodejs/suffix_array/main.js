function co(s){console.log(s);}

function printSuffixes(text, suffixes){
	let n = suffixes.length;
	co(n)
	for(let i=0;i<n;i++){
		co(text.substring(suffixes[i].index) + " " + suffixes[i].rank1 + " " + suffixes[i].rank2)
	}
}

function buildSuffixArray(text){
	let n = text.length;
	let suffixes = new Array(n);
	for(let i=0;i<n;i++){
		suffixes[i] = {
			index: i,
			rank1: text.charCodeAt(i) - 'a'.charCodeAt(),
			rank2: i + 1 < n ? text.charCodeAt(i + 1) - 'a'.charCodeAt() : -1
		}
	}
	printSuffixes(text, suffixes);
	suffixes.sort(function(a, b){
		return a.rank1 == b.rank1 ? (a.rank1 < b.rank1 ? true : false) :
			(a.rank2 < b.rank2 ? true : false);
	});
	printSuffixes(text, suffixes);
}

(function(){
	buildSuffixArray("banana");
})();

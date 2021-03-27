#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container. hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define mst(a, b) memset(a, b, sizeof(a))
#define lowbit(x) (x&(-x))
using namespace__gnu_pbds;
using namespace std;
typedef long long 11;
typedef unsigned long long ull;
typedef pairsint, int> pii;
typedef pair<ll,ll> pll;
const int mod=ie9+7;
const int inf=0x3F3F3F3F;
const 11 INF=Bx3f3f3f3f3f3F3F3F;
const int maxn=3e5+200;
int cnt;
int x [maxn][26], chh[maxn], dep[maxn];
int fa[maxn][4][32];
int insert(int pre, int d) {
if(!nx[pre][d]) {
nx [pre][d]=++cnt;
facent][0][1]=pre;
chh[cnt]=d;
dep[cnt]=dep[pre]+1;
3
return nx[pre][d];
}
void init_fa() {
for (int g=0; g<4; ++) {
for(int i=0;i<=cnt; ++i)
fa[i][g][0]=i;
if(g)
for(int i=0; i<=cnt; ++i)
fa[i][9][1]=fa[ fa[i][g-1][31] [9-1][1];
for(int i=2; i<32; ++i) {
for(int j=0; j<=cnt; ++j) {
fa[j][g][i]=fa[ fa[i][g][i-1] ][9][1];
}
1
}
}
int getfa(int pos, int k) {
int now-pos;
for (int i=0; k; k>>=5, ++i)
now-fa[now][i][k&31];
return now
}
pii gg[maxn];
int sa[maxn],rk[maxn], prk(maxn], tax[maxn], tp[maxn];
void Rsort(int n, int m){
for (int i=0;i<=m; ++i)tax[i]=0;
for(int i=1;i<n; ++i) ++tax[prk[i]];
for (int i=1;i<=m; ++i)tax[i]+=tax[i-1];
for(int i=1;i<=n; ++i)tp[tax[prk[i]]--]=i;
for(int i=0;i<=m; ++i)tax[i]=0;
for(int i=1;i<=n; ++i)=+tax[rk[tp[i]]]>
for(int i=1;i<=m; ++i)tax[i]+=tax[i-1];
for(int i=n;i>=1;--1)sa[tax[rk[tp[i]]]--]=tp[i];
}
bool cmp(int *f, int *t, int x, int y){
return f[x]==f[y] and t[x]==t[y];
}
void suffix() {
rk[@]=sa[0]=0;
if (cnt==1){
rk[1]=sa[1]=1; return;
}
int n=cnt, m=50;
for(int i=1;i<=n; ++i)rk[i]=chh[i]+1, prk[i]=0;
Rsortin,m);
for(int i=1;i<=n; ++i)gg[i]=pii(dep[i],i);
sort(g9+1, 99+1+n);
int now=1;
for (int w=1, p=1,1;p<n and nowe=n;w+=w, m=p) {
for(; now<=n and gg[now].first<w:++now)
prk[gg[now].second]=0;
for(i=now;i<=n;+41)
prk[gg[i].second]=rk[get fa(99[i].second, w)];
Rsort(nm);
swap(rk, tp);
rk[sa [1]]=p=1;
for(i=2;i<=n; ++i)
rk[sa[i]]=cmp(tp, prk, sa[i], sa[i-1])?p: ++p;
}
int id_s[maxn], cnts=1;
int ty[maxn], a(maxn], b[maxn],c[maxn];
struct node [
int l, r, len;
node(int _l=0, int _r=0, int _le=0):1(_1), (_r), len(_le) {}
node T[maxn];
int cntt=1;
node f[50];
node merge(const node&aa, const node&bb) {
if(aa. 1 >aa.r or bb. 1 >bb.r)
return node(1, 0, aa. len+bb.len):
int ua=cnt+1, ub=-1;
for(int l=aa. 1, r=aa.r; I=r;) {
int mid=(1+r)>>1;
int g=getfa( sa[mid], aa. len);
if(rk[g]>=bb. l)ua=mid, r=mid-1;
else 1=mid+1;
}
for (int l=aa. 1, r=aa.r; l<=r;) {
int mid=(1+r)>>1;
int g-getfa( sa[mid), aa. len);
if(rk[g]<=bb.r)ubmid, 1=mid+1;
elser=mid-1;
}
if(ua>ub) return node(1, 0, aa. len+bb. len);
return node (ua, ub, aa. len+bb. len);
}
int head[maxn], nn[maxn], uu;
node ff[maxn]:
void add( int q, node&tmp) {
ff[++uu]=tmp:
nn[uu]=head [9];
head[q]=uu;
}
int ans[maxn];
int bits[maxn];
void update (int pos, int val) {
for( ++pos; pos<maxn; pos=-lowbit(pos))
bits[pos]+=val;
}
int get(int pos) {
int res=;
for(++pos; pos; pos=-lowbit(pos))
res+Ebits[pos];
return res:
void dfs(int pos) {
update(rk[pos], 1);
for(int i=head[pos]; i; i=nn[1]) {
ans [ff[i]. len]=get (ff[i].n)-get (ff[i].1-1);
}
for(int i=0; i<26; ++i)if(nx[pos][i])
dfs(nx[pos][i]);
update(rk[pos], -1);
}
int main() {
#ifdef local
freopen("in.txt","r", stdin);
#endif
id_s[1]=0;
int Q; scanf("%d",&Q);
for(int i=1; icQ; ++i) {
scanf("%d", ty+i);
char tmp[5];
if(ty[i]=1) {
int ii;
scanf("%d",&ii, tmp);
id_s[++chts]=insert(id_s[ii], tmp[0]-'a");
} else if(ty[i]=2) {
scanf("%d", a+i, b+i);
scanf("%s", tmp);
c[i]=tmp[O] -a;
Jelse {
scanf("%d",a+i, b+i);
]
3
init_fa();
suffix();
T[1]=node(e, cnt, 0);
for (int i=0, pre=1, now=1; i<26; ++i) {
pre-now;
for(; now<=cnt and chh(sa[now]]<=i;++now);
f[i]=node (pre, now-1, 1);
}
for(int i=1; i<=Q; ++i)if(ty[i]!=i) {
if(ty[i]==2) {
if(a[i]==0) {
T[++entt]=merge(T[b[i]], f[c[i]]);
} else {
T[++cntt]Emerge(f[c[i]], [b[i]]);
}
} else if(ty[i]==3){
T[++cntt]=merge [b[i]1.T[a[i]]);
} else {
node tmp=T[a[i]];
if(tmp.l>tmp.r or tmp.len==0)ans[1]=0;
else {
tmp.len=i;
add(id_s[b[i]], tmp);
}
}
dfs(0);
for (int i=1; i<=Q; ++i)if(ty[1]=4)
printf("%d\n", ans[i]);
return 0;
}

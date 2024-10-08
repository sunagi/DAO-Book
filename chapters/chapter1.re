= ブロックチェーンとは　〜初心者のためのわかりやすい解説〜
== はじめに
ビットコインなどの仮想通貨は広くその存在が知られ、言葉そのものの認知も広がり、一度買ったことがあるという方も増えてきました。そして、それらの仮想通貨を支える技術に「ブロックチェーン」というものがあることも少しずつ知られてきています。この「ブロックチェーン」はインターネット以来の発明とも言われており、以前から様々なビジネスに応用できる可能性が指摘されてます。実際に多くのチャレンジが生まれ、仮想通貨以外の用途でもブロックチェーンが使われ始めています。特にスタートアップや、新規事業における構想で「ブロックチェーンで解決できる」と言った会話がされることもあると思いますが、その「ブロックチェーン」とは何か、どんな仕組みで成り立っているのか、詳しくわからない方も多いのではと考えています。本記事ではそのブロックチェーンをゼロからわかりやすく解説をしていきます。また、部分的に学んできて、知識が断片的という方にも参考になるように書きました。

== ブロックチェーンは台帳

ブロックチェーンをわかりやすく一言で表すと「台帳」です。デジタルな台帳技術を想像する方も多いかもしれませんが、紙の台帳のイメージのほうが近いです。どのような台帳かを説明する前に、「ブロックチェーン」と「ビットコイン」の関係について明確にしなければなりません。

== ブロックチェーンはビットコインの一部

ブロックチェーンはビットコインが発明されたときに、ビットコインの一部として発明されました。具体的には、ブロックチェーンは「コインが誰から誰に送られた」という取引が記載された台帳として、ビットコインの中で使われています。実際に、ビットコインの台帳には2009年1月3日に誕生してから現在に到るまでの全ての取引が記録されており、2021年4月11時点で632,932,905個の取引が確認されています。そして、この取引数は毎日増え続けています。これだけの量の取引が一つも欠かすことなく記録されているのがビットコインのブロックチェーンになります。

== ブロックは台帳の1ページで、それがチェーンのように繋がっていることからブロックチェーン

ブロックチェーンとビットコインの違いが理解できたところで、ブロックチェーンの説明に入りましょう。まず、ブロックチェーンという単語を構成する「ブロック」と「チェーン」について説明します。「ブロック」とは簡単に説明すると台帳の1ページになります。この1ページには、誰から誰にお金や権利が移動したかなどの一定期間の取引データが塊として書かれています。そして、「チェーン」とは、そ取引データの書かれたページが出来上がった順番に1つ1つ繋がっているさまを表しています。このようにそれぞれの取引データが入ったブロックをチェーン状に繋がっていることをイメージして「ブロックチェーン」を言われています。紙の大福帳をイメージしていただくとより理解が深まるかもしれません。大福帳の各ページには一定期間の取引内容が書かれていて、そのページを何枚も重ねていく形で1つの台帳ができています。大福帳の1ページがブロックチェーンでの1つのブロックで、そのページであるブロックが繋がることで1つの台帳になるイメージです。ここまでは、ブロックチェーンはアナログの台帳に近いということを説明してきました。しかし、実際はデジタルな台帳です。では、どのようなデジタルな台帳になっているかをもう少し掘り下げて説明していきます。

==== ここまでのまとめ

 * ブロックチェーンは台帳
 * ブロックチェーンはビットコインの一部
 * ブロックは台帳の1ページで、それがチェーンのように繋がっているのでブロックチェーン

== 誰でも自由に読み書きができる台帳

ブロックチェーンがどのような台帳であるかを簡単に言うと、「誰でも自由に読み書きができる台帳」になります。「自由に」が大きなポイントになります。ですが、その自由の中にも秩序を守るためのルールがあります。大きく分けると「誰が書いたと言う証拠が残る」「一度書いたら書き換えられない」というルールになります。この2つのルールはブロックチェーンにおいて強力な役割を果たす重要なルールになるのでしっかり覚えておきましょう。ここからは、先ほど説明した「誰でも自由に読み書きができる台帳」の詳細について、「誰でも読める」「誰でもかける」という2つの特徴を説明していきます。

== 台帳が公開されているため誰でも読める

まず1つ目の特徴である「誰でも読める」ことに関して説明します。ブロックチェーンの台帳は公開されていて、インターネットへの接続環境さえあれば誰でもアクセスして読むことができます。実際に、bitFlyer社が提供しているchain flyerと呼ばれるサイトでは、現在進行形で取引されているデータを閲覧することができ、誰から誰に送金されたなどの過去の取引データも全てみることができます。このように、ブロックチェーンの台帳は全世界に公開されており誰でもその台帳を読むことができます。

== 鍵があれば誰でも書ける

次に「誰でも書ける」ことについての説明です。書き込みに関しては、誰でも無制限に書けるわけではなく、先程あげたルールに基づき「誰が書いたと言う証拠」を残す必要あります。そのため、鍵をもった人でないと書き込みができません。ただのこの鍵は公開されたツールで誰でも生成可能なので、ブロックチェーンの台帳は「誰でも書ける」と説明しても問題ありません。ブロックチェーンでは、この鍵は特定の桁数の文字の羅列（例：0xfdb43dg…）で表現され、ブロックチェーンネットワーク上のID代わりになります。この鍵を使ってブロックチェーンに書き込むことで誰が書いたかの証拠も残すことができます。また、鍵に加えて、書き込みの際は書き込むための手数料が必要になります。このように一定の条件（鍵、手数料、データを与えること）を満たせば誰でも自由に書けるようになります。

== 自浄作用が働き安心と秩序がある台帳

誰でも自由に書き込めると説明しましたが、誰でも書き込めることから、悪意を持った人も書き込みができるという問題点があります。実際にブロックチェーンの仕組み上、悪意を持った書き込みは可能です。ですが、悪意を持った書き込みはすぐにバレてしまいます。なぜなら、誰でも自由にデータを読むことができ、さらにそのデータは誰が書いたかという証拠が残るためです。このように、悪いことをしたとしてもすぐにバレてしまい悪い行動をすることが割りに合わないため、ブロックチェーン上では悪いことをしなくなる自浄作用が働きます。鍵を使った書き込みの仕組みがあることにより、ブロックチェーンの「自由」であるけど「安心」と「秩序」がある台帳ということができます。

== 管理者がいないのにシステムが成り立つ

ブロックチェーンは誰でも自由に読み書きができる台帳と説明しました。このような特徴を持っているブロックチェーンだからこと、今までのシステムではなり得なかった革新的なことがあります。それは、特定の管理者がいないのにシステムが成り立つことです。まず、従来のシステムでは管理者が何をしていたかを理解していきましょう。

== 管理者の仕事は保証

管理者の大きな仕事は保証です。サービスの品質を担保するためにシステムを落とさない保証、書き込みや読み込み権限を管理し不正アクセスをさせない保証、データの改竄検知や復旧、防止といったデータを改竄させない保証など。他にも細かな仕事はたくさんありますが、サービスを保証するために管理者が運用しているのが従来のシステムになります。

== 「自動化」と「仕組み化」によって管理者を不要にした

このような従来の管理者が管理する仕組みに対して、ブロックチェーンでは「自動化」と「仕組み化」によって管理者の仕事をなくしました。これがブロックチェーンの革命的な点です。例えば「システムが落ちない仕組み」に関しては、管理者がいなくても誰でも自由に参加できるP2P（pear to pear）ネットワークで多重化し、単一の障害点をなくしています。さらに多くの人がネットワークに参加したくなるようなインセンティブの設計も行っています。また、「不正アクセスをさせない仕組み」に関しては、一回書き込むとその書き込みは後から書き換えられない仕組みになっており、管理者がいなくてもそれらの書き込みをチェックする機構を用意しています。その仕組みを活かして、不正アクセスを防いでいます。最後に「データ改竄からの復旧の自動化」に関しては、単純に改竄を検知できる方法と、検知されて復旧するまでが自動化される仕組みが組み込まれていています。ここからそれぞれ「システムが落ちない仕組み」「不正アクセスをさせない仕組み」「データ改竄からの復旧の自動化」について詳しく説明していきます。

== 「システムが落ちない仕組み」みんなで支えている

まず最初に「システムが落ちない仕組み」に関して詳しく説明していきます。ブロックチェーンのネットワークは複数のコンピューターが相互につながる形で形成されています。ネットワークに参加しているコンピューターの1つの単位を「ノード」と呼び、ブロックチェーンの台帳に書かれている全てのデータを各々のノードが持っています。また、各ノードは、計算パワーを提供しており、みんなでパワーを出し合ってネットワークを運用しています。ネットワークに参加しているみんながデータを持っているので、1つのノードが壊れたとしても、他の健全なノードからすぐにデータを参照できるので、一つが壊れたとしても問題なくネットワークは運用されます。また、計算パワーもネットワークの参加者で持ち合っているので、一つが落ちてもそのノード分の計算バワーが減るだけなので、それほど大きな問題になりません。さらに、誰でもノードになることができます。通常のネットワークだと、後から参加する場合には管理者の設定が必要になります。ですが、ブロックチェーンの場合だと、コンピューターにノードになるためのソフトウェアをインストトールする必要がありますが、インストールさえすれば誰でもネットワークに参加できます。このように、ネットワークに誰でも参加でき、一台壊れても全く問題なく動き続きる「システムが落ちない仕組み」になっています。

== 「データ改竄からの復旧の自動化」みんなで見張っている

ここまで、みんなで支え合っているためシステムが落ちない仕組みについて説明しました。しかし、みんなが持っているデータが簡単に改ざんができてしまっては、使い勝手が良いとは言えません。そのような問題が起きないよう、ブロックチェーンには改ざんを検知し自動で復旧する機能が備わっています。次は、どのようにしてデータの改ざんを検知・復旧し、みんなで持ち合っているデータを信頼できるようにしているのか、その仕組みについて説明します。まず、改ざんの検知・復旧の仕組みを学ぶためには、「ハッシュ」と呼ばれる技術を理解する必要があります。ハッシュとはあるデータを変換して得られる固定長のデータのことを指します。そして、この変換を行う部分をハッシュ関数といいます。例えば「ガイアックス」の文字列をSHA-256と呼ばれる代表的なハッシュ関数で変換すると”FD904958D46F1CB85ABFF8FDE5B39237CE5698844A7E4DDF190CADF21AEF2676″というハッシュ値が得られます。ここでいう固定長とは、桁数が常に同じという意味です。どんなに長い文字列を変換しても、同じ桁数の結果が得られます。そして、同じデータを変換すれば毎回同じ結果が得られます。また、ハッシュ関数ではデータを一方方向にしか変換できず、ハッシュ化されたデータから元のデータを導き出すことはほぼ不可能な仕組みになっています。例えば、仮に元のデータを１文字変更して”ガイアック”として生成されるハッシュは全く違うものとなり、似ているところが見つからないので近い文字列をハッシュ化したとはわからない仕組みになっています。すなわち、生成されたハッシュから元のデータを推測することが不可能な仕組みになっているのです。「ハッシュ」についてや、ブロックチェーンでよく使われるハッシュ関数である「RIPEMD-160」「SHA-256」に関して詳しく書いた記事があるのでこちらも参考にしてみてください。この「ハッシュ」技術が、ブロックチェーンにおいて、改ざんの検知、自動復旧に使われているのです。

== 一度書いたら書き換えられない

では、ハッシュ技術を利用してどのように改ざんを検知し復旧しているのか、その方法を見ていきましょう。ブロックチェーンはブロックがチェーン状に「ひとつながり」につながっています。それぞれのブロックには一つ前のブロックデータから生成されたハッシュ値が書き込まれています。ここでのハッシュ値とは、一つ前に書き込まれているデータをハッシュ化した値のことを指し、ブロックの内容をチェックするための使われます。それぞれのブロックが1つ前のブロックのデータをチェックできるハッシュ値を持っていて、それがずっとつながっています。例えば、過去の取引データが改ざんされたとすると、改ざんされたブロックのハッシュ値は変わってしまいます（ハッシュ化する前の値が少しでも変わるとハッシュ値は大きくか変化するため）。すると、その次のブロックに書き込まれているハッシュ値と改ざんされたブロックから計算したハッシュ値も一致しなくなります。この時点で改ざんがあったことが発覚します。仮に、改ざんが発覚しないように書き換えようとすると、不正を行った次のブロックに書き込まれるハッシュ値も書き換えなくてはなりません。すると、その次のブロックに書き込まれるハッシュ値も連鎖的に変える必要があります。この作業を最新のブロックまで行うことになります。このように、改ざんをすることは理論上では可能ですが、それをするだけの労力やコストを考えると可能性が限りなく低いため、改ざんすることは不可能であると言えます。もし、改ざんが検知された場合は、改ざんが起きたデータから後のブロックを自分のノードから消して、他の正常に動いているノードから同期することで正しいデータを持ち直します。このように、データを要約し検算できるハッシュの特徴を活用して、ブロックチェーンでは「データの改ざんの検知・復旧を自動化」できるようになっています。「データの改ざんの検知・復旧を自動化」の話をまとめると、ブロックチェーンに書き込まれたデータがみんなに見張られているということになります。正しいでデータだけが溜まっていくという仕組みになっており、改竄できないようにデータが固められています。さらに、改竄がないかチェックされ続けられています。

==== ここまでのまとめ

 * ブロックチェーンは「自動化」と「仕組み化」によって特定の管理者を不要にした
 * ネットワークに参加するインセンティブを与えネットワークを多重化することでシステムを落ちない仕組みを構築
 * ハッシュ関数を使うことで、データの改竄を検知しやすくしている

最後に、「不正アクセスをさせない仕組み」について説明します。

== 「不正アクセスをさせない仕組み」 特定の管理者がいなくてもチェックする機能

結論から言うと、ブロックチェーンは管理者がいなくてもチェックする機能があることによって、「不正アクセスをさせない仕組み」が成り立っています。この点がブロッックチェーンの特に革命的な点になります。本記事ではビットコインのProof of Workに限定して、管理者がいなくてもチェックする機能を説明します。まずは特定の管理者がいるチェック機構を考えてみましょう。わかりやすい例だと、ある工場で製造された物が問題ないかチェックしてハンコを押すことが当てはまります。ある特定の管理者が検品チェックの押し、誰がチェックしたかを確認できるようになることで、安心感を与えたりチェックが正しいことを証明しています。これに対してブロックチェーンでは誰でもチェックできる仕組みになっています。ブロックを確定する際に「合格」のハンコを押すイメージで、ブロックチェーンにおいては書き込みの際にチェックが行われます。誰がチェックするのか、どのようにチェックするのかなど、ブロックチェーンにおけるチェックについて詳しく説明していきます。

== チェックする人はくじ引きで決まる

チェックする人はくじ引きで決まります。正確にはくじ引きと同じ仕組みで決まり、電子的なくじ引きとイメージして頂くと理解しやすいと思います。そのくじ引きのルールですが、「世界中で同時に挑戦して一人だけあたりが出る」決まりになっています。そして、一人だけあたりが出るように確率を調整するするために、当たりの数を複数用意しています。くじ引きに挑戦する人が多いと当たりの数を減らしたり、逆に挑戦する人が少ない場合にはあたりの数を増やして、10分に1人だけあたりが出るように調整しています。さらに、くじ引きに挑戦する人には誰でも平等に当たるチャンスがあります。では、なぜこのくじ引きに参加するのか。その理由について説明していきます。まず前提として、くじ引きに当たった人だけが、取引が記録されているブロック承認の仕事の権利が与えられます。そして、その仕事に対しては報酬が支払われます。例えば、Bitocoinの場合だと、そのブロックを承認するという仕事に対する報酬は6.25BTCとなっており、円換算すると約3500万円（2021年4月当時）になります。この報酬をモチベーションにくじ引きに参加しています。このように特定の人を信頼することなく、100人でも1億人でも不特定多数の参加者で平等に合意形成できる方法になっています。チェックする人の決め方とチェックに参加するインセンティブが分かったところで、次はチェックの手順について説明していきます。

== 書き込みの確定にはチャレンジが必要

ブロックチェーンへのデータの書き込みは2段階に別れています。１段階目は、「書き込み待ち」の取引データを行列に並べることです。

例えば、

「AからBに100コイン送金」
「AからCに20コイン送金」
「BからDに80コイン送金」
・・・・

といった形で、取引データを確定してもらえるように順番に並べてあります。そして、書き込んで欲しいデータをどんどん追加して行列を作っていきます。2段階目は書き込み待ちのデータを確定させます。データの書き込みはノードが行います。ノードは書き込むために、書き込み待ちの行列からいくつかの取引データをピックします。そして、その引きデータを元に書き込みのチャレンジを行い成功したら書き込みを確定できます。書き込みが確定したら他のノードに新しいブロックが共有されてネットワーク間でデータの同期がなされます。ここで、注意したいことは書き込みを確定するノードと取引データの書き込みを要求する人は同じ人ではないということです。ブロックチェーンで取引をするためにはノードになる必要はありますか？とよく質問をいただくのですが、取引をするだけならばノードになる必要はありません。では、どのような書き込みチャレンジをしているのでしょうか。その仕組みについて説明していきます。

== くじ引きチャレンジはナンスを見つけること（マイニング）

書き込みチャレンジは下記の手順で行われます。

① 書き込み待ち行列の中から、書き込む取引データを選ぶ
② 選んだ取引データのブロックに対して、適当な数値をたす（ex. 1）
③ ①と②のデータをハッシュ関数にかけて、ハッシュ値を取得する
④ ハッシュ値をみて成功か失敗を判断する
⑤ 失敗だった場合は適当な値を変えて再挑戦
⑥ 適当な数値を変更する（ex. 2）
⑦ 今回は①と⑥のデータをハッシュ関数にかけて、ハッシュ値を取得する
⑧ 成功のハッシュ値を取得
⑨ 「①取引データ」「⑥適当な数値」を書き込み、ブロックを確定する
⑩ 書き込んだ内容を他のノードに共有する

この手順のなかで、適当な数値のことを「ナンス」と呼び、書き込みチャレンジは適当な数値を変更し繰り返し計算をすることで、「ナンス」を見つけることになります。そして、このナンスを探す行為のことをマイニングと読んでいます。

== 分岐した場合は長いチェーンが採用される

ナンスを見つけると書き込みを確定できると説明しました。しかし、多くの参加者がいる中で、稀に複数の参加者が同時にナンスを見つけること発生します。実は、世界中で同じ取引を確定しようとしているわけではなく、確定させる取引はマイナーによって違います。その状態で、複数の人が同時にナンスを見つけると、ネットワークの参加者間で違う取引ブロックが共有されてしまい、ブロックチェーンが分岐してしまいます。チェーンが分岐することで起こる問題として、2重支払いが発生する可能性があります。例えばAさんの残高が5BTCだったとして、一方のブロックではAさからBさんに3BTC送金、もう一方のブロックではAさんからCさんに3BTC送金した取引が確定したとしましょう。5BTCしか持っていなかったAさんが6BTC送金したことになり、残高以上の送金ができてしまいます。これが分岐による二重支払いの問題です。二重支払いの問題を防ぐために、分岐が見つかった場合は、それぞれの分岐後のチェーンの長さを比較して、一番長いチェーンが採用される仕組みになっています。長いチェーンほど、多くの承認を得られており、それだけ分だけ多くの計算がなされたことになります。よって、そちらのほうが信頼度が高い情報であるという考え方で、長いチェーンを採用するルールになっています。ここまでのブロックチェーンの説明をまとめると、「ブロックチェーンとはみんなで使える信頼のおける台帳」と言うことになります。

==== ここまでのまとめ

 * ブロックチェーンは管理者がいなくてもチェックする機能がある
 * ブロックチェーンへの書き込みをする権利はくじ引きと同じ仕組みで決まる
 * 書き込みに対して報酬があるので、書き込みチャレンジに参加する
 * 書き込みチャレンジは適当な数値を変更し繰り返し計算をすることで、「ナンス」を見つける作業のこと

ここからはブロックチェーンがあることによって成り立つ仕組みなどについて紹介していきます。

== 契約を自動執行するスマートコントラクト

ブロックチェーンを理解するために重要な機能として「スマートコントラクト」があります。スマートコントラクトは「洗練された（スマート）契約（コントラクト）」と訳すことができ、契約の締結から履行までを自動的に実行させるプロトコルのことを指します。簡単に言い換えるとプログラム化された契約になります。このスマートコントラクトはブロックチェーンと組み合わせることで大きな力を発揮します。ブロックチェーンに書き込む処理や、ブロックチェーンのデータを読み込む処理などの条件を事前に定義しておき、条件に合った場合に自動的に執行するプログラムとして動作させることができます。要するに、条件を予め定義しておいて書き込んでおき、条件を満たしたらその結果にブロックチェーンに書き込むわけです。そして、このスマートコントラクトのプログラム自身もブロックチェーンに書き込まれており、そのプログラムがどのようなものかを確認する事ができ、かつそのプログラムを誰も書き換えることができない信頼できるプログラムとして記録されます。また、ブロックチェーンはお金の台帳と連動しているため、プログラムの実行と同時にお金の移動も行うことができます。これは今までの台帳やプログラムになかった大きなメリットになります。このように、スマートコントラクトがあることによって、ブロックチェーンに書き込む内容が同じであれば、誰が利用してもその結果も同じになり、特定の誰かを信用することなくブロックチェーンを利用することができます。例えば、レストランに星をつけるレイティングサービスにスマートコントラクトを使うと、レート算出アルゴリズムも、評価もすべてブロックチェーンに記載されるため、信頼できるレイティングサービスを作ることができます。加えて、スマートコントラクトは取引プロセス自動化するため様々な分野に応用できると考えられています。例えば、金融領域はお金に紐ずいた契約や制度に基づいて確実に処理することが強く求められる世界であるので、スマートコントラクトと相性が良いと考えられています。また、非金融の分野では、電力取引や不動産登記、シェアリングエコノミー、IoTなどの契約を伴う取引活動全般へスマートコントラクトの活用が見込まれています。

== 中央集権がなく自律して動き続ける組織 DAO

そして、このスマートコントラクトの最大のユースケースがDAOです。DAOとはDecentralized Autonomous Organizationの略で、最初に定められた一定のルールに則って、企業や団体などの中央集権がなくても、自律して動き続ける組織のことを指します。この最初に定める一定のルールをスマートコントラクトのプログラムで記述することによって、様々なルールの執行が自動化することができます。特に、このルールがスマートコントラクトに書かれるメリットは、ルールがブロックチェーンに書き込まれることによって簡単に変更ができないことです。このルールが不正に書き換えられない信用のおける台帳に置かれることにより、DAOを実現する事ができるようになります。実際に、ビットコインは中央集権がなく参加者同士で様々な取り決めがなされておりDAOの形態で運営されています。

== まとめ

ここまでブロックチェーンについて説明してきましたが、その特徴を簡単にまとめると

・不変性：事実上データを永続的に持つことができる

・公共性：誰でもアクセスできるため複数間で簡単にデータの共有ができる

・透明性：取引をプログラムで管理し、誰でも取引を閲覧でき検証できる

・トレーダブル：権利の移転がの移転が簡単にできる

・高い耐障害性：P2Pで分散的に成り立ってるのでアクセス過多によるシステムダウンが起きない

などが挙げられます。このようなブロックチェーンの特性を生かしてサプライチェーンでのデータ管理、個人情報を含めたID管理、証券や財産の証券化、IoT機器との連携、など多くの分野で活用が期待されています。経産省の調査によるとブロックチェーンが影響する市場規模は67兆円との試算も出ています。
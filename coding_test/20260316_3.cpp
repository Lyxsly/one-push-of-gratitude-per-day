#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
using namespace std;

int main()
{
    int N;
    if (!(cin >> N))
    {
        cout << "Invalid input. Please enter an integer." << endl;
        return 1; // Exit with an error code
    }
    map<string, vector<pair<string, int>>> graph; // map<反応単語,vector<pair<投稿単語,ユーザーID>>>

    set<string> candidates; // とりあえず全ての単語を試すための集合

    for (int i = 0; i < N; i++)
    {
        string trigger, post;
        cin >> trigger >> post;
        graph[trigger].push_back({post, i});

        candidates.insert(trigger);
        candidates.insert(post);
    }

    int max_users = -1;
    string best_word = "";

    for (const string &start_word : candidates)
    {

        // ユーザーが投稿済みかどうかをチェックする名簿（最初は全員false）
        vector<bool> has_posted(N, false);
        int current_users_count = 0;

        // これから処理する単語を入れる待ち行列（キュー）
        queue<string> q;
        q.push(start_word);

        // 連鎖が止まる（キューが空になる）まで繰り返す
        while (!q.empty())
        {
            // キューの先頭から単語を取り出す
            string current_word = q.front();
            q.pop();

            // その単語に反応するユーザー達を辞書から引いて全員チェック
            for (const auto &edge : graph[current_word])
            {
                string next_word = edge.first; // ユーザーが投稿する単語
                int user_id = edge.second;     // ユーザーのID

                // もしこのユーザーがまだ投稿していなかったら
                if (!has_posted[user_id])
                {
                    has_posted[user_id] = true; // 投稿済みにする
                    current_users_count++;      // 投稿した人数をカウントアップ

                    // 新しく投稿された単語を、次の連鎖のためにキューに入れる
                    q.push(next_word);
                }
            }
        }

        // 今回のシミュレーション結果が、今までの最大人数より多かったら更新！
        // （setのおかげで辞書順に試しているので、同点の場合は最初のものが自動的に残ります）
        if (current_users_count > max_users)
        {
            max_users = current_users_count;
            best_word = start_word;
        }
    }

    // 最もバズった単語を出力！
    cout << best_word << "\n";

    return 0;
}
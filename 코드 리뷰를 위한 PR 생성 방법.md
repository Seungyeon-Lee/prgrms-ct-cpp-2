# 코드 리뷰를 위한 PR 생성 방법

## GIT fork & clone (1회만 실행)

1. 공통 저장소를 자신의 계정으로 fork 받습니다.
   * 저장소 우측 상단의 **Fork** 버튼 클릭!

2. Fork된 저장소(공통 저장소 아님)를 로컬 PC로 clone 합니다.
   * 먼저 GIT 소스 코드를 저장할 폴더를 선택합니다. (e.g. C:\coding\폴더)
   * 해당 폴더에서 ```git clone https://github.com/<본인ID>/prgrms-ct-cpp2-2.git``` 명령을 입력합니다. (git 프로그램이 미리 설치되어 있어야 합니다.)
   * 현재 폴더 아래에 ```prgrms-ct-cpp2-2.git``` 폴더가 생성되고, 이 폴더로 이동해서 코딩 작업을 수행합니다.

## 커밋 작성 및 PR 생성 (매 문제마다 수행)

1. 문제풀이를 할 브랜치를 생성합니다.
   * 브랜치 이름은 '본인닉네임_주차_문제번호' 형식으로 작성합니다.
   * e.g.) ```git branch sunkyoo_week1_1```

2. 새로 생성한 브렌치로 이동합니다.
   * e.g.) ```git checkout sunkyoo_week1_1```

3. 문제 풀이 코드를 작성합니다.
   * e.g.) week1/01_next_big_num/next_big_num.cpp 파일을 수정합니다.

4. 수정된 소스 코드를 add, commit 합니다.
   * 변경한 파일 추가하기: ```git add week1/01_next_big_num/next_big_num.cpp``` 또는 ```git add .```
   * 커밋 만들기: ```git commit -m "Solved week1_1"```

5. GitHub 자기 계정에 push 합니다.
   * e.g.) ```git push origin sunkyoo_week1_1```
   * 이 경우, 자기 GitHub 계정에 ```sunkyoo_week1_1``` 브랜치가 새로 생성되면서 변경된 코드가 저장됩니다.

6. 웹브라우저에서 fork한 저장소로 돌아와 [Compare & Pull Request] 버튼을 클릭하여 PR을 생성합니다.
   * 왼쪽의 base repository가 공통저장소의 master 이고 
    오른쪽의 compare 대상이 PR을 보낼 브랜치가 맞는지 확인합니다.
   * PR 제목은 '[x주차] 이름 - 문제이름' 형식으로 작성합니다. (e.g.) [1주차] 황선규 - 다음 큰 숫자
   * 한 문제씩 (즉, 한 브랜치씩) PR을 생성합니다.
   * PR 코멘트는 자신이 수정한 내용, 코드 작성 방법, 질문 사항 등을 충분히 작성합니다.

7.  [Create pull request] 버튼을 클릭하여 PR을 보냅니다.

8.  이제 리더가 남겨주는 피드백을 확인하며 만족할만한 소스가 될 때 까지 push한다. 

## 주의사항

* PR된 코드는 코드리뷰로만 사용될 뿐 원본저장소에 merge되지는 않습니다.
* 원본 저장소에 직접 merge하거나 push하지 않습니다. 실수로 잘못 머지했을 경우 Revert 기능을 이용하여 직접 수정하세요. (참고링크: 
[https://docs.github.com/en/enterprise/2.13/user/articles/reverting-a-pull-request](https://docs.github.com/en/enterprise/2.13/user/articles/reverting-a-pull-request) )
* 코드 리뷰는 스터디원 누구나 가능합니다. 서로의 코드를 리뷰하고 의견을 나눠주세요.

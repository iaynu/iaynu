### YJ

LLM 애플리케이션과 데이터 파이프라인을 주로 다룹니다.
노트북에서 끝나는 코드보다, 실행 조건과 테스트가 붙어 있는 코드를 만드는 데 관심이 있습니다.

**지금 하는 것**

팀 프로젝트에서 제가 맡았던 부분을, 원본의 결함을 찾아 고치면서 재현 가능한 패키지로 다시 만들고 있습니다.
공공데이터를 이용한 제조 설비 이상탐지 파이프라인을 준비 중입니다.

**프로젝트**

[**korean-medical-rag**](https://github.com/iaynu/korean-medical-rag) — 한국어 하이브리드 RAG

BM25 토크나이저가 조사 때문에 사실상 동작하지 않던 문제를 문자 n-gram으로 해결하고, 순위 정보를 버리던 후보 병합을 RRF 융합으로 교체했습니다. 같은 ID로 서로 다른 문서가 덮어써지던 것도 함께 잡았습니다. 테스트 231건.

[**stt-text-embedding-pipeline**](https://github.com/iaynu/stt-text-embedding-pipeline) — 119 신고 STT 텍스트 임베딩

파일마다 다른 3종 JSON 스키마를 분기 대신 구조 탐색으로 흡수하고, 임베딩을 디스크에 쓰기 전에 NaN·Inf·영벡터를 검출합니다. 파일 20,041건 중 19,904건 처리, 실패 137건은 사유별로 기록됩니다. 테스트 76건.

**주로 쓰는 것**

Python · FastAPI · Celery / Redis · PyTorch · Transformers · LangChain · SQL (Oracle, PostgreSQL)

**자격증**

정보처리기사 · SQLD · ADsP

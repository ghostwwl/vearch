// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_RESPONSE_GAMMA_API_H_
#define FLATBUFFERS_GENERATED_RESPONSE_GAMMA_API_H_

#include "flatbuffers/flatbuffers.h"

namespace gamma_api {

struct Attribute;

struct ResultItem;

struct SearchResult;

struct Response;

enum SearchResultCode {
  SUCCESS = 0,
  INDEX_NOT_TRAINED = 1,
  SEARCH_ERROR = 2
};

inline const SearchResultCode (&EnumValuesSearchResultCode())[3] {
  static const SearchResultCode values[] = {
    SUCCESS,
    INDEX_NOT_TRAINED,
    SEARCH_ERROR
  };
  return values;
}

inline const char * const *EnumNamesSearchResultCode() {
  static const char * const names[] = {
    "SUCCESS",
    "INDEX_NOT_TRAINED",
    "SEARCH_ERROR",
    nullptr
  };
  return names;
}

inline const char *EnumNameSearchResultCode(SearchResultCode e) {
  if (e < SUCCESS || e > SEARCH_ERROR) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesSearchResultCode()[index];
}

struct Attribute FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4,
    VT_VALUE = 6
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const flatbuffers::Vector<uint8_t> *value() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_VALUE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyOffset(verifier, VT_VALUE) &&
           verifier.VerifyVector(value()) &&
           verifier.EndTable();
  }
};

struct AttributeBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Attribute::VT_NAME, name);
  }
  void add_value(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> value) {
    fbb_.AddOffset(Attribute::VT_VALUE, value);
  }
  explicit AttributeBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  AttributeBuilder &operator=(const AttributeBuilder &);
  flatbuffers::Offset<Attribute> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Attribute>(end);
    return o;
  }
};

inline flatbuffers::Offset<Attribute> CreateAttribute(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> value = 0) {
  AttributeBuilder builder_(_fbb);
  builder_.add_value(value);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<Attribute> CreateAttributeDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    const std::vector<uint8_t> *value = nullptr) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto value__ = value ? _fbb.CreateVector<uint8_t>(*value) : 0;
  return gamma_api::CreateAttribute(
      _fbb,
      name__,
      value__);
}

struct ResultItem FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SCORE = 4,
    VT_ATTRIBUTES = 6,
    VT_EXTRA = 8
  };
  double score() const {
    return GetField<double>(VT_SCORE, 0.0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<Attribute>> *attributes() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Attribute>> *>(VT_ATTRIBUTES);
  }
  const flatbuffers::String *extra() const {
    return GetPointer<const flatbuffers::String *>(VT_EXTRA);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<double>(verifier, VT_SCORE) &&
           VerifyOffset(verifier, VT_ATTRIBUTES) &&
           verifier.VerifyVector(attributes()) &&
           verifier.VerifyVectorOfTables(attributes()) &&
           VerifyOffset(verifier, VT_EXTRA) &&
           verifier.VerifyString(extra()) &&
           verifier.EndTable();
  }
};

struct ResultItemBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_score(double score) {
    fbb_.AddElement<double>(ResultItem::VT_SCORE, score, 0.0);
  }
  void add_attributes(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Attribute>>> attributes) {
    fbb_.AddOffset(ResultItem::VT_ATTRIBUTES, attributes);
  }
  void add_extra(flatbuffers::Offset<flatbuffers::String> extra) {
    fbb_.AddOffset(ResultItem::VT_EXTRA, extra);
  }
  explicit ResultItemBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ResultItemBuilder &operator=(const ResultItemBuilder &);
  flatbuffers::Offset<ResultItem> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ResultItem>(end);
    return o;
  }
};

inline flatbuffers::Offset<ResultItem> CreateResultItem(
    flatbuffers::FlatBufferBuilder &_fbb,
    double score = 0.0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Attribute>>> attributes = 0,
    flatbuffers::Offset<flatbuffers::String> extra = 0) {
  ResultItemBuilder builder_(_fbb);
  builder_.add_score(score);
  builder_.add_extra(extra);
  builder_.add_attributes(attributes);
  return builder_.Finish();
}

inline flatbuffers::Offset<ResultItem> CreateResultItemDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    double score = 0.0,
    const std::vector<flatbuffers::Offset<Attribute>> *attributes = nullptr,
    const char *extra = nullptr) {
  auto attributes__ = attributes ? _fbb.CreateVector<flatbuffers::Offset<Attribute>>(*attributes) : 0;
  auto extra__ = extra ? _fbb.CreateString(extra) : 0;
  return gamma_api::CreateResultItem(
      _fbb,
      score,
      attributes__,
      extra__);
}

struct SearchResult FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TOTAL = 4,
    VT_RESULT_CODE = 6,
    VT_MSG = 8,
    VT_RESULT_ITEMS = 10
  };
  int32_t total() const {
    return GetField<int32_t>(VT_TOTAL, 0);
  }
  SearchResultCode result_code() const {
    return static_cast<SearchResultCode>(GetField<int8_t>(VT_RESULT_CODE, 0));
  }
  const flatbuffers::String *msg() const {
    return GetPointer<const flatbuffers::String *>(VT_MSG);
  }
  const flatbuffers::Vector<flatbuffers::Offset<ResultItem>> *result_items() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<ResultItem>> *>(VT_RESULT_ITEMS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_TOTAL) &&
           VerifyField<int8_t>(verifier, VT_RESULT_CODE) &&
           VerifyOffset(verifier, VT_MSG) &&
           verifier.VerifyString(msg()) &&
           VerifyOffset(verifier, VT_RESULT_ITEMS) &&
           verifier.VerifyVector(result_items()) &&
           verifier.VerifyVectorOfTables(result_items()) &&
           verifier.EndTable();
  }
};

struct SearchResultBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_total(int32_t total) {
    fbb_.AddElement<int32_t>(SearchResult::VT_TOTAL, total, 0);
  }
  void add_result_code(SearchResultCode result_code) {
    fbb_.AddElement<int8_t>(SearchResult::VT_RESULT_CODE, static_cast<int8_t>(result_code), 0);
  }
  void add_msg(flatbuffers::Offset<flatbuffers::String> msg) {
    fbb_.AddOffset(SearchResult::VT_MSG, msg);
  }
  void add_result_items(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<ResultItem>>> result_items) {
    fbb_.AddOffset(SearchResult::VT_RESULT_ITEMS, result_items);
  }
  explicit SearchResultBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  SearchResultBuilder &operator=(const SearchResultBuilder &);
  flatbuffers::Offset<SearchResult> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<SearchResult>(end);
    return o;
  }
};

inline flatbuffers::Offset<SearchResult> CreateSearchResult(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t total = 0,
    SearchResultCode result_code = SUCCESS,
    flatbuffers::Offset<flatbuffers::String> msg = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<ResultItem>>> result_items = 0) {
  SearchResultBuilder builder_(_fbb);
  builder_.add_result_items(result_items);
  builder_.add_msg(msg);
  builder_.add_total(total);
  builder_.add_result_code(result_code);
  return builder_.Finish();
}

inline flatbuffers::Offset<SearchResult> CreateSearchResultDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t total = 0,
    SearchResultCode result_code = SUCCESS,
    const char *msg = nullptr,
    const std::vector<flatbuffers::Offset<ResultItem>> *result_items = nullptr) {
  auto msg__ = msg ? _fbb.CreateString(msg) : 0;
  auto result_items__ = result_items ? _fbb.CreateVector<flatbuffers::Offset<ResultItem>>(*result_items) : 0;
  return gamma_api::CreateSearchResult(
      _fbb,
      total,
      result_code,
      msg__,
      result_items__);
}

struct Response FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_RESULTS = 4,
    VT_ONLINE_LOG_MESSAGE = 6
  };
  const flatbuffers::Vector<flatbuffers::Offset<SearchResult>> *results() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<SearchResult>> *>(VT_RESULTS);
  }
  const flatbuffers::String *online_log_message() const {
    return GetPointer<const flatbuffers::String *>(VT_ONLINE_LOG_MESSAGE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_RESULTS) &&
           verifier.VerifyVector(results()) &&
           verifier.VerifyVectorOfTables(results()) &&
           VerifyOffset(verifier, VT_ONLINE_LOG_MESSAGE) &&
           verifier.VerifyString(online_log_message()) &&
           verifier.EndTable();
  }
};

struct ResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_results(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<SearchResult>>> results) {
    fbb_.AddOffset(Response::VT_RESULTS, results);
  }
  void add_online_log_message(flatbuffers::Offset<flatbuffers::String> online_log_message) {
    fbb_.AddOffset(Response::VT_ONLINE_LOG_MESSAGE, online_log_message);
  }
  explicit ResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ResponseBuilder &operator=(const ResponseBuilder &);
  flatbuffers::Offset<Response> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Response>(end);
    return o;
  }
};

inline flatbuffers::Offset<Response> CreateResponse(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<SearchResult>>> results = 0,
    flatbuffers::Offset<flatbuffers::String> online_log_message = 0) {
  ResponseBuilder builder_(_fbb);
  builder_.add_online_log_message(online_log_message);
  builder_.add_results(results);
  return builder_.Finish();
}

inline flatbuffers::Offset<Response> CreateResponseDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<SearchResult>> *results = nullptr,
    const char *online_log_message = nullptr) {
  auto results__ = results ? _fbb.CreateVector<flatbuffers::Offset<SearchResult>>(*results) : 0;
  auto online_log_message__ = online_log_message ? _fbb.CreateString(online_log_message) : 0;
  return gamma_api::CreateResponse(
      _fbb,
      results__,
      online_log_message__);
}

inline const gamma_api::Response *GetResponse(const void *buf) {
  return flatbuffers::GetRoot<gamma_api::Response>(buf);
}

inline const gamma_api::Response *GetSizePrefixedResponse(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<gamma_api::Response>(buf);
}

inline bool VerifyResponseBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<gamma_api::Response>(nullptr);
}

inline bool VerifySizePrefixedResponseBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<gamma_api::Response>(nullptr);
}

inline void FinishResponseBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<gamma_api::Response> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedResponseBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<gamma_api::Response> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace gamma_api

#endif  // FLATBUFFERS_GENERATED_RESPONSE_GAMMA_API_H_
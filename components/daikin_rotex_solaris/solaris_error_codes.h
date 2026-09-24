// AUTO-GENERATED FILE: Do not edit manually!
// Generated from translations.py by __init__.py during build
// Language: IT

namespace esphome {
namespace daikin_rotex_solaris {

// Struct to hold error code and description pairs
struct SolarisErrorCodes {
  char code;               // Single character error code (K, R, S, V, D, G, F, W, or \0)
  const char *description; // Pointer to error description string in the selected language
};

// Error codes only for the selected language
static const SolarisErrorCodes ERROR_CODES[] = {
  {'\0', "Nessun errore"},
  {'K', "Sensore temperatura collettore"},
  {'R', "Sensore temperatura ritorno"},
  {'S', "Sensore temperatura accumulo"},
  {'D', "Sensore portata"},
  {'V', "Sensore temperatura mandata"},
  {'G', "Errore convertitore A/D / Errore tensione di alimentazione / Errore tensione di riferimento"},
  {'F', "Portata minima V1 non raggiunta durante l'avvio dopo il tempo 'P2' trascorso"},
  {'W', "Portata minima V1 non raggiunta durante l'avvio dopo il tempo 'P2' trascorso"},
  {'\x00', "Errore sconosciuto"},
};

// Calculate array size at compile time
static constexpr size_t ERROR_CODES_COUNT = sizeof(ERROR_CODES) / sizeof(ERROR_CODES[0]);
// Index of the "unknown" fallback entry (always the last one)
static constexpr size_t UNKNOWN_ERROR_INDEX = ERROR_CODES_COUNT - 1;

} // namespace daikin_rotex_solaris
} // namespace esphome
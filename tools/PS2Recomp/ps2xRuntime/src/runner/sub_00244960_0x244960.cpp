#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00244960
// Address: 0x244960 - 0x244d28
void sub_00244960_0x244960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244960_0x244960");
#endif

    ctx->pc = 0x244960u;

    // 0x244960: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x244960u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244964: 0x3c06005c  lui         $a2, 0x5C
    ctx->pc = 0x244964u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
    // 0x244968: 0xc5a00080  lwc1        $f0, 0x80($t5)
    ctx->pc = 0x244968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24496c: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x24496cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x244970: 0x8dae0060  lw          $t6, 0x60($t5)
    ctx->pc = 0x244970u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 96)));
    // 0x244974: 0x24821050  addiu       $v0, $a0, 0x1050
    ctx->pc = 0x244974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4176));
    // 0x244978: 0xe4801050  swc1        $f0, 0x1050($a0)
    ctx->pc = 0x244978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5C1050u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C1050u, _value); } while (0); }
    // 0x24497c: 0x24c31060  addiu       $v1, $a2, 0x1060
    ctx->pc = 0x24497cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4192));
    // 0x244980: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x244980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5C1054u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C1054u, _value); } while (0); }
    // 0x244984: 0x3c08005c  lui         $t0, 0x5C
    ctx->pc = 0x244984u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)92 << 16));
    // 0x244988: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x244988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5C105Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C105Cu, _value); } while (0); }
    // 0x24498c: 0x25051080  addiu       $a1, $t0, 0x1080
    ctx->pc = 0x24498cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4224));
    // 0x244990: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x244990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5C1058u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C1058u, _value); } while (0); }
    // 0x244994: 0x3c0a005c  lui         $t2, 0x5C
    ctx->pc = 0x244994u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)92 << 16));
    // 0x244998: 0x25441090  addiu       $a0, $t2, 0x1090
    ctx->pc = 0x244998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 4240));
    // 0x24499c: 0x3c07005c  lui         $a3, 0x5C
    ctx->pc = 0x24499cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)92 << 16));
    // 0x2449a0: 0xc5a10084  lwc1        $f1, 0x84($t5)
    ctx->pc = 0x2449a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2449a4: 0x24e910a0  addiu       $t1, $a3, 0x10A0
    ctx->pc = 0x2449a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4256));
    // 0x2449a8: 0x3c0c005c  lui         $t4, 0x5C
    ctx->pc = 0x2449a8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)92 << 16));
    // 0x2449ac: 0xe0782d  daddu       $t7, $a3, $zero
    ctx->pc = 0x2449acu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2449b0: 0xe4c11060  swc1        $f1, 0x1060($a2)
    ctx->pc = 0x2449b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5C1060u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C1060u, _value); } while (0); }
    // 0x2449b4: 0x258b1120  addiu       $t3, $t4, 0x1120
    ctx->pc = 0x2449b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 4384));
    // 0x2449b8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2449b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5C1064u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C1064u, _value); } while (0); }
    // 0x2449bc: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x2449bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5C106Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C106Cu, _value); } while (0); }
    // 0x2449c0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2449c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5C1068u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C1068u, _value); } while (0); }
    // 0x2449c4: 0xc5c0000c  lwc1        $f0, 0xC($t6)
    ctx->pc = 0x2449c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2449c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2449c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2449cc: 0xe5001080  swc1        $f0, 0x1080($t0)
    ctx->pc = 0x2449ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5C1080u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C1080u, _value); } while (0); }
    // 0x2449d0: 0xc5c10010  lwc1        $f1, 0x10($t6)
    ctx->pc = 0x2449d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2449d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2449d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2449d8: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x2449d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5C1084u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C1084u, _value); } while (0); }
    // 0x2449dc: 0xc5a0008c  lwc1        $f0, 0x8C($t5)
    ctx->pc = 0x2449dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2449e0: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x2449e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5C108Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C108Cu, _value); } while (0);
    // 0x2449e4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2449e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5C1088u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C1088u, _value); } while (0); }
    // 0x2449e8: 0xad401090  sw          $zero, 0x1090($t2)
    ctx->pc = 0x2449e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5C1090u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C1090u, _value); } while (0);
    // 0x2449ec: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2449ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5C1094u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C1094u, _value); } while (0);
    // 0x2449f0: 0xc5a00090  lwc1        $f0, 0x90($t5)
    ctx->pc = 0x2449f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2449f4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2449f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5C109Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C109Cu, _value); } while (0);
    // 0x2449f8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2449f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5C1098u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C1098u, _value); } while (0); }
    // 0x2449fc: 0x8dc50000  lw          $a1, 0x0($t6)
    ctx->pc = 0x2449fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x244a00: 0x8dc3000c  lw          $v1, 0xC($t6)
    ctx->pc = 0x244a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x244a04: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x244a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x244a08: 0x85c4001c  lh          $a0, 0x1C($t6)
    ctx->pc = 0x244a08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x244a0c: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x244a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x244a10: 0x237c2  srl         $a2, $v0, 31
    ctx->pc = 0x244a10u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x244a14: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x244a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x244a18: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x244a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x244a1c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x244a1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x244a20: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x244a20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x244a24: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x244a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
    // 0x244a28: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x244a28u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x244a2c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x244a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x244a30: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x244a30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244a34: 0x0  nop
    ctx->pc = 0x244a34u;
    // NOP
    // 0x244a38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x244a38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x244a3c: 0xe4e010a0  swc1        $f0, 0x10A0($a3)
    ctx->pc = 0x244a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4256), bits); }
    // 0x244a40: 0x8dc50000  lw          $a1, 0x0($t6)
    ctx->pc = 0x244a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x244a44: 0x8dc30010  lw          $v1, 0x10($t6)
    ctx->pc = 0x244a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x244a48: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x244a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x244a4c: 0x85c4001e  lh          $a0, 0x1E($t6)
    ctx->pc = 0x244a4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 30)));
    // 0x244a50: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x244a50u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x244a54: 0x237c2  srl         $a2, $v0, 31
    ctx->pc = 0x244a54u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x244a58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x244a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x244a5c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x244a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x244a60: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x244a60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x244a64: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x244a64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x244a68: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x244a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
    // 0x244a6c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x244a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x244a70: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x244a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x244a74: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x244a74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244a78: 0x0  nop
    ctx->pc = 0x244a78u;
    // NOP
    // 0x244a7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x244a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x244a80: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x244a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x244a84: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x244a84u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x244a88: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x244a88u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x244a8c: 0x8dc50000  lw          $a1, 0x0($t6)
    ctx->pc = 0x244a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x244a90: 0x85c4001c  lh          $a0, 0x1C($t6)
    ctx->pc = 0x244a90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x244a94: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x244a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x244a98: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x244a98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x244a9c: 0x8cc64180  lw          $a2, 0x4180($a2)
    ctx->pc = 0x244a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4180u));
    // 0x244aa0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x244aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x244aa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x244aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x244aa8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x244aa8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x244aac: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x244aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
    // 0x244ab0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x244ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x244ab4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x244ab4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244ab8: 0x0  nop
    ctx->pc = 0x244ab8u;
    // NOP
    // 0x244abc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x244abcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x244ac0: 0xe5801120  swc1        $f0, 0x1120($t4)
    ctx->pc = 0x244ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4384), bits); }
    // 0x244ac4: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x244ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x244ac8: 0x85c4001e  lh          $a0, 0x1E($t6)
    ctx->pc = 0x244ac8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 30)));
    // 0x244acc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x244accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x244ad0: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x244ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x244ad4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x244ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x244ad8: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x244ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
    // 0x244adc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x244adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x244ae0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x244ae0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x244ae4: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x244ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
    // 0x244ae8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x244ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x244aec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x244aecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244af0: 0x0  nop
    ctx->pc = 0x244af0u;
    // NOP
    // 0x244af4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x244af4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x244af8: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x244AF8u;
    {
        const bool branch_taken_0x244af8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x244AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AF8u;
        // 0x244afc: 0xe5600004  swc1        $f0, 0x4($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x244af8) {
            ctx->pc = 0x244B2Cu;
            goto label_244b2c;
        }
    }
    ctx->pc = 0x244B00u;
    // 0x244b00: 0xc5a10084  lwc1        $f1, 0x84($t5)
    ctx->pc = 0x244b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244b04: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x244b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x244b08: 0x3c01c37f  lui         $at, 0xC37F
    ctx->pc = 0x244b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50047 << 16));
    // 0x244b0c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x244b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x244b10: 0xe441107c  swc1        $f1, 0x107C($v0)
    ctx->pc = 0x244b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5C107Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C107Cu, _value); } while (0); }
    // 0x244b14: 0xc5a00084  lwc1        $f0, 0x84($t5)
    ctx->pc = 0x244b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244b18: 0xc5a10088  lwc1        $f1, 0x88($t5)
    ctx->pc = 0x244b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244b1c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x244b1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x244b20: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x244b20u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[0]);
    // 0x244b24: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x244B24u;
    {
        const bool branch_taken_0x244b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B24u;
        // 0x244b28: 0x2443107c  addiu       $v1, $v0, 0x107C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b24) {
            ctx->pc = 0x244B54u;
            goto label_244b54;
        }
    }
    ctx->pc = 0x244B2Cu;
label_244b2c:
    // 0x244b2c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x244b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x244b30: 0xc4214184  lwc1        $f1, 0x4184($at)
    ctx->pc = 0x244b30u;
    { uint32_t bits = FAST_READ32(0x6B4184u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244b34: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x244b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x244b38: 0x3c01c37f  lui         $at, 0xC37F
    ctx->pc = 0x244b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50047 << 16));
    // 0x244b3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x244b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x244b40: 0x2443107c  addiu       $v1, $v0, 0x107C
    ctx->pc = 0x244b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4220));
    // 0x244b44: 0xe441107c  swc1        $f1, 0x107C($v0)
    ctx->pc = 0x244b44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5C107Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C107Cu, _value); } while (0); }
    // 0x244b48: 0xc5a00088  lwc1        $f0, 0x88($t5)
    ctx->pc = 0x244b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244b4c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x244b4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x244b50: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x244b50u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[1]);
label_244b54:
    // 0x244b54: 0xe462fffc  swc1        $f2, -0x4($v1)
    ctx->pc = 0x244b54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
    // 0x244b58: 0xc5e410a0  lwc1        $f4, 0x10A0($t7)
    ctx->pc = 0x244b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x244b5c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x244b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x244b60: 0x3c01457f  lui         $at, 0x457F
    ctx->pc = 0x244b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17791 << 16));
    // 0x244b64: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x244b64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x244b68: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x244b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x244b6c: 0xc5a00084  lwc1        $f0, 0x84($t5)
    ctx->pc = 0x244b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244b70: 0x46043881  sub.s       $f2, $f7, $f4
    ctx->pc = 0x244b70u;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x244b74: 0xc5a10080  lwc1        $f1, 0x80($t5)
    ctx->pc = 0x244b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244b78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x244b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x244b7c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x244b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x244b80: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x244b80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x244b84: 0x46022036  c.le.s      $f4, $f2
    ctx->pc = 0x244b84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244b88: 0x46003143  div.s       $f5, $f6, $f0
    ctx->pc = 0x244b88u;
    ctx->f[5] = FPU_DIV_S(ctx, ctx->f[6], ctx->f[0]);
    // 0x244b8c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x244B8Cu;
    {
        const bool branch_taken_0x244b8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B8Cu;
        // 0x244b90: 0x24441010  addiu       $a0, $v0, 0x1010 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b8c) {
            ctx->pc = 0x244B98u;
            goto label_244b98;
        }
    }
    ctx->pc = 0x244B94u;
    // 0x244b94: 0x46002086  mov.s       $f2, $f4
    ctx->pc = 0x244b94u;
    ctx->f[2] = FPU_MOV_S(ctx->f[4]);
label_244b98:
    // 0x244b98: 0xe4421010  swc1        $f2, 0x1010($v0)
    ctx->pc = 0x244b98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4112), bits); }
    // 0x244b9c: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x244b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x244ba0: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x244ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x244ba4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x244ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244ba8: 0xc44310a4  lwc1        $f3, 0x10A4($v0)
    ctx->pc = 0x244ba8u;
    { uint32_t bits = FAST_READ32(0x5C10A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x244bac: 0x46013043  div.s       $f1, $f6, $f1
    ctx->pc = 0x244bacu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[6], ctx->f[1]);
    // 0x244bb0: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x244bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x244bb4: 0x46033801  sub.s       $f0, $f7, $f3
    ctx->pc = 0x244bb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[3]);
    // 0x244bb8: 0x24481020  addiu       $t0, $v0, 0x1020
    ctx->pc = 0x244bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4128));
    // 0x244bbc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x244bbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244bc0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x244bc0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x244bc4: 0xe4611014  swc1        $f1, 0x1014($v1)
    ctx->pc = 0x244bc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5C1014u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C1014u, _value); } while (0); }
    // 0x244bc8: 0xc5a00084  lwc1        $f0, 0x84($t5)
    ctx->pc = 0x244bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244bcc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x244BCCu;
    {
        const bool branch_taken_0x244bcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244BCCu;
        // 0x244bd0: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x244bcc) {
            ctx->pc = 0x244BD8u;
            goto label_244bd8;
        }
    }
    ctx->pc = 0x244BD4u;
    // 0x244bd4: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x244bd4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_244bd8:
    // 0x244bd8: 0xe4421020  swc1        $f2, 0x1020($v0)
    ctx->pc = 0x244bd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4128), bits); }
    // 0x244bdc: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x244bdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244be0: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x244be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x244be4: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x244be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x244be8: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x244be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244bec: 0x24671030  addiu       $a3, $v1, 0x1030
    ctx->pc = 0x244becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4144));
    // 0x244bf0: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x244bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x244bf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x244bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244bf8: 0x46013043  div.s       $f1, $f6, $f1
    ctx->pc = 0x244bf8u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[6], ctx->f[1]);
    // 0x244bfc: 0x24861040  addiu       $a2, $a0, 0x1040
    ctx->pc = 0x244bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4160));
    // 0x244c00: 0xe4411024  swc1        $f1, 0x1024($v0)
    ctx->pc = 0x244c00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5C1024u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C1024u, _value); } while (0); }
    // 0x244c04: 0xc5a00080  lwc1        $f0, 0x80($t5)
    ctx->pc = 0x244c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244c08: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x244c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x244c0c: 0x8dc2000c  lw          $v0, 0xC($t6)
    ctx->pc = 0x244c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x244c10: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x244c10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x244c14: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x244c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x244c18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244c1c: 0x0  nop
    ctx->pc = 0x244c1cu;
    // NOP
    // 0x244c20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x244c20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x244c24: 0xe4601030  swc1        $f0, 0x1030($v1)
    ctx->pc = 0x244c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4144), bits); }
    // 0x244c28: 0x8dc2000c  lw          $v0, 0xC($t6)
    ctx->pc = 0x244c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x244c2c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x244c2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x244c30: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x244c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x244c34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244c38: 0x0  nop
    ctx->pc = 0x244c38u;
    // NOP
    // 0x244c3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x244c3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x244c40: 0x46003003  div.s       $f0, $f6, $f0
    ctx->pc = 0x244c40u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[6], ctx->f[0]);
    // 0x244c44: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x244c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x244c48: 0xc5a10084  lwc1        $f1, 0x84($t5)
    ctx->pc = 0x244c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244c4c: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x244c4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x244c50: 0x8dc20010  lw          $v0, 0x10($t6)
    ctx->pc = 0x244c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x244c54: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x244c54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x244c58: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x244c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x244c5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244c60: 0x0  nop
    ctx->pc = 0x244c60u;
    // NOP
    // 0x244c64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x244c64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x244c68: 0xe4801040  swc1        $f0, 0x1040($a0)
    ctx->pc = 0x244c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4160), bits); }
    // 0x244c6c: 0x8dc20010  lw          $v0, 0x10($t6)
    ctx->pc = 0x244c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x244c70: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x244c70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x244c74: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x244c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x244c78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244c7c: 0x0  nop
    ctx->pc = 0x244c7cu;
    // NOP
    // 0x244c80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x244c80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x244c84: 0x46003003  div.s       $f0, $f6, $f0
    ctx->pc = 0x244c84u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[6], ctx->f[0]);
    // 0x244c88: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x244c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x244c8c: 0xc5a10080  lwc1        $f1, 0x80($t5)
    ctx->pc = 0x244c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244c90: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x244c90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x244c94: 0x8da20014  lw          $v0, 0x14($t5)
    ctx->pc = 0x244c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x244c98: 0x14450015  bne         $v0, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x244C98u;
    {
        const bool branch_taken_0x244c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x244C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C98u;
        // 0x244c9c: 0xc5a20080  lwc1        $f2, 0x80($t5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c98) {
            ctx->pc = 0x244CF0u;
            goto label_244cf0;
        }
    }
    ctx->pc = 0x244CA0u;
    // 0x244ca0: 0xc5a00084  lwc1        $f0, 0x84($t5)
    ctx->pc = 0x244ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244ca4: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x244ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x244ca8: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x244ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x244cac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x244cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x244cb0: 0x0  nop
    ctx->pc = 0x244cb0u;
    // NOP
    // 0x244cb4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x244cb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x244cb8: 0x938284e0  lbu         $v0, -0x7B20($gp)
    ctx->pc = 0x244cb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x244cbc: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x244cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
    // 0x244cc0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x244cc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x244cc4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x244cc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x244cc8: 0xe4601018  swc1        $f0, 0x1018($v1)
    ctx->pc = 0x244cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5C1018u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C1018u, _value); } while (0); }
    // 0x244ccc: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x244cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x244cd0: 0xc5a10080  lwc1        $f1, 0x80($t5)
    ctx->pc = 0x244cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244cd4: 0xc5a00084  lwc1        $f0, 0x84($t5)
    ctx->pc = 0x244cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244cd8: 0xa38284e0  sb          $v0, -0x7B20($gp)
    ctx->pc = 0x244cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935776), (uint8_t)GPR_U32(ctx, 2));
    // 0x244cdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x244cdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x244ce0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x244ce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x244ce4: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x244ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x244ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x244CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CE8u;
        // 0x244cec: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244CF0u;
label_244cf0:
    // 0x244cf0: 0x460028c7  neg.s       $f3, $f5
    ctx->pc = 0x244cf0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[5]);
    // 0x244cf4: 0xc5a00084  lwc1        $f0, 0x84($t5)
    ctx->pc = 0x244cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244cf8: 0x46052840  add.s       $f1, $f5, $f5
    ctx->pc = 0x244cf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x244cfc: 0x938284e0  lbu         $v0, -0x7B20($gp)
    ctx->pc = 0x244cfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x244d00: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x244d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x244d04: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x244d04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x244d08: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x244d08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x244d0c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x244d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x244d10: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x244d10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x244d14: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x244d14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x244d18: 0xa38284e0  sb          $v0, -0x7B20($gp)
    ctx->pc = 0x244d18u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935776), (uint8_t)GPR_U32(ctx, 2));
    // 0x244d1c: 0xe4601018  swc1        $f0, 0x1018($v1)
    ctx->pc = 0x244d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5C1018u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C1018u, _value); } while (0); }
    // 0x244d20: 0x3e00008  jr          $ra
    ctx->pc = 0x244D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D20u;
        // 0x244d24: 0xe4e00008  swc1        $f0, 0x8($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244D28u;
}

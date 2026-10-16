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

// Function: sub_00241F40
// Address: 0x241f40 - 0x242130
void sub_00241F40_0x241f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241F40_0x241f40");
#endif

    switch (ctx->pc) {
        case 0x241f8cu: goto label_241f8c;
        default: break;
    }

    ctx->pc = 0x241f40u;

    // 0x241f40: 0x24c2000f  addiu       $v0, $a2, 0xF
    ctx->pc = 0x241f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x241f44: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x241f44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x241f48: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x241f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x241f4c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x241f4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x241f50: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x241f50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x241f54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x241f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x241f58: 0x8f8984e4  lw          $t1, -0x7B1C($gp)
    ctx->pc = 0x241f58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935780)));
    // 0x241f5c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x241f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241f60: 0x24a50009  addiu       $a1, $a1, 0x9
    ctx->pc = 0x241f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9));
    // 0x241f64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x241f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x241f68: 0x1314826  xor         $t1, $t1, $s1
    ctx->pc = 0x241f68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 17));
    // 0x241f6c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x241f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241f70: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x241f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x241f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x241f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x241f78: 0x2465000c  addiu       $a1, $v1, 0xC
    ctx->pc = 0x241f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x241f7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x241f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241f80: 0x2463000d  addiu       $v1, $v1, 0xD
    ctx->pc = 0x241f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13));
    // 0x241f84: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x241F84u;
    SET_GPR_U32(ctx, 31, 0x241F8Cu);
    ctx->pc = 0x241F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241F84u;
    // 0x241f88: 0x69280b  movn        $a1, $v1, $t1 (Delay Slot)
    if (GPR_U64(ctx, 9) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x241F84u, 0x241F8Cu)) {
        return;
    }
    ctx->pc = 0x241F8Cu;
label_241f8c:
    // 0x241f8c: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x241f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x241f90: 0x8ce7412c  lw          $a3, 0x412C($a3)
    ctx->pc = 0x241f90u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x241f94: 0x3c06005c  lui         $a2, 0x5C
    ctx->pc = 0x241f94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
    // 0x241f98: 0x24c30f70  addiu       $v1, $a2, 0xF70
    ctx->pc = 0x241f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3952));
    // 0x241f9c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x241f9cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C0F70u));
    // 0x241fa0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x241fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x241fa4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x241fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x241fa8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x241fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x241fac: 0xac27412c  sw          $a3, 0x412C($at)
    ctx->pc = 0x241facu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x241fb0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x241fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x241fb4: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x241fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x241fb8: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x241fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x241fbc: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x241fbcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x241fc0: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x241fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x241fc4: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x241fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x241fc8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x241fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x241fcc: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x241fccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x241fd0: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x241fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x241fd4: 0x24631100  addiu       $v1, $v1, 0x1100
    ctx->pc = 0x241fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4352));
    // 0x241fd8: 0x24e40020  addiu       $a0, $a3, 0x20
    ctx->pc = 0x241fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x241fdc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x241fdcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C1100u));
    // 0x241fe0: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x241fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x241fe4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x241fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x241fe8: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x241fe8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x241fec: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x241fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x241ff0: 0x24631120  addiu       $v1, $v1, 0x1120
    ctx->pc = 0x241ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4384));
    // 0x241ff4: 0x24e40030  addiu       $a0, $a3, 0x30
    ctx->pc = 0x241ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x241ff8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x241ff8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C1120u));
    // 0x241ffc: 0x7ce20020  sq          $v0, 0x20($a3)
    ctx->pc = 0x241ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 2));
    // 0x242000: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242004: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x242004u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242008: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x242008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x24200c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x24200cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x242010: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x242010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x242014: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x242014u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x242018: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x242018u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x24201c: 0x8ca40f94  lw          $a0, 0xF94($a1)
    ctx->pc = 0x24201cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3988)));
    // 0x242020: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x242020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x242024: 0x3c03fc00  lui         $v1, 0xFC00
    ctx->pc = 0x242024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64512 << 16));
    // 0x242028: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x242028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x24202c: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x24202cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x242030: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x242030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x242034: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x242034u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x242038: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x242038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24203c: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x24203cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x242040: 0x24a30f94  addiu       $v1, $a1, 0xF94
    ctx->pc = 0x242040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3988));
    // 0x242044: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x242044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x242048: 0xaca40f94  sw          $a0, 0xF94($a1)
    ctx->pc = 0x242048u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3988), GPR_U32(ctx, 4));
    // 0x24204c: 0x7862fffc  lq          $v0, -0x4($v1)
    ctx->pc = 0x24204cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x242050: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x242050u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    // 0x242054: 0x24e30040  addiu       $v1, $a3, 0x40
    ctx->pc = 0x242054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x242058: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24205c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x24205cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242060: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x242060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x242064: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x242064u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x242068: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x242068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x24206c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24206Cu;
    {
        const bool branch_taken_0x24206c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24206Cu;
        // 0x242070: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24206c) {
            ctx->pc = 0x242080u;
            goto label_242080;
        }
    }
    ctx->pc = 0x242074u;
    // 0x242074: 0x24e40050  addiu       $a0, $a3, 0x50
    ctx->pc = 0x242074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x242078: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x242078u;
    {
        const bool branch_taken_0x242078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242078u;
        // 0x24207c: 0x244210f0  addiu       $v0, $v0, 0x10F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242078) {
            ctx->pc = 0x242090u;
            goto label_242090;
        }
    }
    ctx->pc = 0x242080u;
label_242080:
    // 0x242080: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x242080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x242084: 0x24e40050  addiu       $a0, $a3, 0x50
    ctx->pc = 0x242084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x242088: 0x244210e0  addiu       $v0, $v0, 0x10E0
    ctx->pc = 0x242088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4320));
    // 0x24208c: 0x0  nop
    ctx->pc = 0x24208cu;
    // NOP
label_242090:
    // 0x242090: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x242090u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242094: 0x7ce30040  sq          $v1, 0x40($a3)
    ctx->pc = 0x242094u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 3));
    // 0x242098: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24209c: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x24209cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2420a0: 0x24c30f70  addiu       $v1, $a2, 0xF70
    ctx->pc = 0x2420a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3952));
    // 0x2420a4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2420a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2420a8: 0x8ca5412c  lw          $a1, 0x412C($a1)
    ctx->pc = 0x2420a8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2420ac: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2420acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2420b0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x2420b0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x2420b4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2420b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2420b8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2420b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2420bc: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x2420bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2420c0: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2420c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2420c4: 0x246310b0  addiu       $v1, $v1, 0x10B0
    ctx->pc = 0x2420c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x2420c8: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x2420c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2420cc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2420ccu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C10B0u));
    // 0x2420d0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x2420d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x2420d4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2420d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2420d8: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x2420d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2420dc: 0x8f8284e4  lw          $v0, -0x7B1C($gp)
    ctx->pc = 0x2420dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935780)));
    // 0x2420e0: 0x1051000b  beq         $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2420E0u;
    {
        const bool branch_taken_0x2420e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2420E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2420E0u;
        // 0x2420e4: 0x11203c  dsll32      $a0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2420e0) {
            ctx->pc = 0x242110u;
            goto label_242110;
        }
    }
    ctx->pc = 0x2420E8u;
    // 0x2420e8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x2420e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x2420ec: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2420ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2420f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2420f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2420f4: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x2420f4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x2420f8: 0x7ca40010  sq          $a0, 0x10($a1)
    ctx->pc = 0x2420f8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 4));
    // 0x2420fc: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x2420fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x242100: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242104: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x242104u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242108: 0xaf9184e4  sw          $s1, -0x7B1C($gp)
    ctx->pc = 0x242108u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935780), GPR_U32(ctx, 17));
    // 0x24210c: 0x0  nop
    ctx->pc = 0x24210cu;
    // NOP
label_242110:
    // 0x242110: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x242110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242118: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x242118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24211c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24211cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242120: 0x3e00008  jr          $ra
    ctx->pc = 0x242120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242120u;
        // 0x242124: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242128u;
    // 0x242128: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x242128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24212c: 0x0  nop
    ctx->pc = 0x24212cu;
    // NOP
    ctx->pc = 0x242130u;
}

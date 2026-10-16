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

// Function: sub_00242EE0
// Address: 0x242ee0 - 0x243108
void sub_00242EE0_0x242ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242EE0_0x242ee0");
#endif

    switch (ctx->pc) {
        case 0x242f18u: goto label_242f18;
        case 0x242f50u: goto label_242f50;
        case 0x242fe8u: goto label_242fe8;
        case 0x2430c8u: goto label_2430c8;
        case 0x2430d8u: goto label_2430d8;
        default: break;
    }

    ctx->pc = 0x242ee0u;

    // 0x242ee0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x242ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x242ee4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x242ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x242ee8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x242ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x242eec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x242eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x242ef0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x242ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242ef4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x242ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x242ef8: 0x78842  srl         $s1, $a3, 1
    ctx->pc = 0x242ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x242efc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x242efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x242f00: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x242f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f04: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x242f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x242f08: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x242f08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242f10: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x242F10u;
    {
        const bool branch_taken_0x242f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F10u;
        // 0x242f14: 0x24540fe0  addiu       $s4, $v0, 0xFE0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242f10) {
            ctx->pc = 0x2430C8u;
            goto label_2430c8;
        }
    }
    ctx->pc = 0x242F18u;
label_242f18:
    // 0x242f18: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x242f18u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x242f1c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x242f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x242f20: 0x7a890000  lq          $t1, 0x0($s4)
    ctx->pc = 0x242f20u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x242f24: 0x24580f40  addiu       $t8, $v0, 0xF40
    ctx->pc = 0x242f24u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
    // 0x242f28: 0x2288823  subu        $s1, $s1, $t0
    ctx->pc = 0x242f28u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x242f2c: 0x240f0010  addiu       $t7, $zero, 0x10
    ctx->pc = 0x242f2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x242f30: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x242f30u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x242f34: 0x3c0d0400  lui         $t5, 0x400
    ctx->pc = 0x242f34u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)1024 << 16));
    // 0x242f38: 0x340c8002  ori         $t4, $zero, 0x8002
    ctx->pc = 0x242f38u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x242f3c: 0xc65b8  dsll        $t4, $t4, 22
    ctx->pc = 0x242f3cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 22);
    // 0x242f40: 0x358c8000  ori         $t4, $t4, 0x8000
    ctx->pc = 0x242f40u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32768);
    // 0x242f44: 0xc64f8  dsll        $t4, $t4, 19
    ctx->pc = 0x242f44u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 19);
    // 0x242f48: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x242f48u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x242f4c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x242f4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_242f50:
    // 0x242f50: 0x2d030011  sltiu       $v1, $t0, 0x11
    ctx->pc = 0x242f50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x242f54: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x242f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f58: 0x103300b  movn        $a2, $t0, $v1
    ctx->pc = 0x242f58u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8));
    // 0x242f5c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x242f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x242f60: 0xcd1825  or          $v1, $a2, $t5
    ctx->pc = 0x242f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x242f64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x242f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x242f68: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x242f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x242f6c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x242f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x242f70: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x242f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x242f74: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x242f74u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
    // 0x242f78: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x242f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x242f7c: 0x4e2025  or          $a0, $v0, $t6
    ctx->pc = 0x242f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x242f80: 0x1064023  subu        $t0, $t0, $a2
    ctx->pc = 0x242f80u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x242f84: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x242f84u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x242f88: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x242f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x242f8c: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x242f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x242f90: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x242f90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x242f94: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x242f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x242f98: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242f9c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x242f9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242fa0: 0x61cc0  sll         $v1, $a2, 19
    ctx->pc = 0x242fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 19));
    // 0x242fa4: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x242fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x242fa8: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x242fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x242fac: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x242facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x242fb0: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x242fb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x242fb4: 0x424b8  dsll        $a0, $a0, 18
    ctx->pc = 0x242fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 18);
    // 0x242fb8: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x242fb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x242fbc: 0x423b8  dsll        $a0, $a0, 14
    ctx->pc = 0x242fbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
    // 0x242fc0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x242fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x242fc4: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x242fc4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x242fc8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x242fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x242fcc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x242fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x242fd0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x242fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x242fd4: 0x10ca0032  beq         $a2, $t2, . + 4 + (0x32 << 2)
    ctx->pc = 0x242FD4u;
    {
        const bool branch_taken_0x242fd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        ctx->pc = 0x242FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FD4u;
        // 0x242fd8: 0xaf8290bc  sw          $v0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242fd4) {
            ctx->pc = 0x2430A0u;
            goto label_2430a0;
        }
    }
    ctx->pc = 0x242FDCu;
    // 0x242fdc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x242fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x242fe0: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x242fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x242fe4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x242fe4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_242fe8:
    // 0x242fe8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x242fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x242fec: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x242fecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x242ff0: 0x78a2ffc0  lq          $v0, -0x40($a1)
    ctx->pc = 0x242ff0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967232)));
    // 0x242ff4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x242ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x242ff8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x242ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x242ffc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243000: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x243000u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243004: 0x78a2ffd0  lq          $v0, -0x30($a1)
    ctx->pc = 0x243004u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967248)));
    // 0x243008: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x243008u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x24300c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x24300cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x243010: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243014: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243014u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243018: 0x78a2ffe0  lq          $v0, -0x20($a1)
    ctx->pc = 0x243018u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967264)));
    // 0x24301c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x24301cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x243020: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x243020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x243024: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243028: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243028u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x24302c: 0x78a2fff0  lq          $v0, -0x10($a1)
    ctx->pc = 0x24302cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x243030: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x243030u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x243034: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x243034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x243038: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24303c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x24303cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243040: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x243040u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x243044: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x243044u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x243048: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x243048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x24304c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24304cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243050: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243050u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243054: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x243054u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x243058: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x243058u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x24305c: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x24305cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x243060: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243064: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243064u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243068: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x243068u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x24306c: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x24306cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x243070: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x243070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x243074: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x243078: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x243078u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x24307c: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x24307cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x243080: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x243080u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x243084: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x243084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x243088: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x243088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24308c: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x24308cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x243090: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x243090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x243094: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x243094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x243098: 0x14c7ffd3  bne         $a2, $a3, . + 4 + (-0x2D << 2)
    ctx->pc = 0x243098u;
    {
        const bool branch_taken_0x243098 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x24309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243098u;
        // 0x24309c: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243098) {
            ctx->pc = 0x242FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242fe8;
        }
    }
    ctx->pc = 0x2430A0u;
label_2430a0:
    // 0x2430a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2430a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2430a4: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x2430a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2430a8: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x2430a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
    // 0x2430ac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2430acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2430b0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2430b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2430b4: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2430b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2430b8: 0x1500ffa5  bnez        $t0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x2430B8u;
    {
        const bool branch_taken_0x2430b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2430BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430B8u;
        // 0x2430bc: 0x7b090000  lq          $t1, 0x0($t8) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 24), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2430b8) {
            ctx->pc = 0x242F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242f50;
        }
    }
    ctx->pc = 0x2430C0u;
    // 0x2430c0: 0xc0908e0  jal         func_242380
    ctx->pc = 0x2430C0u;
    SET_GPR_U32(ctx, 31, 0x2430C8u);
    ctx->pc = 0x242380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x242380u, 0x2430C0u, 0x2430C8u)) {
        return;
    }
    ctx->pc = 0x2430C8u;
label_2430c8:
    // 0x2430c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2430c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2430cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2430ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2430d0: 0xc090918  jal         func_242460
    ctx->pc = 0x2430D0u;
    SET_GPR_U32(ctx, 31, 0x2430D8u);
    ctx->pc = 0x2430D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2430D0u;
    // 0x2430d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x242460u, 0x2430D0u, 0x2430D8u)) {
        return;
    }
    ctx->pc = 0x2430D8u;
label_2430d8:
    // 0x2430d8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2430d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2430dc: 0x1500ff8e  bnez        $t0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x2430DCu;
    {
        const bool branch_taken_0x2430dc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2430E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430DCu;
        // 0x2430e0: 0x3c0b7c00  lui         $t3, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)31744 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2430dc) {
            ctx->pc = 0x242F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242f18;
        }
    }
    ctx->pc = 0x2430E4u;
    // 0x2430e4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2430e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2430e8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2430e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2430ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2430ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2430f0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2430f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2430f4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2430f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2430f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2430f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2430fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2430FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2430FCu;
        // 0x243100: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2430FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243104u;
    // 0x243104: 0x0  nop
    ctx->pc = 0x243104u;
    // NOP
    ctx->pc = 0x243108u;
}

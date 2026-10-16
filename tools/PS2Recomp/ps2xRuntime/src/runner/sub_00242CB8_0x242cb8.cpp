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

// Function: sub_00242CB8
// Address: 0x242cb8 - 0x242ee0
void sub_00242CB8_0x242cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242CB8_0x242cb8");
#endif

    switch (ctx->pc) {
        case 0x242cf0u: goto label_242cf0;
        case 0x242d28u: goto label_242d28;
        case 0x242dc0u: goto label_242dc0;
        case 0x242ea0u: goto label_242ea0;
        case 0x242eb0u: goto label_242eb0;
        default: break;
    }

    ctx->pc = 0x242cb8u;

    // 0x242cb8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x242cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x242cbc: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x242cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x242cc0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x242cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x242cc4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x242cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x242cc8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x242cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242ccc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x242cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x242cd0: 0x78842  srl         $s1, $a3, 1
    ctx->pc = 0x242cd0u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x242cd4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x242cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x242cd8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x242cd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242cdc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x242cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x242ce0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x242ce0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242ce8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x242CE8u;
    {
        const bool branch_taken_0x242ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CE8u;
        // 0x242cec: 0x24540fe0  addiu       $s4, $v0, 0xFE0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ce8) {
            ctx->pc = 0x242EA0u;
            goto label_242ea0;
        }
    }
    ctx->pc = 0x242CF0u;
label_242cf0:
    // 0x242cf0: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x242cf0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x242cf4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x242cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x242cf8: 0x7a890000  lq          $t1, 0x0($s4)
    ctx->pc = 0x242cf8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x242cfc: 0x24580f40  addiu       $t8, $v0, 0xF40
    ctx->pc = 0x242cfcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
    // 0x242d00: 0x2288823  subu        $s1, $s1, $t0
    ctx->pc = 0x242d00u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x242d04: 0x240f0010  addiu       $t7, $zero, 0x10
    ctx->pc = 0x242d04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x242d08: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x242d08u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x242d0c: 0x3c0d0400  lui         $t5, 0x400
    ctx->pc = 0x242d0cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)1024 << 16));
    // 0x242d10: 0x340c8002  ori         $t4, $zero, 0x8002
    ctx->pc = 0x242d10u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x242d14: 0xc65b8  dsll        $t4, $t4, 22
    ctx->pc = 0x242d14u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 22);
    // 0x242d18: 0x358c8000  ori         $t4, $t4, 0x8000
    ctx->pc = 0x242d18u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32768);
    // 0x242d1c: 0xc64f8  dsll        $t4, $t4, 19
    ctx->pc = 0x242d1cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 19);
    // 0x242d20: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x242d20u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x242d24: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x242d24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_242d28:
    // 0x242d28: 0x2d030011  sltiu       $v1, $t0, 0x11
    ctx->pc = 0x242d28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x242d2c: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x242d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242d30: 0x103300b  movn        $a2, $t0, $v1
    ctx->pc = 0x242d30u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8));
    // 0x242d34: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x242d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x242d38: 0xcd1825  or          $v1, $a2, $t5
    ctx->pc = 0x242d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x242d3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x242d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x242d40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x242d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x242d44: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x242d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x242d48: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x242d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x242d4c: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x242d4cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
    // 0x242d50: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x242d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x242d54: 0x4e2025  or          $a0, $v0, $t6
    ctx->pc = 0x242d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x242d58: 0x1064023  subu        $t0, $t0, $a2
    ctx->pc = 0x242d58u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x242d5c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x242d5cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x242d60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x242d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x242d64: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x242d64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x242d68: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x242d68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x242d6c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x242d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x242d70: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242d74: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x242d74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242d78: 0x61cc0  sll         $v1, $a2, 19
    ctx->pc = 0x242d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 19));
    // 0x242d7c: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x242d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x242d80: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x242d80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x242d84: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x242d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x242d88: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x242d88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x242d8c: 0x424b8  dsll        $a0, $a0, 18
    ctx->pc = 0x242d8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 18);
    // 0x242d90: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x242d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x242d94: 0x423b8  dsll        $a0, $a0, 14
    ctx->pc = 0x242d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
    // 0x242d98: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x242d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x242d9c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x242d9cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x242da0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x242da0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x242da4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x242da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x242da8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x242da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x242dac: 0x10ca0032  beq         $a2, $t2, . + 4 + (0x32 << 2)
    ctx->pc = 0x242DACu;
    {
        const bool branch_taken_0x242dac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        ctx->pc = 0x242DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DACu;
        // 0x242db0: 0xaf8290bc  sw          $v0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242dac) {
            ctx->pc = 0x242E78u;
            goto label_242e78;
        }
    }
    ctx->pc = 0x242DB4u;
    // 0x242db4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x242db4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x242db8: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x242db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x242dbc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x242dbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_242dc0:
    // 0x242dc0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x242dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x242dc4: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x242dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x242dc8: 0x78a2ffc0  lq          $v0, -0x40($a1)
    ctx->pc = 0x242dc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967232)));
    // 0x242dcc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x242dccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x242dd0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x242dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x242dd4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242dd8: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x242dd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242ddc: 0x78a2ffd0  lq          $v0, -0x30($a1)
    ctx->pc = 0x242ddcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967248)));
    // 0x242de0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x242de0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x242de4: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x242de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x242de8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242dec: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x242decu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242df0: 0x78a2ffe0  lq          $v0, -0x20($a1)
    ctx->pc = 0x242df0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967264)));
    // 0x242df4: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x242df4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x242df8: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x242df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x242dfc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242e00: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x242e00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242e04: 0x78a2fff0  lq          $v0, -0x10($a1)
    ctx->pc = 0x242e04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x242e08: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x242e08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x242e0c: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x242e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x242e10: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242e14: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x242e14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242e18: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x242e18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x242e1c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x242e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x242e20: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x242e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x242e24: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242e28: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x242e28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242e2c: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x242e2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x242e30: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x242e30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x242e34: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x242e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x242e38: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242e3c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x242e3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242e40: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x242e40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x242e44: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x242e44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x242e48: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x242e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x242e4c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242e50: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x242e50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242e54: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x242e54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x242e58: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x242e58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x242e5c: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x242e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x242e60: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242e64: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x242e64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242e68: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x242e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x242e6c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x242e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x242e70: 0x14c7ffd3  bne         $a2, $a3, . + 4 + (-0x2D << 2)
    ctx->pc = 0x242E70u;
    {
        const bool branch_taken_0x242e70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x242E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E70u;
        // 0x242e74: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e70) {
            ctx->pc = 0x242DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242dc0;
        }
    }
    ctx->pc = 0x242E78u;
label_242e78:
    // 0x242e78: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x242e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x242e7c: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x242e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x242e80: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x242e80u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
    // 0x242e84: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x242e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x242e88: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x242e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x242e8c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x242e8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x242e90: 0x1500ffa5  bnez        $t0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x242E90u;
    {
        const bool branch_taken_0x242e90 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x242E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E90u;
        // 0x242e94: 0x7b090000  lq          $t1, 0x0($t8) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 24), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e90) {
            ctx->pc = 0x242D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242d28;
        }
    }
    ctx->pc = 0x242E98u;
    // 0x242e98: 0xc0908e0  jal         func_242380
    ctx->pc = 0x242E98u;
    SET_GPR_U32(ctx, 31, 0x242EA0u);
    ctx->pc = 0x242380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x242380u, 0x242E98u, 0x242EA0u)) {
        return;
    }
    ctx->pc = 0x242EA0u;
label_242ea0:
    // 0x242ea0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x242ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242ea4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x242ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242ea8: 0xc0908fe  jal         func_2423F8
    ctx->pc = 0x242EA8u;
    SET_GPR_U32(ctx, 31, 0x242EB0u);
    ctx->pc = 0x242EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242EA8u;
    // 0x242eac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2423F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2423F8u, 0x242EA8u, 0x242EB0u)) {
        return;
    }
    ctx->pc = 0x242EB0u;
label_242eb0:
    // 0x242eb0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x242eb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242eb4: 0x1500ff8e  bnez        $t0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x242EB4u;
    {
        const bool branch_taken_0x242eb4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x242EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EB4u;
        // 0x242eb8: 0x3c0b7c00  lui         $t3, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)31744 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242eb4) {
            ctx->pc = 0x242CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242cf0;
        }
    }
    ctx->pc = 0x242EBCu;
    // 0x242ebc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x242ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x242ec0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x242ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x242ec4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x242ec4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x242ec8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x242ec8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242ecc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x242eccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242ed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x242ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242ED4u;
        // 0x242ed8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242EDCu;
    // 0x242edc: 0x0  nop
    ctx->pc = 0x242edcu;
    // NOP
    ctx->pc = 0x242ee0u;
}

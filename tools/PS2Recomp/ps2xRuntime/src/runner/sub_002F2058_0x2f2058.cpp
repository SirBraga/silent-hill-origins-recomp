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

// Function: sub_002F2058
// Address: 0x2f2058 - 0x2f21e0
void sub_002F2058_0x2f2058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2058_0x2f2058");
#endif

    switch (ctx->pc) {
        case 0x2f2084u: goto label_2f2084;
        case 0x2f2090u: goto label_2f2090;
        case 0x2f20b0u: goto label_2f20b0;
        case 0x2f20e0u: goto label_2f20e0;
        case 0x2f20f4u: goto label_2f20f4;
        case 0x2f2108u: goto label_2f2108;
        case 0x2f2110u: goto label_2f2110;
        case 0x2f2130u: goto label_2f2130;
        case 0x2f2140u: goto label_2f2140;
        case 0x2f2154u: goto label_2f2154;
        case 0x2f2170u: goto label_2f2170;
        case 0x2f2180u: goto label_2f2180;
        case 0x2f2190u: goto label_2f2190;
        case 0x2f21a8u: goto label_2f21a8;
        case 0x2f21b8u: goto label_2f21b8;
        default: break;
    }

    ctx->pc = 0x2f2058u;

    // 0x2f2058: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f2058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f205c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f205cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f2060: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f2060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f2064: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f2064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2068: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f2068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f206c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f206cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2070: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f2070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f2074: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f2074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2078: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f2078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f207c: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x2F207Cu;
    SET_GPR_U32(ctx, 31, 0x2F2084u);
    ctx->pc = 0x2F2080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F207Cu;
    // 0x2f2080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x2F207Cu, 0x2F2084u)) {
        return;
    }
    ctx->pc = 0x2F2084u;
label_2f2084:
    // 0x2f2084: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x2f2084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x2f2088: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2088u;
    {
        const bool branch_taken_0x2f2088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2088u;
        // 0x2f208c: 0x24020898  addiu       $v0, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2088) {
            ctx->pc = 0x2F2098u;
            goto label_2f2098;
        }
    }
    ctx->pc = 0x2F2090u;
label_2f2090:
    // 0x2f2090: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2F2090u;
    {
        const bool branch_taken_0x2f2090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2090u;
        // 0x2f2094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2090) {
            ctx->pc = 0x2F21C0u;
            goto label_2f21c0;
        }
    }
    ctx->pc = 0x2F2098u;
label_2f2098:
    // 0x2f2098: 0x3c050072  lui         $a1, 0x72
    ctx->pc = 0x2f2098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)114 << 16));
    // 0x2f209c: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x2f209cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f20a0: 0x24a5bf50  addiu       $a1, $a1, -0x40B0
    ctx->pc = 0x2f20a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950736));
    // 0x2f20a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f20a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f20a8: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F20A8u;
    SET_GPR_U32(ctx, 31, 0x2F20B0u);
    ctx->pc = 0x2F20ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F20A8u;
    // 0x2f20ac: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F20A8u, 0x2F20B0u)) {
        return;
    }
    ctx->pc = 0x2F20B0u;
label_2f20b0:
    // 0x2f20b0: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2f20b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f20b4: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x2f20b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2f20b8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F20B8u;
    {
        const bool branch_taken_0x2f20b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F20B8u;
        // 0x2f20bc: 0x3c12006b  lui         $s2, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f20b8) {
            ctx->pc = 0x2F20E8u;
            goto label_2f20e8;
        }
    }
    ctx->pc = 0x2F20C0u;
    // 0x2f20c0: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x2f20c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f20c4: 0x26460158  addiu       $a2, $s2, 0x158
    ctx->pc = 0x2f20c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 344));
    // 0x2f20c8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x2f20c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f20cc: 0x80c30001  lb          $v1, 0x1($a2)
    ctx->pc = 0x2f20ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2f20d0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2f20d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f20d4: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x2f20d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f20d8: 0xc0bc7bc  jal         func_2F1EF0
    ctx->pc = 0x2F20D8u;
    SET_GPR_U32(ctx, 31, 0x2F20E0u);
    ctx->pc = 0x2F20DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F20D8u;
    // 0x2f20dc: 0x26450158  addiu       $a1, $s2, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1EF0u, 0x2F20D8u, 0x2F20E0u)) {
        return;
    }
    ctx->pc = 0x2F20E0u;
label_2f20e0:
    // 0x2f20e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F20E0u;
    {
        const bool branch_taken_0x2f20e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F20E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F20E0u;
        // 0x2f20e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f20e0) {
            ctx->pc = 0x2F20F8u;
            goto label_2f20f8;
        }
    }
    ctx->pc = 0x2F20E8u;
label_2f20e8:
    // 0x2f20e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f20e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f20ec: 0xc0bc7bc  jal         func_2F1EF0
    ctx->pc = 0x2F20ECu;
    SET_GPR_U32(ctx, 31, 0x2F20F4u);
    ctx->pc = 0x2F20F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F20ECu;
    // 0x2f20f0: 0x26450158  addiu       $a1, $s2, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1EF0u, 0x2F20ECu, 0x2F20F4u)) {
        return;
    }
    ctx->pc = 0x2F20F4u;
label_2f20f4:
    // 0x2f20f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f20f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f20f8:
    // 0x2f20f8: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2F20F8u;
    {
        const bool branch_taken_0x2f20f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F20F8u;
        // 0x2f20fc: 0x3c13006b  lui         $s3, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f20f8) {
            ctx->pc = 0x2F219Cu;
            goto label_2f219c;
        }
    }
    ctx->pc = 0x2F2100u;
    // 0x2f2100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2104: 0x0  nop
    ctx->pc = 0x2f2104u;
    // NOP
label_2f2108:
    // 0x2f2108: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x2F2108u;
    SET_GPR_U32(ctx, 31, 0x2F2110u);
    ctx->pc = 0x2F210Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2108u;
    // 0x2f210c: 0x26650140  addiu       $a1, $s3, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x2F2108u, 0x2F2110u)) {
        return;
    }
    ctx->pc = 0x2F2110u;
label_2f2110:
    // 0x2f2110: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2110u;
    {
        const bool branch_taken_0x2f2110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2110u;
        // 0x2f2114: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2110) {
            ctx->pc = 0x2F2124u;
            goto label_2f2124;
        }
    }
    ctx->pc = 0x2F2118u;
    // 0x2f2118: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f211c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2F211Cu;
    {
        const bool branch_taken_0x2f211c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F211Cu;
        // 0x2f2120: 0x26450158  addiu       $a1, $s2, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f211c) {
            ctx->pc = 0x2F2188u;
            goto label_2f2188;
        }
    }
    ctx->pc = 0x2F2124u;
label_2f2124:
    // 0x2f2124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2128: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x2F2128u;
    SET_GPR_U32(ctx, 31, 0x2F2130u);
    ctx->pc = 0x2F212Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2128u;
    // 0x2f212c: 0x24a50148  addiu       $a1, $a1, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x2F2128u, 0x2F2130u)) {
        return;
    }
    ctx->pc = 0x2F2130u;
label_2f2130:
    // 0x2f2130: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F2130u;
    {
        const bool branch_taken_0x2f2130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2130u;
        // 0x2f2134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2130) {
            ctx->pc = 0x2F2168u;
            goto label_2f2168;
        }
    }
    ctx->pc = 0x2F2138u;
    // 0x2f2138: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x2F2138u;
    SET_GPR_U32(ctx, 31, 0x2F2140u);
    ctx->pc = 0x2F213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2138u;
    // 0x2f213c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x2F2138u, 0x2F2140u)) {
        return;
    }
    ctx->pc = 0x2F2140u;
label_2f2140:
    // 0x2f2140: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f2140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f2144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f2144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2148: 0xa040ffff  sb          $zero, -0x1($v0)
    ctx->pc = 0x2f2148u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f214c: 0xc0c5d08  jal         func_317420
    ctx->pc = 0x2F214Cu;
    SET_GPR_U32(ctx, 31, 0x2F2154u);
    ctx->pc = 0x2F2150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F214Cu;
    // 0x2f2150: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317420u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317420u, 0x2F214Cu, 0x2F2154u)) {
        return;
    }
    ctx->pc = 0x2F2154u;
label_2f2154:
    // 0x2f2154: 0x1040ffce  beqz        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2F2154u;
    {
        const bool branch_taken_0x2f2154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2154u;
        // 0x2f2158: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2154) {
            ctx->pc = 0x2F2090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2090;
        }
    }
    ctx->pc = 0x2F215Cu;
    // 0x2f215c: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2f215cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f2160: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F2160u;
    {
        const bool branch_taken_0x2f2160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2160u;
        // 0x2f2164: 0x26450158  addiu       $a1, $s2, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2160) {
            ctx->pc = 0x2F2188u;
            goto label_2f2188;
        }
    }
    ctx->pc = 0x2F2168u;
label_2f2168:
    // 0x2f2168: 0xc0c496b  jal         func_3125AC
    ctx->pc = 0x2F2168u;
    SET_GPR_U32(ctx, 31, 0x2F2170u);
    ctx->pc = 0x2F216Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2168u;
    // 0x2f216c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125ACu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3125ACu, 0x2F2168u, 0x2F2170u)) {
        return;
    }
    ctx->pc = 0x2F2170u;
label_2f2170:
    // 0x2f2170: 0x26500158  addiu       $s0, $s2, 0x158
    ctx->pc = 0x2f2170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 344));
    // 0x2f2174: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f2174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2178: 0xc0c496b  jal         func_3125AC
    ctx->pc = 0x2F2178u;
    SET_GPR_U32(ctx, 31, 0x2F2180u);
    ctx->pc = 0x2F217Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2178u;
    // 0x2f217c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125ACu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3125ACu, 0x2F2178u, 0x2F2180u)) {
        return;
    }
    ctx->pc = 0x2F2180u;
label_2f2180:
    // 0x2f2180: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f2180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2184: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2188:
    // 0x2f2188: 0xc0bc7bc  jal         func_2F1EF0
    ctx->pc = 0x2F2188u;
    SET_GPR_U32(ctx, 31, 0x2F2190u);
    ctx->pc = 0x2F1EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F1EF0u, 0x2F2188u, 0x2F2190u)) {
        return;
    }
    ctx->pc = 0x2F2190u;
label_2f2190:
    // 0x2f2190: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f2190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2194: 0x1600ffdc  bnez        $s0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2F2194u;
    {
        const bool branch_taken_0x2f2194 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2194u;
        // 0x2f2198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2194) {
            ctx->pc = 0x2F2108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2108;
        }
    }
    ctx->pc = 0x2F219Cu;
label_2f219c:
    // 0x2f219c: 0x26450158  addiu       $a1, $s2, 0x158
    ctx->pc = 0x2f219cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 344));
    // 0x2f21a0: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x2F21A0u;
    SET_GPR_U32(ctx, 31, 0x2F21A8u);
    ctx->pc = 0x2F21A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F21A0u;
    // 0x2f21a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x2F21A0u, 0x2F21A8u)) {
        return;
    }
    ctx->pc = 0x2F21A8u;
label_2f21a8:
    // 0x2f21a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F21A8u;
    {
        const bool branch_taken_0x2f21a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F21A8u;
        // 0x2f21ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f21a8) {
            ctx->pc = 0x2F21BCu;
            goto label_2f21bc;
        }
    }
    ctx->pc = 0x2F21B0u;
    // 0x2f21b0: 0xc0c5d08  jal         func_317420
    ctx->pc = 0x2F21B0u;
    SET_GPR_U32(ctx, 31, 0x2F21B8u);
    ctx->pc = 0x2F21B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F21B0u;
    // 0x2f21b4: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317420u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317420u, 0x2F21B0u, 0x2F21B8u)) {
        return;
    }
    ctx->pc = 0x2F21B8u;
label_2f21b8:
    // 0x2f21b8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2f21b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f21bc:
    // 0x2f21bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f21bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f21c0:
    // 0x2f21c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f21c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f21c4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f21c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f21c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f21c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f21cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f21ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f21d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f21d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f21d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F21D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F21D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F21D4u;
        // 0x2f21d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F21D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F21DCu;
    // 0x2f21dc: 0x0  nop
    ctx->pc = 0x2f21dcu;
    // NOP
    ctx->pc = 0x2f21e0u;
}

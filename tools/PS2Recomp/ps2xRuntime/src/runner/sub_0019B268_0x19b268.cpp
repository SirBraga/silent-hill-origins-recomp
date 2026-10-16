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

// Function: sub_0019B268
// Address: 0x19b268 - 0x19b458
void sub_0019B268_0x19b268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B268_0x19b268");
#endif

    switch (ctx->pc) {
        case 0x19b2dcu: goto label_19b2dc;
        case 0x19b2e4u: goto label_19b2e4;
        case 0x19b2f0u: goto label_19b2f0;
        case 0x19b2f8u: goto label_19b2f8;
        case 0x19b304u: goto label_19b304;
        case 0x19b30cu: goto label_19b30c;
        case 0x19b318u: goto label_19b318;
        case 0x19b320u: goto label_19b320;
        case 0x19b32cu: goto label_19b32c;
        case 0x19b334u: goto label_19b334;
        case 0x19b340u: goto label_19b340;
        case 0x19b348u: goto label_19b348;
        case 0x19b35cu: goto label_19b35c;
        case 0x19b364u: goto label_19b364;
        case 0x19b378u: goto label_19b378;
        case 0x19b380u: goto label_19b380;
        case 0x19b394u: goto label_19b394;
        case 0x19b39cu: goto label_19b39c;
        case 0x19b3b0u: goto label_19b3b0;
        case 0x19b3b8u: goto label_19b3b8;
        case 0x19b3c8u: goto label_19b3c8;
        case 0x19b3d4u: goto label_19b3d4;
        case 0x19b3e0u: goto label_19b3e0;
        case 0x19b3ecu: goto label_19b3ec;
        case 0x19b3f8u: goto label_19b3f8;
        case 0x19b404u: goto label_19b404;
        case 0x19b410u: goto label_19b410;
        case 0x19b41cu: goto label_19b41c;
        case 0x19b428u: goto label_19b428;
        default: break;
    }

    ctx->pc = 0x19b268u;

    // 0x19b268: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19b268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x19b26c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19b270: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x19b270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x19b274: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19b274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19b278: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x19b278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x19b27c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19b27cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b280: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x19b280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x19b284: 0x2442a168  addiu       $v0, $v0, -0x5E98
    ctx->pc = 0x19b284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943080));
    // 0x19b288: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x19b288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x19b28c: 0x2463a188  addiu       $v1, $v1, -0x5E78
    ctx->pc = 0x19b28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943112));
    // 0x19b290: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x19b290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x19b294: 0x26510044  addiu       $s1, $s2, 0x44
    ctx->pc = 0x19b294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x19b298: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x19b298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x19b29c: 0x265e004c  addiu       $fp, $s2, 0x4C
    ctx->pc = 0x19b29cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x19b2a0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x19b2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x19b2a4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x19b2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b2a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19b2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19b2ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b2b0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x19b2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x19b2b4: 0x26550080  addiu       $s5, $s2, 0x80
    ctx->pc = 0x19b2b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x19b2b8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x19b2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x19b2bc: 0x2656005c  addiu       $s6, $s2, 0x5C
    ctx->pc = 0x19b2bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
    // 0x19b2c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b2c4: 0x26570054  addiu       $s7, $s2, 0x54
    ctx->pc = 0x19b2c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
    // 0x19b2c8: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x19b2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
    // 0x19b2cc: 0x26540078  addiu       $s4, $s2, 0x78
    ctx->pc = 0x19b2ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
    // 0x19b2d0: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x19b2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x19b2d4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x19B2D4u;
    SET_GPR_U32(ctx, 31, 0x19B2DCu);
    ctx->pc = 0x19B2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B2D4u;
    // 0x19b2d8: 0x2653008c  addiu       $s3, $s2, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19B2D4u, 0x19B2DCu)) {
        return;
    }
    ctx->pc = 0x19B2DCu;
label_19b2dc:
    // 0x19b2dc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19B2DCu;
    SET_GPR_U32(ctx, 31, 0x19B2E4u);
    ctx->pc = 0x19B2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B2DCu;
    // 0x19b2e0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19B2DCu, 0x19B2E4u)) {
        return;
    }
    ctx->pc = 0x19B2E4u;
label_19b2e4:
    // 0x19b2e4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x19b2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b2e8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x19B2E8u;
    SET_GPR_U32(ctx, 31, 0x19B2F0u);
    ctx->pc = 0x19B2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B2E8u;
    // 0x19b2ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19B2E8u, 0x19B2F0u)) {
        return;
    }
    ctx->pc = 0x19B2F0u;
label_19b2f0:
    // 0x19b2f0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19B2F0u;
    SET_GPR_U32(ctx, 31, 0x19B2F8u);
    ctx->pc = 0x19B2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B2F0u;
    // 0x19b2f4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19B2F0u, 0x19B2F8u)) {
        return;
    }
    ctx->pc = 0x19B2F8u;
label_19b2f8:
    // 0x19b2f8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x19b2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b2fc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x19B2FCu;
    SET_GPR_U32(ctx, 31, 0x19B304u);
    ctx->pc = 0x19B300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B2FCu;
    // 0x19b300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19B2FCu, 0x19B304u)) {
        return;
    }
    ctx->pc = 0x19B304u;
label_19b304:
    // 0x19b304: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19B304u;
    SET_GPR_U32(ctx, 31, 0x19B30Cu);
    ctx->pc = 0x19B308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B304u;
    // 0x19b308: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19B304u, 0x19B30Cu)) {
        return;
    }
    ctx->pc = 0x19B30Cu;
label_19b30c:
    // 0x19b30c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19b30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b310: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x19B310u;
    SET_GPR_U32(ctx, 31, 0x19B318u);
    ctx->pc = 0x19B314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B310u;
    // 0x19b314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19B310u, 0x19B318u)) {
        return;
    }
    ctx->pc = 0x19B318u;
label_19b318:
    // 0x19b318: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19B318u;
    SET_GPR_U32(ctx, 31, 0x19B320u);
    ctx->pc = 0x19B31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B318u;
    // 0x19b31c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19B318u, 0x19B320u)) {
        return;
    }
    ctx->pc = 0x19B320u;
label_19b320:
    // 0x19b320: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19b320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b324: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x19B324u;
    SET_GPR_U32(ctx, 31, 0x19B32Cu);
    ctx->pc = 0x19B328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B324u;
    // 0x19b328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19B324u, 0x19B32Cu)) {
        return;
    }
    ctx->pc = 0x19B32Cu;
label_19b32c:
    // 0x19b32c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19B32Cu;
    SET_GPR_U32(ctx, 31, 0x19B334u);
    ctx->pc = 0x19B330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B32Cu;
    // 0x19b330: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19B32Cu, 0x19B334u)) {
        return;
    }
    ctx->pc = 0x19B334u;
label_19b334:
    // 0x19b334: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19b334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b338: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x19B338u;
    SET_GPR_U32(ctx, 31, 0x19B340u);
    ctx->pc = 0x19B33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B338u;
    // 0x19b33c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19B338u, 0x19B340u)) {
        return;
    }
    ctx->pc = 0x19B340u;
label_19b340:
    // 0x19b340: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19B340u;
    SET_GPR_U32(ctx, 31, 0x19B348u);
    ctx->pc = 0x19B344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B340u;
    // 0x19b344: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19B340u, 0x19B348u)) {
        return;
    }
    ctx->pc = 0x19B348u;
label_19b348:
    // 0x19b348: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x19b348u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x19b34c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b350: 0x26108110  addiu       $s0, $s0, -0x7EF0
    ctx->pc = 0x19b350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934800));
    // 0x19b354: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x19B354u;
    SET_GPR_U32(ctx, 31, 0x19B35Cu);
    ctx->pc = 0x19B358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B354u;
    // 0x19b358: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19B354u, 0x19B35Cu)) {
        return;
    }
    ctx->pc = 0x19B35Cu;
label_19b35c:
    // 0x19b35c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19B35Cu;
    SET_GPR_U32(ctx, 31, 0x19B364u);
    ctx->pc = 0x19B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B35Cu;
    // 0x19b360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19B35Cu, 0x19B364u)) {
        return;
    }
    ctx->pc = 0x19B364u;
label_19b364:
    // 0x19b364: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x19b364u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x19b368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b36c: 0x26108118  addiu       $s0, $s0, -0x7EE8
    ctx->pc = 0x19b36cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934808));
    // 0x19b370: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x19B370u;
    SET_GPR_U32(ctx, 31, 0x19B378u);
    ctx->pc = 0x19B374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B370u;
    // 0x19b374: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19B370u, 0x19B378u)) {
        return;
    }
    ctx->pc = 0x19B378u;
label_19b378:
    // 0x19b378: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19B378u;
    SET_GPR_U32(ctx, 31, 0x19B380u);
    ctx->pc = 0x19B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B378u;
    // 0x19b37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19B378u, 0x19B380u)) {
        return;
    }
    ctx->pc = 0x19B380u;
label_19b380:
    // 0x19b380: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x19b380u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x19b384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b388: 0x26108128  addiu       $s0, $s0, -0x7ED8
    ctx->pc = 0x19b388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934824));
    // 0x19b38c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x19B38Cu;
    SET_GPR_U32(ctx, 31, 0x19B394u);
    ctx->pc = 0x19B390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B38Cu;
    // 0x19b390: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19B38Cu, 0x19B394u)) {
        return;
    }
    ctx->pc = 0x19B394u;
label_19b394:
    // 0x19b394: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19B394u;
    SET_GPR_U32(ctx, 31, 0x19B39Cu);
    ctx->pc = 0x19B398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B394u;
    // 0x19b398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19B394u, 0x19B39Cu)) {
        return;
    }
    ctx->pc = 0x19B39Cu;
label_19b39c:
    // 0x19b39c: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x19b39cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x19b3a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3a4: 0x26108120  addiu       $s0, $s0, -0x7EE0
    ctx->pc = 0x19b3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934816));
    // 0x19b3a8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x19B3A8u;
    SET_GPR_U32(ctx, 31, 0x19B3B0u);
    ctx->pc = 0x19B3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B3A8u;
    // 0x19b3ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19B3A8u, 0x19B3B0u)) {
        return;
    }
    ctx->pc = 0x19B3B0u;
label_19b3b0:
    // 0x19b3b0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19B3B0u;
    SET_GPR_U32(ctx, 31, 0x19B3B8u);
    ctx->pc = 0x19B3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B3B0u;
    // 0x19b3b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19B3B0u, 0x19B3B8u)) {
        return;
    }
    ctx->pc = 0x19B3B8u;
label_19b3b8:
    // 0x19b3b8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x19b3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x19b3bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3c0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x19B3C0u;
    SET_GPR_U32(ctx, 31, 0x19B3C8u);
    ctx->pc = 0x19B3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B3C0u;
    // 0x19b3c4: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19B3C0u, 0x19B3C8u)) {
        return;
    }
    ctx->pc = 0x19B3C8u;
label_19b3c8:
    // 0x19b3c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19b3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3cc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x19B3CCu;
    SET_GPR_U32(ctx, 31, 0x19B3D4u);
    ctx->pc = 0x19B3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B3CCu;
    // 0x19b3d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19B3CCu, 0x19B3D4u)) {
        return;
    }
    ctx->pc = 0x19B3D4u;
label_19b3d4:
    // 0x19b3d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19b3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3d8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x19B3D8u;
    SET_GPR_U32(ctx, 31, 0x19B3E0u);
    ctx->pc = 0x19B3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B3D8u;
    // 0x19b3dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19B3D8u, 0x19B3E0u)) {
        return;
    }
    ctx->pc = 0x19B3E0u;
label_19b3e0:
    // 0x19b3e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19b3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3e4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x19B3E4u;
    SET_GPR_U32(ctx, 31, 0x19B3ECu);
    ctx->pc = 0x19B3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B3E4u;
    // 0x19b3e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19B3E4u, 0x19B3ECu)) {
        return;
    }
    ctx->pc = 0x19B3ECu;
label_19b3ec:
    // 0x19b3ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x19b3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3f0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x19B3F0u;
    SET_GPR_U32(ctx, 31, 0x19B3F8u);
    ctx->pc = 0x19B3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B3F0u;
    // 0x19b3f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19B3F0u, 0x19B3F8u)) {
        return;
    }
    ctx->pc = 0x19B3F8u;
label_19b3f8:
    // 0x19b3f8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x19b3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3fc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x19B3FCu;
    SET_GPR_U32(ctx, 31, 0x19B404u);
    ctx->pc = 0x19B400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B3FCu;
    // 0x19b400: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19B3FCu, 0x19B404u)) {
        return;
    }
    ctx->pc = 0x19B404u;
label_19b404:
    // 0x19b404: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x19b404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b408: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x19B408u;
    SET_GPR_U32(ctx, 31, 0x19B410u);
    ctx->pc = 0x19B40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B408u;
    // 0x19b40c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19B408u, 0x19B410u)) {
        return;
    }
    ctx->pc = 0x19B410u;
label_19b410:
    // 0x19b410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b414: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x19B414u;
    SET_GPR_U32(ctx, 31, 0x19B41Cu);
    ctx->pc = 0x19B418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B414u;
    // 0x19b418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x19B414u, 0x19B41Cu)) {
        return;
    }
    ctx->pc = 0x19B41Cu;
label_19b41c:
    // 0x19b41c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x19b41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b420: 0xc06700c  jal         func_19C030
    ctx->pc = 0x19B420u;
    SET_GPR_U32(ctx, 31, 0x19B428u);
    ctx->pc = 0x19B424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B420u;
    // 0x19b424: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19C030u, 0x19B420u, 0x19B428u)) {
        return;
    }
    ctx->pc = 0x19B428u;
label_19b428:
    // 0x19b428: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x19b428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19b42c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x19b42cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19b430: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x19b430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19b434: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x19b434u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19b438: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x19b438u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19b43c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19b43cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19b440: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x19b440u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b444: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x19b444u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b448: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x19b448u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b44c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b450: 0x3e00008  jr          $ra
    ctx->pc = 0x19B450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B450u;
        // 0x19b454: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B458u;
}

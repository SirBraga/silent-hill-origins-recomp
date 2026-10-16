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

// Function: sub_0013A648
// Address: 0x13a648 - 0x13a7e8
void sub_0013A648_0x13a648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A648_0x13a648");
#endif

    switch (ctx->pc) {
        case 0x13a648u: goto label_13a648;
        case 0x13a64cu: goto label_13a64c;
        case 0x13a650u: goto label_13a650;
        case 0x13a654u: goto label_13a654;
        case 0x13a658u: goto label_13a658;
        case 0x13a65cu: goto label_13a65c;
        case 0x13a660u: goto label_13a660;
        case 0x13a664u: goto label_13a664;
        case 0x13a668u: goto label_13a668;
        case 0x13a66cu: goto label_13a66c;
        case 0x13a670u: goto label_13a670;
        case 0x13a674u: goto label_13a674;
        case 0x13a678u: goto label_13a678;
        case 0x13a67cu: goto label_13a67c;
        case 0x13a680u: goto label_13a680;
        case 0x13a684u: goto label_13a684;
        case 0x13a688u: goto label_13a688;
        case 0x13a68cu: goto label_13a68c;
        case 0x13a690u: goto label_13a690;
        case 0x13a694u: goto label_13a694;
        case 0x13a698u: goto label_13a698;
        case 0x13a69cu: goto label_13a69c;
        case 0x13a6a0u: goto label_13a6a0;
        case 0x13a6a4u: goto label_13a6a4;
        case 0x13a6a8u: goto label_13a6a8;
        case 0x13a6acu: goto label_13a6ac;
        case 0x13a6b0u: goto label_13a6b0;
        case 0x13a6b4u: goto label_13a6b4;
        case 0x13a6b8u: goto label_13a6b8;
        case 0x13a6bcu: goto label_13a6bc;
        case 0x13a6c0u: goto label_13a6c0;
        case 0x13a6c4u: goto label_13a6c4;
        case 0x13a6c8u: goto label_13a6c8;
        case 0x13a6ccu: goto label_13a6cc;
        case 0x13a6d0u: goto label_13a6d0;
        case 0x13a6d4u: goto label_13a6d4;
        case 0x13a6d8u: goto label_13a6d8;
        case 0x13a6dcu: goto label_13a6dc;
        case 0x13a6e0u: goto label_13a6e0;
        case 0x13a6e4u: goto label_13a6e4;
        case 0x13a6e8u: goto label_13a6e8;
        case 0x13a6ecu: goto label_13a6ec;
        case 0x13a6f0u: goto label_13a6f0;
        case 0x13a6f4u: goto label_13a6f4;
        case 0x13a6f8u: goto label_13a6f8;
        case 0x13a6fcu: goto label_13a6fc;
        case 0x13a700u: goto label_13a700;
        case 0x13a704u: goto label_13a704;
        case 0x13a708u: goto label_13a708;
        case 0x13a70cu: goto label_13a70c;
        case 0x13a710u: goto label_13a710;
        case 0x13a714u: goto label_13a714;
        case 0x13a718u: goto label_13a718;
        case 0x13a71cu: goto label_13a71c;
        case 0x13a720u: goto label_13a720;
        case 0x13a724u: goto label_13a724;
        case 0x13a728u: goto label_13a728;
        case 0x13a72cu: goto label_13a72c;
        case 0x13a730u: goto label_13a730;
        case 0x13a734u: goto label_13a734;
        case 0x13a738u: goto label_13a738;
        case 0x13a73cu: goto label_13a73c;
        case 0x13a740u: goto label_13a740;
        case 0x13a744u: goto label_13a744;
        case 0x13a748u: goto label_13a748;
        case 0x13a74cu: goto label_13a74c;
        case 0x13a750u: goto label_13a750;
        case 0x13a754u: goto label_13a754;
        case 0x13a758u: goto label_13a758;
        case 0x13a75cu: goto label_13a75c;
        case 0x13a760u: goto label_13a760;
        case 0x13a764u: goto label_13a764;
        case 0x13a768u: goto label_13a768;
        case 0x13a76cu: goto label_13a76c;
        case 0x13a770u: goto label_13a770;
        case 0x13a774u: goto label_13a774;
        case 0x13a778u: goto label_13a778;
        case 0x13a77cu: goto label_13a77c;
        case 0x13a780u: goto label_13a780;
        case 0x13a784u: goto label_13a784;
        case 0x13a788u: goto label_13a788;
        case 0x13a78cu: goto label_13a78c;
        case 0x13a790u: goto label_13a790;
        case 0x13a794u: goto label_13a794;
        case 0x13a798u: goto label_13a798;
        case 0x13a79cu: goto label_13a79c;
        case 0x13a7a0u: goto label_13a7a0;
        case 0x13a7a4u: goto label_13a7a4;
        case 0x13a7a8u: goto label_13a7a8;
        case 0x13a7acu: goto label_13a7ac;
        case 0x13a7b0u: goto label_13a7b0;
        case 0x13a7b4u: goto label_13a7b4;
        case 0x13a7b8u: goto label_13a7b8;
        case 0x13a7bcu: goto label_13a7bc;
        case 0x13a7c0u: goto label_13a7c0;
        case 0x13a7c4u: goto label_13a7c4;
        case 0x13a7c8u: goto label_13a7c8;
        case 0x13a7ccu: goto label_13a7cc;
        case 0x13a7d0u: goto label_13a7d0;
        case 0x13a7d4u: goto label_13a7d4;
        case 0x13a7d8u: goto label_13a7d8;
        case 0x13a7dcu: goto label_13a7dc;
        case 0x13a7e0u: goto label_13a7e0;
        case 0x13a7e4u: goto label_13a7e4;
        default: break;
    }

    ctx->pc = 0x13a648u;

label_13a648:
    // 0x13a648: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x13a648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_13a64c:
    // 0x13a64c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x13a64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_13a650:
    // 0x13a650: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x13a650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_13a654:
    // 0x13a654: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13a654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13a658:
    // 0x13a658: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x13a658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_13a65c:
    // 0x13a65c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x13a65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_13a660:
    // 0x13a660: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x13a660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_13a664:
    // 0x13a664: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13a664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_13a668:
    // 0x13a668: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x13a668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_13a66c:
    // 0x13a66c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x13a66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_13a670:
    // 0x13a670: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13a670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13a674:
    // 0x13a674: 0xc04a16a  jal         func_1285A8
label_13a678:
    if (ctx->pc == 0x13A678u) {
        ctx->pc = 0x13A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A674u;
        // 0x13a678: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A67Cu;
        goto label_13a67c;
    }
    ctx->pc = 0x13A674u;
    SET_GPR_U32(ctx, 31, 0x13A67Cu);
    ctx->pc = 0x13A678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A674u;
    // 0x13a678: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1285A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1285A8u, 0x13A674u, 0x13A67Cu)) {
        return;
    }
    ctx->pc = 0x13A67Cu;
label_13a67c:
    // 0x13a67c: 0xa2602da0  sb          $zero, 0x2DA0($s3)
    ctx->pc = 0x13a67cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11680), (uint8_t)GPR_U32(ctx, 0));
label_13a680:
    // 0x13a680: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x13a680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_13a684:
    // 0x13a684: 0xa2602da3  sb          $zero, 0x2DA3($s3)
    ctx->pc = 0x13a684u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11683), (uint8_t)GPR_U32(ctx, 0));
label_13a688:
    // 0x13a688: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13a688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13a68c:
    // 0x13a68c: 0xa2602da2  sb          $zero, 0x2DA2($s3)
    ctx->pc = 0x13a68cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11682), (uint8_t)GPR_U32(ctx, 0));
label_13a690:
    // 0x13a690: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13a690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13a694:
    // 0x13a694: 0xa2602da1  sb          $zero, 0x2DA1($s3)
    ctx->pc = 0x13a694u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11681), (uint8_t)GPR_U32(ctx, 0));
label_13a698:
    // 0x13a698: 0xc07f1c0  jal         func_1FC700
label_13a69c:
    if (ctx->pc == 0x13A69Cu) {
        ctx->pc = 0x13A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A698u;
        // 0x13a69c: 0x8c461a68  lw          $a2, 0x1A68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A6A0u;
        goto label_13a6a0;
    }
    ctx->pc = 0x13A698u;
    SET_GPR_U32(ctx, 31, 0x13A6A0u);
    ctx->pc = 0x13A69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A698u;
    // 0x13a69c: 0x8c461a68  lw          $a2, 0x1A68($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x13A698u, 0x13A6A0u)) {
        return;
    }
    ctx->pc = 0x13A6A0u;
label_13a6a0:
    // 0x13a6a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13a6a4:
    // 0x13a6a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13a6a8:
    // 0x13a6a8: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_13a6ac:
    if (ctx->pc == 0x13A6ACu) {
        ctx->pc = 0x13A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A6A8u;
        // 0x13a6ac: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A6B0u;
        goto label_13a6b0;
    }
    ctx->pc = 0x13A6A8u;
    {
        const bool branch_taken_0x13a6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A6A8u;
        // 0x13a6ac: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a6a8) {
            ctx->pc = 0x13A7B8u;
            goto label_13a7b8;
        }
    }
    ctx->pc = 0x13A6B0u;
label_13a6b0:
    // 0x13a6b0: 0x3c170069  lui         $s7, 0x69
    ctx->pc = 0x13a6b0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)105 << 16));
label_13a6b4:
    // 0x13a6b4: 0x2456108c  addiu       $s6, $v0, 0x108C
    ctx->pc = 0x13a6b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_13a6b8:
    // 0x13a6b8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x13a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13a6bc:
    // 0x13a6bc: 0x0  nop
    ctx->pc = 0x13a6bcu;
    // NOP
label_13a6c0:
    // 0x13a6c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x13a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_13a6c4:
    // 0x13a6c4: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_13a6c8:
    if (ctx->pc == 0x13A6C8u) {
        ctx->pc = 0x13A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A6C4u;
        // 0x13a6c8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A6CCu;
        goto label_13a6cc;
    }
    ctx->pc = 0x13A6C4u;
    {
        const bool branch_taken_0x13a6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A6C4u;
        // 0x13a6c8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a6c4) {
            ctx->pc = 0x13A790u;
            goto label_13a790;
        }
    }
    ctx->pc = 0x13A6CCu;
label_13a6cc:
    // 0x13a6cc: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x13a6ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_13a6d0:
    // 0x13a6d0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x13a6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13a6d4:
    // 0x13a6d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13a6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13a6d8:
    // 0x13a6d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13a6d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a6dc:
    // 0x13a6dc: 0xc08063c  jal         func_2018F0
label_13a6e0:
    if (ctx->pc == 0x13A6E0u) {
        ctx->pc = 0x13A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A6DCu;
        // 0x13a6e0: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A6E4u;
        goto label_13a6e4;
    }
    ctx->pc = 0x13A6DCu;
    SET_GPR_U32(ctx, 31, 0x13A6E4u);
    ctx->pc = 0x13A6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A6DCu;
    // 0x13a6e0: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x13A6DCu, 0x13A6E4u)) {
        return;
    }
    ctx->pc = 0x13A6E4u;
label_13a6e4:
    // 0x13a6e4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_13a6e8:
    if (ctx->pc == 0x13A6E8u) {
        ctx->pc = 0x13A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A6E4u;
        // 0x13a6e8: 0x26e4eda0  addiu       $a0, $s7, -0x1260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A6ECu;
        goto label_13a6ec;
    }
    ctx->pc = 0x13A6E4u;
    {
        const bool branch_taken_0x13a6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A6E4u;
        // 0x13a6e8: 0x26e4eda0  addiu       $a0, $s7, -0x1260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a6e4) {
            ctx->pc = 0x13A78Cu;
            goto label_13a78c;
        }
    }
    ctx->pc = 0x13A6ECu;
label_13a6ec:
    // 0x13a6ec: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x13a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_13a6f0:
    // 0x13a6f0: 0x40f809  jalr        $v0
label_13a6f4:
    if (ctx->pc == 0x13A6F4u) {
        ctx->pc = 0x13A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A6F0u;
        // 0x13a6f4: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A6F8u;
        goto label_13a6f8;
    }
    ctx->pc = 0x13A6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A6F8u);
        ctx->pc = 0x13A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A6F0u;
        // 0x13a6f4: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A6F0u, 0x13A6F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A6F8u;
label_13a6f8:
    // 0x13a6f8: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_13a6fc:
    if (ctx->pc == 0x13A6FCu) {
        ctx->pc = 0x13A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A6F8u;
        // 0x13a6fc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A700u;
        goto label_13a700;
    }
    ctx->pc = 0x13A6F8u;
    {
        const bool branch_taken_0x13a6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A6F8u;
        // 0x13a6fc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a6f8) {
            ctx->pc = 0x13A790u;
            goto label_13a790;
        }
    }
    ctx->pc = 0x13A700u;
label_13a700:
    // 0x13a700: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13a700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_13a704:
    // 0x13a704: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_13a708:
    if (ctx->pc == 0x13A708u) {
        ctx->pc = 0x13A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A704u;
        // 0x13a708: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A70Cu;
        goto label_13a70c;
    }
    ctx->pc = 0x13A704u;
    {
        const bool branch_taken_0x13a704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A704u;
        // 0x13a708: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a704) {
            ctx->pc = 0x13A790u;
            goto label_13a790;
        }
    }
    ctx->pc = 0x13A70Cu;
label_13a70c:
    // 0x13a70c: 0x3c150034  lui         $s5, 0x34
    ctx->pc = 0x13a70cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
label_13a710:
    // 0x13a710: 0x24528410  addiu       $s2, $v0, -0x7BF0
    ctx->pc = 0x13a710u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935568));
label_13a714:
    // 0x13a714: 0x26702da4  addiu       $s0, $s3, 0x2DA4
    ctx->pc = 0x13a714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11684));
label_13a718:
    // 0x13a718: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x13a718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a71c:
    // 0x13a71c: 0x0  nop
    ctx->pc = 0x13a71cu;
    // NOP
label_13a720:
    // 0x13a720: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x13a720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a724:
    // 0x13a724: 0xc065c68  jal         func_1971A0
label_13a728:
    if (ctx->pc == 0x13A728u) {
        ctx->pc = 0x13A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A724u;
        // 0x13a728: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A72Cu;
        goto label_13a72c;
    }
    ctx->pc = 0x13A724u;
    SET_GPR_U32(ctx, 31, 0x13A72Cu);
    ctx->pc = 0x13A728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A724u;
    // 0x13a728: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x13A724u, 0x13A72Cu)) {
        return;
    }
    ctx->pc = 0x13A72Cu;
label_13a72c:
    // 0x13a72c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_13a730:
    if (ctx->pc == 0x13A730u) {
        ctx->pc = 0x13A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A72Cu;
        // 0x13a730: 0x26660040  addiu       $a2, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A734u;
        goto label_13a734;
    }
    ctx->pc = 0x13A72Cu;
    {
        const bool branch_taken_0x13a72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A72Cu;
        // 0x13a730: 0x26660040  addiu       $a2, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a72c) {
            ctx->pc = 0x13A77Cu;
            goto label_13a77c;
        }
    }
    ctx->pc = 0x13A734u;
label_13a734:
    // 0x13a734: 0x8cc200e4  lw          $v0, 0xE4($a2)
    ctx->pc = 0x13a734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
label_13a738:
    // 0x13a738: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_13a73c:
    if (ctx->pc == 0x13A73Cu) {
        ctx->pc = 0x13A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A738u;
        // 0x13a73c: 0x8ea48668  lw          $a0, -0x7998($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A740u;
        goto label_13a740;
    }
    ctx->pc = 0x13A738u;
    {
        const bool branch_taken_0x13a738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A738u;
        // 0x13a73c: 0x8ea48668  lw          $a0, -0x7998($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a738) {
            ctx->pc = 0x13A748u;
            goto label_13a748;
        }
    }
    ctx->pc = 0x13A740u;
label_13a740:
    // 0x13a740: 0x10000002  b           . + 4 + (0x2 << 2)
label_13a744:
    if (ctx->pc == 0x13A744u) {
        ctx->pc = 0x13A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A740u;
        // 0x13a744: 0x8cc600d8  lw          $a2, 0xD8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A748u;
        goto label_13a748;
    }
    ctx->pc = 0x13A740u;
    {
        const bool branch_taken_0x13a740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A740u;
        // 0x13a744: 0x8cc600d8  lw          $a2, 0xD8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a740) {
            ctx->pc = 0x13A74Cu;
            goto label_13a74c;
        }
    }
    ctx->pc = 0x13A748u;
label_13a748:
    // 0x13a748: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13a748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a74c:
    // 0x13a74c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13a74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13a750:
    // 0x13a750: 0x26672da0  addiu       $a3, $s3, 0x2DA0
    ctx->pc = 0x13a750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 11680));
label_13a754:
    // 0x13a754: 0xc058d5a  jal         func_163568
label_13a758:
    if (ctx->pc == 0x13A758u) {
        ctx->pc = 0x13A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A754u;
        // 0x13a758: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A75Cu;
        goto label_13a75c;
    }
    ctx->pc = 0x13A754u;
    SET_GPR_U32(ctx, 31, 0x13A75Cu);
    ctx->pc = 0x13A758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A754u;
    // 0x13a758: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163568u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x163568u, 0x13A754u, 0x13A75Cu)) {
        return;
    }
    ctx->pc = 0x13A75Cu;
label_13a75c:
    // 0x13a75c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13a75cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13a760:
    // 0x13a760: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_13a764:
    if (ctx->pc == 0x13A764u) {
        ctx->pc = 0x13A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A760u;
        // 0x13a764: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A768u;
        goto label_13a768;
    }
    ctx->pc = 0x13A760u;
    {
        const bool branch_taken_0x13a760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a760) {
            ctx->pc = 0x13A764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A760u;
            // 0x13a764: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A780u;
            goto label_13a780;
        }
    }
    ctx->pc = 0x13A768u;
label_13a768:
    // 0x13a768: 0x8c620660  lw          $v0, 0x660($v1)
    ctx->pc = 0x13a768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1632)));
label_13a76c:
    // 0x13a76c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_13a770:
    if (ctx->pc == 0x13A770u) {
        ctx->pc = 0x13A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A76Cu;
        // 0x13a770: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A774u;
        goto label_13a774;
    }
    ctx->pc = 0x13A76Cu;
    {
        const bool branch_taken_0x13a76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a76c) {
            ctx->pc = 0x13A770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A76Cu;
            // 0x13a770: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A780u;
            goto label_13a780;
        }
    }
    ctx->pc = 0x13A774u;
label_13a774:
    // 0x13a774: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x13a774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_13a778:
    // 0x13a778: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x13a778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_13a77c:
    // 0x13a77c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x13a77cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_13a780:
    // 0x13a780: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x13a780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_13a784:
    // 0x13a784: 0x621ffe6  bgez        $s1, . + 4 + (-0x1A << 2)
label_13a788:
    if (ctx->pc == 0x13A788u) {
        ctx->pc = 0x13A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A784u;
        // 0x13a788: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A78Cu;
        goto label_13a78c;
    }
    ctx->pc = 0x13A784u;
    {
        const bool branch_taken_0x13a784 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x13A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A784u;
        // 0x13a788: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a784) {
            ctx->pc = 0x13A720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a720;
        }
    }
    ctx->pc = 0x13A78Cu;
label_13a78c:
    // 0x13a78c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13a78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13a790:
    // 0x13a790: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13a790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13a794:
    // 0x13a794: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13a794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a798:
    // 0x13a798: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13a798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13a79c:
    // 0x13a79c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13a79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13a7a0:
    // 0x13a7a0: 0xc07f0c8  jal         func_1FC320
label_13a7a4:
    if (ctx->pc == 0x13A7A4u) {
        ctx->pc = 0x13A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7A0u;
        // 0x13a7a4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A7A8u;
        goto label_13a7a8;
    }
    ctx->pc = 0x13A7A0u;
    SET_GPR_U32(ctx, 31, 0x13A7A8u);
    ctx->pc = 0x13A7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A7A0u;
    // 0x13a7a4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x13A7A0u, 0x13A7A8u)) {
        return;
    }
    ctx->pc = 0x13A7A8u;
label_13a7a8:
    // 0x13a7a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13a7ac:
    // 0x13a7ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13a7b0:
    // 0x13a7b0: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
label_13a7b4:
    if (ctx->pc == 0x13A7B4u) {
        ctx->pc = 0x13A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7B0u;
        // 0x13a7b4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A7B8u;
        goto label_13a7b8;
    }
    ctx->pc = 0x13A7B0u;
    {
        const bool branch_taken_0x13a7b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7B0u;
        // 0x13a7b4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a7b0) {
            ctx->pc = 0x13A6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a6c0;
        }
    }
    ctx->pc = 0x13A7B8u;
label_13a7b8:
    // 0x13a7b8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x13a7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_13a7bc:
    // 0x13a7bc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x13a7bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13a7c0:
    // 0x13a7c0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x13a7c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13a7c4:
    // 0x13a7c4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x13a7c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13a7c8:
    // 0x13a7c8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x13a7c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_13a7cc:
    // 0x13a7cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13a7ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13a7d0:
    // 0x13a7d0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x13a7d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13a7d4:
    // 0x13a7d4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x13a7d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13a7d8:
    // 0x13a7d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13a7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13a7dc:
    // 0x13a7dc: 0x3e00008  jr          $ra
label_13a7e0:
    if (ctx->pc == 0x13A7E0u) {
        ctx->pc = 0x13A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7DCu;
        // 0x13a7e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A7E4u;
        goto label_13a7e4;
    }
    ctx->pc = 0x13A7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7DCu;
        // 0x13a7e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A7E4u;
label_13a7e4:
    // 0x13a7e4: 0x0  nop
    ctx->pc = 0x13a7e4u;
    // NOP
    ctx->pc = 0x13a7e8u;
}

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

// Function: sub_002D6758
// Address: 0x2d6758 - 0x2d68e8
void sub_002D6758_0x2d6758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6758_0x2d6758");
#endif

    switch (ctx->pc) {
        case 0x2d6758u: goto label_2d6758;
        case 0x2d675cu: goto label_2d675c;
        case 0x2d6760u: goto label_2d6760;
        case 0x2d6764u: goto label_2d6764;
        case 0x2d6768u: goto label_2d6768;
        case 0x2d676cu: goto label_2d676c;
        case 0x2d6770u: goto label_2d6770;
        case 0x2d6774u: goto label_2d6774;
        case 0x2d6778u: goto label_2d6778;
        case 0x2d677cu: goto label_2d677c;
        case 0x2d6780u: goto label_2d6780;
        case 0x2d6784u: goto label_2d6784;
        case 0x2d6788u: goto label_2d6788;
        case 0x2d678cu: goto label_2d678c;
        case 0x2d6790u: goto label_2d6790;
        case 0x2d6794u: goto label_2d6794;
        case 0x2d6798u: goto label_2d6798;
        case 0x2d679cu: goto label_2d679c;
        case 0x2d67a0u: goto label_2d67a0;
        case 0x2d67a4u: goto label_2d67a4;
        case 0x2d67a8u: goto label_2d67a8;
        case 0x2d67acu: goto label_2d67ac;
        case 0x2d67b0u: goto label_2d67b0;
        case 0x2d67b4u: goto label_2d67b4;
        case 0x2d67b8u: goto label_2d67b8;
        case 0x2d67bcu: goto label_2d67bc;
        case 0x2d67c0u: goto label_2d67c0;
        case 0x2d67c4u: goto label_2d67c4;
        case 0x2d67c8u: goto label_2d67c8;
        case 0x2d67ccu: goto label_2d67cc;
        case 0x2d67d0u: goto label_2d67d0;
        case 0x2d67d4u: goto label_2d67d4;
        case 0x2d67d8u: goto label_2d67d8;
        case 0x2d67dcu: goto label_2d67dc;
        case 0x2d67e0u: goto label_2d67e0;
        case 0x2d67e4u: goto label_2d67e4;
        case 0x2d67e8u: goto label_2d67e8;
        case 0x2d67ecu: goto label_2d67ec;
        case 0x2d67f0u: goto label_2d67f0;
        case 0x2d67f4u: goto label_2d67f4;
        case 0x2d67f8u: goto label_2d67f8;
        case 0x2d67fcu: goto label_2d67fc;
        case 0x2d6800u: goto label_2d6800;
        case 0x2d6804u: goto label_2d6804;
        case 0x2d6808u: goto label_2d6808;
        case 0x2d680cu: goto label_2d680c;
        case 0x2d6810u: goto label_2d6810;
        case 0x2d6814u: goto label_2d6814;
        case 0x2d6818u: goto label_2d6818;
        case 0x2d681cu: goto label_2d681c;
        case 0x2d6820u: goto label_2d6820;
        case 0x2d6824u: goto label_2d6824;
        case 0x2d6828u: goto label_2d6828;
        case 0x2d682cu: goto label_2d682c;
        case 0x2d6830u: goto label_2d6830;
        case 0x2d6834u: goto label_2d6834;
        case 0x2d6838u: goto label_2d6838;
        case 0x2d683cu: goto label_2d683c;
        case 0x2d6840u: goto label_2d6840;
        case 0x2d6844u: goto label_2d6844;
        case 0x2d6848u: goto label_2d6848;
        case 0x2d684cu: goto label_2d684c;
        case 0x2d6850u: goto label_2d6850;
        case 0x2d6854u: goto label_2d6854;
        case 0x2d6858u: goto label_2d6858;
        case 0x2d685cu: goto label_2d685c;
        case 0x2d6860u: goto label_2d6860;
        case 0x2d6864u: goto label_2d6864;
        case 0x2d6868u: goto label_2d6868;
        case 0x2d686cu: goto label_2d686c;
        case 0x2d6870u: goto label_2d6870;
        case 0x2d6874u: goto label_2d6874;
        case 0x2d6878u: goto label_2d6878;
        case 0x2d687cu: goto label_2d687c;
        case 0x2d6880u: goto label_2d6880;
        case 0x2d6884u: goto label_2d6884;
        case 0x2d6888u: goto label_2d6888;
        case 0x2d688cu: goto label_2d688c;
        case 0x2d6890u: goto label_2d6890;
        case 0x2d6894u: goto label_2d6894;
        case 0x2d6898u: goto label_2d6898;
        case 0x2d689cu: goto label_2d689c;
        case 0x2d68a0u: goto label_2d68a0;
        case 0x2d68a4u: goto label_2d68a4;
        case 0x2d68a8u: goto label_2d68a8;
        case 0x2d68acu: goto label_2d68ac;
        case 0x2d68b0u: goto label_2d68b0;
        case 0x2d68b4u: goto label_2d68b4;
        case 0x2d68b8u: goto label_2d68b8;
        case 0x2d68bcu: goto label_2d68bc;
        case 0x2d68c0u: goto label_2d68c0;
        case 0x2d68c4u: goto label_2d68c4;
        case 0x2d68c8u: goto label_2d68c8;
        case 0x2d68ccu: goto label_2d68cc;
        case 0x2d68d0u: goto label_2d68d0;
        case 0x2d68d4u: goto label_2d68d4;
        case 0x2d68d8u: goto label_2d68d8;
        case 0x2d68dcu: goto label_2d68dc;
        case 0x2d68e0u: goto label_2d68e0;
        case 0x2d68e4u: goto label_2d68e4;
        default: break;
    }

    ctx->pc = 0x2d6758u;

label_2d6758:
    // 0x2d6758: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d6758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d675c:
    // 0x2d675c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2d675cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2d6760:
    // 0x2d6760: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2d6760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2d6764:
    // 0x2d6764: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d6764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2d6768:
    // 0x2d6768: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d6768u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d676c:
    // 0x2d676c: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x2d676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_2d6770:
    // 0x2d6770: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d6770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2d6774:
    // 0x2d6774: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2d6774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2d6778:
    // 0x2d6778: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d6778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2d677c:
    // 0x2d677c: 0x34a50900  ori         $a1, $a1, 0x900
    ctx->pc = 0x2d677cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
label_2d6780:
    // 0x2d6780: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d6780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2d6784:
    // 0x2d6784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d6788:
    // 0x2d6788: 0x40f809  jalr        $v0
label_2d678c:
    if (ctx->pc == 0x2D678Cu) {
        ctx->pc = 0x2D678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6788u;
        // 0x2d678c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6790u;
        goto label_2d6790;
    }
    ctx->pc = 0x2D6788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D6790u);
        ctx->pc = 0x2D678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6788u;
        // 0x2d678c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6788u, 0x2D6790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6790u;
label_2d6790:
    // 0x2d6790: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2d6790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2d6794:
    // 0x2d6794: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d6794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d6798:
    // 0x2d6798: 0x2642018  mult        $a0, $s3, $a0
    ctx->pc = 0x2d6798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2d679c:
    // 0x2d679c: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x2d679cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_2d67a0:
    // 0x2d67a0: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2d67a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_2d67a4:
    // 0x2d67a4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2d67a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2d67a8:
    // 0x2d67a8: 0xc0ad2b4  jal         func_2B4AD0
label_2d67ac:
    if (ctx->pc == 0x2D67ACu) {
        ctx->pc = 0x2D67ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67A8u;
        // 0x2d67ac: 0x34c60900  ori         $a2, $a2, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D67B0u;
        goto label_2d67b0;
    }
    ctx->pc = 0x2D67A8u;
    SET_GPR_U32(ctx, 31, 0x2D67B0u);
    ctx->pc = 0x2D67ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D67A8u;
    // 0x2d67ac: 0x34c60900  ori         $a2, $a2, 0x900 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2304);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4AD0u, 0x2D67A8u, 0x2D67B0u)) {
        return;
    }
    ctx->pc = 0x2D67B0u;
label_2d67b0:
    // 0x2d67b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d67b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d67b4:
    // 0x2d67b4: 0x1260002f  beqz        $s3, . + 4 + (0x2F << 2)
label_2d67b8:
    if (ctx->pc == 0x2D67B8u) {
        ctx->pc = 0x2D67B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67B4u;
        // 0x2d67b8: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D67BCu;
        goto label_2d67bc;
    }
    ctx->pc = 0x2D67B4u;
    {
        const bool branch_taken_0x2d67b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D67B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67B4u;
        // 0x2d67b8: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d67b4) {
            ctx->pc = 0x2D6874u;
            goto label_2d6874;
        }
    }
    ctx->pc = 0x2D67BCu;
label_2d67bc:
    // 0x2d67bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d67bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d67c0:
    // 0x2d67c0: 0x1a600011  blez        $s3, . + 4 + (0x11 << 2)
label_2d67c4:
    if (ctx->pc == 0x2D67C4u) {
        ctx->pc = 0x2D67C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67C0u;
        // 0x2d67c4: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D67C8u;
        goto label_2d67c8;
    }
    ctx->pc = 0x2D67C0u;
    {
        const bool branch_taken_0x2d67c0 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x2D67C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67C0u;
        // 0x2d67c4: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d67c0) {
            ctx->pc = 0x2D6808u;
            goto label_2d6808;
        }
    }
    ctx->pc = 0x2D67C8u;
label_2d67c8:
    // 0x2d67c8: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
label_2d67cc:
    if (ctx->pc == 0x2D67CCu) {
        ctx->pc = 0x2D67CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67C8u;
        // 0x2d67cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D67D0u;
        goto label_2d67d0;
    }
    ctx->pc = 0x2D67C8u;
    {
        const bool branch_taken_0x2d67c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d67c8) {
            ctx->pc = 0x2D67CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D67C8u;
            // 0x2d67cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6828u;
            goto label_2d6828;
        }
    }
    ctx->pc = 0x2D67D0u;
label_2d67d0:
    // 0x2d67d0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2d67d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2d67d4:
    // 0x2d67d4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_2d67d8:
    if (ctx->pc == 0x2D67D8u) {
        ctx->pc = 0x2D67D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67D4u;
        // 0x2d67d8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D67DCu;
        goto label_2d67dc;
    }
    ctx->pc = 0x2D67D4u;
    {
        const bool branch_taken_0x2d67d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d67d4) {
            ctx->pc = 0x2D67D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D67D4u;
            // 0x2d67d8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D680Cu;
            goto label_2d680c;
        }
    }
    ctx->pc = 0x2D67DCu;
label_2d67dc:
    // 0x2d67dc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2d67dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2d67e0:
    // 0x2d67e0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2d67e4:
    if (ctx->pc == 0x2D67E4u) {
        ctx->pc = 0x2D67E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67E0u;
        // 0x2d67e4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D67E8u;
        goto label_2d67e8;
    }
    ctx->pc = 0x2D67E0u;
    {
        const bool branch_taken_0x2d67e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d67e0) {
            ctx->pc = 0x2D67E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D67E0u;
            // 0x2d67e4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D67F8u;
            goto label_2d67f8;
        }
    }
    ctx->pc = 0x2D67E8u;
label_2d67e8:
    // 0x2d67e8: 0xc0b5ac6  jal         func_2D6B18
label_2d67ec:
    if (ctx->pc == 0x2D67ECu) {
        ctx->pc = 0x2D67ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67E8u;
        // 0x2d67ec: 0x24110060  addiu       $s1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D67F0u;
        goto label_2d67f0;
    }
    ctx->pc = 0x2D67E8u;
    SET_GPR_U32(ctx, 31, 0x2D67F0u);
    ctx->pc = 0x2D67ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D67E8u;
    // 0x2d67ec: 0x24110060  addiu       $s1, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6B18u, 0x2D67E8u, 0x2D67F0u)) {
        return;
    }
    ctx->pc = 0x2D67F0u;
label_2d67f0:
    // 0x2d67f0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2d67f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d67f4:
    // 0x2d67f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d67f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d67f8:
    // 0x2d67f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d67f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2d67fc:
    // 0x2d67fc: 0xc0b5ac6  jal         func_2D6B18
label_2d6800:
    if (ctx->pc == 0x2D6800u) {
        ctx->pc = 0x2D6800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67FCu;
        // 0x2d6800: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6804u;
        goto label_2d6804;
    }
    ctx->pc = 0x2D67FCu;
    SET_GPR_U32(ctx, 31, 0x2D6804u);
    ctx->pc = 0x2D6800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D67FCu;
    // 0x2d6800: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6B18u, 0x2D67FCu, 0x2D6804u)) {
        return;
    }
    ctx->pc = 0x2D6804u;
label_2d6804:
    // 0x2d6804: 0x26310060  addiu       $s1, $s1, 0x60
    ctx->pc = 0x2d6804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_2d6808:
    // 0x2d6808: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d6808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d680c:
    // 0x2d680c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d680cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2d6810:
    // 0x2d6810: 0xc0b5ac6  jal         func_2D6B18
label_2d6814:
    if (ctx->pc == 0x2D6814u) {
        ctx->pc = 0x2D6814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6810u;
        // 0x2d6814: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6818u;
        goto label_2d6818;
    }
    ctx->pc = 0x2D6810u;
    SET_GPR_U32(ctx, 31, 0x2D6818u);
    ctx->pc = 0x2D6814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6810u;
    // 0x2d6814: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6B18u, 0x2D6810u, 0x2D6818u)) {
        return;
    }
    ctx->pc = 0x2D6818u;
label_2d6818:
    // 0x2d6818: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x2d6818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2d681c:
    // 0x2d681c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2d6820:
    if (ctx->pc == 0x2D6820u) {
        ctx->pc = 0x2D6820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D681Cu;
        // 0x2d6820: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6824u;
        goto label_2d6824;
    }
    ctx->pc = 0x2D681Cu;
    {
        const bool branch_taken_0x2d681c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D681Cu;
        // 0x2d6820: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d681c) {
            ctx->pc = 0x2D6874u;
            goto label_2d6874;
        }
    }
    ctx->pc = 0x2D6824u;
label_2d6824:
    // 0x2d6824: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d6824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d6828:
    // 0x2d6828: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2d6828u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2d682c:
    // 0x2d682c: 0xc0b5ac6  jal         func_2D6B18
label_2d6830:
    if (ctx->pc == 0x2D6830u) {
        ctx->pc = 0x2D6830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D682Cu;
        // 0x2d6830: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6834u;
        goto label_2d6834;
    }
    ctx->pc = 0x2D682Cu;
    SET_GPR_U32(ctx, 31, 0x2D6834u);
    ctx->pc = 0x2D6830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D682Cu;
    // 0x2d6830: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6B18u, 0x2D682Cu, 0x2D6834u)) {
        return;
    }
    ctx->pc = 0x2D6834u;
label_2d6834:
    // 0x2d6834: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d6834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d6838:
    // 0x2d6838: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x2d6838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_2d683c:
    // 0x2d683c: 0xc0b5ac6  jal         func_2D6B18
label_2d6840:
    if (ctx->pc == 0x2D6840u) {
        ctx->pc = 0x2D6840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D683Cu;
        // 0x2d6840: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6844u;
        goto label_2d6844;
    }
    ctx->pc = 0x2D683Cu;
    SET_GPR_U32(ctx, 31, 0x2D6844u);
    ctx->pc = 0x2D6840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D683Cu;
    // 0x2d6840: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6B18u, 0x2D683Cu, 0x2D6844u)) {
        return;
    }
    ctx->pc = 0x2D6844u;
label_2d6844:
    // 0x2d6844: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d6844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d6848:
    // 0x2d6848: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x2d6848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_2d684c:
    // 0x2d684c: 0xc0b5ac6  jal         func_2D6B18
label_2d6850:
    if (ctx->pc == 0x2D6850u) {
        ctx->pc = 0x2D6850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D684Cu;
        // 0x2d6850: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6854u;
        goto label_2d6854;
    }
    ctx->pc = 0x2D684Cu;
    SET_GPR_U32(ctx, 31, 0x2D6854u);
    ctx->pc = 0x2D6850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D684Cu;
    // 0x2d6850: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6B18u, 0x2D684Cu, 0x2D6854u)) {
        return;
    }
    ctx->pc = 0x2D6854u;
label_2d6854:
    // 0x2d6854: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d6854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d6858:
    // 0x2d6858: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x2d6858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
label_2d685c:
    // 0x2d685c: 0x26310180  addiu       $s1, $s1, 0x180
    ctx->pc = 0x2d685cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
label_2d6860:
    // 0x2d6860: 0xc0b5ac6  jal         func_2D6B18
label_2d6864:
    if (ctx->pc == 0x2D6864u) {
        ctx->pc = 0x2D6864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6860u;
        // 0x2d6864: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6868u;
        goto label_2d6868;
    }
    ctx->pc = 0x2D6860u;
    SET_GPR_U32(ctx, 31, 0x2D6868u);
    ctx->pc = 0x2D6864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6860u;
    // 0x2d6864: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6B18u, 0x2D6860u, 0x2D6868u)) {
        return;
    }
    ctx->pc = 0x2D6868u;
label_2d6868:
    // 0x2d6868: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x2d6868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2d686c:
    // 0x2d686c: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
label_2d6870:
    if (ctx->pc == 0x2D6870u) {
        ctx->pc = 0x2D6870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D686Cu;
        // 0x2d6870: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6874u;
        goto label_2d6874;
    }
    ctx->pc = 0x2D686Cu;
    {
        const bool branch_taken_0x2d686c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d686c) {
            ctx->pc = 0x2D6870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D686Cu;
            // 0x2d6870: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6828;
        }
    }
    ctx->pc = 0x2D6874u;
label_2d6874:
    // 0x2d6874: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2d6874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_2d6878:
    // 0x2d6878: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x2d6878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2d687c:
    // 0x2d687c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2d687cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2d6880:
    // 0x2d6880: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2d6880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2d6884:
    // 0x2d6884: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x2d6884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d6888:
    // 0x2d6888: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d6888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d688c:
    // 0x2d688c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2d688cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2d6890:
    // 0x2d6890: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d6890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d6894:
    // 0x2d6894: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2d6894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d6898:
    // 0x2d6898: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2d6898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2d689c:
    // 0x2d689c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d689cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d68a0:
    // 0x2d68a0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d68a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2d68a4:
    // 0x2d68a4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2d68a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_2d68a8:
    // 0x2d68a8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2d68a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2d68ac:
    // 0x2d68ac: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2d68acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2d68b0:
    // 0x2d68b0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2d68b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_2d68b4:
    // 0x2d68b4: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2d68b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_2d68b8:
    // 0x2d68b8: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2d68b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_2d68bc:
    // 0x2d68bc: 0xae07006c  sw          $a3, 0x6C($s0)
    ctx->pc = 0x2d68bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 7));
label_2d68c0:
    // 0x2d68c0: 0xae060070  sw          $a2, 0x70($s0)
    ctx->pc = 0x2d68c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 6));
label_2d68c4:
    // 0x2d68c4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2d68c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2d68c8:
    // 0x2d68c8: 0xe6010040  swc1        $f1, 0x40($s0)
    ctx->pc = 0x2d68c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_2d68cc:
    // 0x2d68cc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d68ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d68d0:
    // 0x2d68d0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d68d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d68d4:
    // 0x2d68d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d68d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d68d8:
    // 0x2d68d8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2d68d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d68dc:
    // 0x2d68dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d68dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d68e0:
    // 0x2d68e0: 0x3e00008  jr          $ra
label_2d68e4:
    if (ctx->pc == 0x2D68E4u) {
        ctx->pc = 0x2D68E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68E0u;
        // 0x2d68e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D68E8u;
        goto label_fallthrough_0x2d68e0;
    }
    ctx->pc = 0x2D68E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D68E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68E0u;
        // 0x2d68e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D68E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d68e0:
    ctx->pc = 0x2D68E8u;
}

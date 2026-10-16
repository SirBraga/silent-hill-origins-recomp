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

// Function: sub_002AD690
// Address: 0x2ad690 - 0x2ad828
void sub_002AD690_0x2ad690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD690_0x2ad690");
#endif

    switch (ctx->pc) {
        case 0x2ad690u: goto label_2ad690;
        case 0x2ad694u: goto label_2ad694;
        case 0x2ad698u: goto label_2ad698;
        case 0x2ad69cu: goto label_2ad69c;
        case 0x2ad6a0u: goto label_2ad6a0;
        case 0x2ad6a4u: goto label_2ad6a4;
        case 0x2ad6a8u: goto label_2ad6a8;
        case 0x2ad6acu: goto label_2ad6ac;
        case 0x2ad6b0u: goto label_2ad6b0;
        case 0x2ad6b4u: goto label_2ad6b4;
        case 0x2ad6b8u: goto label_2ad6b8;
        case 0x2ad6bcu: goto label_2ad6bc;
        case 0x2ad6c0u: goto label_2ad6c0;
        case 0x2ad6c4u: goto label_2ad6c4;
        case 0x2ad6c8u: goto label_2ad6c8;
        case 0x2ad6ccu: goto label_2ad6cc;
        case 0x2ad6d0u: goto label_2ad6d0;
        case 0x2ad6d4u: goto label_2ad6d4;
        case 0x2ad6d8u: goto label_2ad6d8;
        case 0x2ad6dcu: goto label_2ad6dc;
        case 0x2ad6e0u: goto label_2ad6e0;
        case 0x2ad6e4u: goto label_2ad6e4;
        case 0x2ad6e8u: goto label_2ad6e8;
        case 0x2ad6ecu: goto label_2ad6ec;
        case 0x2ad6f0u: goto label_2ad6f0;
        case 0x2ad6f4u: goto label_2ad6f4;
        case 0x2ad6f8u: goto label_2ad6f8;
        case 0x2ad6fcu: goto label_2ad6fc;
        case 0x2ad700u: goto label_2ad700;
        case 0x2ad704u: goto label_2ad704;
        case 0x2ad708u: goto label_2ad708;
        case 0x2ad70cu: goto label_2ad70c;
        case 0x2ad710u: goto label_2ad710;
        case 0x2ad714u: goto label_2ad714;
        case 0x2ad718u: goto label_2ad718;
        case 0x2ad71cu: goto label_2ad71c;
        case 0x2ad720u: goto label_2ad720;
        case 0x2ad724u: goto label_2ad724;
        case 0x2ad728u: goto label_2ad728;
        case 0x2ad72cu: goto label_2ad72c;
        case 0x2ad730u: goto label_2ad730;
        case 0x2ad734u: goto label_2ad734;
        case 0x2ad738u: goto label_2ad738;
        case 0x2ad73cu: goto label_2ad73c;
        case 0x2ad740u: goto label_2ad740;
        case 0x2ad744u: goto label_2ad744;
        case 0x2ad748u: goto label_2ad748;
        case 0x2ad74cu: goto label_2ad74c;
        case 0x2ad750u: goto label_2ad750;
        case 0x2ad754u: goto label_2ad754;
        case 0x2ad758u: goto label_2ad758;
        case 0x2ad75cu: goto label_2ad75c;
        case 0x2ad760u: goto label_2ad760;
        case 0x2ad764u: goto label_2ad764;
        case 0x2ad768u: goto label_2ad768;
        case 0x2ad76cu: goto label_2ad76c;
        case 0x2ad770u: goto label_2ad770;
        case 0x2ad774u: goto label_2ad774;
        case 0x2ad778u: goto label_2ad778;
        case 0x2ad77cu: goto label_2ad77c;
        case 0x2ad780u: goto label_2ad780;
        case 0x2ad784u: goto label_2ad784;
        case 0x2ad788u: goto label_2ad788;
        case 0x2ad78cu: goto label_2ad78c;
        case 0x2ad790u: goto label_2ad790;
        case 0x2ad794u: goto label_2ad794;
        case 0x2ad798u: goto label_2ad798;
        case 0x2ad79cu: goto label_2ad79c;
        case 0x2ad7a0u: goto label_2ad7a0;
        case 0x2ad7a4u: goto label_2ad7a4;
        case 0x2ad7a8u: goto label_2ad7a8;
        case 0x2ad7acu: goto label_2ad7ac;
        case 0x2ad7b0u: goto label_2ad7b0;
        case 0x2ad7b4u: goto label_2ad7b4;
        case 0x2ad7b8u: goto label_2ad7b8;
        case 0x2ad7bcu: goto label_2ad7bc;
        case 0x2ad7c0u: goto label_2ad7c0;
        case 0x2ad7c4u: goto label_2ad7c4;
        case 0x2ad7c8u: goto label_2ad7c8;
        case 0x2ad7ccu: goto label_2ad7cc;
        case 0x2ad7d0u: goto label_2ad7d0;
        case 0x2ad7d4u: goto label_2ad7d4;
        case 0x2ad7d8u: goto label_2ad7d8;
        case 0x2ad7dcu: goto label_2ad7dc;
        case 0x2ad7e0u: goto label_2ad7e0;
        case 0x2ad7e4u: goto label_2ad7e4;
        case 0x2ad7e8u: goto label_2ad7e8;
        case 0x2ad7ecu: goto label_2ad7ec;
        case 0x2ad7f0u: goto label_2ad7f0;
        case 0x2ad7f4u: goto label_2ad7f4;
        case 0x2ad7f8u: goto label_2ad7f8;
        case 0x2ad7fcu: goto label_2ad7fc;
        case 0x2ad800u: goto label_2ad800;
        case 0x2ad804u: goto label_2ad804;
        case 0x2ad808u: goto label_2ad808;
        case 0x2ad80cu: goto label_2ad80c;
        case 0x2ad810u: goto label_2ad810;
        case 0x2ad814u: goto label_2ad814;
        case 0x2ad818u: goto label_2ad818;
        case 0x2ad81cu: goto label_2ad81c;
        case 0x2ad820u: goto label_2ad820;
        case 0x2ad824u: goto label_2ad824;
        default: break;
    }

    ctx->pc = 0x2ad690u;

label_2ad690:
    // 0x2ad690: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ad690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2ad694:
    // 0x2ad694: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ad694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2ad698:
    // 0x2ad698: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ad698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ad69c:
    // 0x2ad69c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ad69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2ad6a0:
    // 0x2ad6a0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2ad6a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2ad6a4:
    // 0x2ad6a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ad6a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ad6a8:
    // 0x2ad6a8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2ad6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ad6ac:
    // 0x2ad6ac: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2ad6acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2ad6b0:
    // 0x2ad6b0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ad6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2ad6b4:
    // 0x2ad6b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ad6b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad6b8:
    // 0x2ad6b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ad6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ad6bc:
    // 0x2ad6bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ad6c0:
    // 0x2ad6c0: 0xc0ab406  jal         func_2AD018
label_2ad6c4:
    if (ctx->pc == 0x2AD6C4u) {
        ctx->pc = 0x2AD6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD6C0u;
        // 0x2ad6c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD6C8u;
        goto label_2ad6c8;
    }
    ctx->pc = 0x2AD6C0u;
    SET_GPR_U32(ctx, 31, 0x2AD6C8u);
    ctx->pc = 0x2AD6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD6C0u;
    // 0x2ad6c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD018u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD018u, 0x2AD6C0u, 0x2AD6C8u)) {
        return;
    }
    ctx->pc = 0x2AD6C8u;
label_2ad6c8:
    // 0x2ad6c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ad6c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2ad6cc:
    // 0x2ad6cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ad6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ad6d0:
    // 0x2ad6d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ad6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ad6d4:
    // 0x2ad6d4: 0xc0aca8e  jal         func_2B2A38
label_2ad6d8:
    if (ctx->pc == 0x2AD6D8u) {
        ctx->pc = 0x2AD6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD6D4u;
        // 0x2ad6d8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD6DCu;
        goto label_2ad6dc;
    }
    ctx->pc = 0x2AD6D4u;
    SET_GPR_U32(ctx, 31, 0x2AD6DCu);
    ctx->pc = 0x2AD6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD6D4u;
    // 0x2ad6d8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2A38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2A38u, 0x2AD6D4u, 0x2AD6DCu)) {
        return;
    }
    ctx->pc = 0x2AD6DCu;
label_2ad6dc:
    // 0x2ad6dc: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x2ad6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2ad6e0:
    // 0x2ad6e0: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x2ad6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_2ad6e4:
    // 0x2ad6e4: 0x26100fc8  addiu       $s0, $s0, 0xFC8
    ctx->pc = 0x2ad6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_2ad6e8:
    // 0x2ad6e8: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x2ad6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_2ad6ec:
    // 0x2ad6ec: 0x49080  sll         $s2, $a0, 2
    ctx->pc = 0x2ad6ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2ad6f0:
    // 0x2ad6f0: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x2ad6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2ad6f4:
    // 0x2ad6f4: 0xae640010  sw          $a0, 0x10($s3)
    ctx->pc = 0x2ad6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
label_2ad6f8:
    // 0x2ad6f8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2ad6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2ad6fc:
    // 0x2ad6fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ad6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ad700:
    // 0x2ad700: 0x34a50900  ori         $a1, $a1, 0x900
    ctx->pc = 0x2ad700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
label_2ad704:
    // 0x2ad704: 0x60f809  jalr        $v1
label_2ad708:
    if (ctx->pc == 0x2AD708u) {
        ctx->pc = 0x2AD708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD704u;
        // 0x2ad708: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD70Cu;
        goto label_2ad70c;
    }
    ctx->pc = 0x2AD704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2AD70Cu);
        ctx->pc = 0x2AD708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD704u;
        // 0x2ad708: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD704u, 0x2AD70Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD70Cu;
label_2ad70c:
    // 0x2ad70c: 0x8e060108  lw          $a2, 0x108($s0)
    ctx->pc = 0x2ad70cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2ad710:
    // 0x2ad710: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2ad710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2ad714:
    // 0x2ad714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ad714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ad718:
    // 0x2ad718: 0x34a50900  ori         $a1, $a1, 0x900
    ctx->pc = 0x2ad718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
label_2ad71c:
    // 0x2ad71c: 0xc0f809  jalr        $a2
label_2ad720:
    if (ctx->pc == 0x2AD720u) {
        ctx->pc = 0x2AD720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD71Cu;
        // 0x2ad720: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD724u;
        goto label_2ad724;
    }
    ctx->pc = 0x2AD71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2AD724u);
        ctx->pc = 0x2AD720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD71Cu;
        // 0x2ad720: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD71Cu, 0x2AD724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD724u;
label_2ad724:
    // 0x2ad724: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2ad724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2ad728:
    // 0x2ad728: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2ad728u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_2ad72c:
    // 0x2ad72c: 0x8e070114  lw          $a3, 0x114($s0)
    ctx->pc = 0x2ad72cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_2ad730:
    // 0x2ad730: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2ad730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2ad734:
    // 0x2ad734: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x2ad734u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
label_2ad738:
    // 0x2ad738: 0x34c60900  ori         $a2, $a2, 0x900
    ctx->pc = 0x2ad738u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2304);
label_2ad73c:
    // 0x2ad73c: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x2ad73cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_2ad740:
    // 0x2ad740: 0xe0f809  jalr        $a3
label_2ad744:
    if (ctx->pc == 0x2AD744u) {
        ctx->pc = 0x2AD744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD740u;
        // 0x2ad744: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD748u;
        goto label_2ad748;
    }
    ctx->pc = 0x2AD740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2AD748u);
        ctx->pc = 0x2AD744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD740u;
        // 0x2ad744: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD740u, 0x2AD748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD748u;
label_2ad748:
    // 0x2ad748: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x2ad748u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2ad74c:
    // 0x2ad74c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ad74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad750:
    // 0x2ad750: 0x10e0002a  beqz        $a3, . + 4 + (0x2A << 2)
label_2ad754:
    if (ctx->pc == 0x2AD754u) {
        ctx->pc = 0x2AD754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD750u;
        // 0x2ad754: 0xae62001c  sw          $v0, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD758u;
        goto label_2ad758;
    }
    ctx->pc = 0x2AD750u;
    {
        const bool branch_taken_0x2ad750 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD750u;
        // 0x2ad754: 0xae62001c  sw          $v0, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad750) {
            ctx->pc = 0x2AD7FCu;
            goto label_2ad7fc;
        }
    }
    ctx->pc = 0x2AD758u;
label_2ad758:
    // 0x2ad758: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ad758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ad75c:
    // 0x2ad75c: 0x30e50003  andi        $a1, $a3, 0x3
    ctx->pc = 0x2ad75cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
label_2ad760:
    // 0x2ad760: 0x18e00011  blez        $a3, . + 4 + (0x11 << 2)
label_2ad764:
    if (ctx->pc == 0x2AD764u) {
        ctx->pc = 0x2AD764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD760u;
        // 0x2ad764: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD768u;
        goto label_2ad768;
    }
    ctx->pc = 0x2AD760u;
    {
        const bool branch_taken_0x2ad760 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x2AD764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD760u;
        // 0x2ad764: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad760) {
            ctx->pc = 0x2AD7A8u;
            goto label_2ad7a8;
        }
    }
    ctx->pc = 0x2AD768u;
label_2ad768:
    // 0x2ad768: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
label_2ad76c:
    if (ctx->pc == 0x2AD76Cu) {
        ctx->pc = 0x2AD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD768u;
        // 0x2ad76c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD770u;
        goto label_2ad770;
    }
    ctx->pc = 0x2AD768u;
    {
        const bool branch_taken_0x2ad768 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD768u;
        // 0x2ad76c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad768) {
            ctx->pc = 0x2AD7C8u;
            goto label_2ad7c8;
        }
    }
    ctx->pc = 0x2AD770u;
label_2ad770:
    // 0x2ad770: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x2ad770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_2ad774:
    // 0x2ad774: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_2ad778:
    if (ctx->pc == 0x2AD778u) {
        ctx->pc = 0x2AD778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD774u;
        // 0x2ad778: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD77Cu;
        goto label_2ad77c;
    }
    ctx->pc = 0x2AD774u;
    {
        const bool branch_taken_0x2ad774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad774) {
            ctx->pc = 0x2AD778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD774u;
            // 0x2ad778: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD7ACu;
            goto label_2ad7ac;
        }
    }
    ctx->pc = 0x2AD77Cu;
label_2ad77c:
    // 0x2ad77c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x2ad77cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_2ad780:
    // 0x2ad780: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2ad784:
    if (ctx->pc == 0x2AD784u) {
        ctx->pc = 0x2AD784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD780u;
        // 0x2ad784: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD788u;
        goto label_2ad788;
    }
    ctx->pc = 0x2AD780u;
    {
        const bool branch_taken_0x2ad780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad780) {
            ctx->pc = 0x2AD784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD780u;
            // 0x2ad784: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD79Cu;
            goto label_2ad79c;
        }
    }
    ctx->pc = 0x2AD788u;
label_2ad788:
    // 0x2ad788: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2ad788u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2ad78c:
    // 0x2ad78c: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x2ad78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_2ad790:
    // 0x2ad790: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2ad790u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_2ad794:
    // 0x2ad794: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ad794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ad798:
    // 0x2ad798: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2ad798u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2ad79c:
    // 0x2ad79c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ad79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2ad7a0:
    // 0x2ad7a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2ad7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2ad7a4:
    // 0x2ad7a4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2ad7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_2ad7a8:
    // 0x2ad7a8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2ad7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2ad7ac:
    // 0x2ad7ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ad7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2ad7b0:
    // 0x2ad7b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2ad7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2ad7b4:
    // 0x2ad7b4: 0x87282b  sltu        $a1, $a0, $a3
    ctx->pc = 0x2ad7b4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_2ad7b8:
    // 0x2ad7b8: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_2ad7bc:
    if (ctx->pc == 0x2AD7BCu) {
        ctx->pc = 0x2AD7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD7B8u;
        // 0x2ad7bc: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD7C0u;
        goto label_2ad7c0;
    }
    ctx->pc = 0x2AD7B8u;
    {
        const bool branch_taken_0x2ad7b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD7B8u;
        // 0x2ad7bc: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad7b8) {
            ctx->pc = 0x2AD7FCu;
            goto label_2ad7fc;
        }
    }
    ctx->pc = 0x2AD7C0u;
label_2ad7c0:
    // 0x2ad7c0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2ad7c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ad7c4:
    // 0x2ad7c4: 0x0  nop
    ctx->pc = 0x2ad7c4u;
    // NOP
label_2ad7c8:
    // 0x2ad7c8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2ad7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2ad7cc:
    // 0x2ad7cc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2ad7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2ad7d0:
    // 0x2ad7d0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2ad7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2ad7d4:
    // 0x2ad7d4: 0x87282b  sltu        $a1, $a0, $a3
    ctx->pc = 0x2ad7d4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_2ad7d8:
    // 0x2ad7d8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2ad7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_2ad7dc:
    // 0x2ad7dc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2ad7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_2ad7e0:
    // 0x2ad7e0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2ad7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_2ad7e4:
    // 0x2ad7e4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2ad7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_2ad7e8:
    // 0x2ad7e8: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x2ad7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_2ad7ec:
    // 0x2ad7ec: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2ad7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_2ad7f0:
    // 0x2ad7f0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2ad7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2ad7f4:
    // 0x2ad7f4: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
label_2ad7f8:
    if (ctx->pc == 0x2AD7F8u) {
        ctx->pc = 0x2AD7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD7F4u;
        // 0x2ad7f8: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD7FCu;
        goto label_2ad7fc;
    }
    ctx->pc = 0x2AD7F4u;
    {
        const bool branch_taken_0x2ad7f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD7F4u;
        // 0x2ad7f8: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad7f4) {
            ctx->pc = 0x2AD7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad7c8;
        }
    }
    ctx->pc = 0x2AD7FCu;
label_2ad7fc:
    // 0x2ad7fc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2ad7fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ad800:
    // 0x2ad800: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ad800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ad804:
    // 0x2ad804: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ad804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ad808:
    // 0x2ad808: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ad808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ad80c:
    // 0x2ad80c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2ad80cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ad810:
    // 0x2ad810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ad814:
    // 0x2ad814: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2ad814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ad818:
    // 0x2ad818: 0x3e00008  jr          $ra
label_2ad81c:
    if (ctx->pc == 0x2AD81Cu) {
        ctx->pc = 0x2AD81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD818u;
        // 0x2ad81c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD820u;
        goto label_2ad820;
    }
    ctx->pc = 0x2AD818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD818u;
        // 0x2ad81c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD820u;
label_2ad820:
    // 0x2ad820: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ad820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2ad824:
    // 0x2ad824: 0x0  nop
    ctx->pc = 0x2ad824u;
    // NOP
    ctx->pc = 0x2ad828u;
}

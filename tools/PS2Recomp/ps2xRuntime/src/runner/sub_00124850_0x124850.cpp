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

// Function: sub_00124850
// Address: 0x124850 - 0x124920
void sub_00124850_0x124850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124850_0x124850");
#endif

    switch (ctx->pc) {
        case 0x124850u: goto label_124850;
        case 0x124854u: goto label_124854;
        case 0x124858u: goto label_124858;
        case 0x12485cu: goto label_12485c;
        case 0x124860u: goto label_124860;
        case 0x124864u: goto label_124864;
        case 0x124868u: goto label_124868;
        case 0x12486cu: goto label_12486c;
        case 0x124870u: goto label_124870;
        case 0x124874u: goto label_124874;
        case 0x124878u: goto label_124878;
        case 0x12487cu: goto label_12487c;
        case 0x124880u: goto label_124880;
        case 0x124884u: goto label_124884;
        case 0x124888u: goto label_124888;
        case 0x12488cu: goto label_12488c;
        case 0x124890u: goto label_124890;
        case 0x124894u: goto label_124894;
        case 0x124898u: goto label_124898;
        case 0x12489cu: goto label_12489c;
        case 0x1248a0u: goto label_1248a0;
        case 0x1248a4u: goto label_1248a4;
        case 0x1248a8u: goto label_1248a8;
        case 0x1248acu: goto label_1248ac;
        case 0x1248b0u: goto label_1248b0;
        case 0x1248b4u: goto label_1248b4;
        case 0x1248b8u: goto label_1248b8;
        case 0x1248bcu: goto label_1248bc;
        case 0x1248c0u: goto label_1248c0;
        case 0x1248c4u: goto label_1248c4;
        case 0x1248c8u: goto label_1248c8;
        case 0x1248ccu: goto label_1248cc;
        case 0x1248d0u: goto label_1248d0;
        case 0x1248d4u: goto label_1248d4;
        case 0x1248d8u: goto label_1248d8;
        case 0x1248dcu: goto label_1248dc;
        case 0x1248e0u: goto label_1248e0;
        case 0x1248e4u: goto label_1248e4;
        case 0x1248e8u: goto label_1248e8;
        case 0x1248ecu: goto label_1248ec;
        case 0x1248f0u: goto label_1248f0;
        case 0x1248f4u: goto label_1248f4;
        case 0x1248f8u: goto label_1248f8;
        case 0x1248fcu: goto label_1248fc;
        case 0x124900u: goto label_124900;
        case 0x124904u: goto label_124904;
        case 0x124908u: goto label_124908;
        case 0x12490cu: goto label_12490c;
        case 0x124910u: goto label_124910;
        case 0x124914u: goto label_124914;
        case 0x124918u: goto label_124918;
        case 0x12491cu: goto label_12491c;
        default: break;
    }

    ctx->pc = 0x124850u;

label_124850:
    // 0x124850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x124850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_124854:
    // 0x124854: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x124854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124858:
    // 0x124858: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x124858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_12485c:
    // 0x12485c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12485cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_124860:
    // 0x124860: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x124860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_124864:
    // 0x124864: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x124864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_124868:
    // 0x124868: 0x5443001c  bnel        $v0, $v1, . + 4 + (0x1C << 2)
label_12486c:
    if (ctx->pc == 0x12486Cu) {
        ctx->pc = 0x12486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124868u;
        // 0x12486c: 0x86020bfe  lh          $v0, 0xBFE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 3070)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124870u;
        goto label_124870;
    }
    ctx->pc = 0x124868u;
    {
        const bool branch_taken_0x124868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x124868) {
            ctx->pc = 0x12486Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124868u;
            // 0x12486c: 0x86020bfe  lh          $v0, 0xBFE($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 3070)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1248DCu;
            goto label_1248dc;
        }
    }
    ctx->pc = 0x124870u;
label_124870:
    // 0x124870: 0x8e060c00  lw          $a2, 0xC00($s0)
    ctx->pc = 0x124870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
label_124874:
    // 0x124874: 0x50c00019  beql        $a2, $zero, . + 4 + (0x19 << 2)
label_124878:
    if (ctx->pc == 0x124878u) {
        ctx->pc = 0x124878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124874u;
        // 0x124878: 0x86020bfe  lh          $v0, 0xBFE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 3070)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12487Cu;
        goto label_12487c;
    }
    ctx->pc = 0x124874u;
    {
        const bool branch_taken_0x124874 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x124874) {
            ctx->pc = 0x124878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124874u;
            // 0x124878: 0x86020bfe  lh          $v0, 0xBFE($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 3070)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1248DCu;
            goto label_1248dc;
        }
    }
    ctx->pc = 0x12487Cu;
label_12487c:
    // 0x12487c: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x12487cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_124880:
    // 0x124880: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x124880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_124884:
    // 0x124884: 0x84430040  lh          $v1, 0x40($v0)
    ctx->pc = 0x124884u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_124888:
    // 0x124888: 0x24470040  addiu       $a3, $v0, 0x40
    ctx->pc = 0x124888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_12488c:
    // 0x12488c: 0x8c85007c  lw          $a1, 0x7C($a0)
    ctx->pc = 0x12488cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_124890:
    // 0x124890: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_124894:
    if (ctx->pc == 0x124894u) {
        ctx->pc = 0x124894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124890u;
        // 0x124894: 0xc32021  addu        $a0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124898u;
        goto label_124898;
    }
    ctx->pc = 0x124890u;
    {
        const bool branch_taken_0x124890 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x124894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124890u;
        // 0x124894: 0xc32021  addu        $a0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124890) {
            ctx->pc = 0x1248A0u;
            goto label_1248a0;
        }
    }
    ctx->pc = 0x124898u;
label_124898:
    // 0x124898: 0x10000002  b           . + 4 + (0x2 << 2)
label_12489c:
    if (ctx->pc == 0x12489Cu) {
        ctx->pc = 0x12489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124898u;
        // 0x12489c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1248A0u;
        goto label_1248a0;
    }
    ctx->pc = 0x124898u;
    {
        const bool branch_taken_0x124898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124898u;
        // 0x12489c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124898) {
            ctx->pc = 0x1248A4u;
            goto label_1248a4;
        }
    }
    ctx->pc = 0x1248A0u;
label_1248a0:
    // 0x1248a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1248a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1248a4:
    // 0x1248a4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1248a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1248a8:
    // 0x1248a8: 0x40f809  jalr        $v0
label_1248ac:
    if (ctx->pc == 0x1248ACu) {
        ctx->pc = 0x1248B0u;
        goto label_1248b0;
    }
    ctx->pc = 0x1248A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1248B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1248A8u, 0x1248B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1248B0u;
label_1248b0:
    // 0x1248b0: 0x8e060c00  lw          $a2, 0xC00($s0)
    ctx->pc = 0x1248b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
label_1248b4:
    // 0x1248b4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1248b8:
    if (ctx->pc == 0x1248B8u) {
        ctx->pc = 0x1248B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1248B4u;
        // 0x1248b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1248BCu;
        goto label_1248bc;
    }
    ctx->pc = 0x1248B4u;
    {
        const bool branch_taken_0x1248b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1248B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1248B4u;
        // 0x1248b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1248b4) {
            ctx->pc = 0x1248D4u;
            goto label_1248d4;
        }
    }
    ctx->pc = 0x1248BCu;
label_1248bc:
    // 0x1248bc: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x1248bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1248c0:
    // 0x1248c0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1248c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1248c4:
    // 0x1248c4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1248c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1248c8:
    // 0x1248c8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1248c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1248cc:
    // 0x1248cc: 0x40f809  jalr        $v0
label_1248d0:
    if (ctx->pc == 0x1248D0u) {
        ctx->pc = 0x1248D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1248CCu;
        // 0x1248d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1248D4u;
        goto label_1248d4;
    }
    ctx->pc = 0x1248CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1248D4u);
        ctx->pc = 0x1248D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1248CCu;
        // 0x1248d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1248CCu, 0x1248D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1248D4u;
label_1248d4:
    // 0x1248d4: 0xae000c00  sw          $zero, 0xC00($s0)
    ctx->pc = 0x1248d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3072), GPR_U32(ctx, 0));
label_1248d8:
    // 0x1248d8: 0x86020bfe  lh          $v0, 0xBFE($s0)
    ctx->pc = 0x1248d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 3070)));
label_1248dc:
    // 0x1248dc: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_1248e0:
    if (ctx->pc == 0x1248E0u) {
        ctx->pc = 0x1248E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1248DCu;
        // 0x1248e0: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1248E4u;
        goto label_1248e4;
    }
    ctx->pc = 0x1248DCu;
    {
        const bool branch_taken_0x1248dc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1248E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1248DCu;
        // 0x1248e0: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1248dc) {
            ctx->pc = 0x12490Cu;
            goto label_12490c;
        }
    }
    ctx->pc = 0x1248E4u;
label_1248e4:
    // 0x1248e4: 0x8e040bf8  lw          $a0, 0xBF8($s0)
    ctx->pc = 0x1248e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3064)));
label_1248e8:
    // 0x1248e8: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x1248e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
label_1248ec:
    // 0x1248ec: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1248ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_1248f0:
    // 0x1248f0: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_1248f4:
    if (ctx->pc == 0x1248F4u) {
        ctx->pc = 0x1248F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1248F0u;
        // 0x1248f4: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1248F8u;
        goto label_1248f8;
    }
    ctx->pc = 0x1248F0u;
    {
        const bool branch_taken_0x1248f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1248F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1248F0u;
        // 0x1248f4: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1248f0) {
            ctx->pc = 0x12490Cu;
            goto label_12490c;
        }
    }
    ctx->pc = 0x1248F8u;
label_1248f8:
    // 0x1248f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1248f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1248fc:
    // 0x1248fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_124900:
    if (ctx->pc == 0x124900u) {
        ctx->pc = 0x124900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1248FCu;
        // 0x124900: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124904u;
        goto label_124904;
    }
    ctx->pc = 0x1248FCu;
    {
        const bool branch_taken_0x1248fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1248FCu;
        // 0x124900: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1248fc) {
            ctx->pc = 0x124910u;
            goto label_124910;
        }
    }
    ctx->pc = 0x124904u;
label_124904:
    // 0x124904: 0xc07fd18  jal         func_1FF460
label_124908:
    if (ctx->pc == 0x124908u) {
        ctx->pc = 0x124908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124904u;
        // 0x124908: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12490Cu;
        goto label_12490c;
    }
    ctx->pc = 0x124904u;
    SET_GPR_U32(ctx, 31, 0x12490Cu);
    ctx->pc = 0x124908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124904u;
    // 0x124908: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x124904u, 0x12490Cu)) {
        return;
    }
    ctx->pc = 0x12490Cu;
label_12490c:
    // 0x12490c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x12490cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_124910:
    // 0x124910: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x124910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_124914:
    // 0x124914: 0x3e00008  jr          $ra
label_124918:
    if (ctx->pc == 0x124918u) {
        ctx->pc = 0x124918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124914u;
        // 0x124918: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12491Cu;
        goto label_12491c;
    }
    ctx->pc = 0x124914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124914u;
        // 0x124918: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12491Cu;
label_12491c:
    // 0x12491c: 0x0  nop
    ctx->pc = 0x12491cu;
    // NOP
    ctx->pc = 0x124920u;
}

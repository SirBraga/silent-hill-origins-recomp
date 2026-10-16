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

// Function: sub_001FF460
// Address: 0x1ff460 - 0x1ff508
void sub_001FF460_0x1ff460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF460_0x1ff460");
#endif

    switch (ctx->pc) {
        case 0x1ff460u: goto label_1ff460;
        case 0x1ff464u: goto label_1ff464;
        case 0x1ff468u: goto label_1ff468;
        case 0x1ff46cu: goto label_1ff46c;
        case 0x1ff470u: goto label_1ff470;
        case 0x1ff474u: goto label_1ff474;
        case 0x1ff478u: goto label_1ff478;
        case 0x1ff47cu: goto label_1ff47c;
        case 0x1ff480u: goto label_1ff480;
        case 0x1ff484u: goto label_1ff484;
        case 0x1ff488u: goto label_1ff488;
        case 0x1ff48cu: goto label_1ff48c;
        case 0x1ff490u: goto label_1ff490;
        case 0x1ff494u: goto label_1ff494;
        case 0x1ff498u: goto label_1ff498;
        case 0x1ff49cu: goto label_1ff49c;
        case 0x1ff4a0u: goto label_1ff4a0;
        case 0x1ff4a4u: goto label_1ff4a4;
        case 0x1ff4a8u: goto label_1ff4a8;
        case 0x1ff4acu: goto label_1ff4ac;
        case 0x1ff4b0u: goto label_1ff4b0;
        case 0x1ff4b4u: goto label_1ff4b4;
        case 0x1ff4b8u: goto label_1ff4b8;
        case 0x1ff4bcu: goto label_1ff4bc;
        case 0x1ff4c0u: goto label_1ff4c0;
        case 0x1ff4c4u: goto label_1ff4c4;
        case 0x1ff4c8u: goto label_1ff4c8;
        case 0x1ff4ccu: goto label_1ff4cc;
        case 0x1ff4d0u: goto label_1ff4d0;
        case 0x1ff4d4u: goto label_1ff4d4;
        case 0x1ff4d8u: goto label_1ff4d8;
        case 0x1ff4dcu: goto label_1ff4dc;
        case 0x1ff4e0u: goto label_1ff4e0;
        case 0x1ff4e4u: goto label_1ff4e4;
        case 0x1ff4e8u: goto label_1ff4e8;
        case 0x1ff4ecu: goto label_1ff4ec;
        case 0x1ff4f0u: goto label_1ff4f0;
        case 0x1ff4f4u: goto label_1ff4f4;
        case 0x1ff4f8u: goto label_1ff4f8;
        case 0x1ff4fcu: goto label_1ff4fc;
        case 0x1ff500u: goto label_1ff500;
        case 0x1ff504u: goto label_1ff504;
        default: break;
    }

    ctx->pc = 0x1ff460u;

label_1ff460:
    // 0x1ff460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ff460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ff464:
    // 0x1ff464: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ff464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ff468:
    // 0x1ff468: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ff468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ff46c:
    // 0x1ff46c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ff46cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ff470:
    // 0x1ff470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ff474:
    // 0x1ff474: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ff474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ff478:
    // 0x1ff478: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1ff478u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ff47c:
    // 0x1ff47c: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_1ff480:
    if (ctx->pc == 0x1FF480u) {
        ctx->pc = 0x1FF480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF47Cu;
        // 0x1ff480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF484u;
        goto label_1ff484;
    }
    ctx->pc = 0x1FF47Cu;
    {
        const bool branch_taken_0x1ff47c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF47Cu;
        // 0x1ff480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff47c) {
            ctx->pc = 0x1FF4F0u;
            goto label_1ff4f0;
        }
    }
    ctx->pc = 0x1FF484u;
label_1ff484:
    // 0x1ff484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff488:
    // 0x1ff488: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x1ff488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
label_1ff48c:
    // 0x1ff48c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1ff48cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ff490:
    // 0x1ff490: 0x50c0000a  beql        $a2, $zero, . + 4 + (0xA << 2)
label_1ff494:
    if (ctx->pc == 0x1FF494u) {
        ctx->pc = 0x1FF494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF490u;
        // 0x1ff494: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF498u;
        goto label_1ff498;
    }
    ctx->pc = 0x1FF490u;
    {
        const bool branch_taken_0x1ff490 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff490) {
            ctx->pc = 0x1FF494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF490u;
            // 0x1ff494: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF4BCu;
            goto label_1ff4bc;
        }
    }
    ctx->pc = 0x1FF498u;
label_1ff498:
    // 0x1ff498: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ff498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ff49c:
    // 0x1ff49c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ff4a0:
    if (ctx->pc == 0x1FF4A0u) {
        ctx->pc = 0x1FF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF49Cu;
        // 0x1ff4a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF4A4u;
        goto label_1ff4a4;
    }
    ctx->pc = 0x1FF49Cu;
    {
        const bool branch_taken_0x1ff49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF49Cu;
        // 0x1ff4a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff49c) {
            ctx->pc = 0x1FF4B8u;
            goto label_1ff4b8;
        }
    }
    ctx->pc = 0x1FF4A4u;
label_1ff4a4:
    // 0x1ff4a4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1ff4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1ff4a8:
    // 0x1ff4a8: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1ff4a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1ff4ac:
    // 0x1ff4ac: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1ff4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1ff4b0:
    // 0x1ff4b0: 0x60f809  jalr        $v1
label_1ff4b4:
    if (ctx->pc == 0x1FF4B4u) {
        ctx->pc = 0x1FF4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4B0u;
        // 0x1ff4b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF4B8u;
        goto label_1ff4b8;
    }
    ctx->pc = 0x1FF4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FF4B8u);
        ctx->pc = 0x1FF4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4B0u;
        // 0x1ff4b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF4B0u, 0x1FF4B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF4B8u;
label_1ff4b8:
    // 0x1ff4b8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1ff4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ff4bc:
    // 0x1ff4bc: 0x5600fff4  bnel        $s0, $zero, . + 4 + (-0xC << 2)
label_1ff4c0:
    if (ctx->pc == 0x1FF4C0u) {
        ctx->pc = 0x1FF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4BCu;
        // 0x1ff4c0: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF4C4u;
        goto label_1ff4c4;
    }
    ctx->pc = 0x1FF4BCu;
    {
        const bool branch_taken_0x1ff4bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff4bc) {
            ctx->pc = 0x1FF4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF4BCu;
            // 0x1ff4c0: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff490;
        }
    }
    ctx->pc = 0x1FF4C4u;
label_1ff4c4:
    // 0x1ff4c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ff4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ff4c8:
    // 0x1ff4c8: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1ff4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_1ff4cc:
    // 0x1ff4cc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ff4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ff4d0:
    // 0x1ff4d0: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1ff4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1ff4d4:
    // 0x1ff4d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ff4d8:
    if (ctx->pc == 0x1FF4D8u) {
        ctx->pc = 0x1FF4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4D4u;
        // 0x1ff4d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF4DCu;
        goto label_1ff4dc;
    }
    ctx->pc = 0x1FF4D4u;
    {
        const bool branch_taken_0x1ff4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4D4u;
        // 0x1ff4d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff4d4) {
            ctx->pc = 0x1FF4F0u;
            goto label_1ff4f0;
        }
    }
    ctx->pc = 0x1FF4DCu;
label_1ff4dc:
    // 0x1ff4dc: 0xc07fd42  jal         func_1FF508
label_1ff4e0:
    if (ctx->pc == 0x1FF4E0u) {
        ctx->pc = 0x1FF4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4DCu;
        // 0x1ff4e0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF4E4u;
        goto label_1ff4e4;
    }
    ctx->pc = 0x1FF4DCu;
    SET_GPR_U32(ctx, 31, 0x1FF4E4u);
    ctx->pc = 0x1FF4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF4DCu;
    // 0x1ff4e0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF508u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF508u, 0x1FF4DCu, 0x1FF4E4u)) {
        return;
    }
    ctx->pc = 0x1FF4E4u;
label_1ff4e4:
    // 0x1ff4e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ff4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ff4e8:
    // 0x1ff4e8: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1ff4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_1ff4ec:
    // 0x1ff4ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff4f0:
    // 0x1ff4f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ff4f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ff4f4:
    // 0x1ff4f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ff4f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff4f8:
    // 0x1ff4f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff4fc:
    // 0x1ff4fc: 0x3e00008  jr          $ra
label_1ff500:
    if (ctx->pc == 0x1FF500u) {
        ctx->pc = 0x1FF500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4FCu;
        // 0x1ff500: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF504u;
        goto label_1ff504;
    }
    ctx->pc = 0x1FF4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4FCu;
        // 0x1ff500: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF504u;
label_1ff504:
    // 0x1ff504: 0x0  nop
    ctx->pc = 0x1ff504u;
    // NOP
    ctx->pc = 0x1ff508u;
}

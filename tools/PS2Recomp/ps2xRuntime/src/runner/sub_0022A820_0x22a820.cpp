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

// Function: sub_0022A820
// Address: 0x22a820 - 0x22a8d0
void sub_0022A820_0x22a820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A820_0x22a820");
#endif

    switch (ctx->pc) {
        case 0x22a820u: goto label_22a820;
        case 0x22a824u: goto label_22a824;
        case 0x22a828u: goto label_22a828;
        case 0x22a82cu: goto label_22a82c;
        case 0x22a830u: goto label_22a830;
        case 0x22a834u: goto label_22a834;
        case 0x22a838u: goto label_22a838;
        case 0x22a83cu: goto label_22a83c;
        case 0x22a840u: goto label_22a840;
        case 0x22a844u: goto label_22a844;
        case 0x22a848u: goto label_22a848;
        case 0x22a84cu: goto label_22a84c;
        case 0x22a850u: goto label_22a850;
        case 0x22a854u: goto label_22a854;
        case 0x22a858u: goto label_22a858;
        case 0x22a85cu: goto label_22a85c;
        case 0x22a860u: goto label_22a860;
        case 0x22a864u: goto label_22a864;
        case 0x22a868u: goto label_22a868;
        case 0x22a86cu: goto label_22a86c;
        case 0x22a870u: goto label_22a870;
        case 0x22a874u: goto label_22a874;
        case 0x22a878u: goto label_22a878;
        case 0x22a87cu: goto label_22a87c;
        case 0x22a880u: goto label_22a880;
        case 0x22a884u: goto label_22a884;
        case 0x22a888u: goto label_22a888;
        case 0x22a88cu: goto label_22a88c;
        case 0x22a890u: goto label_22a890;
        case 0x22a894u: goto label_22a894;
        case 0x22a898u: goto label_22a898;
        case 0x22a89cu: goto label_22a89c;
        case 0x22a8a0u: goto label_22a8a0;
        case 0x22a8a4u: goto label_22a8a4;
        case 0x22a8a8u: goto label_22a8a8;
        case 0x22a8acu: goto label_22a8ac;
        case 0x22a8b0u: goto label_22a8b0;
        case 0x22a8b4u: goto label_22a8b4;
        case 0x22a8b8u: goto label_22a8b8;
        case 0x22a8bcu: goto label_22a8bc;
        case 0x22a8c0u: goto label_22a8c0;
        case 0x22a8c4u: goto label_22a8c4;
        case 0x22a8c8u: goto label_22a8c8;
        case 0x22a8ccu: goto label_22a8cc;
        default: break;
    }

    ctx->pc = 0x22a820u;

label_22a820:
    // 0x22a820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22a820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22a824:
    // 0x22a824: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22a824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_22a828:
    // 0x22a828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22a82c:
    // 0x22a82c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22a82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22a830:
    // 0x22a830: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x22a830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_22a834:
    // 0x22a834: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22a834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a838:
    // 0x22a838: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x22a838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_22a83c:
    // 0x22a83c: 0x24840448  addiu       $a0, $a0, 0x448
    ctx->pc = 0x22a83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1096));
label_22a840:
    // 0x22a840: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22a840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22a844:
    // 0x22a844: 0xc09397e  jal         func_24E5F8
label_22a848:
    if (ctx->pc == 0x22A848u) {
        ctx->pc = 0x22A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A844u;
        // 0x22a848: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A84Cu;
        goto label_22a84c;
    }
    ctx->pc = 0x22A844u;
    SET_GPR_U32(ctx, 31, 0x22A84Cu);
    ctx->pc = 0x22A848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A844u;
    // 0x22a848: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E5F8u, 0x22A844u, 0x22A84Cu)) {
        return;
    }
    ctx->pc = 0x22A84Cu;
label_22a84c:
    // 0x22a84c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x22a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22a850:
    // 0x22a850: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_22a854:
    if (ctx->pc == 0x22A854u) {
        ctx->pc = 0x22A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A850u;
        // 0x22a854: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A858u;
        goto label_22a858;
    }
    ctx->pc = 0x22A850u;
    {
        const bool branch_taken_0x22a850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a850) {
            ctx->pc = 0x22A854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A850u;
            // 0x22a854: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A874u;
            goto label_22a874;
        }
    }
    ctx->pc = 0x22A858u;
label_22a858:
    // 0x22a858: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22a858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22a85c:
    // 0x22a85c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x22a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_22a860:
    // 0x22a860: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22a860u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_22a864:
    // 0x22a864: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x22a864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22a868:
    // 0x22a868: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x22a868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_22a86c:
    // 0x22a86c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x22a86cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_22a870:
    // 0x22a870: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22a870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22a874:
    // 0x22a874: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_22a878:
    if (ctx->pc == 0x22A878u) {
        ctx->pc = 0x22A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A874u;
        // 0x22a878: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A87Cu;
        goto label_22a87c;
    }
    ctx->pc = 0x22A874u;
    {
        const bool branch_taken_0x22a874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a874) {
            ctx->pc = 0x22A878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A874u;
            // 0x22a878: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A88Cu;
            goto label_22a88c;
        }
    }
    ctx->pc = 0x22A87Cu;
label_22a87c:
    // 0x22a87c: 0xc08a0e2  jal         func_228388
label_22a880:
    if (ctx->pc == 0x22A880u) {
        ctx->pc = 0x22A884u;
        goto label_22a884;
    }
    ctx->pc = 0x22A87Cu;
    SET_GPR_U32(ctx, 31, 0x22A884u);
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x22A87Cu, 0x22A884u)) {
        return;
    }
    ctx->pc = 0x22A884u;
label_22a884:
    // 0x22a884: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x22a884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_22a888:
    // 0x22a888: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x22a888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_22a88c:
    // 0x22a88c: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x22a88cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_22a890:
    // 0x22a890: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x22a890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
label_22a894:
    // 0x22a894: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22a894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a898:
    // 0x22a898: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22a898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22a89c:
    // 0x22a89c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x22a89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_22a8a0:
    // 0x22a8a0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_22a8a4:
    // 0x22a8a4: 0x8c633ea0  lw          $v1, 0x3EA0($v1)
    ctx->pc = 0x22a8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16032)));
label_22a8a8:
    // 0x22a8a8: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x22a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_22a8ac:
    // 0x22a8ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22a8b0:
    // 0x22a8b0: 0x40f809  jalr        $v0
label_22a8b4:
    if (ctx->pc == 0x22A8B4u) {
        ctx->pc = 0x22A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8B0u;
        // 0x22a8b4: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A8B8u;
        goto label_22a8b8;
    }
    ctx->pc = 0x22A8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22A8B8u);
        ctx->pc = 0x22A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8B0u;
        // 0x22a8b4: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A8B0u, 0x22A8B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22A8B8u;
label_22a8b8:
    // 0x22a8b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22a8b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22a8bc:
    // 0x22a8bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22a8c0:
    // 0x22a8c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22a8c4:
    // 0x22a8c4: 0x3e00008  jr          $ra
label_22a8c8:
    if (ctx->pc == 0x22A8C8u) {
        ctx->pc = 0x22A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8C4u;
        // 0x22a8c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A8CCu;
        goto label_22a8cc;
    }
    ctx->pc = 0x22A8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8C4u;
        // 0x22a8c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A8CCu;
label_22a8cc:
    // 0x22a8cc: 0x0  nop
    ctx->pc = 0x22a8ccu;
    // NOP
    ctx->pc = 0x22a8d0u;
}

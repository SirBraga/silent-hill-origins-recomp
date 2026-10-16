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

// Function: sub_001DD328
// Address: 0x1dd328 - 0x1dd3d0
void sub_001DD328_0x1dd328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD328_0x1dd328");
#endif

    switch (ctx->pc) {
        case 0x1dd328u: goto label_1dd328;
        case 0x1dd32cu: goto label_1dd32c;
        case 0x1dd330u: goto label_1dd330;
        case 0x1dd334u: goto label_1dd334;
        case 0x1dd338u: goto label_1dd338;
        case 0x1dd33cu: goto label_1dd33c;
        case 0x1dd340u: goto label_1dd340;
        case 0x1dd344u: goto label_1dd344;
        case 0x1dd348u: goto label_1dd348;
        case 0x1dd34cu: goto label_1dd34c;
        case 0x1dd350u: goto label_1dd350;
        case 0x1dd354u: goto label_1dd354;
        case 0x1dd358u: goto label_1dd358;
        case 0x1dd35cu: goto label_1dd35c;
        case 0x1dd360u: goto label_1dd360;
        case 0x1dd364u: goto label_1dd364;
        case 0x1dd368u: goto label_1dd368;
        case 0x1dd36cu: goto label_1dd36c;
        case 0x1dd370u: goto label_1dd370;
        case 0x1dd374u: goto label_1dd374;
        case 0x1dd378u: goto label_1dd378;
        case 0x1dd37cu: goto label_1dd37c;
        case 0x1dd380u: goto label_1dd380;
        case 0x1dd384u: goto label_1dd384;
        case 0x1dd388u: goto label_1dd388;
        case 0x1dd38cu: goto label_1dd38c;
        case 0x1dd390u: goto label_1dd390;
        case 0x1dd394u: goto label_1dd394;
        case 0x1dd398u: goto label_1dd398;
        case 0x1dd39cu: goto label_1dd39c;
        case 0x1dd3a0u: goto label_1dd3a0;
        case 0x1dd3a4u: goto label_1dd3a4;
        case 0x1dd3a8u: goto label_1dd3a8;
        case 0x1dd3acu: goto label_1dd3ac;
        case 0x1dd3b0u: goto label_1dd3b0;
        case 0x1dd3b4u: goto label_1dd3b4;
        case 0x1dd3b8u: goto label_1dd3b8;
        case 0x1dd3bcu: goto label_1dd3bc;
        case 0x1dd3c0u: goto label_1dd3c0;
        case 0x1dd3c4u: goto label_1dd3c4;
        case 0x1dd3c8u: goto label_1dd3c8;
        case 0x1dd3ccu: goto label_1dd3cc;
        default: break;
    }

    ctx->pc = 0x1dd328u;

label_1dd328:
    // 0x1dd328: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dd328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1dd32c:
    // 0x1dd32c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1dd32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1dd330:
    // 0x1dd330: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dd330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1dd334:
    // 0x1dd334: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dd334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dd338:
    // 0x1dd338: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1dd338u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1dd33c:
    // 0x1dd33c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1dd340:
    // 0x1dd340: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1dd340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1dd344:
    // 0x1dd344: 0x8c45e640  lw          $a1, -0x19C0($v0)
    ctx->pc = 0x1dd344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960704)));
label_1dd348:
    // 0x1dd348: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dd348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dd34c:
    // 0x1dd34c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dd34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dd350:
    // 0x1dd350: 0x40f809  jalr        $v0
label_1dd354:
    if (ctx->pc == 0x1DD354u) {
        ctx->pc = 0x1DD354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD350u;
        // 0x1dd354: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD358u;
        goto label_1dd358;
    }
    ctx->pc = 0x1DD350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD358u);
        ctx->pc = 0x1DD354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD350u;
        // 0x1dd354: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD350u, 0x1DD358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD358u;
label_1dd358:
    // 0x1dd358: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dd358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dd35c:
    // 0x1dd35c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1dd35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1dd360:
    // 0x1dd360: 0x40f809  jalr        $v0
label_1dd364:
    if (ctx->pc == 0x1DD364u) {
        ctx->pc = 0x1DD364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD360u;
        // 0x1dd364: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD368u;
        goto label_1dd368;
    }
    ctx->pc = 0x1DD360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD368u);
        ctx->pc = 0x1DD364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD360u;
        // 0x1dd364: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD360u, 0x1DD368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD368u;
label_1dd368:
    // 0x1dd368: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dd368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dd36c:
    // 0x1dd36c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1dd36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dd370:
    // 0x1dd370: 0x40f809  jalr        $v0
label_1dd374:
    if (ctx->pc == 0x1DD374u) {
        ctx->pc = 0x1DD374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD370u;
        // 0x1dd374: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD378u;
        goto label_1dd378;
    }
    ctx->pc = 0x1DD370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD378u);
        ctx->pc = 0x1DD374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD370u;
        // 0x1dd374: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD370u, 0x1DD378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD378u;
label_1dd378:
    // 0x1dd378: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_1dd37c:
    if (ctx->pc == 0x1DD37Cu) {
        ctx->pc = 0x1DD37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD378u;
        // 0x1dd37c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD380u;
        goto label_1dd380;
    }
    ctx->pc = 0x1DD378u;
    {
        const bool branch_taken_0x1dd378 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD378u;
        // 0x1dd37c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd378) {
            ctx->pc = 0x1DD3BCu;
            goto label_1dd3bc;
        }
    }
    ctx->pc = 0x1DD380u;
label_1dd380:
    // 0x1dd380: 0x8c43e664  lw          $v1, -0x199C($v0)
    ctx->pc = 0x1dd380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960740)));
label_1dd384:
    // 0x1dd384: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x1dd384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1dd388:
    // 0x1dd388: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1dd388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1dd38c:
    // 0x1dd38c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1dd390:
    if (ctx->pc == 0x1DD390u) {
        ctx->pc = 0x1DD390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD38Cu;
        // 0x1dd390: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD394u;
        goto label_1dd394;
    }
    ctx->pc = 0x1DD38Cu;
    {
        const bool branch_taken_0x1dd38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD38Cu;
        // 0x1dd390: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd38c) {
            ctx->pc = 0x1DD3A8u;
            goto label_1dd3a8;
        }
    }
    ctx->pc = 0x1DD394u;
label_1dd394:
    // 0x1dd394: 0x8c62e670  lw          $v0, -0x1990($v1)
    ctx->pc = 0x1dd394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960752)));
label_1dd398:
    // 0x1dd398: 0x40f809  jalr        $v0
label_1dd39c:
    if (ctx->pc == 0x1DD39Cu) {
        ctx->pc = 0x1DD39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD398u;
        // 0x1dd39c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD3A0u;
        goto label_1dd3a0;
    }
    ctx->pc = 0x1DD398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD3A0u);
        ctx->pc = 0x1DD39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD398u;
        // 0x1dd39c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD398u, 0x1DD3A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD3A0u;
label_1dd3a0:
    // 0x1dd3a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dd3a4:
    if (ctx->pc == 0x1DD3A4u) {
        ctx->pc = 0x1DD3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3A0u;
        // 0x1dd3a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD3A8u;
        goto label_1dd3a8;
    }
    ctx->pc = 0x1DD3A0u;
    {
        const bool branch_taken_0x1dd3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3A0u;
        // 0x1dd3a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd3a0) {
            ctx->pc = 0x1DD3B8u;
            goto label_1dd3b8;
        }
    }
    ctx->pc = 0x1DD3A8u;
label_1dd3a8:
    // 0x1dd3a8: 0x8c62e670  lw          $v0, -0x1990($v1)
    ctx->pc = 0x1dd3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960752)));
label_1dd3ac:
    // 0x1dd3ac: 0x40f809  jalr        $v0
label_1dd3b0:
    if (ctx->pc == 0x1DD3B0u) {
        ctx->pc = 0x1DD3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3ACu;
        // 0x1dd3b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD3B4u;
        goto label_1dd3b4;
    }
    ctx->pc = 0x1DD3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD3B4u);
        ctx->pc = 0x1DD3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3ACu;
        // 0x1dd3b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD3ACu, 0x1DD3B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD3B4u;
label_1dd3b4:
    // 0x1dd3b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd3b8:
    // 0x1dd3b8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1dd3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1dd3bc:
    // 0x1dd3bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dd3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dd3c0:
    // 0x1dd3c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dd3c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd3c4:
    // 0x1dd3c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dd3c8:
    // 0x1dd3c8: 0x3e00008  jr          $ra
label_1dd3cc:
    if (ctx->pc == 0x1DD3CCu) {
        ctx->pc = 0x1DD3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3C8u;
        // 0x1dd3cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD3D0u;
        goto label_fallthrough_0x1dd3c8;
    }
    ctx->pc = 0x1DD3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3C8u;
        // 0x1dd3cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dd3c8:
    ctx->pc = 0x1DD3D0u;
}

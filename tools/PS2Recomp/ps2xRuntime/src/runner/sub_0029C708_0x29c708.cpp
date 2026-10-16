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

// Function: sub_0029C708
// Address: 0x29c708 - 0x29c7b8
void sub_0029C708_0x29c708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C708_0x29c708");
#endif

    switch (ctx->pc) {
        case 0x29c708u: goto label_29c708;
        case 0x29c70cu: goto label_29c70c;
        case 0x29c710u: goto label_29c710;
        case 0x29c714u: goto label_29c714;
        case 0x29c718u: goto label_29c718;
        case 0x29c71cu: goto label_29c71c;
        case 0x29c720u: goto label_29c720;
        case 0x29c724u: goto label_29c724;
        case 0x29c728u: goto label_29c728;
        case 0x29c72cu: goto label_29c72c;
        case 0x29c730u: goto label_29c730;
        case 0x29c734u: goto label_29c734;
        case 0x29c738u: goto label_29c738;
        case 0x29c73cu: goto label_29c73c;
        case 0x29c740u: goto label_29c740;
        case 0x29c744u: goto label_29c744;
        case 0x29c748u: goto label_29c748;
        case 0x29c74cu: goto label_29c74c;
        case 0x29c750u: goto label_29c750;
        case 0x29c754u: goto label_29c754;
        case 0x29c758u: goto label_29c758;
        case 0x29c75cu: goto label_29c75c;
        case 0x29c760u: goto label_29c760;
        case 0x29c764u: goto label_29c764;
        case 0x29c768u: goto label_29c768;
        case 0x29c76cu: goto label_29c76c;
        case 0x29c770u: goto label_29c770;
        case 0x29c774u: goto label_29c774;
        case 0x29c778u: goto label_29c778;
        case 0x29c77cu: goto label_29c77c;
        case 0x29c780u: goto label_29c780;
        case 0x29c784u: goto label_29c784;
        case 0x29c788u: goto label_29c788;
        case 0x29c78cu: goto label_29c78c;
        case 0x29c790u: goto label_29c790;
        case 0x29c794u: goto label_29c794;
        case 0x29c798u: goto label_29c798;
        case 0x29c79cu: goto label_29c79c;
        case 0x29c7a0u: goto label_29c7a0;
        case 0x29c7a4u: goto label_29c7a4;
        case 0x29c7a8u: goto label_29c7a8;
        case 0x29c7acu: goto label_29c7ac;
        case 0x29c7b0u: goto label_29c7b0;
        case 0x29c7b4u: goto label_29c7b4;
        default: break;
    }

    ctx->pc = 0x29c708u;

label_29c708:
    // 0x29c708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29c70c:
    // 0x29c70c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29c710:
    // 0x29c710: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29c710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29c714:
    // 0x29c714: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29c714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29c718:
    // 0x29c718: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x29c718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_29c71c:
    // 0x29c71c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x29c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_29c720:
    // 0x29c720: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x29c720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_29c724:
    // 0x29c724: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_29c728:
    if (ctx->pc == 0x29C728u) {
        ctx->pc = 0x29C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C724u;
        // 0x29c728: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C72Cu;
        goto label_29c72c;
    }
    ctx->pc = 0x29C724u;
    {
        const bool branch_taken_0x29c724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c724) {
            ctx->pc = 0x29C728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C724u;
            // 0x29c728: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C758u;
            goto label_29c758;
        }
    }
    ctx->pc = 0x29C72Cu;
label_29c72c:
    // 0x29c72c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x29c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_29c730:
    // 0x29c730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29c730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29c734:
    // 0x29c734: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x29c734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_29c738:
    // 0x29c738: 0x40f809  jalr        $v0
label_29c73c:
    if (ctx->pc == 0x29C73Cu) {
        ctx->pc = 0x29C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C738u;
        // 0x29c73c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C740u;
        goto label_29c740;
    }
    ctx->pc = 0x29C738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C740u);
        ctx->pc = 0x29C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C738u;
        // 0x29c73c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C738u, 0x29C740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C740u;
label_29c740:
    // 0x29c740: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29c740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29c744:
    // 0x29c744: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_29c748:
    if (ctx->pc == 0x29C748u) {
        ctx->pc = 0x29C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C744u;
        // 0x29c748: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C74Cu;
        goto label_29c74c;
    }
    ctx->pc = 0x29C744u;
    {
        const bool branch_taken_0x29c744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x29c744) {
            ctx->pc = 0x29C748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C744u;
            // 0x29c748: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C754u;
            goto label_29c754;
        }
    }
    ctx->pc = 0x29C74Cu;
label_29c74c:
    // 0x29c74c: 0x10000015  b           . + 4 + (0x15 << 2)
label_29c750:
    if (ctx->pc == 0x29C750u) {
        ctx->pc = 0x29C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C74Cu;
        // 0x29c750: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C754u;
        goto label_29c754;
    }
    ctx->pc = 0x29C74Cu;
    {
        const bool branch_taken_0x29c74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C74Cu;
        // 0x29c750: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c74c) {
            ctx->pc = 0x29C7A4u;
            goto label_29c7a4;
        }
    }
    ctx->pc = 0x29C754u;
label_29c754:
    // 0x29c754: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x29c754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29c758:
    // 0x29c758: 0x30a20100  andi        $v0, $a1, 0x100
    ctx->pc = 0x29c758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
label_29c75c:
    // 0x29c75c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_29c760:
    if (ctx->pc == 0x29C760u) {
        ctx->pc = 0x29C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C75Cu;
        // 0x29c760: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C764u;
        goto label_29c764;
    }
    ctx->pc = 0x29C75Cu;
    {
        const bool branch_taken_0x29c75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c75c) {
            ctx->pc = 0x29C760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C75Cu;
            // 0x29c760: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C770u;
            goto label_29c770;
        }
    }
    ctx->pc = 0x29C764u;
label_29c764:
    // 0x29c764: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x29c764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_29c768:
    // 0x29c768: 0x10000006  b           . + 4 + (0x6 << 2)
label_29c76c:
    if (ctx->pc == 0x29C76Cu) {
        ctx->pc = 0x29C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C768u;
        // 0x29c76c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C770u;
        goto label_29c770;
    }
    ctx->pc = 0x29C768u;
    {
        const bool branch_taken_0x29c768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C768u;
        // 0x29c76c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c768) {
            ctx->pc = 0x29C784u;
            goto label_29c784;
        }
    }
    ctx->pc = 0x29C770u;
label_29c770:
    // 0x29c770: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29c770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29c774:
    // 0x29c774: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x29c774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_29c778:
    // 0x29c778: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_29c77c:
    if (ctx->pc == 0x29C77Cu) {
        ctx->pc = 0x29C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C778u;
        // 0x29c77c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C780u;
        goto label_29c780;
    }
    ctx->pc = 0x29C778u;
    {
        const bool branch_taken_0x29c778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C778u;
        // 0x29c77c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c778) {
            ctx->pc = 0x29C784u;
            goto label_29c784;
        }
    }
    ctx->pc = 0x29C780u;
label_29c780:
    // 0x29c780: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x29c780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_29c784:
    // 0x29c784: 0x2402f7ff  addiu       $v0, $zero, -0x801
    ctx->pc = 0x29c784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_29c788:
    // 0x29c788: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x29c788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_29c78c:
    // 0x29c78c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x29c78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_29c790:
    // 0x29c790: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x29c790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_29c794:
    // 0x29c794: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29c794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29c798:
    // 0x29c798: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x29c798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_29c79c:
    // 0x29c79c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29c79cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c7a0:
    // 0x29c7a0: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x29c7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_29c7a4:
    // 0x29c7a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29c7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29c7a8:
    // 0x29c7a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c7a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29c7ac:
    // 0x29c7ac: 0x3e00008  jr          $ra
label_29c7b0:
    if (ctx->pc == 0x29C7B0u) {
        ctx->pc = 0x29C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C7ACu;
        // 0x29c7b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C7B4u;
        goto label_29c7b4;
    }
    ctx->pc = 0x29C7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C7ACu;
        // 0x29c7b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C7B4u;
label_29c7b4:
    // 0x29c7b4: 0x0  nop
    ctx->pc = 0x29c7b4u;
    // NOP
    ctx->pc = 0x29c7b8u;
}

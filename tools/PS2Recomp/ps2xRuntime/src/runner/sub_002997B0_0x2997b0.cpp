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

// Function: sub_002997B0
// Address: 0x2997b0 - 0x299850
void sub_002997B0_0x2997b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002997B0_0x2997b0");
#endif

    switch (ctx->pc) {
        case 0x2997ccu: goto label_2997cc;
        case 0x299804u: goto label_299804;
        case 0x299818u: goto label_299818;
        case 0x299838u: goto label_299838;
        default: break;
    }

    ctx->pc = 0x2997b0u;

    // 0x2997b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2997b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2997b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2997b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2997b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2997b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2997bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2997bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2997c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2997c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2997c4: 0xc0a5e70  jal         func_2979C0
    ctx->pc = 0x2997C4u;
    SET_GPR_U32(ctx, 31, 0x2997CCu);
    ctx->pc = 0x2997C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2997C4u;
    // 0x2997c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2979C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2979C0u, 0x2997C4u, 0x2997CCu)) {
        return;
    }
    ctx->pc = 0x2997CCu;
label_2997cc:
    // 0x2997cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2997ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2997d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2997d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2997d4: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2997D4u;
    {
        const bool branch_taken_0x2997d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2997d4) {
            ctx->pc = 0x2997D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2997D4u;
            // 0x2997d8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2997F4u;
            goto label_2997f4;
        }
    }
    ctx->pc = 0x2997DCu;
    // 0x2997dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2997dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2997e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2997e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2997e4: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x2997e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x2997e8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x2997e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2997ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2997ECu;
    {
        const bool branch_taken_0x2997ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2997F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2997ECu;
        // 0x2997f0: 0xa083001a  sb          $v1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2997ec) {
            ctx->pc = 0x299808u;
            goto label_299808;
        }
    }
    ctx->pc = 0x2997F4u;
label_2997f4:
    // 0x2997f4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2997f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2997f8: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x2997f8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x2997fc: 0xc0a6e1e  jal         func_29B878
    ctx->pc = 0x2997FCu;
    SET_GPR_U32(ctx, 31, 0x299804u);
    ctx->pc = 0x299800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2997FCu;
    // 0x299800: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B878u, 0x2997FCu, 0x299804u)) {
        return;
    }
    ctx->pc = 0x299804u;
label_299804:
    // 0x299804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_299808:
    // 0x299808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29980c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29980cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299810: 0x3e00008  jr          $ra
    ctx->pc = 0x299810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299810u;
        // 0x299814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299818u;
label_299818:
    // 0x299818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x299818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29981c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29981cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x299820: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x299824: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x299824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299828: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x299828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29982c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299830: 0xc0a7bd0  jal         func_29EF40
    ctx->pc = 0x299830u;
    SET_GPR_U32(ctx, 31, 0x299838u);
    ctx->pc = 0x299834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299830u;
    // 0x299834: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EF40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EF40u, 0x299830u, 0x299838u)) {
        return;
    }
    ctx->pc = 0x299838u;
label_299838:
    // 0x299838: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x299838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29983c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29983cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299844: 0x3e00008  jr          $ra
    ctx->pc = 0x299844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299844u;
        // 0x299848: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29984Cu;
    // 0x29984c: 0x0  nop
    ctx->pc = 0x29984cu;
    // NOP
    ctx->pc = 0x299850u;
}

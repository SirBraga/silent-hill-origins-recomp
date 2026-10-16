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

// Function: sub_0024F758
// Address: 0x24f758 - 0x24f7b0
void sub_0024F758_0x24f758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F758_0x24f758");
#endif

    ctx->pc = 0x24f758u;

    // 0x24f758: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x24F758u;
    {
        const bool branch_taken_0x24f758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F758u;
        // 0x24f75c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f758) {
            ctx->pc = 0x24F798u;
            goto label_24f798;
        }
    }
    ctx->pc = 0x24F760u;
    // 0x24f760: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x24f760u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24f764: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x24f764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x24f768: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24F768u;
    {
        const bool branch_taken_0x24f768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F768u;
        // 0x24f76c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f768) {
            ctx->pc = 0x24F794u;
            goto label_24f794;
        }
    }
    ctx->pc = 0x24F770u;
    // 0x24f770: 0x244211d1  addiu       $v0, $v0, 0x11D1
    ctx->pc = 0x24f770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4561));
    // 0x24f774: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24f774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f778: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x24f778u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f77c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x24f77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x24f780: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F780u;
    {
        const bool branch_taken_0x24f780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F780u;
        // 0x24f784: 0x2402003a  addiu       $v0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f780) {
            ctx->pc = 0x24F798u;
            goto label_24f798;
        }
    }
    ctx->pc = 0x24F788u;
    // 0x24f788: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x24f788u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x24f78c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24F78Cu;
    {
        const bool branch_taken_0x24f78c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24f78c) {
            ctx->pc = 0x24F798u;
            goto label_24f798;
        }
    }
    ctx->pc = 0x24F794u;
label_24f794:
    // 0x24f794: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24f794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24f798:
    // 0x24f798: 0x3e00008  jr          $ra
    ctx->pc = 0x24F798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F798u;
        // 0x24f79c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F7A0u;
    // 0x24f7a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24f7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24f7a4: 0x0  nop
    ctx->pc = 0x24f7a4u;
    // NOP
    // 0x24f7a8: 0xa3250002  sb          $a1, 0x2($t9)
    ctx->pc = 0x24f7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x24f7ac: 0x0  nop
    ctx->pc = 0x24f7acu;
    // NOP
    ctx->pc = 0x24f7b0u;
}

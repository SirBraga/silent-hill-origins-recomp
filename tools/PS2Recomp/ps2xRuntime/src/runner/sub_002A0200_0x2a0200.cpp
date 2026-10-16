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

// Function: sub_002A0200
// Address: 0x2a0200 - 0x2a0268
void sub_002A0200_0x2a0200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0200_0x2a0200");
#endif

    switch (ctx->pc) {
        case 0x2a021cu: goto label_2a021c;
        case 0x2a0240u: goto label_2a0240;
        default: break;
    }

    ctx->pc = 0x2a0200u;

    // 0x2a0200: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2a0200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2a0204: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2a0204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a0208: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a0208u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a020c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A020Cu;
    {
        const bool branch_taken_0x2a020c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A020Cu;
        // 0x2a0210: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a020c) {
            ctx->pc = 0x2A022Cu;
            goto label_2a022c;
        }
    }
    ctx->pc = 0x2A0214u;
    // 0x2a0214: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A021Cu;
label_2a021c:
    // 0x2a021c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a021cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0220: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a0220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a0224: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0224u;
        // 0x2a0228: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A022Cu;
label_2a022c:
    // 0x2a022c: 0x24870014  addiu       $a3, $a0, 0x14
    ctx->pc = 0x2a022cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2a0230: 0x24a20014  addiu       $v0, $a1, 0x14
    ctx->pc = 0x2a0230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x2a0234: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x2a0234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2a0238: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a0238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a023c: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x2a023cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_2a0240:
    // 0x2a0240: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2a0240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2a0244: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a0244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a0248: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a0248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a024c: 0x5444fff3  bnel        $v0, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2A024Cu;
    {
        const bool branch_taken_0x2a024c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a024c) {
            ctx->pc = 0x2A0250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A024Cu;
            // 0x2a0250: 0x44202b  sltu        $a0, $v0, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A021Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a021c;
        }
    }
    ctx->pc = 0x2A0254u;
    // 0x2a0254: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x2a0254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2a0258: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A0258u;
    {
        const bool branch_taken_0x2a0258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0258u;
        // 0x2a025c: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0258) {
            ctx->pc = 0x2A0240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0240;
        }
    }
    ctx->pc = 0x2A0260u;
    // 0x2a0260: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0260u;
        // 0x2a0264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0268u;
}

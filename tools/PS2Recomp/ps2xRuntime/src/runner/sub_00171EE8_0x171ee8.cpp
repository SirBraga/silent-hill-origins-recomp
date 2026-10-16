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

// Function: sub_00171EE8
// Address: 0x171ee8 - 0x171f50
void sub_00171EE8_0x171ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171EE8_0x171ee8");
#endif

    switch (ctx->pc) {
        case 0x171ee8u: goto label_171ee8;
        case 0x171eecu: goto label_171eec;
        case 0x171ef0u: goto label_171ef0;
        case 0x171ef4u: goto label_171ef4;
        case 0x171ef8u: goto label_171ef8;
        case 0x171efcu: goto label_171efc;
        case 0x171f00u: goto label_171f00;
        case 0x171f04u: goto label_171f04;
        case 0x171f08u: goto label_171f08;
        case 0x171f0cu: goto label_171f0c;
        case 0x171f10u: goto label_171f10;
        case 0x171f14u: goto label_171f14;
        case 0x171f18u: goto label_171f18;
        case 0x171f1cu: goto label_171f1c;
        case 0x171f20u: goto label_171f20;
        case 0x171f24u: goto label_171f24;
        case 0x171f28u: goto label_171f28;
        case 0x171f2cu: goto label_171f2c;
        case 0x171f30u: goto label_171f30;
        case 0x171f34u: goto label_171f34;
        case 0x171f38u: goto label_171f38;
        case 0x171f3cu: goto label_171f3c;
        case 0x171f40u: goto label_171f40;
        case 0x171f44u: goto label_171f44;
        case 0x171f48u: goto label_171f48;
        case 0x171f4cu: goto label_171f4c;
        default: break;
    }

    ctx->pc = 0x171ee8u;

label_171ee8:
    // 0x171ee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_171eec:
    // 0x171eec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_171ef0:
    // 0x171ef0: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x171ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_171ef4:
    // 0x171ef4: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x171ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_171ef8:
    // 0x171ef8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_171efc:
    if (ctx->pc == 0x171EFCu) {
        ctx->pc = 0x171EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171EF8u;
        // 0x171efc: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171F00u;
        goto label_171f00;
    }
    ctx->pc = 0x171EF8u;
    {
        const bool branch_taken_0x171ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171ef8) {
            ctx->pc = 0x171EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171EF8u;
            // 0x171efc: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171F20u;
            goto label_171f20;
        }
    }
    ctx->pc = 0x171F00u;
label_171f00:
    // 0x171f00: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_171f04:
    if (ctx->pc == 0x171F04u) {
        ctx->pc = 0x171F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F00u;
        // 0x171f04: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171F08u;
        goto label_171f08;
    }
    ctx->pc = 0x171F00u;
    {
        const bool branch_taken_0x171f00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x171F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F00u;
        // 0x171f04: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171f00) {
            ctx->pc = 0x171F1Cu;
            goto label_171f1c;
        }
    }
    ctx->pc = 0x171F08u;
label_171f08:
    // 0x171f08: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x171f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_171f0c:
    // 0x171f0c: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x171f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
label_171f10:
    // 0x171f10: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x171f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_171f14:
    // 0x171f14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x171f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_171f18:
    // 0x171f18: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x171f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
label_171f1c:
    // 0x171f1c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x171f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_171f20:
    // 0x171f20: 0x8cc200e4  lw          $v0, 0xE4($a2)
    ctx->pc = 0x171f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
label_171f24:
    // 0x171f24: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_171f28:
    if (ctx->pc == 0x171F28u) {
        ctx->pc = 0x171F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F24u;
        // 0x171f28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171F2Cu;
        goto label_171f2c;
    }
    ctx->pc = 0x171F24u;
    {
        const bool branch_taken_0x171f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F24u;
        // 0x171f28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171f24) {
            ctx->pc = 0x171F44u;
            goto label_171f44;
        }
    }
    ctx->pc = 0x171F2Cu;
label_171f2c:
    // 0x171f2c: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x171f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_171f30:
    // 0x171f30: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x171f30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_171f34:
    // 0x171f34: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x171f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_171f38:
    // 0x171f38: 0x60f809  jalr        $v1
label_171f3c:
    if (ctx->pc == 0x171F3Cu) {
        ctx->pc = 0x171F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F38u;
        // 0x171f3c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171F40u;
        goto label_171f40;
    }
    ctx->pc = 0x171F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x171F40u);
        ctx->pc = 0x171F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F38u;
        // 0x171f3c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171F38u, 0x171F40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x171F40u;
label_171f40:
    // 0x171f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_171f44:
    // 0x171f44: 0x3e00008  jr          $ra
label_171f48:
    if (ctx->pc == 0x171F48u) {
        ctx->pc = 0x171F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F44u;
        // 0x171f48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171F4Cu;
        goto label_171f4c;
    }
    ctx->pc = 0x171F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F44u;
        // 0x171f48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171F4Cu;
label_171f4c:
    // 0x171f4c: 0x0  nop
    ctx->pc = 0x171f4cu;
    // NOP
    ctx->pc = 0x171f50u;
}

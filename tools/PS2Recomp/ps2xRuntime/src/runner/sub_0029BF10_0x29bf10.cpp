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

// Function: sub_0029BF10
// Address: 0x29bf10 - 0x29bf60
void sub_0029BF10_0x29bf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BF10_0x29bf10");
#endif

    switch (ctx->pc) {
        case 0x29bf10u: goto label_29bf10;
        case 0x29bf14u: goto label_29bf14;
        case 0x29bf18u: goto label_29bf18;
        case 0x29bf1cu: goto label_29bf1c;
        case 0x29bf20u: goto label_29bf20;
        case 0x29bf24u: goto label_29bf24;
        case 0x29bf28u: goto label_29bf28;
        case 0x29bf2cu: goto label_29bf2c;
        case 0x29bf30u: goto label_29bf30;
        case 0x29bf34u: goto label_29bf34;
        case 0x29bf38u: goto label_29bf38;
        case 0x29bf3cu: goto label_29bf3c;
        case 0x29bf40u: goto label_29bf40;
        case 0x29bf44u: goto label_29bf44;
        case 0x29bf48u: goto label_29bf48;
        case 0x29bf4cu: goto label_29bf4c;
        case 0x29bf50u: goto label_29bf50;
        case 0x29bf54u: goto label_29bf54;
        case 0x29bf58u: goto label_29bf58;
        case 0x29bf5cu: goto label_29bf5c;
        default: break;
    }

    ctx->pc = 0x29bf10u;

label_29bf10:
    // 0x29bf10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29bf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29bf14:
    // 0x29bf14: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29bf14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29bf18:
    // 0x29bf18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29bf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29bf1c:
    // 0x29bf1c: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x29bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_29bf20:
    // 0x29bf20: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_29bf24:
    if (ctx->pc == 0x29BF24u) {
        ctx->pc = 0x29BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF20u;
        // 0x29bf24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BF28u;
        goto label_29bf28;
    }
    ctx->pc = 0x29BF20u;
    {
        const bool branch_taken_0x29bf20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF20u;
        // 0x29bf24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf20) {
            ctx->pc = 0x29BF50u;
            goto label_29bf50;
        }
    }
    ctx->pc = 0x29BF28u;
label_29bf28:
    // 0x29bf28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x29bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_29bf2c:
    // 0x29bf2c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29bf2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_29bf30:
    // 0x29bf30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29bf30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_29bf34:
    // 0x29bf34: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_29bf38:
    if (ctx->pc == 0x29BF38u) {
        ctx->pc = 0x29BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF34u;
        // 0x29bf38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BF3Cu;
        goto label_29bf3c;
    }
    ctx->pc = 0x29BF34u;
    {
        const bool branch_taken_0x29bf34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF34u;
        // 0x29bf38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf34) {
            ctx->pc = 0x29BF50u;
            goto label_29bf50;
        }
    }
    ctx->pc = 0x29BF3Cu;
label_29bf3c:
    // 0x29bf3c: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x29bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_29bf40:
    // 0x29bf40: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x29bf40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_29bf44:
    // 0x29bf44: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x29bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_29bf48:
    // 0x29bf48: 0x40f809  jalr        $v0
label_29bf4c:
    if (ctx->pc == 0x29BF4Cu) {
        ctx->pc = 0x29BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF48u;
        // 0x29bf4c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BF50u;
        goto label_29bf50;
    }
    ctx->pc = 0x29BF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29BF50u);
        ctx->pc = 0x29BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF48u;
        // 0x29bf4c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BF48u, 0x29BF50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29BF50u;
label_29bf50:
    // 0x29bf50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29bf50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29bf54:
    // 0x29bf54: 0x3e00008  jr          $ra
label_29bf58:
    if (ctx->pc == 0x29BF58u) {
        ctx->pc = 0x29BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF54u;
        // 0x29bf58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BF5Cu;
        goto label_29bf5c;
    }
    ctx->pc = 0x29BF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF54u;
        // 0x29bf58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BF5Cu;
label_29bf5c:
    // 0x29bf5c: 0x0  nop
    ctx->pc = 0x29bf5cu;
    // NOP
    ctx->pc = 0x29bf60u;
}

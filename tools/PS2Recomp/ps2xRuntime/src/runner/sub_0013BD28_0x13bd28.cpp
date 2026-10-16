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

// Function: sub_0013BD28
// Address: 0x13bd28 - 0x13bda0
void sub_0013BD28_0x13bd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BD28_0x13bd28");
#endif

    switch (ctx->pc) {
        case 0x13bd28u: goto label_13bd28;
        case 0x13bd2cu: goto label_13bd2c;
        case 0x13bd30u: goto label_13bd30;
        case 0x13bd34u: goto label_13bd34;
        case 0x13bd38u: goto label_13bd38;
        case 0x13bd3cu: goto label_13bd3c;
        case 0x13bd40u: goto label_13bd40;
        case 0x13bd44u: goto label_13bd44;
        case 0x13bd48u: goto label_13bd48;
        case 0x13bd4cu: goto label_13bd4c;
        case 0x13bd50u: goto label_13bd50;
        case 0x13bd54u: goto label_13bd54;
        case 0x13bd58u: goto label_13bd58;
        case 0x13bd5cu: goto label_13bd5c;
        case 0x13bd60u: goto label_13bd60;
        case 0x13bd64u: goto label_13bd64;
        case 0x13bd68u: goto label_13bd68;
        case 0x13bd6cu: goto label_13bd6c;
        case 0x13bd70u: goto label_13bd70;
        case 0x13bd74u: goto label_13bd74;
        case 0x13bd78u: goto label_13bd78;
        case 0x13bd7cu: goto label_13bd7c;
        case 0x13bd80u: goto label_13bd80;
        case 0x13bd84u: goto label_13bd84;
        case 0x13bd88u: goto label_13bd88;
        case 0x13bd8cu: goto label_13bd8c;
        case 0x13bd90u: goto label_13bd90;
        case 0x13bd94u: goto label_13bd94;
        case 0x13bd98u: goto label_13bd98;
        case 0x13bd9cu: goto label_13bd9c;
        default: break;
    }

    ctx->pc = 0x13bd28u;

label_13bd28:
    // 0x13bd28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13bd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13bd2c:
    // 0x13bd2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13bd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_13bd30:
    // 0x13bd30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13bd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13bd34:
    // 0x13bd34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13bd34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13bd38:
    // 0x13bd38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13bd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13bd3c:
    // 0x13bd3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13bd3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13bd40:
    // 0x13bd40: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x13bd40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_13bd44:
    // 0x13bd44: 0x50b10011  beql        $a1, $s1, . + 4 + (0x11 << 2)
label_13bd48:
    if (ctx->pc == 0x13BD48u) {
        ctx->pc = 0x13BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD44u;
        // 0x13bd48: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BD4Cu;
        goto label_13bd4c;
    }
    ctx->pc = 0x13BD44u;
    {
        const bool branch_taken_0x13bd44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        if (branch_taken_0x13bd44) {
            ctx->pc = 0x13BD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BD44u;
            // 0x13bd48: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BD8Cu;
            goto label_13bd8c;
        }
    }
    ctx->pc = 0x13BD4Cu;
label_13bd4c:
    // 0x13bd4c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_13bd50:
    if (ctx->pc == 0x13BD50u) {
        ctx->pc = 0x13BD54u;
        goto label_13bd54;
    }
    ctx->pc = 0x13BD4Cu;
    {
        const bool branch_taken_0x13bd4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bd4c) {
            ctx->pc = 0x13BD68u;
            goto label_13bd68;
        }
    }
    ctx->pc = 0x13BD54u;
label_13bd54:
    // 0x13bd54: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x13bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_13bd58:
    // 0x13bd58: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x13bd58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_13bd5c:
    // 0x13bd5c: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x13bd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_13bd60:
    // 0x13bd60: 0x60f809  jalr        $v1
label_13bd64:
    if (ctx->pc == 0x13BD64u) {
        ctx->pc = 0x13BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD60u;
        // 0x13bd64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BD68u;
        goto label_13bd68;
    }
    ctx->pc = 0x13BD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13BD68u);
        ctx->pc = 0x13BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD60u;
        // 0x13bd64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BD60u, 0x13BD68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13BD68u;
label_13bd68:
    // 0x13bd68: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_13bd6c:
    if (ctx->pc == 0x13BD6Cu) {
        ctx->pc = 0x13BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD68u;
        // 0x13bd6c: 0xae1100c8  sw          $s1, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BD70u;
        goto label_13bd70;
    }
    ctx->pc = 0x13BD68u;
    {
        const bool branch_taken_0x13bd68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD68u;
        // 0x13bd6c: 0xae1100c8  sw          $s1, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd68) {
            ctx->pc = 0x13BD88u;
            goto label_13bd88;
        }
    }
    ctx->pc = 0x13BD70u;
label_13bd70:
    // 0x13bd70: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x13bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_13bd74:
    // 0x13bd74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13bd74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13bd78:
    // 0x13bd78: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x13bd78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_13bd7c:
    // 0x13bd7c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x13bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_13bd80:
    // 0x13bd80: 0x60f809  jalr        $v1
label_13bd84:
    if (ctx->pc == 0x13BD84u) {
        ctx->pc = 0x13BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD80u;
        // 0x13bd84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BD88u;
        goto label_13bd88;
    }
    ctx->pc = 0x13BD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13BD88u);
        ctx->pc = 0x13BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD80u;
        // 0x13bd84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BD80u, 0x13BD88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13BD88u;
label_13bd88:
    // 0x13bd88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13bd88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13bd8c:
    // 0x13bd8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13bd8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13bd90:
    // 0x13bd90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13bd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13bd94:
    // 0x13bd94: 0x3e00008  jr          $ra
label_13bd98:
    if (ctx->pc == 0x13BD98u) {
        ctx->pc = 0x13BD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD94u;
        // 0x13bd98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13BD9Cu;
        goto label_13bd9c;
    }
    ctx->pc = 0x13BD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD94u;
        // 0x13bd98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BD9Cu;
label_13bd9c:
    // 0x13bd9c: 0x0  nop
    ctx->pc = 0x13bd9cu;
    // NOP
    ctx->pc = 0x13bda0u;
}

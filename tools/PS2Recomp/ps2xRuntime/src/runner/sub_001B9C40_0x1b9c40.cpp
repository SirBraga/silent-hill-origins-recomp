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

// Function: sub_001B9C40
// Address: 0x1b9c40 - 0x1b9ca8
void sub_001B9C40_0x1b9c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9C40_0x1b9c40");
#endif

    switch (ctx->pc) {
        case 0x1b9c40u: goto label_1b9c40;
        case 0x1b9c44u: goto label_1b9c44;
        case 0x1b9c48u: goto label_1b9c48;
        case 0x1b9c4cu: goto label_1b9c4c;
        case 0x1b9c50u: goto label_1b9c50;
        case 0x1b9c54u: goto label_1b9c54;
        case 0x1b9c58u: goto label_1b9c58;
        case 0x1b9c5cu: goto label_1b9c5c;
        case 0x1b9c60u: goto label_1b9c60;
        case 0x1b9c64u: goto label_1b9c64;
        case 0x1b9c68u: goto label_1b9c68;
        case 0x1b9c6cu: goto label_1b9c6c;
        case 0x1b9c70u: goto label_1b9c70;
        case 0x1b9c74u: goto label_1b9c74;
        case 0x1b9c78u: goto label_1b9c78;
        case 0x1b9c7cu: goto label_1b9c7c;
        case 0x1b9c80u: goto label_1b9c80;
        case 0x1b9c84u: goto label_1b9c84;
        case 0x1b9c88u: goto label_1b9c88;
        case 0x1b9c8cu: goto label_1b9c8c;
        case 0x1b9c90u: goto label_1b9c90;
        case 0x1b9c94u: goto label_1b9c94;
        case 0x1b9c98u: goto label_1b9c98;
        case 0x1b9c9cu: goto label_1b9c9c;
        case 0x1b9ca0u: goto label_1b9ca0;
        case 0x1b9ca4u: goto label_1b9ca4;
        default: break;
    }

    ctx->pc = 0x1b9c40u;

label_1b9c40:
    // 0x1b9c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b9c44:
    // 0x1b9c44: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1b9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1b9c48:
    // 0x1b9c48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b9c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b9c4c:
    // 0x1b9c4c: 0x2442d1b0  addiu       $v0, $v0, -0x2E50
    ctx->pc = 0x1b9c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955440));
label_1b9c50:
    // 0x1b9c50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b9c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b9c54:
    // 0x1b9c54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b9c58:
    // 0x1b9c58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b9c5c:
    // 0x1b9c5c: 0xae020258  sw          $v0, 0x258($s0)
    ctx->pc = 0x1b9c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
label_1b9c60:
    // 0x1b9c60: 0x8e060270  lw          $a2, 0x270($s0)
    ctx->pc = 0x1b9c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_1b9c64:
    // 0x1b9c64: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1b9c68:
    if (ctx->pc == 0x1B9C68u) {
        ctx->pc = 0x1B9C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C64u;
        // 0x1b9c68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9C6Cu;
        goto label_1b9c6c;
    }
    ctx->pc = 0x1B9C64u;
    {
        const bool branch_taken_0x1b9c64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C64u;
        // 0x1b9c68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c64) {
            ctx->pc = 0x1B9C88u;
            goto label_1b9c88;
        }
    }
    ctx->pc = 0x1B9C6Cu;
label_1b9c6c:
    // 0x1b9c6c: 0x8cc2003c  lw          $v0, 0x3C($a2)
    ctx->pc = 0x1b9c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
label_1b9c70:
    // 0x1b9c70: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b9c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b9c74:
    // 0x1b9c74: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1b9c74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1b9c78:
    // 0x1b9c78: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1b9c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1b9c7c:
    // 0x1b9c7c: 0x60f809  jalr        $v1
label_1b9c80:
    if (ctx->pc == 0x1B9C80u) {
        ctx->pc = 0x1B9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C7Cu;
        // 0x1b9c80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9C84u;
        goto label_1b9c84;
    }
    ctx->pc = 0x1B9C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B9C84u);
        ctx->pc = 0x1B9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C7Cu;
        // 0x1b9c80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9C7Cu, 0x1B9C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9C84u;
label_1b9c84:
    // 0x1b9c84: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x1b9c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
label_1b9c88:
    // 0x1b9c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b9c8c:
    // 0x1b9c8c: 0xc06bba8  jal         func_1AEEA0
label_1b9c90:
    if (ctx->pc == 0x1B9C90u) {
        ctx->pc = 0x1B9C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C8Cu;
        // 0x1b9c90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9C94u;
        goto label_1b9c94;
    }
    ctx->pc = 0x1B9C8Cu;
    SET_GPR_U32(ctx, 31, 0x1B9C94u);
    ctx->pc = 0x1B9C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9C8Cu;
    // 0x1b9c90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1B9C8Cu, 0x1B9C94u)) {
        return;
    }
    ctx->pc = 0x1B9C94u;
label_1b9c94:
    // 0x1b9c94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b9c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b9c98:
    // 0x1b9c98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b9c98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b9c9c:
    // 0x1b9c9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b9ca0:
    // 0x1b9ca0: 0x3e00008  jr          $ra
label_1b9ca4:
    if (ctx->pc == 0x1B9CA4u) {
        ctx->pc = 0x1B9CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CA0u;
        // 0x1b9ca4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9CA8u;
        goto label_fallthrough_0x1b9ca0;
    }
    ctx->pc = 0x1B9CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CA0u;
        // 0x1b9ca4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b9ca0:
    ctx->pc = 0x1B9CA8u;
}

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

// Function: sub_00283C08
// Address: 0x283c08 - 0x283c68
void sub_00283C08_0x283c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283C08_0x283c08");
#endif

    switch (ctx->pc) {
        case 0x283c08u: goto label_283c08;
        case 0x283c0cu: goto label_283c0c;
        case 0x283c10u: goto label_283c10;
        case 0x283c14u: goto label_283c14;
        case 0x283c18u: goto label_283c18;
        case 0x283c1cu: goto label_283c1c;
        case 0x283c20u: goto label_283c20;
        case 0x283c24u: goto label_283c24;
        case 0x283c28u: goto label_283c28;
        case 0x283c2cu: goto label_283c2c;
        case 0x283c30u: goto label_283c30;
        case 0x283c34u: goto label_283c34;
        case 0x283c38u: goto label_283c38;
        case 0x283c3cu: goto label_283c3c;
        case 0x283c40u: goto label_283c40;
        case 0x283c44u: goto label_283c44;
        case 0x283c48u: goto label_283c48;
        case 0x283c4cu: goto label_283c4c;
        case 0x283c50u: goto label_283c50;
        case 0x283c54u: goto label_283c54;
        case 0x283c58u: goto label_283c58;
        case 0x283c5cu: goto label_283c5c;
        case 0x283c60u: goto label_283c60;
        case 0x283c64u: goto label_283c64;
        default: break;
    }

    ctx->pc = 0x283c08u;

label_283c08:
    // 0x283c08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x283c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_283c0c:
    // 0x283c0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x283c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_283c10:
    // 0x283c10: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x283c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_283c14:
    // 0x283c14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x283c14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_283c18:
    // 0x283c18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x283c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_283c1c:
    // 0x283c1c: 0x2630002c  addiu       $s0, $s1, 0x2C
    ctx->pc = 0x283c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_283c20:
    // 0x283c20: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x283c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_283c24:
    // 0x283c24: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_283c28:
    if (ctx->pc == 0x283C28u) {
        ctx->pc = 0x283C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C24u;
        // 0x283c28: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283C2Cu;
        goto label_283c2c;
    }
    ctx->pc = 0x283C24u;
    {
        const bool branch_taken_0x283c24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C24u;
        // 0x283c28: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c24) {
            ctx->pc = 0x283C38u;
            goto label_283c38;
        }
    }
    ctx->pc = 0x283C2Cu;
label_283c2c:
    // 0x283c2c: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x283c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_283c30:
    // 0x283c30: 0x40f809  jalr        $v0
label_283c34:
    if (ctx->pc == 0x283C34u) {
        ctx->pc = 0x283C38u;
        goto label_283c38;
    }
    ctx->pc = 0x283C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x283C38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283C30u, 0x283C38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x283C38u;
label_283c38:
    // 0x283c38: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x283c38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_283c3c:
    // 0x283c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x283c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_283c40:
    // 0x283c40: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x283c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_283c44:
    // 0x283c44: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x283c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_283c48:
    // 0x283c48: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x283c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_283c4c:
    // 0x283c4c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x283c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_283c50:
    // 0x283c50: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x283c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_283c54:
    // 0x283c54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x283c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_283c58:
    // 0x283c58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x283c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_283c5c:
    // 0x283c5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_283c60:
    // 0x283c60: 0x3e00008  jr          $ra
label_283c64:
    if (ctx->pc == 0x283C64u) {
        ctx->pc = 0x283C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C60u;
        // 0x283c64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283C68u;
        goto label_fallthrough_0x283c60;
    }
    ctx->pc = 0x283C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C60u;
        // 0x283c64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x283c60:
    ctx->pc = 0x283C68u;
}

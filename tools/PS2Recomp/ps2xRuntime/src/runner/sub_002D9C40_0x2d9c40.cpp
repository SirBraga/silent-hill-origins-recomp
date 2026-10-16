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

// Function: sub_002D9C40
// Address: 0x2d9c40 - 0x2d9c98
void sub_002D9C40_0x2d9c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9C40_0x2d9c40");
#endif

    switch (ctx->pc) {
        case 0x2d9c40u: goto label_2d9c40;
        case 0x2d9c44u: goto label_2d9c44;
        case 0x2d9c48u: goto label_2d9c48;
        case 0x2d9c4cu: goto label_2d9c4c;
        case 0x2d9c50u: goto label_2d9c50;
        case 0x2d9c54u: goto label_2d9c54;
        case 0x2d9c58u: goto label_2d9c58;
        case 0x2d9c5cu: goto label_2d9c5c;
        case 0x2d9c60u: goto label_2d9c60;
        case 0x2d9c64u: goto label_2d9c64;
        case 0x2d9c68u: goto label_2d9c68;
        case 0x2d9c6cu: goto label_2d9c6c;
        case 0x2d9c70u: goto label_2d9c70;
        case 0x2d9c74u: goto label_2d9c74;
        case 0x2d9c78u: goto label_2d9c78;
        case 0x2d9c7cu: goto label_2d9c7c;
        case 0x2d9c80u: goto label_2d9c80;
        case 0x2d9c84u: goto label_2d9c84;
        case 0x2d9c88u: goto label_2d9c88;
        case 0x2d9c8cu: goto label_2d9c8c;
        case 0x2d9c90u: goto label_2d9c90;
        case 0x2d9c94u: goto label_2d9c94;
        default: break;
    }

    ctx->pc = 0x2d9c40u;

label_2d9c40:
    // 0x2d9c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d9c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d9c44:
    // 0x2d9c44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d9c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2d9c48:
    // 0x2d9c48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d9c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d9c4c:
    // 0x2d9c4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9c50:
    // 0x2d9c50: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2d9c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_2d9c54:
    // 0x2d9c54: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2d9c58:
    if (ctx->pc == 0x2D9C58u) {
        ctx->pc = 0x2D9C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C54u;
        // 0x2d9c58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9C5Cu;
        goto label_2d9c5c;
    }
    ctx->pc = 0x2D9C54u;
    {
        const bool branch_taken_0x2d9c54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C54u;
        // 0x2d9c58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9c54) {
            ctx->pc = 0x2D9C88u;
            goto label_2d9c88;
        }
    }
    ctx->pc = 0x2D9C5Cu;
label_2d9c5c:
    // 0x2d9c5c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d9c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d9c60:
    // 0x2d9c60: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2d9c60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2d9c64:
    // 0x2d9c64: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d9c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9c68:
    // 0x2d9c68: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d9c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d9c6c:
    // 0x2d9c6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2d9c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2d9c70:
    // 0x2d9c70: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d9c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2d9c74:
    // 0x2d9c74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d9c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d9c78:
    // 0x2d9c78: 0x40f809  jalr        $v0
label_2d9c7c:
    if (ctx->pc == 0x2D9C7Cu) {
        ctx->pc = 0x2D9C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C78u;
        // 0x2d9c7c: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9C80u;
        goto label_2d9c80;
    }
    ctx->pc = 0x2D9C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D9C80u);
        ctx->pc = 0x2D9C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C78u;
        // 0x2d9c7c: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9C78u, 0x2D9C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D9C80u;
label_2d9c80:
    // 0x2d9c80: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2d9c80u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_2d9c84:
    // 0x2d9c84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d9c84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d9c88:
    // 0x2d9c88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d9c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9c8c:
    // 0x2d9c8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d9c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9c90:
    // 0x2d9c90: 0x3e00008  jr          $ra
label_2d9c94:
    if (ctx->pc == 0x2D9C94u) {
        ctx->pc = 0x2D9C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C90u;
        // 0x2d9c94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9C98u;
        goto label_fallthrough_0x2d9c90;
    }
    ctx->pc = 0x2D9C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C90u;
        // 0x2d9c94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d9c90:
    ctx->pc = 0x2D9C98u;
}

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

// Function: sub_002D9BE8
// Address: 0x2d9be8 - 0x2d9c40
void sub_002D9BE8_0x2d9be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9BE8_0x2d9be8");
#endif

    switch (ctx->pc) {
        case 0x2d9be8u: goto label_2d9be8;
        case 0x2d9becu: goto label_2d9bec;
        case 0x2d9bf0u: goto label_2d9bf0;
        case 0x2d9bf4u: goto label_2d9bf4;
        case 0x2d9bf8u: goto label_2d9bf8;
        case 0x2d9bfcu: goto label_2d9bfc;
        case 0x2d9c00u: goto label_2d9c00;
        case 0x2d9c04u: goto label_2d9c04;
        case 0x2d9c08u: goto label_2d9c08;
        case 0x2d9c0cu: goto label_2d9c0c;
        case 0x2d9c10u: goto label_2d9c10;
        case 0x2d9c14u: goto label_2d9c14;
        case 0x2d9c18u: goto label_2d9c18;
        case 0x2d9c1cu: goto label_2d9c1c;
        case 0x2d9c20u: goto label_2d9c20;
        case 0x2d9c24u: goto label_2d9c24;
        case 0x2d9c28u: goto label_2d9c28;
        case 0x2d9c2cu: goto label_2d9c2c;
        case 0x2d9c30u: goto label_2d9c30;
        case 0x2d9c34u: goto label_2d9c34;
        case 0x2d9c38u: goto label_2d9c38;
        case 0x2d9c3cu: goto label_2d9c3c;
        default: break;
    }

    ctx->pc = 0x2d9be8u;

label_2d9be8:
    // 0x2d9be8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d9be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d9bec:
    // 0x2d9bec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d9becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2d9bf0:
    // 0x2d9bf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d9bf4:
    // 0x2d9bf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9bf8:
    // 0x2d9bf8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d9bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d9bfc:
    // 0x2d9bfc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2d9bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2d9c00:
    // 0x2d9c00: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2d9c00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2d9c04:
    // 0x2d9c04: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d9c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9c08:
    // 0x2d9c08: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2d9c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d9c0c:
    // 0x2d9c0c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d9c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2d9c10:
    // 0x2d9c10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d9c14:
    // 0x2d9c14: 0x40f809  jalr        $v0
label_2d9c18:
    if (ctx->pc == 0x2D9C18u) {
        ctx->pc = 0x2D9C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C14u;
        // 0x2d9c18: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9C1Cu;
        goto label_2d9c1c;
    }
    ctx->pc = 0x2D9C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D9C1Cu);
        ctx->pc = 0x2D9C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C14u;
        // 0x2d9c18: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9C14u, 0x2D9C1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D9C1Cu;
label_2d9c1c:
    // 0x2d9c1c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2d9c1cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_2d9c20:
    // 0x2d9c20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9c24:
    // 0x2d9c24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d9c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d9c28:
    // 0x2d9c28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d9c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9c2c:
    // 0x2d9c2c: 0x3e00008  jr          $ra
label_2d9c30:
    if (ctx->pc == 0x2D9C30u) {
        ctx->pc = 0x2D9C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C2Cu;
        // 0x2d9c30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9C34u;
        goto label_2d9c34;
    }
    ctx->pc = 0x2D9C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C2Cu;
        // 0x2d9c30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9C34u;
label_2d9c34:
    // 0x2d9c34: 0x0  nop
    ctx->pc = 0x2d9c34u;
    // NOP
label_2d9c38:
    // 0x2d9c38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d9c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2d9c3c:
    // 0x2d9c3c: 0x0  nop
    ctx->pc = 0x2d9c3cu;
    // NOP
    ctx->pc = 0x2d9c40u;
}

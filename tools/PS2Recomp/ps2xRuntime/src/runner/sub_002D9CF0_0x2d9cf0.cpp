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

// Function: sub_002D9CF0
// Address: 0x2d9cf0 - 0x2d9d48
void sub_002D9CF0_0x2d9cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9CF0_0x2d9cf0");
#endif

    switch (ctx->pc) {
        case 0x2d9cf0u: goto label_2d9cf0;
        case 0x2d9cf4u: goto label_2d9cf4;
        case 0x2d9cf8u: goto label_2d9cf8;
        case 0x2d9cfcu: goto label_2d9cfc;
        case 0x2d9d00u: goto label_2d9d00;
        case 0x2d9d04u: goto label_2d9d04;
        case 0x2d9d08u: goto label_2d9d08;
        case 0x2d9d0cu: goto label_2d9d0c;
        case 0x2d9d10u: goto label_2d9d10;
        case 0x2d9d14u: goto label_2d9d14;
        case 0x2d9d18u: goto label_2d9d18;
        case 0x2d9d1cu: goto label_2d9d1c;
        case 0x2d9d20u: goto label_2d9d20;
        case 0x2d9d24u: goto label_2d9d24;
        case 0x2d9d28u: goto label_2d9d28;
        case 0x2d9d2cu: goto label_2d9d2c;
        case 0x2d9d30u: goto label_2d9d30;
        case 0x2d9d34u: goto label_2d9d34;
        case 0x2d9d38u: goto label_2d9d38;
        case 0x2d9d3cu: goto label_2d9d3c;
        case 0x2d9d40u: goto label_2d9d40;
        case 0x2d9d44u: goto label_2d9d44;
        default: break;
    }

    ctx->pc = 0x2d9cf0u;

label_2d9cf0:
    // 0x2d9cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d9cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d9cf4:
    // 0x2d9cf4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2d9cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d9cf8:
    // 0x2d9cf8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d9cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2d9cfc:
    // 0x2d9cfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d9d00:
    // 0x2d9d00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9d04:
    // 0x2d9d04: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2d9d08:
    if (ctx->pc == 0x2D9D08u) {
        ctx->pc = 0x2D9D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D04u;
        // 0x2d9d08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9D0Cu;
        goto label_2d9d0c;
    }
    ctx->pc = 0x2D9D04u;
    {
        const bool branch_taken_0x2d9d04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D04u;
        // 0x2d9d08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9d04) {
            ctx->pc = 0x2D9D38u;
            goto label_2d9d38;
        }
    }
    ctx->pc = 0x2D9D0Cu;
label_2d9d0c:
    // 0x2d9d0c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d9d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d9d10:
    // 0x2d9d10: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2d9d10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2d9d14:
    // 0x2d9d14: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d9d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9d18:
    // 0x2d9d18: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2d9d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2d9d1c:
    // 0x2d9d1c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d9d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2d9d20:
    // 0x2d9d20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d9d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d9d24:
    // 0x2d9d24: 0x40f809  jalr        $v0
label_2d9d28:
    if (ctx->pc == 0x2D9D28u) {
        ctx->pc = 0x2D9D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D24u;
        // 0x2d9d28: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9D2Cu;
        goto label_2d9d2c;
    }
    ctx->pc = 0x2D9D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D9D2Cu);
        ctx->pc = 0x2D9D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D24u;
        // 0x2d9d28: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9D24u, 0x2D9D2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D9D2Cu;
label_2d9d2c:
    // 0x2d9d2c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2d9d2cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_2d9d30:
    // 0x2d9d30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d9d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d9d34:
    // 0x2d9d34: 0x0  nop
    ctx->pc = 0x2d9d34u;
    // NOP
label_2d9d38:
    // 0x2d9d38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d9d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9d3c:
    // 0x2d9d3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9d40:
    // 0x2d9d40: 0x3e00008  jr          $ra
label_2d9d44:
    if (ctx->pc == 0x2D9D44u) {
        ctx->pc = 0x2D9D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D40u;
        // 0x2d9d44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9D48u;
        goto label_fallthrough_0x2d9d40;
    }
    ctx->pc = 0x2D9D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D40u;
        // 0x2d9d44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d9d40:
    ctx->pc = 0x2D9D48u;
}

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

// Function: sub_00256C20
// Address: 0x256c20 - 0x256c90
void sub_00256C20_0x256c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256C20_0x256c20");
#endif

    switch (ctx->pc) {
        case 0x256c58u: goto label_256c58;
        case 0x256c6cu: goto label_256c6c;
        default: break;
    }

    ctx->pc = 0x256c20u;

    // 0x256c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x256c24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x256c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x256c28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x256c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x256c2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x256c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256c30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x256c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256c34: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x256c34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x256c38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x256c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x256c3c: 0x1c40000d  bgtz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x256C3Cu;
    {
        const bool branch_taken_0x256c3c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x256C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C3Cu;
        // 0x256c40: 0x9603000e  lhu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c3c) {
            ctx->pc = 0x256C74u;
            goto label_256c74;
        }
    }
    ctx->pc = 0x256C44u;
    // 0x256c44: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x256c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x256c48: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x256C48u;
    {
        const bool branch_taken_0x256c48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x256c48) {
            ctx->pc = 0x256C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256C48u;
            // 0x256c4c: 0x9602000e  lhu         $v0, 0xE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256C5Cu;
            goto label_256c5c;
        }
    }
    ctx->pc = 0x256C50u;
    // 0x256c50: 0xc093356  jal         func_24CD58
    ctx->pc = 0x256C50u;
    SET_GPR_U32(ctx, 31, 0x256C58u);
    ctx->pc = 0x24CD58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CD58u, 0x256C50u, 0x256C58u)) {
        return;
    }
    ctx->pc = 0x256C58u;
label_256c58:
    // 0x256c58: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x256c58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_256c5c:
    // 0x256c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256c60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x256c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x256c64: 0xc0957fe  jal         func_255FF8
    ctx->pc = 0x256C64u;
    SET_GPR_U32(ctx, 31, 0x256C6Cu);
    ctx->pc = 0x256C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256C64u;
    // 0x256c68: 0xa602000e  sh          $v0, 0xE($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FF8u, 0x256C64u, 0x256C6Cu)) {
        return;
    }
    ctx->pc = 0x256C6Cu;
label_256c6c:
    // 0x256c6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x256C6Cu;
    {
        const bool branch_taken_0x256c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C6Cu;
        // 0x256c70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c6c) {
            ctx->pc = 0x256C7Cu;
            goto label_256c7c;
        }
    }
    ctx->pc = 0x256C74u;
label_256c74:
    // 0x256c74: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x256c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x256c78: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x256c78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
label_256c7c:
    // 0x256c7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x256c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256c80: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x256c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x256c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256c88: 0x3e00008  jr          $ra
    ctx->pc = 0x256C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C88u;
        // 0x256c8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256C90u;
}

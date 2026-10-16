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

// Function: sub_00327E58
// Address: 0x327e58 - 0x327ed8
void sub_00327E58_0x327e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327E58_0x327e58");
#endif

    switch (ctx->pc) {
        case 0x327e70u: goto label_327e70;
        case 0x327e7cu: goto label_327e7c;
        case 0x327e8cu: goto label_327e8c;
        default: break;
    }

    ctx->pc = 0x327e58u;

    // 0x327e58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x327e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x327e5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327e60: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x327e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x327e64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x327e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x327e68: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x327E68u;
    SET_GPR_U32(ctx, 31, 0x327E70u);
    ctx->pc = 0x327E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E68u;
    // 0x327e6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x327E68u, 0x327E70u)) {
        return;
    }
    ctx->pc = 0x327E70u;
label_327e70:
    // 0x327e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x327e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327e74: 0xc0c9f6a  jal         func_327DA8
    ctx->pc = 0x327E74u;
    SET_GPR_U32(ctx, 31, 0x327E7Cu);
    ctx->pc = 0x327E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E74u;
    // 0x327e78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327DA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327DA8u, 0x327E74u, 0x327E7Cu)) {
        return;
    }
    ctx->pc = 0x327E7Cu;
label_327e7c:
    // 0x327e7c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x327E7Cu;
    {
        const bool branch_taken_0x327e7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x327E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E7Cu;
        // 0x327e80: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e7c) {
            ctx->pc = 0x327E8Cu;
            goto label_327e8c;
        }
    }
    ctx->pc = 0x327E84u;
    // 0x327e84: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x327E84u;
    SET_GPR_U32(ctx, 31, 0x327E8Cu);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x327E84u, 0x327E8Cu)) {
        return;
    }
    ctx->pc = 0x327E8Cu;
label_327e8c:
    // 0x327e8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x327e8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327e90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x327e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327e94: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x327e94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327e98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327e98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x327E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E9Cu;
        // 0x327ea0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327EA4u;
    // 0x327ea4: 0x0  nop
    ctx->pc = 0x327ea4u;
    // NOP
    // 0x327ea8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x327ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x327eac: 0x0  nop
    ctx->pc = 0x327eacu;
    // NOP
    // 0x327eb0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x327eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x327eb4: 0x0  nop
    ctx->pc = 0x327eb4u;
    // NOP
    // 0x327eb8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x327eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x327ebc: 0x0  nop
    ctx->pc = 0x327ebcu;
    // NOP
    // 0x327ec0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x327ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x327ec4: 0x0  nop
    ctx->pc = 0x327ec4u;
    // NOP
    // 0x327ec8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x327ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x327ecc: 0x0  nop
    ctx->pc = 0x327eccu;
    // NOP
    // 0x327ed0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x327ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x327ed4: 0x0  nop
    ctx->pc = 0x327ed4u;
    // NOP
    ctx->pc = 0x327ed8u;
}

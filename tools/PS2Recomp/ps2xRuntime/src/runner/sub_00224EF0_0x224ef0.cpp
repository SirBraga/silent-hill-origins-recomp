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

// Function: sub_00224EF0
// Address: 0x224ef0 - 0x224f30
void sub_00224EF0_0x224ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224EF0_0x224ef0");
#endif

    switch (ctx->pc) {
        case 0x224f08u: goto label_224f08;
        case 0x224f1cu: goto label_224f1c;
        default: break;
    }

    ctx->pc = 0x224ef0u;

    // 0x224ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224ef4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x224ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x224ef8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224efc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224f00: 0xc088e4e  jal         func_223938
    ctx->pc = 0x224F00u;
    SET_GPR_U32(ctx, 31, 0x224F08u);
    ctx->pc = 0x224F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F00u;
    // 0x224f04: 0xe60c0080  swc1        $f12, 0x80($s0) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x223938u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x223938u, 0x224F00u, 0x224F08u)) {
        return;
    }
    ctx->pc = 0x224F08u;
label_224f08:
    // 0x224f08: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x224f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x224f0c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x224F0Cu;
    {
        const bool branch_taken_0x224f0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x224F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F0Cu;
        // 0x224f10: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f0c) {
            ctx->pc = 0x224F20u;
            goto label_224f20;
        }
    }
    ctx->pc = 0x224F14u;
    // 0x224f14: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x224F14u;
    SET_GPR_U32(ctx, 31, 0x224F1Cu);
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x224F14u, 0x224F1Cu)) {
        return;
    }
    ctx->pc = 0x224F1Cu;
label_224f1c:
    // 0x224f1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x224f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224f20:
    // 0x224f20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224f24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x224f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224f28: 0x3e00008  jr          $ra
    ctx->pc = 0x224F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F28u;
        // 0x224f2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224F30u;
}

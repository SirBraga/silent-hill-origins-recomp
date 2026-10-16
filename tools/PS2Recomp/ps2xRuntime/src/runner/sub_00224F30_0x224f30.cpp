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

// Function: sub_00224F30
// Address: 0x224f30 - 0x224f70
void sub_00224F30_0x224f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224F30_0x224f30");
#endif

    switch (ctx->pc) {
        case 0x224f48u: goto label_224f48;
        case 0x224f5cu: goto label_224f5c;
        default: break;
    }

    ctx->pc = 0x224f30u;

    // 0x224f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224f34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x224f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x224f38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224f40: 0xc088e4e  jal         func_223938
    ctx->pc = 0x224F40u;
    SET_GPR_U32(ctx, 31, 0x224F48u);
    ctx->pc = 0x224F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224F40u;
    // 0x224f44: 0xe60c0084  swc1        $f12, 0x84($s0) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x223938u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x223938u, 0x224F40u, 0x224F48u)) {
        return;
    }
    ctx->pc = 0x224F48u;
label_224f48:
    // 0x224f48: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x224f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x224f4c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x224F4Cu;
    {
        const bool branch_taken_0x224f4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x224F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F4Cu;
        // 0x224f50: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f4c) {
            ctx->pc = 0x224F60u;
            goto label_224f60;
        }
    }
    ctx->pc = 0x224F54u;
    // 0x224f54: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x224F54u;
    SET_GPR_U32(ctx, 31, 0x224F5Cu);
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x224F54u, 0x224F5Cu)) {
        return;
    }
    ctx->pc = 0x224F5Cu;
label_224f5c:
    // 0x224f5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x224f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224f60:
    // 0x224f60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224f64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x224f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224f68: 0x3e00008  jr          $ra
    ctx->pc = 0x224F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F68u;
        // 0x224f6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224F70u;
}

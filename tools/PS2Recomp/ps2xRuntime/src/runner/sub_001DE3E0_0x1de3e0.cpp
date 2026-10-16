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

// Function: sub_001DE3E0
// Address: 0x1de3e0 - 0x1de450
void sub_001DE3E0_0x1de3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE3E0_0x1de3e0");
#endif

    switch (ctx->pc) {
        case 0x1de408u: goto label_1de408;
        case 0x1de410u: goto label_1de410;
        case 0x1de41cu: goto label_1de41c;
        case 0x1de424u: goto label_1de424;
        default: break;
    }

    ctx->pc = 0x1de3e0u;

    // 0x1de3e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1de3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1de3e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1de3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1de3e8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1de3e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1de3ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1de3ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de3f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1de3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1de3f4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1de3f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1de3f8: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1DE3F8u;
    {
        const bool branch_taken_0x1de3f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3F8u;
        // 0x1de3fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3f8) {
            ctx->pc = 0x1DE42Cu;
            goto label_1de42c;
        }
    }
    ctx->pc = 0x1DE400u;
    // 0x1de400: 0xc092974  jal         func_24A5D0
    ctx->pc = 0x1DE400u;
    SET_GPR_U32(ctx, 31, 0x1DE408u);
    ctx->pc = 0x24A5D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5D0u, 0x1DE400u, 0x1DE408u)) {
        return;
    }
    ctx->pc = 0x1DE408u;
label_1de408:
    // 0x1de408: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE408u;
    {
        const bool branch_taken_0x1de408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE408u;
        // 0x1de40c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de408) {
            ctx->pc = 0x1DE41Cu;
            goto label_1de41c;
        }
    }
    ctx->pc = 0x1DE410u;
label_1de410:
    // 0x1de410: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1de410u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1de414: 0xc0bbdc8  jal         func_2EF720
    ctx->pc = 0x1DE414u;
    SET_GPR_U32(ctx, 31, 0x1DE41Cu);
    ctx->pc = 0x1DE418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE414u;
    // 0x1de418: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF720u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF720u, 0x1DE414u, 0x1DE41Cu)) {
        return;
    }
    ctx->pc = 0x1DE41Cu;
label_1de41c:
    // 0x1de41c: 0xc092976  jal         func_24A5D8
    ctx->pc = 0x1DE41Cu;
    SET_GPR_U32(ctx, 31, 0x1DE424u);
    ctx->pc = 0x1DE420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE41Cu;
    // 0x1de420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5D8u, 0x1DE41Cu, 0x1DE424u)) {
        return;
    }
    ctx->pc = 0x1DE424u;
label_1de424:
    // 0x1de424: 0x5602fffa  bnel        $s0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DE424u;
    {
        const bool branch_taken_0x1de424 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1de424) {
            ctx->pc = 0x1DE428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE424u;
            // 0x1de428: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de410;
        }
    }
    ctx->pc = 0x1DE42Cu;
label_1de42c:
    // 0x1de42c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1de42cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1de430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de438: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1de438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1de43c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE43Cu;
        // 0x1de440: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE444u;
    // 0x1de444: 0x0  nop
    ctx->pc = 0x1de444u;
    // NOP
    // 0x1de448: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1de448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1de44c: 0x0  nop
    ctx->pc = 0x1de44cu;
    // NOP
    ctx->pc = 0x1de450u;
}

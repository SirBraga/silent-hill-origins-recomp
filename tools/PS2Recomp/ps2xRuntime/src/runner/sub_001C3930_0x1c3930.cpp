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

// Function: sub_001C3930
// Address: 0x1c3930 - 0x1c3998
void sub_001C3930_0x1c3930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3930_0x1c3930");
#endif

    ctx->pc = 0x1c3930u;

    // 0x1c3930: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c3930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c3934: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c3934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3938: 0xa23818  mult        $a3, $a1, $v0
    ctx->pc = 0x1c3938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1c393c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c393cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3940: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x1c3940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1c3944: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c3944u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3948: 0xac440828  sw          $a0, 0x828($v0)
    ctx->pc = 0x1c3948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2088), GPR_U32(ctx, 4));
    // 0x1c394c: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C394Cu;
    {
        const bool branch_taken_0x1c394c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C394Cu;
        // 0x1c3950: 0xac60082c  sw          $zero, 0x82C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c394c) {
            ctx->pc = 0x1C3974u;
            goto label_1c3974;
        }
    }
    ctx->pc = 0x1C3954u;
    // 0x1c3954: 0xc4c00834  lwc1        $f0, 0x834($a2)
    ctx->pc = 0x1c3954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 2100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3958: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1c3958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1c395c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c395cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3960: 0x0  nop
    ctx->pc = 0x1c3960u;
    // NOP
    // 0x1c3964: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c3964u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c3968: 0xe4c00838  swc1        $f0, 0x838($a2)
    ctx->pc = 0x1c3968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 2104), bits); }
    // 0x1c396c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C396Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C396Cu;
        // 0x1c3970: 0xe4c00830  swc1        $f0, 0x830($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 2096), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C396Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3974u;
label_1c3974:
    // 0x1c3974: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1c3974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1c3978: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c3978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c397c: 0xc4400834  lwc1        $f0, 0x834($v0)
    ctx->pc = 0x1c397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3980: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c3980u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3984: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c3984u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c3988: 0xe4600830  swc1        $f0, 0x830($v1)
    ctx->pc = 0x1c3988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2096), bits); }
    // 0x1c398c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C398Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C398Cu;
        // 0x1c3990: 0xe4400838  swc1        $f0, 0x838($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C398Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3994u;
    // 0x1c3994: 0x0  nop
    ctx->pc = 0x1c3994u;
    // NOP
    ctx->pc = 0x1c3998u;
}

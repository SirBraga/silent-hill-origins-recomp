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

// Function: sub_00308DD8
// Address: 0x308dd8 - 0x308e78
void sub_00308DD8_0x308dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308DD8_0x308dd8");
#endif

    ctx->pc = 0x308dd8u;

    // 0x308dd8: 0x44056000  mfc1        $a1, $f12
    ctx->pc = 0x308dd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x308ddc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x308ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308de0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x308de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308de4: 0x415c3  sra         $v0, $a0, 23
    ctx->pc = 0x308de4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 23));
    // 0x308de8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x308de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x308dec: 0x2446ff81  addiu       $a2, $v0, -0x7F
    ctx->pc = 0x308decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x308df0: 0x28c30017  slti        $v1, $a2, 0x17
    ctx->pc = 0x308df0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x308df4: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x308DF4u;
    {
        const bool branch_taken_0x308df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x308df4) {
            ctx->pc = 0x308DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308DF4u;
            // 0x308df8: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308E60u;
            goto label_308e60;
        }
    }
    ctx->pc = 0x308DFCu;
    // 0x308dfc: 0x4c10006  bgez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x308DFCu;
    {
        const bool branch_taken_0x308dfc = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x308E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308DFCu;
        // 0x308e00: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308dfc) {
            ctx->pc = 0x308E18u;
            goto label_308e18;
        }
    }
    ctx->pc = 0x308E04u;
    // 0x308e04: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x308e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x308e08: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x308e08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x308e0c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x308e0cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308e10: 0x3e00008  jr          $ra
    ctx->pc = 0x308E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E10u;
        // 0x308e14: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308E18u;
label_308e18:
    // 0x308e18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x308e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x308e1c: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x308e1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x308e20: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x308e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x308e24: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x308E24u;
    {
        const bool branch_taken_0x308e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x308E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E24u;
        // 0x308e28: 0x21027  nor         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308e24) {
            ctx->pc = 0x308E48u;
            goto label_308e48;
        }
    }
    ctx->pc = 0x308E2Cu;
    // 0x308e2c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x308e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x308e30: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x308e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x308e34: 0x822824  and         $a1, $a0, $v0
    ctx->pc = 0x308e34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x308e38: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x308e38u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x308E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308E44u;
    // 0x308e44: 0x0  nop
    ctx->pc = 0x308e44u;
    // NOP
label_308e48:
    // 0x308e48: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x308e48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x308e4c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x308e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x308e50: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x308e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308e54: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x308e54u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x308e58: 0x3e00008  jr          $ra
    ctx->pc = 0x308E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E58u;
        // 0x308e5c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308E60u;
label_308e60:
    // 0x308e60: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x308e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x308e64: 0x822824  and         $a1, $a0, $v0
    ctx->pc = 0x308e64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x308e68: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x308e68u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x308E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308E74u;
    // 0x308e74: 0x0  nop
    ctx->pc = 0x308e74u;
    // NOP
    ctx->pc = 0x308e78u;
}

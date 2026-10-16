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

// Function: sub_002A9038
// Address: 0x2a9038 - 0x2a9078
void sub_002A9038_0x2a9038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9038_0x2a9038");
#endif

    switch (ctx->pc) {
        case 0x2a905cu: goto label_2a905c;
        default: break;
    }

    ctx->pc = 0x2a9038u;

    // 0x2a9038: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a9038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a903c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2a903cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2a9040: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a9040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a9044: 0x24a5e468  addiu       $a1, $a1, -0x1B98
    ctx->pc = 0x2a9044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960232));
    // 0x2a9048: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a9048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a904c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2a904cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a9050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a9054: 0xc0aa872  jal         func_2AA1C8
    ctx->pc = 0x2A9054u;
    SET_GPR_U32(ctx, 31, 0x2A905Cu);
    ctx->pc = 0x2A9058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9054u;
    // 0x2a9058: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA1C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA1C8u, 0x2A9054u, 0x2A905Cu)) {
        return;
    }
    ctx->pc = 0x2A905Cu;
label_2a905c:
    // 0x2a905c: 0xe614004c  swc1        $f20, 0x4C($s0)
    ctx->pc = 0x2a905cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2a9060: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a9060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9064: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a9064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a906c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2a906cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a9070: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9070u;
        // 0x2a9074: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9078u;
}

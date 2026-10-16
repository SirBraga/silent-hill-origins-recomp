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

// Function: sub_0017F510
// Address: 0x17f510 - 0x17f570
void sub_0017F510_0x17f510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F510_0x17f510");
#endif

    switch (ctx->pc) {
        case 0x17f538u: goto label_17f538;
        case 0x17f544u: goto label_17f544;
        case 0x17f550u: goto label_17f550;
        case 0x17f55cu: goto label_17f55c;
        default: break;
    }

    ctx->pc = 0x17f510u;

    // 0x17f510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17f510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17f514: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17f514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17f518: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x17f518u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x17f51c: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x17f51cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x17f520: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17f520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17f524: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17f524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17f528: 0x8e0482f0  lw          $a0, -0x7D10($s0)
    ctx->pc = 0x17f528u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3382F0u));
    // 0x17f52c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f530: 0xc043a48  jal         func_10E920
    ctx->pc = 0x17F530u;
    SET_GPR_U32(ctx, 31, 0x17F538u);
    ctx->pc = 0x17F534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F530u;
    // 0x17f534: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E920u, 0x17F530u, 0x17F538u)) {
        return;
    }
    ctx->pc = 0x17F538u;
label_17f538:
    // 0x17f538: 0x8e0482f0  lw          $a0, -0x7D10($s0)
    ctx->pc = 0x17f538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935280)));
    // 0x17f53c: 0xc043a80  jal         func_10EA00
    ctx->pc = 0x17F53Cu;
    SET_GPR_U32(ctx, 31, 0x17F544u);
    ctx->pc = 0x17F540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F53Cu;
    // 0x17f540: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EA00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10EA00u, 0x17F53Cu, 0x17F544u)) {
        return;
    }
    ctx->pc = 0x17F544u;
label_17f544:
    // 0x17f544: 0x8e0482f0  lw          $a0, -0x7D10($s0)
    ctx->pc = 0x17f544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935280)));
    // 0x17f548: 0xc043ab8  jal         func_10EAE0
    ctx->pc = 0x17F548u;
    SET_GPR_U32(ctx, 31, 0x17F550u);
    ctx->pc = 0x17F54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F548u;
    // 0x17f54c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EAE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10EAE0u, 0x17F548u, 0x17F550u)) {
        return;
    }
    ctx->pc = 0x17F550u;
label_17f550:
    // 0x17f550: 0x8e0482f0  lw          $a0, -0x7D10($s0)
    ctx->pc = 0x17f550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935280)));
    // 0x17f554: 0xc043af2  jal         func_10EBC8
    ctx->pc = 0x17F554u;
    SET_GPR_U32(ctx, 31, 0x17F55Cu);
    ctx->pc = 0x17F558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F554u;
    // 0x17f558: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10EBC8u, 0x17F554u, 0x17F55Cu)) {
        return;
    }
    ctx->pc = 0x17F55Cu;
label_17f55c:
    // 0x17f55c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17f55cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f564: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x17f564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17f568: 0x3e00008  jr          $ra
    ctx->pc = 0x17F568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F568u;
        // 0x17f56c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F570u;
}

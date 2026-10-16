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

// Function: sub_00126FB8
// Address: 0x126fb8 - 0x127010
void sub_00126FB8_0x126fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126FB8_0x126fb8");
#endif

    switch (ctx->pc) {
        case 0x126fdcu: goto label_126fdc;
        case 0x126fecu: goto label_126fec;
        case 0x126ff8u: goto label_126ff8;
        default: break;
    }

    ctx->pc = 0x126fb8u;

    // 0x126fb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x126fbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x126fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x126fc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126fc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x126fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fc8: 0x8e0202a4  lw          $v0, 0x2A4($s0)
    ctx->pc = 0x126fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x126fcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x126FCCu;
    {
        const bool branch_taken_0x126fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126fcc) {
            ctx->pc = 0x126FE4u;
            goto label_126fe4;
        }
    }
    ctx->pc = 0x126FD4u;
    // 0x126fd4: 0xc040950  jal         func_102540
    ctx->pc = 0x126FD4u;
    SET_GPR_U32(ctx, 31, 0x126FDCu);
    ctx->pc = 0x102540u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102540u, 0x126FD4u, 0x126FDCu)) {
        return;
    }
    ctx->pc = 0x126FDCu;
label_126fdc:
    // 0x126fdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x126FDCu;
    {
        const bool branch_taken_0x126fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126FDCu;
        // 0x126fe0: 0x26040320  addiu       $a0, $s0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126fdc) {
            ctx->pc = 0x126FF0u;
            goto label_126ff0;
        }
    }
    ctx->pc = 0x126FE4u;
label_126fe4:
    // 0x126fe4: 0xc04094c  jal         func_102530
    ctx->pc = 0x126FE4u;
    SET_GPR_U32(ctx, 31, 0x126FECu);
    ctx->pc = 0x126FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126FE4u;
    // 0x126fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102530u, 0x126FE4u, 0x126FECu)) {
        return;
    }
    ctx->pc = 0x126FECu;
label_126fec:
    // 0x126fec: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x126fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
label_126ff0:
    // 0x126ff0: 0xc0682ae  jal         func_1A0AB8
    ctx->pc = 0x126FF0u;
    SET_GPR_U32(ctx, 31, 0x126FF8u);
    ctx->pc = 0x126FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126FF0u;
    // 0x126ff4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0AB8u, 0x126FF0u, 0x126FF8u)) {
        return;
    }
    ctx->pc = 0x126FF8u;
label_126ff8:
    // 0x126ff8: 0xc6010f5c  lwc1        $f1, 0xF5C($s0)
    ctx->pc = 0x126ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126ffc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x126ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127000: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x127000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x127004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x127004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127008: 0x3e00008  jr          $ra
    ctx->pc = 0x127008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127008u;
        // 0x12700c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127010u;
}

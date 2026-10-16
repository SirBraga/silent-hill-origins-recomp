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

// Function: sub_00204780
// Address: 0x204780 - 0x2047d0
void sub_00204780_0x204780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204780_0x204780");
#endif

    switch (ctx->pc) {
        case 0x204780u: goto label_204780;
        case 0x204784u: goto label_204784;
        case 0x204788u: goto label_204788;
        case 0x20478cu: goto label_20478c;
        case 0x204790u: goto label_204790;
        case 0x204794u: goto label_204794;
        case 0x204798u: goto label_204798;
        case 0x20479cu: goto label_20479c;
        case 0x2047a0u: goto label_2047a0;
        case 0x2047a4u: goto label_2047a4;
        case 0x2047a8u: goto label_2047a8;
        case 0x2047acu: goto label_2047ac;
        case 0x2047b0u: goto label_2047b0;
        case 0x2047b4u: goto label_2047b4;
        case 0x2047b8u: goto label_2047b8;
        case 0x2047bcu: goto label_2047bc;
        case 0x2047c0u: goto label_2047c0;
        case 0x2047c4u: goto label_2047c4;
        case 0x2047c8u: goto label_2047c8;
        case 0x2047ccu: goto label_2047cc;
        default: break;
    }

    ctx->pc = 0x204780u;

label_204780:
    // 0x204780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x204780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_204784:
    // 0x204784: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x204784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_204788:
    // 0x204788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20478c:
    // 0x20478c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20478cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_204790:
    // 0x204790: 0xc0808b8  jal         func_2022E0
label_204794:
    if (ctx->pc == 0x204794u) {
        ctx->pc = 0x204794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204790u;
        // 0x204794: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204798u;
        goto label_204798;
    }
    ctx->pc = 0x204790u;
    SET_GPR_U32(ctx, 31, 0x204798u);
    ctx->pc = 0x204794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204790u;
    // 0x204794: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x204790u, 0x204798u)) {
        return;
    }
    ctx->pc = 0x204798u;
label_204798:
    // 0x204798: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x204798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20479c:
    // 0x20479c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_2047a0:
    if (ctx->pc == 0x2047A0u) {
        ctx->pc = 0x2047A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20479Cu;
        // 0x2047a0: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2047A4u;
        goto label_2047a4;
    }
    ctx->pc = 0x20479Cu;
    {
        const bool branch_taken_0x20479c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2047A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20479Cu;
        // 0x2047a0: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20479c) {
            ctx->pc = 0x2047BCu;
            goto label_2047bc;
        }
    }
    ctx->pc = 0x2047A4u;
label_2047a4:
    // 0x2047a4: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x2047a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_2047a8:
    // 0x2047a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2047a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2047ac:
    // 0x2047ac: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x2047acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_2047b0:
    // 0x2047b0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2047b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2047b4:
    // 0x2047b4: 0x60f809  jalr        $v1
label_2047b8:
    if (ctx->pc == 0x2047B8u) {
        ctx->pc = 0x2047B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047B4u;
        // 0x2047b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2047BCu;
        goto label_2047bc;
    }
    ctx->pc = 0x2047B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2047BCu);
        ctx->pc = 0x2047B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047B4u;
        // 0x2047b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2047B4u, 0x2047BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2047BCu;
label_2047bc:
    // 0x2047bc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2047bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2047c0:
    // 0x2047c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2047c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2047c4:
    // 0x2047c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2047c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2047c8:
    // 0x2047c8: 0x3e00008  jr          $ra
label_2047cc:
    if (ctx->pc == 0x2047CCu) {
        ctx->pc = 0x2047CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047C8u;
        // 0x2047cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2047D0u;
        goto label_fallthrough_0x2047c8;
    }
    ctx->pc = 0x2047C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2047CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047C8u;
        // 0x2047cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2047C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2047c8:
    ctx->pc = 0x2047D0u;
}

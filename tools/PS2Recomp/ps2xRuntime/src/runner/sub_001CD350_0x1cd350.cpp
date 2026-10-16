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

// Function: sub_001CD350
// Address: 0x1cd350 - 0x1cd408
void sub_001CD350_0x1cd350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD350_0x1cd350");
#endif

    switch (ctx->pc) {
        case 0x1cd384u: goto label_1cd384;
        case 0x1cd39cu: goto label_1cd39c;
        case 0x1cd3b4u: goto label_1cd3b4;
        case 0x1cd3ccu: goto label_1cd3cc;
        case 0x1cd3e4u: goto label_1cd3e4;
        case 0x1cd3f4u: goto label_1cd3f4;
        default: break;
    }

    ctx->pc = 0x1cd350u;

    // 0x1cd350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cd350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cd354: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1cd354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1cd358: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cd358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cd35c: 0x2442ff38  addiu       $v0, $v0, -0xC8
    ctx->pc = 0x1cd35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967096));
    // 0x1cd360: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cd360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cd364: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cd364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd36c: 0xae020258  sw          $v0, 0x258($s0)
    ctx->pc = 0x1cd36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
    // 0x1cd370: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1cd370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1cd374: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD374u;
    {
        const bool branch_taken_0x1cd374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD374u;
        // 0x1cd378: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd374) {
            ctx->pc = 0x1CD388u;
            goto label_1cd388;
        }
    }
    ctx->pc = 0x1CD37Cu;
    // 0x1cd37c: 0xc06db5a  jal         func_1B6D68
    ctx->pc = 0x1CD37Cu;
    SET_GPR_U32(ctx, 31, 0x1CD384u);
    ctx->pc = 0x1CD380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD37Cu;
    // 0x1cd380: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D68u, 0x1CD37Cu, 0x1CD384u)) {
        return;
    }
    ctx->pc = 0x1CD384u;
label_1cd384:
    // 0x1cd384: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1cd384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
label_1cd388:
    // 0x1cd388: 0x8e040268  lw          $a0, 0x268($s0)
    ctx->pc = 0x1cd388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x1cd38c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD38Cu;
    {
        const bool branch_taken_0x1cd38c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd38c) {
            ctx->pc = 0x1CD390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD38Cu;
            // 0x1cd390: 0x8e04026c  lw          $a0, 0x26C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD3A4u;
            goto label_1cd3a4;
        }
    }
    ctx->pc = 0x1CD394u;
    // 0x1cd394: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1CD394u;
    SET_GPR_U32(ctx, 31, 0x1CD39Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1CD394u, 0x1CD39Cu)) {
        return;
    }
    ctx->pc = 0x1CD39Cu;
label_1cd39c:
    // 0x1cd39c: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1cd39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1cd3a0: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x1cd3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_1cd3a4:
    // 0x1cd3a4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD3A4u;
    {
        const bool branch_taken_0x1cd3a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd3a4) {
            ctx->pc = 0x1CD3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD3A4u;
            // 0x1cd3a8: 0x8e040270  lw          $a0, 0x270($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD3BCu;
            goto label_1cd3bc;
        }
    }
    ctx->pc = 0x1CD3ACu;
    // 0x1cd3ac: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1CD3ACu;
    SET_GPR_U32(ctx, 31, 0x1CD3B4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1CD3ACu, 0x1CD3B4u)) {
        return;
    }
    ctx->pc = 0x1CD3B4u;
label_1cd3b4:
    // 0x1cd3b4: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1cd3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x1cd3b8: 0x8e040270  lw          $a0, 0x270($s0)
    ctx->pc = 0x1cd3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_1cd3bc:
    // 0x1cd3bc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD3BCu;
    {
        const bool branch_taken_0x1cd3bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd3bc) {
            ctx->pc = 0x1CD3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD3BCu;
            // 0x1cd3c0: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD3D4u;
            goto label_1cd3d4;
        }
    }
    ctx->pc = 0x1CD3C4u;
    // 0x1cd3c4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1CD3C4u;
    SET_GPR_U32(ctx, 31, 0x1CD3CCu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1CD3C4u, 0x1CD3CCu)) {
        return;
    }
    ctx->pc = 0x1CD3CCu;
label_1cd3cc:
    // 0x1cd3cc: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x1cd3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x1cd3d0: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x1cd3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_1cd3d4:
    // 0x1cd3d4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD3D4u;
    {
        const bool branch_taken_0x1cd3d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd3d4) {
            ctx->pc = 0x1CD3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD3D4u;
            // 0x1cd3d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD3ECu;
            goto label_1cd3ec;
        }
    }
    ctx->pc = 0x1CD3DCu;
    // 0x1cd3dc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1CD3DCu;
    SET_GPR_U32(ctx, 31, 0x1CD3E4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1CD3DCu, 0x1CD3E4u)) {
        return;
    }
    ctx->pc = 0x1CD3E4u;
label_1cd3e4:
    // 0x1cd3e4: 0xae000274  sw          $zero, 0x274($s0)
    ctx->pc = 0x1cd3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
    // 0x1cd3e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd3ec:
    // 0x1cd3ec: 0xc06bba8  jal         func_1AEEA0
    ctx->pc = 0x1CD3ECu;
    SET_GPR_U32(ctx, 31, 0x1CD3F4u);
    ctx->pc = 0x1CD3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD3ECu;
    // 0x1cd3f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1CD3ECu, 0x1CD3F4u)) {
        return;
    }
    ctx->pc = 0x1CD3F4u;
label_1cd3f4:
    // 0x1cd3f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cd3f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd3f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cd3f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd3fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd400: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD400u;
        // 0x1cd404: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD408u;
}

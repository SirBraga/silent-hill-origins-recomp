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

// Function: sub_001CC360
// Address: 0x1cc360 - 0x1cc400
void sub_001CC360_0x1cc360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC360_0x1cc360");
#endif

    switch (ctx->pc) {
        case 0x1cc394u: goto label_1cc394;
        case 0x1cc3acu: goto label_1cc3ac;
        case 0x1cc3c4u: goto label_1cc3c4;
        case 0x1cc3dcu: goto label_1cc3dc;
        case 0x1cc3ecu: goto label_1cc3ec;
        default: break;
    }

    ctx->pc = 0x1cc360u;

    // 0x1cc360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cc364: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1cc364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1cc368: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cc368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cc36c: 0x2442fcd8  addiu       $v0, $v0, -0x328
    ctx->pc = 0x1cc36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966488));
    // 0x1cc370: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cc370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cc374: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc37c: 0xae020258  sw          $v0, 0x258($s0)
    ctx->pc = 0x1cc37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
    // 0x1cc380: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1cc380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1cc384: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC384u;
    {
        const bool branch_taken_0x1cc384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC384u;
        // 0x1cc388: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc384) {
            ctx->pc = 0x1CC398u;
            goto label_1cc398;
        }
    }
    ctx->pc = 0x1CC38Cu;
    // 0x1cc38c: 0xc06db5a  jal         func_1B6D68
    ctx->pc = 0x1CC38Cu;
    SET_GPR_U32(ctx, 31, 0x1CC394u);
    ctx->pc = 0x1CC390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC38Cu;
    // 0x1cc390: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D68u, 0x1CC38Cu, 0x1CC394u)) {
        return;
    }
    ctx->pc = 0x1CC394u;
label_1cc394:
    // 0x1cc394: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1cc394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
label_1cc398:
    // 0x1cc398: 0x8e0402ac  lw          $a0, 0x2AC($s0)
    ctx->pc = 0x1cc398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x1cc39c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CC39Cu;
    {
        const bool branch_taken_0x1cc39c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc39c) {
            ctx->pc = 0x1CC3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC39Cu;
            // 0x1cc3a0: 0x8e0402b0  lw          $a0, 0x2B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC3B4u;
            goto label_1cc3b4;
        }
    }
    ctx->pc = 0x1CC3A4u;
    // 0x1cc3a4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1CC3A4u;
    SET_GPR_U32(ctx, 31, 0x1CC3ACu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1CC3A4u, 0x1CC3ACu)) {
        return;
    }
    ctx->pc = 0x1CC3ACu;
label_1cc3ac:
    // 0x1cc3ac: 0xae0002ac  sw          $zero, 0x2AC($s0)
    ctx->pc = 0x1cc3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 0));
    // 0x1cc3b0: 0x8e0402b0  lw          $a0, 0x2B0($s0)
    ctx->pc = 0x1cc3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
label_1cc3b4:
    // 0x1cc3b4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CC3B4u;
    {
        const bool branch_taken_0x1cc3b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc3b4) {
            ctx->pc = 0x1CC3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC3B4u;
            // 0x1cc3b8: 0x8e0402b4  lw          $a0, 0x2B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC3CCu;
            goto label_1cc3cc;
        }
    }
    ctx->pc = 0x1CC3BCu;
    // 0x1cc3bc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1CC3BCu;
    SET_GPR_U32(ctx, 31, 0x1CC3C4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1CC3BCu, 0x1CC3C4u)) {
        return;
    }
    ctx->pc = 0x1CC3C4u;
label_1cc3c4:
    // 0x1cc3c4: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x1cc3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
    // 0x1cc3c8: 0x8e0402b4  lw          $a0, 0x2B4($s0)
    ctx->pc = 0x1cc3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
label_1cc3cc:
    // 0x1cc3cc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CC3CCu;
    {
        const bool branch_taken_0x1cc3cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc3cc) {
            ctx->pc = 0x1CC3D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC3CCu;
            // 0x1cc3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC3E4u;
            goto label_1cc3e4;
        }
    }
    ctx->pc = 0x1CC3D4u;
    // 0x1cc3d4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1CC3D4u;
    SET_GPR_U32(ctx, 31, 0x1CC3DCu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1CC3D4u, 0x1CC3DCu)) {
        return;
    }
    ctx->pc = 0x1CC3DCu;
label_1cc3dc:
    // 0x1cc3dc: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x1cc3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
    // 0x1cc3e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cc3e4:
    // 0x1cc3e4: 0xc06bba8  jal         func_1AEEA0
    ctx->pc = 0x1CC3E4u;
    SET_GPR_U32(ctx, 31, 0x1CC3ECu);
    ctx->pc = 0x1CC3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3E4u;
    // 0x1cc3e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1CC3E4u, 0x1CC3ECu)) {
        return;
    }
    ctx->pc = 0x1CC3ECu;
label_1cc3ec:
    // 0x1cc3ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cc3ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc3f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cc3f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc3f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3F8u;
        // 0x1cc3fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC400u;
}

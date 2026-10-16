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

// Function: sub_00190338
// Address: 0x190338 - 0x1903e8
void sub_00190338_0x190338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190338_0x190338");
#endif

    switch (ctx->pc) {
        case 0x190374u: goto label_190374;
        case 0x190388u: goto label_190388;
        case 0x19038cu: goto label_19038c;
        case 0x1903b0u: goto label_1903b0;
        case 0x1903c4u: goto label_1903c4;
        default: break;
    }

    ctx->pc = 0x190338u;

    // 0x190338: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x190338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19033c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19033cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x190340: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x190340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x190344: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x190344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190348: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x190348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x19034c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19034cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190350: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x190350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x190354: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x190354u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190358: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x190358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x19035c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x19035cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x190360: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x190360u;
    {
        const bool branch_taken_0x190360 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x190364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190360u;
        // 0x190364: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190360) {
            ctx->pc = 0x19037Cu;
            goto label_19037c;
        }
    }
    ctx->pc = 0x190368u;
    // 0x190368: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x190368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19036c: 0xc065c40  jal         func_197100
    ctx->pc = 0x19036Cu;
    SET_GPR_U32(ctx, 31, 0x190374u);
    ctx->pc = 0x190370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19036Cu;
    // 0x190370: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x19036Cu, 0x190374u)) {
        return;
    }
    ctx->pc = 0x190374u;
label_190374:
    // 0x190374: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190374u;
    {
        const bool branch_taken_0x190374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190374u;
        // 0x190378: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190374) {
            ctx->pc = 0x190380u;
            goto label_190380;
        }
    }
    ctx->pc = 0x19037Cu;
label_19037c:
    // 0x19037c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19037cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190380:
    // 0x190380: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190380u;
    {
        const bool branch_taken_0x190380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190380u;
        // 0x190384: 0x8eb100b4  lw          $s1, 0xB4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190380) {
            ctx->pc = 0x19038Cu;
            goto label_19038c;
        }
    }
    ctx->pc = 0x190388u;
label_190388:
    // 0x190388: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x190388u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_19038c:
    // 0x19038c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x19038Cu;
    {
        const bool branch_taken_0x19038c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x190390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19038Cu;
        // 0x190390: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19038c) {
            ctx->pc = 0x1903BCu;
            goto label_1903bc;
        }
    }
    ctx->pc = 0x190394u;
    // 0x190394: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x190394u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190398: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x190398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19039c: 0x5642fffb  bnel        $s2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x19039Cu;
    {
        const bool branch_taken_0x19039c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x19039c) {
            ctx->pc = 0x1903A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19039Cu;
            // 0x1903a0: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19038Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19038c;
        }
    }
    ctx->pc = 0x1903A4u;
    // 0x1903a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1903a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1903a8: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x1903A8u;
    SET_GPR_U32(ctx, 31, 0x1903B0u);
    ctx->pc = 0x1903ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1903A8u;
    // 0x1903ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x1903A8u, 0x1903B0u)) {
        return;
    }
    ctx->pc = 0x1903B0u;
label_1903b0:
    // 0x1903b0: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1903B0u;
    {
        const bool branch_taken_0x1903b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1903B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903B0u;
        // 0x1903b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903b0) {
            ctx->pc = 0x190388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190388;
        }
    }
    ctx->pc = 0x1903B8u;
    // 0x1903b8: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1903b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1903bc:
    // 0x1903bc: 0xc0635c0  jal         func_18D700
    ctx->pc = 0x1903BCu;
    SET_GPR_U32(ctx, 31, 0x1903C4u);
    ctx->pc = 0x1903C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1903BCu;
    // 0x1903c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18D700u, 0x1903BCu, 0x1903C4u)) {
        return;
    }
    ctx->pc = 0x1903C4u;
label_1903c4:
    // 0x1903c4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1903c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1903c8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1903c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1903cc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1903ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1903d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1903d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1903d4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1903d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1903d8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1903d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1903dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1903dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1903e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1903E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1903E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903E0u;
        // 0x1903e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1903E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1903E8u;
}

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

// Function: sub_001498A0
// Address: 0x1498a0 - 0x149968
void sub_001498A0_0x1498a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001498A0_0x1498a0");
#endif

    switch (ctx->pc) {
        case 0x1498d0u: goto label_1498d0;
        case 0x1498f8u: goto label_1498f8;
        case 0x149924u: goto label_149924;
        case 0x14992cu: goto label_14992c;
        default: break;
    }

    ctx->pc = 0x1498a0u;

    // 0x1498a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1498a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1498a4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1498a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1498a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1498a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1498ac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1498acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1498b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1498b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1498b4: 0x8c6284d0  lw          $v0, -0x7B30($v1)
    ctx->pc = 0x1498b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3384D0u));
    // 0x1498b8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1498b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1498bc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1498bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1498c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1498c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1498c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1498C4u;
    {
        const bool branch_taken_0x1498c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1498C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1498C4u;
        // 0x1498c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1498c4) {
            ctx->pc = 0x1498ECu;
            goto label_1498ec;
        }
    }
    ctx->pc = 0x1498CCu;
    // 0x1498cc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1498ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1498d0:
    // 0x1498d0: 0x8c8284d0  lw          $v0, -0x7B30($a0)
    ctx->pc = 0x1498d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294935760)));
    // 0x1498d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1498d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1498d8: 0xac8384d0  sw          $v1, -0x7B30($a0)
    ctx->pc = 0x1498d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294935760), GPR_U32(ctx, 3));
    // 0x1498dc: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1498dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1498e0: 0x8c8384d0  lw          $v1, -0x7B30($a0)
    ctx->pc = 0x1498e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294935760)));
    // 0x1498e4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1498E4u;
    {
        const bool branch_taken_0x1498e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1498E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1498E4u;
        // 0x1498e8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1498e4) {
            ctx->pc = 0x1498D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1498d0;
        }
    }
    ctx->pc = 0x1498ECu;
label_1498ec:
    // 0x1498ec: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1498ECu;
    {
        const bool branch_taken_0x1498ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1498F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1498ECu;
        // 0x1498f0: 0x3c120034  lui         $s2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1498ec) {
            ctx->pc = 0x149948u;
            goto label_149948;
        }
    }
    ctx->pc = 0x1498F4u;
    // 0x1498f4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1498f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1498f8:
    // 0x1498f8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1498f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1498fc: 0x1453000d  bne         $v0, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1498FCu;
    {
        const bool branch_taken_0x1498fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x149900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1498FCu;
        // 0x149900: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1498fc) {
            ctx->pc = 0x149934u;
            goto label_149934;
        }
    }
    ctx->pc = 0x149904u;
    // 0x149904: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x149904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x149908: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x149908u;
    {
        const bool branch_taken_0x149908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x149908) {
            ctx->pc = 0x149924u;
            goto label_149924;
        }
    }
    ctx->pc = 0x149910u;
    // 0x149910: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x149910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x149914: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149914u;
    {
        const bool branch_taken_0x149914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149914) {
            ctx->pc = 0x149924u;
            goto label_149924;
        }
    }
    ctx->pc = 0x14991Cu;
    // 0x14991c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x14991Cu;
    SET_GPR_U32(ctx, 31, 0x149924u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x14991Cu, 0x149924u)) {
        return;
    }
    ctx->pc = 0x149924u;
label_149924:
    // 0x149924: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x149924u;
    SET_GPR_U32(ctx, 31, 0x14992Cu);
    ctx->pc = 0x149928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149924u;
    // 0x149928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x149924u, 0x14992Cu)) {
        return;
    }
    ctx->pc = 0x14992Cu;
label_14992c:
    // 0x14992c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14992Cu;
    {
        const bool branch_taken_0x14992c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14992c) {
            ctx->pc = 0x149940u;
            goto label_149940;
        }
    }
    ctx->pc = 0x149934u;
label_149934:
    // 0x149934: 0x8e4284d0  lw          $v0, -0x7B30($s2)
    ctx->pc = 0x149934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935760)));
    // 0x149938: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x149938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14993c: 0xae5084d0  sw          $s0, -0x7B30($s2)
    ctx->pc = 0x14993cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294935760), GPR_U32(ctx, 16));
label_149940:
    // 0x149940: 0x1620ffed  bnez        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x149940u;
    {
        const bool branch_taken_0x149940 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x149944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149940u;
        // 0x149944: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149940) {
            ctx->pc = 0x1498F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1498f8;
        }
    }
    ctx->pc = 0x149948u;
label_149948:
    // 0x149948: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x149948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14994c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14994cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149950: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x149950u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149954: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x149954u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14995c: 0x3e00008  jr          $ra
    ctx->pc = 0x14995Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14995Cu;
        // 0x149960: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14995Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149964u;
    // 0x149964: 0x0  nop
    ctx->pc = 0x149964u;
    // NOP
    ctx->pc = 0x149968u;
}

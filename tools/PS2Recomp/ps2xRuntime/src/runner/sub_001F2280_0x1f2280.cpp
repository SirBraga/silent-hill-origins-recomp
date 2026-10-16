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

// Function: sub_001F2280
// Address: 0x1f2280 - 0x1f2330
void sub_001F2280_0x1f2280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2280_0x1f2280");
#endif

    switch (ctx->pc) {
        case 0x1f22a4u: goto label_1f22a4;
        case 0x1f22e8u: goto label_1f22e8;
        default: break;
    }

    ctx->pc = 0x1f2280u;

    // 0x1f2280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f2280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f2284: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f2284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f2288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f2288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f228c: 0x14a60003  bne         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F228Cu;
    {
        const bool branch_taken_0x1f228c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1F2290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F228Cu;
        // 0x1f2290: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f228c) {
            ctx->pc = 0x1F229Cu;
            goto label_1f229c;
        }
    }
    ctx->pc = 0x1F2294u;
    // 0x1f2294: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1F2294u;
    {
        const bool branch_taken_0x1f2294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2294u;
        // 0x1f2298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2294) {
            ctx->pc = 0x1F2318u;
            goto label_1f2318;
        }
    }
    ctx->pc = 0x1F229Cu;
label_1f229c:
    // 0x1f229c: 0xc07c956  jal         func_1F2558
    ctx->pc = 0x1F229Cu;
    SET_GPR_U32(ctx, 31, 0x1F22A4u);
    ctx->pc = 0x1F22A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F229Cu;
    // 0x1f22a0: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F2558u, 0x1F229Cu, 0x1F22A4u)) {
        return;
    }
    ctx->pc = 0x1F22A4u;
label_1f22a4:
    // 0x1f22a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f22a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f22a8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1f22a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1f22ac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f22acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f22b0: 0x8c82e960  lw          $v0, -0x16A0($a0)
    ctx->pc = 0x1f22b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E960u));
    // 0x1f22b4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f22b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f22b8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F22B8u;
    {
        const bool branch_taken_0x1f22b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f22b8) {
            ctx->pc = 0x1F22BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F22B8u;
            // 0x1f22bc: 0xac83e960  sw          $v1, -0x16A0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4294961504), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F22C0u;
            goto label_1f22c0;
        }
    }
    ctx->pc = 0x1F22C0u;
label_1f22c0:
    // 0x1f22c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f22c4: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x1f22c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1f22c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f22c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f22cc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1f22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1f22d0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1f22d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1f22d4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1f22d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f22d8: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F22D8u;
    {
        const bool branch_taken_0x1f22d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22D8u;
        // 0x1f22dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f22d8) {
            ctx->pc = 0x1F2300u;
            goto label_1f2300;
        }
    }
    ctx->pc = 0x1F22E0u;
    // 0x1f22e0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1f22e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f22e4: 0x0  nop
    ctx->pc = 0x1f22e4u;
    // NOP
label_1f22e8:
    // 0x1f22e8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1f22e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1f22ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f22ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f22f0: 0x0  nop
    ctx->pc = 0x1f22f0u;
    // NOP
    // 0x1f22f4: 0x0  nop
    ctx->pc = 0x1f22f4u;
    // NOP
    // 0x1f22f8: 0x1445fffb  bne         $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F22F8u;
    {
        const bool branch_taken_0x1f22f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F22FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22F8u;
        // 0x1f22fc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f22f8) {
            ctx->pc = 0x1F22E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f22e8;
        }
    }
    ctx->pc = 0x1F2300u;
label_1f2300:
    // 0x1f2300: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f2300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f2304: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2304u;
    {
        const bool branch_taken_0x1f2304 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2304u;
        // 0x1f2308: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2304) {
            ctx->pc = 0x1F2318u;
            goto label_1f2318;
        }
    }
    ctx->pc = 0x1F230Cu;
    // 0x1f230c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1f230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f2310: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1f2310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1f2314: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1f2314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f2318:
    // 0x1f2318: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f2318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f231c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f231cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2320: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2320u;
        // 0x1f2324: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2328u;
    // 0x1f2328: 0x0  nop
    ctx->pc = 0x1f2328u;
    // NOP
    // 0x1f232c: 0x0  nop
    ctx->pc = 0x1f232cu;
    // NOP
    ctx->pc = 0x1f2330u;
}

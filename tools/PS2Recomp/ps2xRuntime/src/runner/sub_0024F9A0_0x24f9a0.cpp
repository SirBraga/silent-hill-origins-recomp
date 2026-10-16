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

// Function: sub_0024F9A0
// Address: 0x24f9a0 - 0x24fa40
void sub_0024F9A0_0x24f9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F9A0_0x24f9a0");
#endif

    switch (ctx->pc) {
        case 0x24f9d0u: goto label_24f9d0;
        case 0x24fa00u: goto label_24fa00;
        default: break;
    }

    ctx->pc = 0x24f9a0u;

    // 0x24f9a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24f9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24f9a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24f9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f9a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24f9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x24f9ac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x24f9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x24f9b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24f9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24f9b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24f9b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f9b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24f9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24f9bc: 0x26500014  addiu       $s0, $s2, 0x14
    ctx->pc = 0x24f9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x24f9c0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x24f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x24f9c4: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x24f9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x24f9c8: 0x96510002  lhu         $s1, 0x2($s2)
    ctx->pc = 0x24f9c8u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x24f9cc: 0x0  nop
    ctx->pc = 0x24f9ccu;
    // NOP
label_24f9d0:
    // 0x24f9d0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24f9d4: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x24F9D4u;
    {
        const bool branch_taken_0x24f9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f9d4) {
            ctx->pc = 0x24F9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F9D4u;
            // 0x24f9d8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FA1Cu;
            goto label_24fa1c;
        }
    }
    ctx->pc = 0x24F9DCu;
    // 0x24f9dc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x24f9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24f9e0: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24F9E0u;
    {
        const bool branch_taken_0x24f9e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f9e0) {
            ctx->pc = 0x24F9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F9E0u;
            // 0x24f9e4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FA08u;
            goto label_24fa08;
        }
    }
    ctx->pc = 0x24F9E8u;
    // 0x24f9e8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x24f9e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24f9ec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24f9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x24f9f0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F9F0u;
    {
        const bool branch_taken_0x24f9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f9f0) {
            ctx->pc = 0x24F9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F9F0u;
            // 0x24f9f4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FA08u;
            goto label_24fa08;
        }
    }
    ctx->pc = 0x24F9F8u;
    // 0x24f9f8: 0xc092546  jal         func_249518
    ctx->pc = 0x24F9F8u;
    SET_GPR_U32(ctx, 31, 0x24FA00u);
    ctx->pc = 0x24F9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F9F8u;
    // 0x24f9fc: 0x8f84851c  lw          $a0, -0x7AE4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935836)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249518u, 0x24F9F8u, 0x24FA00u)) {
        return;
    }
    ctx->pc = 0x24FA00u;
label_24fa00:
    // 0x24fa00: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x24fa00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x24fa04: 0x0  nop
    ctx->pc = 0x24fa04u;
    // NOP
label_24fa08:
    // 0x24fa08: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x24fa08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x24fa0c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x24fa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x24fa10: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x24fa10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x24fa14: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x24fa14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x24fa18: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x24fa18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_24fa1c:
    // 0x24fa1c: 0x1620ffec  bnez        $s1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x24FA1Cu;
    {
        const bool branch_taken_0x24fa1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA1Cu;
        // 0x24fa20: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa1c) {
            ctx->pc = 0x24F9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f9d0;
        }
    }
    ctx->pc = 0x24FA24u;
    // 0x24fa24: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x24fa24u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x24fa28: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24fa28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24fa2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24fa2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24fa30: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x24fa30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24fa34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24fa34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fa38: 0x3e00008  jr          $ra
    ctx->pc = 0x24FA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA38u;
        // 0x24fa3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FA40u;
}

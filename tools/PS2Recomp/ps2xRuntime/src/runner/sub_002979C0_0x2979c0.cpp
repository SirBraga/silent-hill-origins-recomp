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

// Function: sub_002979C0
// Address: 0x2979c0 - 0x297a28
void sub_002979C0_0x2979c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002979C0_0x2979c0");
#endif

    switch (ctx->pc) {
        case 0x2979e8u: goto label_2979e8;
        case 0x2979f0u: goto label_2979f0;
        default: break;
    }

    ctx->pc = 0x2979c0u;

    // 0x2979c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2979c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2979c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2979c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2979c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2979c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2979cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2979ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2979d0: 0x245211d1  addiu       $s2, $v0, 0x11D1
    ctx->pc = 0x2979d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4561));
    // 0x2979d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2979d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2979d8: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2979d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2979dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2979dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2979e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2979e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2979e4: 0x0  nop
    ctx->pc = 0x2979e4u;
    // NOP
label_2979e8:
    // 0x2979e8: 0xc0a7bbe  jal         func_29EEF8
    ctx->pc = 0x2979E8u;
    SET_GPR_U32(ctx, 31, 0x2979F0u);
    ctx->pc = 0x2979ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2979E8u;
    // 0x2979ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EEF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EEF8u, 0x2979E8u, 0x2979F0u)) {
        return;
    }
    ctx->pc = 0x2979F0u;
label_2979f0:
    // 0x2979f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2979f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2979f4: 0x10910005  beq         $a0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2979F4u;
    {
        const bool branch_taken_0x2979f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x2979F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2979F4u;
        // 0x2979f8: 0x921821  addu        $v1, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2979f4) {
            ctx->pc = 0x297A0Cu;
            goto label_297a0c;
        }
    }
    ctx->pc = 0x2979FCu;
    // 0x2979fc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2979fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x297a00: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x297a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x297a04: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x297A04u;
    {
        const bool branch_taken_0x297a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297a04) {
            ctx->pc = 0x2979E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2979e8;
        }
    }
    ctx->pc = 0x297A0Cu;
label_297a0c:
    // 0x297a0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x297a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297a10: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x297a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297a14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x297a14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297a18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x297a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297a1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297a20: 0x3e00008  jr          $ra
    ctx->pc = 0x297A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A20u;
        // 0x297a24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297A28u;
}

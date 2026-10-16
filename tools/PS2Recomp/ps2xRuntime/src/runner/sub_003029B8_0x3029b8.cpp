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

// Function: sub_003029B8
// Address: 0x3029b8 - 0x302a48
void sub_003029B8_0x3029b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003029B8_0x3029b8");
#endif

    switch (ctx->pc) {
        case 0x3029d0u: goto label_3029d0;
        case 0x3029dcu: goto label_3029dc;
        case 0x3029ecu: goto label_3029ec;
        case 0x3029f8u: goto label_3029f8;
        case 0x302a04u: goto label_302a04;
        case 0x302a14u: goto label_302a14;
        case 0x302a24u: goto label_302a24;
        case 0x302a30u: goto label_302a30;
        default: break;
    }

    ctx->pc = 0x3029b8u;

    // 0x3029b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3029b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3029bc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3029bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3029c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3029c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3029c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3029c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3029c8: 0xc0c0122  jal         func_300488
    ctx->pc = 0x3029C8u;
    SET_GPR_U32(ctx, 31, 0x3029D0u);
    ctx->pc = 0x3029CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3029C8u;
    // 0x3029cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x3029C8u, 0x3029D0u)) {
        return;
    }
    ctx->pc = 0x3029D0u;
label_3029d0:
    // 0x3029d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3029d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3029d4: 0xc0c0122  jal         func_300488
    ctx->pc = 0x3029D4u;
    SET_GPR_U32(ctx, 31, 0x3029DCu);
    ctx->pc = 0x3029D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3029D4u;
    // 0x3029d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x3029D4u, 0x3029DCu)) {
        return;
    }
    ctx->pc = 0x3029DCu;
label_3029dc:
    // 0x3029dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3029DCu;
    {
        const bool branch_taken_0x3029dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3029E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029DCu;
        // 0x3029e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3029dc) {
            ctx->pc = 0x302A08u;
            goto label_302a08;
        }
    }
    ctx->pc = 0x3029E4u;
    // 0x3029e4: 0xc0c0122  jal         func_300488
    ctx->pc = 0x3029E4u;
    SET_GPR_U32(ctx, 31, 0x3029ECu);
    ctx->pc = 0x3029E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3029E4u;
    // 0x3029e8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x3029E4u, 0x3029ECu)) {
        return;
    }
    ctx->pc = 0x3029ECu;
label_3029ec:
    // 0x3029ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3029ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3029f0: 0xc0c0122  jal         func_300488
    ctx->pc = 0x3029F0u;
    SET_GPR_U32(ctx, 31, 0x3029F8u);
    ctx->pc = 0x3029F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3029F0u;
    // 0x3029f4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x3029F0u, 0x3029F8u)) {
        return;
    }
    ctx->pc = 0x3029F8u;
label_3029f8:
    // 0x3029f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3029f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3029fc: 0xc0c0122  jal         func_300488
    ctx->pc = 0x3029FCu;
    SET_GPR_U32(ctx, 31, 0x302A04u);
    ctx->pc = 0x302A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3029FCu;
    // 0x302a00: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x3029FCu, 0x302A04u)) {
        return;
    }
    ctx->pc = 0x302A04u;
label_302a04:
    // 0x302a04: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x302a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
label_302a08:
    // 0x302a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302a0c: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302A0Cu;
    SET_GPR_U32(ctx, 31, 0x302A14u);
    ctx->pc = 0x302A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302A0Cu;
    // 0x302a10: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302A0Cu, 0x302A14u)) {
        return;
    }
    ctx->pc = 0x302A14u;
label_302a14:
    // 0x302a14: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x302a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x302a18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302a1c: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302A1Cu;
    SET_GPR_U32(ctx, 31, 0x302A24u);
    ctx->pc = 0x302A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302A1Cu;
    // 0x302a20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302A1Cu, 0x302A24u)) {
        return;
    }
    ctx->pc = 0x302A24u;
label_302a24:
    // 0x302a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302a28: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302A28u;
    SET_GPR_U32(ctx, 31, 0x302A30u);
    ctx->pc = 0x302A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302A28u;
    // 0x302a2c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302A28u, 0x302A30u)) {
        return;
    }
    ctx->pc = 0x302A30u;
label_302a30:
    // 0x302a30: 0xae02015c  sw          $v0, 0x15C($s0)
    ctx->pc = 0x302a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 2));
    // 0x302a34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x302a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x302a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x302A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A3Cu;
        // 0x302a40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302A44u;
    // 0x302a44: 0x0  nop
    ctx->pc = 0x302a44u;
    // NOP
    ctx->pc = 0x302a48u;
}

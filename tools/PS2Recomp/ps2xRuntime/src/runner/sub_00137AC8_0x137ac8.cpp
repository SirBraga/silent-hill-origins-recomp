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

// Function: sub_00137AC8
// Address: 0x137ac8 - 0x137b30
void sub_00137AC8_0x137ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137AC8_0x137ac8");
#endif

    switch (ctx->pc) {
        case 0x137b00u: goto label_137b00;
        case 0x137b1cu: goto label_137b1c;
        default: break;
    }

    ctx->pc = 0x137ac8u;

    // 0x137ac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x137ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x137acc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x137accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x137ad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137ad4: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x137AD4u;
    {
        const bool branch_taken_0x137ad4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x137AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AD4u;
        // 0x137ad8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ad4) {
            ctx->pc = 0x137B08u;
            goto label_137b08;
        }
    }
    ctx->pc = 0x137ADCu;
    // 0x137adc: 0x8e021b8c  lw          $v0, 0x1B8C($s0)
    ctx->pc = 0x137adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7052)));
    // 0x137ae0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x137AE0u;
    {
        const bool branch_taken_0x137ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AE0u;
        // 0x137ae4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ae0) {
            ctx->pc = 0x137B14u;
            goto label_137b14;
        }
    }
    ctx->pc = 0x137AE8u;
    // 0x137ae8: 0x8e031b94  lw          $v1, 0x1B94($s0)
    ctx->pc = 0x137ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7060)));
    // 0x137aec: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x137AECu;
    {
        const bool branch_taken_0x137aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x137AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AECu;
        // 0x137af0: 0xae021b90  sw          $v0, 0x1B90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137aec) {
            ctx->pc = 0x137B14u;
            goto label_137b14;
        }
    }
    ctx->pc = 0x137AF4u;
    // 0x137af4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x137af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x137af8: 0xc0640ae  jal         func_1902B8
    ctx->pc = 0x137AF8u;
    SET_GPR_U32(ctx, 31, 0x137B00u);
    ctx->pc = 0x137AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137AF8u;
    // 0x137afc: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1902B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1902B8u, 0x137AF8u, 0x137B00u)) {
        return;
    }
    ctx->pc = 0x137B00u;
label_137b00:
    // 0x137b00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x137B00u;
    {
        const bool branch_taken_0x137b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B00u;
        // 0x137b04: 0xae021b94  sw          $v0, 0x1B94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b00) {
            ctx->pc = 0x137B14u;
            goto label_137b14;
        }
    }
    ctx->pc = 0x137B08u;
label_137b08:
    // 0x137b08: 0x8e021b8c  lw          $v0, 0x1B8C($s0)
    ctx->pc = 0x137b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7052)));
    // 0x137b0c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x137B0Cu;
    {
        const bool branch_taken_0x137b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137b0c) {
            ctx->pc = 0x137B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137B0Cu;
            // 0x137b10: 0xae001b90  sw          $zero, 0x1B90($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 7056), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137B14u;
            goto label_137b14;
        }
    }
    ctx->pc = 0x137B14u;
label_137b14:
    // 0x137b14: 0xc04d928  jal         func_1364A0
    ctx->pc = 0x137B14u;
    SET_GPR_U32(ctx, 31, 0x137B1Cu);
    ctx->pc = 0x137B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137B14u;
    // 0x137b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1364A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1364A0u, 0x137B14u, 0x137B1Cu)) {
        return;
    }
    ctx->pc = 0x137B1Cu;
label_137b1c:
    // 0x137b1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x137b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137b20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137b24: 0x3e00008  jr          $ra
    ctx->pc = 0x137B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B24u;
        // 0x137b28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137B2Cu;
    // 0x137b2c: 0x0  nop
    ctx->pc = 0x137b2cu;
    // NOP
    ctx->pc = 0x137b30u;
}

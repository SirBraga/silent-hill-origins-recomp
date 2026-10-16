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

// Function: sub_002E1AC0
// Address: 0x2e1ac0 - 0x2e1b30
void sub_002E1AC0_0x2e1ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1AC0_0x2e1ac0");
#endif

    switch (ctx->pc) {
        case 0x2e1adcu: goto label_2e1adc;
        case 0x2e1af4u: goto label_2e1af4;
        case 0x2e1b14u: goto label_2e1b14;
        default: break;
    }

    ctx->pc = 0x2e1ac0u;

    // 0x2e1ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e1ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e1ac4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e1ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2e1ac8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e1ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e1acc: 0x24508180  addiu       $s0, $v0, -0x7E80
    ctx->pc = 0x2e1accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934912));
    // 0x2e1ad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1ad4: 0xc0b6c62  jal         func_2DB188
    ctx->pc = 0x2E1AD4u;
    SET_GPR_U32(ctx, 31, 0x2E1ADCu);
    ctx->pc = 0x2E1AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1AD4u;
    // 0x2e1ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB188u, 0x2E1AD4u, 0x2E1ADCu)) {
        return;
    }
    ctx->pc = 0x2E1ADCu;
label_2e1adc:
    // 0x2e1adc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E1ADCu;
    {
        const bool branch_taken_0x2e1adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1ADCu;
        // 0x2e1ae0: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1adc) {
            ctx->pc = 0x2E1B1Cu;
            goto label_2e1b1c;
        }
    }
    ctx->pc = 0x2E1AE4u;
    // 0x2e1ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1ae8: 0x24a5f3d0  addiu       $a1, $a1, -0xC30
    ctx->pc = 0x2e1ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964176));
    // 0x2e1aec: 0xc0b6c52  jal         func_2DB148
    ctx->pc = 0x2E1AECu;
    SET_GPR_U32(ctx, 31, 0x2E1AF4u);
    ctx->pc = 0x2E1AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1AECu;
    // 0x2e1af0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB148u, 0x2E1AECu, 0x2E1AF4u)) {
        return;
    }
    ctx->pc = 0x2E1AF4u;
label_2e1af4:
    // 0x2e1af4: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x2e1af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x2e1af8: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x2e1af8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x2e1afc: 0x24a54d50  addiu       $a1, $a1, 0x4D50
    ctx->pc = 0x2e1afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19792));
    // 0x2e1b00: 0x24e74dc8  addiu       $a3, $a3, 0x4DC8
    ctx->pc = 0x2e1b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19912));
    // 0x2e1b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1b08: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2e1b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e1b0c: 0xc0b6cfc  jal         func_2DB3F0
    ctx->pc = 0x2E1B0Cu;
    SET_GPR_U32(ctx, 31, 0x2E1B14u);
    ctx->pc = 0x2E1B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1B0Cu;
    // 0x2e1b10: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB3F0u, 0x2E1B0Cu, 0x2E1B14u)) {
        return;
    }
    ctx->pc = 0x2E1B14u;
label_2e1b14:
    // 0x2e1b14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E1B14u;
    {
        const bool branch_taken_0x2e1b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B14u;
        // 0x2e1b18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b14) {
            ctx->pc = 0x2E1B20u;
            goto label_2e1b20;
        }
    }
    ctx->pc = 0x2E1B1Cu;
label_2e1b1c:
    // 0x2e1b1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e1b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1b20:
    // 0x2e1b20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e1b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1b28: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B28u;
        // 0x2e1b2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1B30u;
}

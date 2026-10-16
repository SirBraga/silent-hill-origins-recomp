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

// Function: sub_002F1AA0
// Address: 0x2f1aa0 - 0x2f1b48
void sub_002F1AA0_0x2f1aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1AA0_0x2f1aa0");
#endif

    switch (ctx->pc) {
        case 0x2f1aecu: goto label_2f1aec;
        case 0x2f1afcu: goto label_2f1afc;
        default: break;
    }

    ctx->pc = 0x2f1aa0u;

    // 0x2f1aa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f1aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f1aa4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2f1aa8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f1aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f1aac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f1aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f1ab0: 0x2452f100  addiu       $s2, $v0, -0xF00
    ctx->pc = 0x2f1ab0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963456));
    // 0x2f1ab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f1ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f1ab8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f1ab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1abc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f1abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f1ac0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f1ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x70F104u));
    // 0x2f1ac4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1AC4u;
    {
        const bool branch_taken_0x2f1ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1AC4u;
        // 0x2f1ac8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1ac4) {
            ctx->pc = 0x2F1AD4u;
            goto label_2f1ad4;
        }
    }
    ctx->pc = 0x2F1ACCu;
    // 0x2f1acc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2F1ACCu;
    {
        const bool branch_taken_0x2f1acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1ACCu;
        // 0x2f1ad0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1acc) {
            ctx->pc = 0x2F1B2Cu;
            goto label_2f1b2c;
        }
    }
    ctx->pc = 0x2F1AD4u;
label_2f1ad4:
    // 0x2f1ad4: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F1AD4u;
    {
        const bool branch_taken_0x2f1ad4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1ad4) {
            ctx->pc = 0x2F1AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1AD4u;
            // 0x2f1ad8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1ADCu;
            goto label_2f1adc;
        }
    }
    ctx->pc = 0x2F1ADCu;
label_2f1adc:
    // 0x2f1adc: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F1ADCu;
    {
        const bool branch_taken_0x2f1adc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1ADCu;
        // 0x2f1ae0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1adc) {
            ctx->pc = 0x2F1AF4u;
            goto label_2f1af4;
        }
    }
    ctx->pc = 0x2F1AE4u;
    // 0x2f1ae4: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x2F1AE4u;
    SET_GPR_U32(ctx, 31, 0x2F1AECu);
    ctx->pc = 0x2F1AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1AE4u;
    // 0x2f1ae8: 0x8c44f628  lw          $a0, -0x9D8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2F1AE4u, 0x2F1AECu)) {
        return;
    }
    ctx->pc = 0x2F1AECu;
label_2f1aec:
    // 0x2f1aec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F1AECu;
    {
        const bool branch_taken_0x2f1aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1aec) {
            ctx->pc = 0x2F1B04u;
            goto label_2f1b04;
        }
    }
    ctx->pc = 0x2F1AF4u;
label_2f1af4:
    // 0x2f1af4: 0xc0c84dc  jal         func_321370
    ctx->pc = 0x2F1AF4u;
    SET_GPR_U32(ctx, 31, 0x2F1AFCu);
    ctx->pc = 0x2F1AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1AF4u;
    // 0x2f1af8: 0x8c44f628  lw          $a0, -0x9D8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321370u, 0x2F1AF4u, 0x2F1AFCu)) {
        return;
    }
    ctx->pc = 0x2F1AFCu;
label_2f1afc:
    // 0x2f1afc: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F1AFCu;
    {
        const bool branch_taken_0x2f1afc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2F1B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1AFCu;
        // 0x2f1b00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1afc) {
            ctx->pc = 0x2F1B2Cu;
            goto label_2f1b2c;
        }
    }
    ctx->pc = 0x2F1B04u;
label_2f1b04:
    // 0x2f1b04: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1B04u;
    {
        const bool branch_taken_0x2f1b04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1b04) {
            ctx->pc = 0x2F1B14u;
            goto label_2f1b14;
        }
    }
    ctx->pc = 0x2F1B0Cu;
    // 0x2f1b0c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2f1b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2f1b10: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2f1b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2f1b14:
    // 0x2f1b14: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1B14u;
    {
        const bool branch_taken_0x2f1b14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1b14) {
            ctx->pc = 0x2F1B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1B14u;
            // 0x2f1b18: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1B28u;
            goto label_2f1b28;
        }
    }
    ctx->pc = 0x2F1B1Cu;
    // 0x2f1b1c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f1b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2f1b20: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2f1b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2f1b24: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f1b24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2f1b28:
    // 0x2f1b28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f1b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1b2c:
    // 0x2f1b2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f1b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1b30: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f1b30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1b34: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f1b34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1b38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f1b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1B3Cu;
        // 0x2f1b40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1B44u;
    // 0x2f1b44: 0x0  nop
    ctx->pc = 0x2f1b44u;
    // NOP
    ctx->pc = 0x2f1b48u;
}

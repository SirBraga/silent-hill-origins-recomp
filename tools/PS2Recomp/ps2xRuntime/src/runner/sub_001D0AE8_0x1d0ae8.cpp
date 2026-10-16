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

// Function: sub_001D0AE8
// Address: 0x1d0ae8 - 0x1d0b40
void sub_001D0AE8_0x1d0ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0AE8_0x1d0ae8");
#endif

    switch (ctx->pc) {
        case 0x1d0b08u: goto label_1d0b08;
        case 0x1d0b20u: goto label_1d0b20;
        default: break;
    }

    ctx->pc = 0x1d0ae8u;

    // 0x1d0ae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0aec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d0aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d0af0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0af4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D0AF4u;
    {
        const bool branch_taken_0x1d0af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0AF4u;
        // 0x1d0af8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0af4) {
            ctx->pc = 0x1D0B28u;
            goto label_1d0b28;
        }
    }
    ctx->pc = 0x1D0AFCu;
    // 0x1d0afc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d0afcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d0b00: 0xc06c994  jal         func_1B2650
    ctx->pc = 0x1D0B00u;
    SET_GPR_U32(ctx, 31, 0x1D0B08u);
    ctx->pc = 0x1D0B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0B00u;
    // 0x1d0b04: 0x24a50a70  addiu       $a1, $a1, 0xA70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1D0B00u, 0x1D0B08u)) {
        return;
    }
    ctx->pc = 0x1D0B08u;
label_1d0b08:
    // 0x1d0b08: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0B08u;
    {
        const bool branch_taken_0x1d0b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B08u;
        // 0x1d0b0c: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b08) {
            ctx->pc = 0x1D0B2Cu;
            goto label_1d0b2c;
        }
    }
    ctx->pc = 0x1D0B10u;
    // 0x1d0b10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b14: 0x24c60b40  addiu       $a2, $a2, 0xB40
    ctx->pc = 0x1d0b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2880));
    // 0x1d0b18: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1D0B18u;
    SET_GPR_U32(ctx, 31, 0x1D0B20u);
    ctx->pc = 0x1D0B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0B18u;
    // 0x1d0b1c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1D0B18u, 0x1D0B20u)) {
        return;
    }
    ctx->pc = 0x1D0B20u;
label_1d0b20:
    // 0x1d0b20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0B20u;
    {
        const bool branch_taken_0x1d0b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B20u;
        // 0x1d0b24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b20) {
            ctx->pc = 0x1D0B30u;
            goto label_1d0b30;
        }
    }
    ctx->pc = 0x1D0B28u;
label_1d0b28:
    // 0x1d0b28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d0b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0b2c:
    // 0x1d0b2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d0b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0b30:
    // 0x1d0b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0b34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d0b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0b38: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B38u;
        // 0x1d0b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0B40u;
}

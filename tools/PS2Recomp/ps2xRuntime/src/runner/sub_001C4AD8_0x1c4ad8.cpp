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

// Function: sub_001C4AD8
// Address: 0x1c4ad8 - 0x1c4b48
void sub_001C4AD8_0x1c4ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4AD8_0x1c4ad8");
#endif

    switch (ctx->pc) {
        case 0x1c4b0cu: goto label_1c4b0c;
        case 0x1c4b24u: goto label_1c4b24;
        case 0x1c4b34u: goto label_1c4b34;
        default: break;
    }

    ctx->pc = 0x1c4ad8u;

    // 0x1c4ad8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c4ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c4adc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c4adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c4ae0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c4ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c4ae4: 0x2442e818  addiu       $v0, $v0, -0x17E8
    ctx->pc = 0x1c4ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961176));
    // 0x1c4ae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c4ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c4aec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4af0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4af4: 0xae020258  sw          $v0, 0x258($s0)
    ctx->pc = 0x1c4af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
    // 0x1c4af8: 0x8e0402ec  lw          $a0, 0x2EC($s0)
    ctx->pc = 0x1c4af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 748)));
    // 0x1c4afc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4AFCu;
    {
        const bool branch_taken_0x1c4afc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AFCu;
        // 0x1c4b00: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4afc) {
            ctx->pc = 0x1C4B10u;
            goto label_1c4b10;
        }
    }
    ctx->pc = 0x1C4B04u;
    // 0x1c4b04: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1C4B04u;
    SET_GPR_U32(ctx, 31, 0x1C4B0Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1C4B04u, 0x1C4B0Cu)) {
        return;
    }
    ctx->pc = 0x1C4B0Cu;
label_1c4b0c:
    // 0x1c4b0c: 0xae0002ec  sw          $zero, 0x2EC($s0)
    ctx->pc = 0x1c4b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 0));
label_1c4b10:
    // 0x1c4b10: 0x8e0402f0  lw          $a0, 0x2F0($s0)
    ctx->pc = 0x1c4b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x1c4b14: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4B14u;
    {
        const bool branch_taken_0x1c4b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4b14) {
            ctx->pc = 0x1C4B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4B14u;
            // 0x1c4b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4B2Cu;
            goto label_1c4b2c;
        }
    }
    ctx->pc = 0x1C4B1Cu;
    // 0x1c4b1c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1C4B1Cu;
    SET_GPR_U32(ctx, 31, 0x1C4B24u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1C4B1Cu, 0x1C4B24u)) {
        return;
    }
    ctx->pc = 0x1C4B24u;
label_1c4b24:
    // 0x1c4b24: 0xae0002f0  sw          $zero, 0x2F0($s0)
    ctx->pc = 0x1c4b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 0));
    // 0x1c4b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c4b2c:
    // 0x1c4b2c: 0xc06d722  jal         func_1B5C88
    ctx->pc = 0x1C4B2Cu;
    SET_GPR_U32(ctx, 31, 0x1C4B34u);
    ctx->pc = 0x1C4B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4B2Cu;
    // 0x1c4b30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5C88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B5C88u, 0x1C4B2Cu, 0x1C4B34u)) {
        return;
    }
    ctx->pc = 0x1C4B34u;
label_1c4b34:
    // 0x1c4b34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c4b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4b38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c4b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4b3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4b40: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B40u;
        // 0x1c4b44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4B48u;
}

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

// Function: sub_001D0EE0
// Address: 0x1d0ee0 - 0x1d0f78
void sub_001D0EE0_0x1d0ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0EE0_0x1d0ee0");
#endif

    switch (ctx->pc) {
        case 0x1d0f08u: goto label_1d0f08;
        case 0x1d0f20u: goto label_1d0f20;
        case 0x1d0f30u: goto label_1d0f30;
        case 0x1d0f50u: goto label_1d0f50;
        default: break;
    }

    ctx->pc = 0x1d0ee0u;

    // 0x1d0ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d0ee4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d0ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d0ee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d0ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d0eec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0ef4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D0EF4u;
    {
        const bool branch_taken_0x1d0ef4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EF4u;
        // 0x1d0ef8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ef4) {
            ctx->pc = 0x1D0F58u;
            goto label_1d0f58;
        }
    }
    ctx->pc = 0x1D0EFCu;
    // 0x1d0efc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d0efcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d0f00: 0xc06c994  jal         func_1B2650
    ctx->pc = 0x1D0F00u;
    SET_GPR_U32(ctx, 31, 0x1D0F08u);
    ctx->pc = 0x1D0F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0F00u;
    // 0x1d0f04: 0x24a50b50  addiu       $a1, $a1, 0xB50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1D0F00u, 0x1D0F08u)) {
        return;
    }
    ctx->pc = 0x1D0F08u;
label_1d0f08:
    // 0x1d0f08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0F08u;
    {
        const bool branch_taken_0x1d0f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F08u;
        // 0x1d0f0c: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f08) {
            ctx->pc = 0x1D0F20u;
            goto label_1d0f20;
        }
    }
    ctx->pc = 0x1D0F10u;
    // 0x1d0f10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0f14: 0x24c60f78  addiu       $a2, $a2, 0xF78
    ctx->pc = 0x1d0f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3960));
    // 0x1d0f18: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1D0F18u;
    SET_GPR_U32(ctx, 31, 0x1D0F20u);
    ctx->pc = 0x1D0F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0F18u;
    // 0x1d0f1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1D0F18u, 0x1D0F20u)) {
        return;
    }
    ctx->pc = 0x1D0F20u;
label_1d0f20:
    // 0x1d0f20: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d0f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d0f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0f28: 0xc06c994  jal         func_1B2650
    ctx->pc = 0x1D0F28u;
    SET_GPR_U32(ctx, 31, 0x1D0F30u);
    ctx->pc = 0x1D0F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0F28u;
    // 0x1d0f2c: 0x24a50b70  addiu       $a1, $a1, 0xB70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1D0F28u, 0x1D0F30u)) {
        return;
    }
    ctx->pc = 0x1D0F30u;
label_1d0f30:
    // 0x1d0f30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0f34: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d0f38: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0F38u;
    {
        const bool branch_taken_0x1d0f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F38u;
        // 0x1d0f3c: 0xac449a34  sw          $a0, -0x65CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294941236), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f38) {
            ctx->pc = 0x1D0F5Cu;
            goto label_1d0f5c;
        }
    }
    ctx->pc = 0x1D0F40u;
    // 0x1d0f40: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1d0f40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1d0f44: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d0f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d0f48: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1D0F48u;
    SET_GPR_U32(ctx, 31, 0x1D0F50u);
    ctx->pc = 0x1D0F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0F48u;
    // 0x1d0f4c: 0x24c60fe0  addiu       $a2, $a2, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1D0F48u, 0x1D0F50u)) {
        return;
    }
    ctx->pc = 0x1D0F50u;
label_1d0f50:
    // 0x1d0f50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0F50u;
    {
        const bool branch_taken_0x1d0f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F50u;
        // 0x1d0f54: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f50) {
            ctx->pc = 0x1D0F60u;
            goto label_1d0f60;
        }
    }
    ctx->pc = 0x1D0F58u;
label_1d0f58:
    // 0x1d0f58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d0f58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0f5c:
    // 0x1d0f5c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d0f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d0f60:
    // 0x1d0f60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d0f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0f64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d0f64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F6Cu;
        // 0x1d0f70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0F74u;
    // 0x1d0f74: 0x0  nop
    ctx->pc = 0x1d0f74u;
    // NOP
    ctx->pc = 0x1d0f78u;
}
